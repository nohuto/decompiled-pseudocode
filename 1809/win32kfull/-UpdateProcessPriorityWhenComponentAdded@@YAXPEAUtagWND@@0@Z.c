/*
 * XREFs of ?UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z @ 0x1C0008D6C
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0008CB8 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     SetForegroundPriority @ 0x1C00CF050 (SetForegroundPriority.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C015C07C (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

void __fastcall UpdateProcessPriorityWhenComponentAdded(struct tagWND *a1, struct tagWND *a2)
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_MultiprocessBoost__private_propertyCache,
    14650201,
    (unsigned int)&unk_1C02C86B0,
    1);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 820LL) & 0x30000) != 0 )
    SetForegroundPriority(*((_QWORD *)a2 + 2), 1LL);
}
