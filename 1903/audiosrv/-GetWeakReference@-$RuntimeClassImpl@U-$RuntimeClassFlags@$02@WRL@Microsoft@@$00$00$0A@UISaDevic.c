/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18003CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18003CFA0 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ISaDeviceProxy,IInspectable>::GetWeakReference(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  signed __int64 v5; // r14
  _DWORD *v6; // rax
  __int64 v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  unsigned __int64 v9; // rdx
  bool v10; // zf
  signed __int64 v11; // rax
  signed __int64 v12; // r14
  signed __int64 v14; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  v5 = v2;
  if ( v2 < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 12));
    *a2 = 2 * v2;
    return 0LL;
  }
  else
  {
    v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = (__int64)v6;
    if ( v6 )
    {
      v8 = Microsoft::WRL::Details::ModuleBase::module_;
      v6[3] = 1;
      *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference>::`vftable';
      if ( v8 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v8 + 8LL))(v8);
      *(_DWORD *)(v7 + 16) = 0x3FFFFFFF;
      *(_QWORD *)v7 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
      *(_QWORD *)(v7 + 24) = a1 - 16;
      v9 = (v7 >> 1) | 0x8000000000000000uLL;
      *(_DWORD *)(v7 + 12) = 2;
      *(_DWORD *)(v7 + 16) = v5;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v9, v5);
      v10 = v5 == v11;
      v12 = v11;
      if ( v10 )
      {
LABEL_6:
        *a2 = v7;
        return 0LL;
      }
      else
      {
        while ( v12 >= 0 )
        {
          v14 = v12;
          *(_DWORD *)(v7 + 16) = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v9, v12);
          if ( v12 == v14 )
            goto LABEL_6;
        }
        Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
          (Microsoft::WRL::Details::WeakReferenceImpl *)v7,
          1u);
        _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 12));
        *a2 = 2 * v12;
        return 0LL;
      }
    }
    else
    {
      return 2147942414LL;
    }
  }
}
