/*
 * XREFs of ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180044C9C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___::Run @ 0x180044E00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___--Run.c)
 * Callees:
 *     ?GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x180040A6C (-GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHST.c)
 *     ??$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180040BEC (--$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA-AV-$com_.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180079934 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LoadDataFromStateRepository(const unsigned __int16 *a1, HSTRING *a2)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, _QWORD, PVOID, struct Windows::Internal::StateRepository::IApplication **); // r14
  HSTRING_HEADER *v5; // rsi
  int v6; // eax
  int LocalizedDisplayNameForApp; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-78h]
  _BYTE v14[8]; // [rsp+30h] [rbp-68h] BYREF
  struct Windows::Internal::StateRepository::IApplication *v15; // [rsp+38h] [rbp-60h] BYREF
  const WCHAR *v16; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17[2]; // [rsp+48h] [rbp-50h] BYREF
  HSTRING_HEADER v18; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v17[1] = -2LL;
  try
  {
    v16 = a1;
    wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationStatics>(v17);
    v15 = 0LL;
    v3 = v17[0];
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD, PVOID, struct Windows::Internal::StateRepository::IApplication **))(*(_QWORD *)v17[0] + 240LL);
    v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, &v16);
    v15 = 0LL;
    v6 = v4(v3, 0LL, v5[1].Reserved.Reserved1, &v15);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6F,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6,
        v13);
    }
    else
    {
      WindowsDeleteString(*a2);
      *a2 = 0LL;
      LocalizedDisplayNameForApp = GetLocalizedDisplayNameForApp(v15, a2);
      v8 = retaddr;
      if ( LocalizedDisplayNameForApp >= 0 )
      {
LABEL_4:
        v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *, _BYTE *))(*(_QWORD *)v15 + 160LL))(
               v15,
               v14);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x78,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v9,
            v13);
        else
          *((_BYTE *)a2 + 26) = v14[0] != 0;
        if ( v15 )
          (*(void (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *))(*(_QWORD *)v15 + 16LL))(v15);
        if ( v17[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
        return 0LL;
      }
    }
    wil::details::in1diag3::_Log_Hr(
      v8,
      (void *)0x71,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)LocalizedDisplayNameForApp,
      v13);
    v12 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(a2);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x74,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v12,
        v13);
    goto LABEL_4;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7F,
                           (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v10);
  }
  return result;
}
