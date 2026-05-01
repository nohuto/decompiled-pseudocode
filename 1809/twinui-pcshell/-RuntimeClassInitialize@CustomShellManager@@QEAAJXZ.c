/*
 * XREFs of ?RuntimeClassInitialize@CustomShellManager@@QEAAJXZ @ 0x18008C778
 * Callers:
 *     ??$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18008C010 (--$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x180137AA0 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CustomShellManager::RuntimeClassInitialize(CustomShellManager *this)
{
  CImmersiveShellComponent *v1; // rcx
  int v2; // eax
  const char *v3; // r9
  unsigned int v4; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (CustomShellManager *)((char *)this + 40);
  try
  {
    v2 = CImmersiveShellComponent::RegisterServiceInformation(v1, &IID_ICustomShellManager);
    v4 = v2;
    if ( v2 >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
        (const char *)(unsigned int)v2);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x42,
                           (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
                           v3);
  }
  return result;
}
