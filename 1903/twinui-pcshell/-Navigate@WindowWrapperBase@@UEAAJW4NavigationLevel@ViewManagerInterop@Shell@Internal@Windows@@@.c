/*
 * XREFs of ?Navigate@WindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800627A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::Navigate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // r15d
  HRESULT ApartmentType; // eax
  unsigned int v4; // esi
  _DWORD *v5; // rdi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _DWORD *v8; // r14
  int v9; // ebx
  const char *v10; // r9
  __int64 result; // rax
  __int128 v12; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v14; // [rsp+80h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+10h] BYREF
  APTTYPE pAptType; // [rsp+90h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+98h] [rbp+20h] BYREF

  v15 = a2;
  *(_QWORD *)&v12 = &v15;
  *((_QWORD *)&v12 + 1) = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  try
  {
    if ( ApartmentType < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
      v4 = 0;
    else
      v4 = 4;
    v14 = 0;
    v5 = 0LL;
    v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    v8 = 0LL;
    if ( v6 )
    {
      v6[3] = 1;
      *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_OWORD *)v7 + 1) = v12;
      *(_QWORD *)v7 = off_18042A340;
      *((_QWORD *)v7 + 4) = &v14;
      v5 = v7;
      v8 = v7;
    }
    v9 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId, 0LL, v5, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v9 >= 0 )
      v9 = v14;
    result = (unsigned int)v9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x362,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v10);
  }
  return result;
}
