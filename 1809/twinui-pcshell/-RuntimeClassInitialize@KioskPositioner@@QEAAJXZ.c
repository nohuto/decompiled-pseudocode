/*
 * XREFs of ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x180099B98
 * Callers:
 *     ??$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180095EC0 (--$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ @ 0x180098D14 (-LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x180137AA0 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall KioskPositioner::RuntimeClassInitialize(KioskPositioner *this)
{
  CImmersiveShellComponent *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (KioskPositioner *)((char *)this + 40);
  try
  {
    v3 = CImmersiveShellComponent::RegisterServiceInformation(v2, &GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986);
    v4 = v3;
    if ( v3 >= 0 )
    {
      KioskPositioner::LoadShellLauncherConfiguration(this);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x210,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v3);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x214,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v5);
  }
  return result;
}
