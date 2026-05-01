/*
 * XREFs of ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x1802645CC
 * Callers:
 *     ?IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x180264A60 (-IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@App.c)
 *     ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x180264BE0 (-IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@Applicat.c)
 *     ?get_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJPEAE@Z @ 0x180265170 (-get_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJPEAE@Z.c)
 *     ?put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z @ 0x180265250 (-put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x180426580 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 */

__int64 __fastcall TabAppPolicySettings::GetCallerAppId(unsigned __int16 **a1, unsigned __int16 **a2)
{
  int CallingProcessAppId; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((CallerIdentity *)a1, a2);
  if ( CallingProcessAppId == -2147023728 )
    CallingProcessAppId = -2147009196;
  if ( CallingProcessAppId < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)CallingProcessAppId);
  return (unsigned int)CallingProcessAppId;
}
