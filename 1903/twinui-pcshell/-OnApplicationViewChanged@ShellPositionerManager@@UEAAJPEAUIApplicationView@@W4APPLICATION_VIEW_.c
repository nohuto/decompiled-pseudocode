/*
 * XREFs of ?OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180047370
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180047394 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 */

__int64 __fastcall ShellPositionerManager::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  if ( !a3 )
    ShellPositionerManager::GetPositionerPriorityForView((ShellPositionerManager *)(a1 - 96), a2, 0LL);
  return 0LL;
}
