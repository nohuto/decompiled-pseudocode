/*
 * XREFs of ?RuntimeClassInitialize@CustomShellManager@@QEAAJXZ @ 0x1801818B8
 * Callers:
 *     ??$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801811D0 (--$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801354D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall CustomShellManager::RuntimeClassInitialize(CustomShellManager *this)
{
  int v1; // eax
  const char *v2; // r9
  unsigned int v3; // ebx
  __int64 result; // rax
  GUID v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v5 = IID_ICustomShellManager;
    v6 = 0LL;
    v7 = 0LL;
    v1 = CImmersiveShellComponent::RegisterServiceInformation(
           (CustomShellManager *)((char *)this + 40),
           (const struct CImmersiveShellComponent::ISC_SERVICE *)&v5,
           1LL);
    v3 = v1;
    if ( v1 >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
        (const char *)(unsigned int)v1);
      result = v3;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3A,
                           (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
                           v2);
  }
  return result;
}
