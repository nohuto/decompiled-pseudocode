/*
 * XREFs of ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@WRL@Microsoft@@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@012@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x1800CF5CC
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CECD0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierGestureTarget,IInputTarget,Microsoft::WRL::ComPtr<BamoMagnifierClientProxy> &,enum MagnifierGestureTarget::GestureType &>(
        __int64 *a1,
        __int64 *a2,
        int *a3)
{
  __int64 v5; // rcx
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // edi
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // ebp

  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *a1 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v10 = Microsoft::WRL::Details::ModuleBase::module_;
    v7[3] = 1;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>::`vftable';
    if ( v10 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
    *(_QWORD *)v8 = &MagnifierGestureTarget::`vftable';
    *((_QWORD *)v8 + 2) = 0LL;
    v8[6] = 0;
    v8[8] = 0;
    *((_BYTE *)v8 + 28) = 0;
    v11 = *a2;
    if ( v11 )
      (**(void (__fastcall ***)(__int64))v11)(v11);
    v12 = *((_QWORD *)v8 + 2);
    v13 = *a3;
    if ( v12 != v11 )
    {
      if ( v11 )
      {
        (**(void (__fastcall ***)(__int64))v11)(v11);
        v12 = *((_QWORD *)v8 + 2);
      }
      *((_QWORD *)v8 + 2) = v11;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    }
    v8[6] = v13;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v9 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, __int64 *))v8)(
           v8,
           &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
           a1);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v9;
}
