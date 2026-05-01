/*
 * XREFs of ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180188A4C
 * Callers:
 *     _lambda_d65b95255a9e4943d1141964e99c1740_::_lambda_invoker_cdecl_ @ 0x180183E10 (_lambda_d65b95255a9e4943d1141964e99c1740_--_lambda_invoker_cdecl_.c)
 *     _lambda_d4c08062b01d0585ab3c1425aeed4b9b_::operator() @ 0x1801850E8 (_lambda_d4c08062b01d0585ab3c1425aeed4b9b_--operator().c)
 *     ?CriticalNotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180185870 (-CriticalNotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KP.c)
 *     ?DisplayContextChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180185960 (-DisplayContextChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 *     ?NotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180186B30 (-NotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_.c)
 *     ?ShellReadyCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180189B10 (-ShellReadyCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x18041312C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::PostTargetedMessage(
        struct IUnknown *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ExperienceManagerUtils::PostToUIThread(0LL, a1, (void *)a2, a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
