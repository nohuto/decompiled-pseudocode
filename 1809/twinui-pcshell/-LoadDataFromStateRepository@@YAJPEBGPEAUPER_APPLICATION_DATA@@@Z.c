/*
 * XREFs of ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18006BA90
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___::Run @ 0x18006BA70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___--Run.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180029070 (--$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA-AV-$com_.c)
 *     ?GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x1800291D8 (-GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHST.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180070208 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LoadDataFromStateRepository(const unsigned __int16 *a1, HSTRING *a2)
{
  __int64 v3; // rdi
  HSTRING_HEADER *v4; // rsi
  int v5; // eax
  int LocalizedDisplayNameForApp; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-68h]
  _BYTE v13[8]; // [rsp+30h] [rbp-58h] BYREF
  struct Windows::Internal::StateRepository::IApplication *v14; // [rsp+38h] [rbp-50h] BYREF
  const WCHAR *v15; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-40h] BYREF
  HSTRING_HEADER v17; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v16[1] = -2LL;
  try
  {
    v15 = a1;
    wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationStatics>((const WCHAR *)v16);
    v3 = v16[0];
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v15);
    v14 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, PVOID, struct Windows::Internal::StateRepository::IApplication **))(*(_QWORD *)v3 + 240LL))(
           v3,
           0LL,
           v4[1].Reserved.Reserved1,
           &v14);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x69,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v5,
        v12);
    }
    else
    {
      WindowsDeleteString(*a2);
      *a2 = 0LL;
      LocalizedDisplayNameForApp = GetLocalizedDisplayNameForApp(v14, a2);
      v7 = retaddr;
      if ( LocalizedDisplayNameForApp >= 0 )
      {
LABEL_4:
        v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *, _BYTE *))(*(_QWORD *)v14 + 160LL))(
               v14,
               v13);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x72,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v8,
            v12);
        else
          *((_BYTE *)a2 + 26) = v13[0] != 0;
        if ( v14 )
          (*(void (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *))(*(_QWORD *)v14 + 16LL))(v14);
        if ( v16[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
        return 0LL;
      }
    }
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)0x6B,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)LocalizedDisplayNameForApp,
      v12);
    v11 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(a2);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6E,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v11,
        v12);
    goto LABEL_4;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x79,
                           (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v9);
  }
  return result;
}
