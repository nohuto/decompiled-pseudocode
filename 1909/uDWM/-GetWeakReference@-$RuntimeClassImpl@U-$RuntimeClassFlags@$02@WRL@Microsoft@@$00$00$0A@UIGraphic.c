/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800B9F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@WPF@@YAPEAXPEAVHeapBase@1@_J_K@Z @ 0x18004F5A0 (-Alloc@WPF@@YAPEAXPEAVHeapBase@1@_J_K@Z.c)
 *     ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x1800B9C3C (--0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800B9D90 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B9DE0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800BA078 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakRefe.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::GetWeakReference(
        volatile signed __int64 *a1,
        struct WPF::HeapBase *a2)
{
  __int64 v2; // rax
  signed __int64 v4; // rbx
  __int64 v6; // r10
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v9; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v10; // r8
  unsigned __int64 v11; // rdx
  bool i; // zf
  signed __int64 v13; // rax
  signed __int64 v14; // rbx

  v2 = *((_QWORD *)a1 + 5);
  *(_QWORD *)a2 = 0LL;
  v4 = v2;
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::InternalAddRef(2 * v2);
    *(_QWORD *)a2 = v6;
    return 0LL;
  }
  v8 = (Microsoft::WRL::Details::WeakReferenceImpl *)WPF::Alloc((WPF *)a1, a2, 32LL);
  if ( v8 )
  {
    v9 = Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(v8, (struct IUnknown *)a1 - 1);
    v10 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 4) = v4;
      v11 = ((__int64)v9 >> 1) | 0x8000000000000000uLL;
      v13 = _InterlockedCompareExchange64(a1 + 5, v11, v4);
      for ( i = v4 == v13; ; i = v13 == v14 )
      {
        v14 = v13;
        if ( i )
        {
          *(_QWORD *)a2 = v10;
          return 0LL;
        }
        if ( v13 < 0 )
          break;
        *((_DWORD *)v10 + 4) = v13;
        v13 = _InterlockedCompareExchange64(a1 + 5, v11, v13);
      }
      Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v10, 1);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::AddRef();
      *(_QWORD *)a2 = 2 * v14;
      return 0LL;
    }
  }
  return 2147942414LL;
}
