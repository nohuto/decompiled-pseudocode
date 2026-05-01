/*
 * XREFs of ?GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x180040A6C
 * Callers:
 *     ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180044C9C (-LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 * Callees:
 *     ??$GetActivationFactory@UIApplicationResourceResolverStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationResourceResolverStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180040B38 (--$GetActivationFactory@UIApplicationResourceResolverStatics@StateRepository@Internal@Windows@@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall GetLocalizedDisplayNameForApp(
        struct Windows::Internal::StateRepository::IApplication *a1,
        HSTRING *a2)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v12; // [rsp+50h] [rbp+18h] BYREF

  v9 = -2;
  *a2 = 0LL;
  wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationResourceResolverStatics>(&v12);
  v11 = 0LL;
  v4 = *v12;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::StateRepository::IApplication *, __int64 *))(v4 + 48))(
         v12,
         a1,
         &v11);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v5,
      -2);
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 48LL))(v11, a2);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x58,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v6,
      v9);
    __debugbreak();
    JUMPOUT(0x1800FF365LL);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  return 0LL;
}
