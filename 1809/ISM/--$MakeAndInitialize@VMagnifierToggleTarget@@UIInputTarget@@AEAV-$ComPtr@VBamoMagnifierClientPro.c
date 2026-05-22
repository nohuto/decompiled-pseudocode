/*
 * XREFs of ??$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@012@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@12@@Z @ 0x1800CF494
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CECD0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierToggleTarget,IInputTarget,Microsoft::WRL::ComPtr<BamoMagnifierClientProxy> &>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a1 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v8 = Microsoft::WRL::Details::ModuleBase::module_;
    v5[3] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>::`vftable';
    if ( v8 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v8 + 8LL))(v8);
    *(_QWORD *)v6 = &MagnifierToggleTarget::`vftable';
    *((_QWORD *)v6 + 2) = 0LL;
    *((_BYTE *)v6 + 24) = 0;
    v9 = *a2;
    if ( v9 )
      (**(void (__fastcall ***)(__int64))v9)(v9);
    v10 = *((_QWORD *)v6 + 2);
    if ( v10 != v9 )
    {
      if ( v9 )
      {
        (**(void (__fastcall ***)(__int64))v9)(v9);
        v10 = *((_QWORD *)v6 + 2);
      }
      *((_QWORD *)v6 + 2) = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v7 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, __int64 *))v6)(
           v6,
           &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
           a1);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
