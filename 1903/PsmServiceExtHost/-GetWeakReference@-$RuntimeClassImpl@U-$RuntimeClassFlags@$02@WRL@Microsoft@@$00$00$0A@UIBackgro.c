/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBackgroundAccessStateChangeHandler@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18007A720
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180048EB0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x18007A32C (--0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18007A3D0 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>::GetWeakReference(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  signed __int64 v4; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v7; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v9; // rdx
  unsigned __int64 v10; // r8
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rbx
  __int64 v14; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v15; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  v4 = v2;
  if ( v2 < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 12));
    *a2 = 2 * v2;
    return 0LL;
  }
  v7 = (Microsoft::WRL::Details::WeakReferenceImpl *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(v7, (struct IUnknown *)(a1 - 16));
    v15 = v8;
    v9 = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 4) = v4;
      v10 = ((__int64)v8 >> 1) | 0x8000000000000000uLL;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v4);
      for ( i = v4 == v12; ; i = v12 == v13 )
      {
        v13 = v12;
        if ( i )
        {
          v14 = (__int64)v15;
          goto LABEL_11;
        }
        if ( v12 < 0 )
          break;
        *((_DWORD *)v9 + 4) = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v12);
      }
      Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v15, 1);
      v14 = 2 * v13;
      _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 12));
LABEL_11:
      *a2 = v14;
      return 0LL;
    }
  }
  return 2147942414LL;
}
