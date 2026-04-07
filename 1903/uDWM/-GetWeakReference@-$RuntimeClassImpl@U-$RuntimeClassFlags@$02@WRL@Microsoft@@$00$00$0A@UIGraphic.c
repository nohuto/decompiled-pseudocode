/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800BA310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x1800B9F9C (--0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800BA0F0 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::GetWeakReference(
        __int64 a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  __int64 v2; // rax
  signed __int64 v4; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v7; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v9; // r8
  unsigned __int64 v10; // rdx
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rbx

  v2 = *(_QWORD *)(a1 + 40);
  *a2 = 0LL;
  v4 = v2;
  if ( v2 < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 12));
    *a2 = (Microsoft::WRL::Details::WeakReferenceImpl *)(2 * v2);
    return 0LL;
  }
  v7 = (Microsoft::WRL::Details::WeakReferenceImpl *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                       WPF::g_pProcessHeap,
                                                       32LL);
  if ( v7 )
  {
    v8 = Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(v7, (struct IUnknown *)(a1 - 8));
    v9 = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 4) = v4;
      v10 = ((__int64)v8 >> 1) | 0x8000000000000000uLL;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v10, v4);
      for ( i = v4 == v12; ; i = v12 == v13 )
      {
        v13 = v12;
        if ( i )
        {
          *a2 = v9;
          return 0LL;
        }
        if ( v12 < 0 )
          break;
        *((_DWORD *)v9 + 4) = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v10, v12);
      }
      Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v9, 1);
      _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 12));
      *a2 = (Microsoft::WRL::Details::WeakReferenceImpl *)(2 * v13);
      return 0LL;
    }
  }
  return 2147942414LL;
}
