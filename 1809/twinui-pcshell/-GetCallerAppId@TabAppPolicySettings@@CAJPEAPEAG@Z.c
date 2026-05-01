/*
 * XREFs of ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x1801F3BD4
 * Callers:
 *     ?IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1801F4060 (-IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@App.c)
 *     ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1801F4190 (-IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@Applicat.c)
 *     ?get_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJPEAE@Z @ 0x1801F4730 (-get_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJPEAE@Z.c)
 *     ?put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z @ 0x1801F4810 (-put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x18004CAF4 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 */

__int64 __fastcall TabAppPolicySettings::GetCallerAppId(unsigned int **a1, unsigned __int16 **a2)
{
  int CallingProcessAppId; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId(a1, a2);
  if ( CallingProcessAppId == -2147023728 )
    CallingProcessAppId = -2147009196;
  if ( CallingProcessAppId < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)CallingProcessAppId);
  return (unsigned int)CallingProcessAppId;
}
