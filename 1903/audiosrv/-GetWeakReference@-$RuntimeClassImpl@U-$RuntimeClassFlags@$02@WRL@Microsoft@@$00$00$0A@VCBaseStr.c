/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18003CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18003CFA0 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::GetWeakReference(
        __int64 a1,
        __int64 *a2)
{
  signed __int64 v3; // rsi
  _DWORD *v5; // rax
  __int64 v6; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  unsigned __int64 v8; // rdx
  bool v9; // zf
  signed __int64 v10; // rax
  signed __int64 v11; // rsi
  signed __int64 v13; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  if ( v3 < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(2 * v3 + 12));
    *a2 = 2 * v3;
    return 0LL;
  }
  else
  {
    v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = (__int64)v5;
    if ( v5 )
    {
      v7 = Microsoft::WRL::Details::ModuleBase::module_;
      v5[3] = 1;
      *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference>::`vftable';
      if ( v7 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
      *(_DWORD *)(v6 + 16) = 0x3FFFFFFF;
      *(_QWORD *)v6 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
      *(_QWORD *)(v6 + 24) = a1 - 248;
      v8 = (v6 >> 1) | 0x8000000000000000uLL;
      *(_DWORD *)(v6 + 12) = 2;
      *(_DWORD *)(v6 + 16) = v3;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v8, v3);
      v9 = v3 == v10;
      v11 = v10;
      if ( v9 )
      {
LABEL_6:
        *a2 = v6;
        return 0LL;
      }
      else
      {
        while ( v11 >= 0 )
        {
          v13 = v11;
          *(_DWORD *)(v6 + 16) = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v8, v11);
          if ( v11 == v13 )
            goto LABEL_6;
        }
        Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
          (Microsoft::WRL::Details::WeakReferenceImpl *)v6,
          1u);
        _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 12));
        *a2 = 2 * v11;
        return 0LL;
      }
    }
    else
    {
      return 2147942414LL;
    }
  }
}
