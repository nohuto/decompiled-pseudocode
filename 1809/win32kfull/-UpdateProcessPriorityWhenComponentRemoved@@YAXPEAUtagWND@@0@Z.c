/*
 * XREFs of ?UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z @ 0x1C01FB0C0
 * Callers:
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C0222548 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CDF9C (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXPEAU1@@Z@Z @ 0x1C00CF014 (--$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXP.c)
 *     SetForegroundPriority @ 0x1C00CF050 (SetForegroundPriority.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C015C07C (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

void __fastcall UpdateProcessPriorityWhenComponentRemoved(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v4; // rcx
  struct tagWND *TopLevelHost; // rax
  const struct tagWND *v6; // rbx
  int v7; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_MultiprocessBoost__private_propertyCache,
    0xDF8B59u,
    (__int64)&unk_1C02C86B0,
    1u,
    v7);
  v4 = *((_QWORD *)a2 + 2);
  if ( v4 == gptiForeground )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(a1);
    v6 = TopLevelHost;
    if ( TopLevelHost )
      SetForegroundPriority(*((_QWORD *)TopLevelHost + 2), 0);
    CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND *)>(
      v6,
      TransitionForegroundPriority_DeBoostWindowHelper);
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 820LL) & 0x30000) != 0 )
  {
    SetForegroundPriority(v4, 0);
  }
}
