/*
 * XREFs of ?UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z @ 0x1C0007D80
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0007DE4 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C005F920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     SetForegroundPriority @ 0x1C005FD30 (SetForegroundPriority.c)
 */

void __fastcall UpdateProcessPriorityWhenComponentAdded(struct tagWND *a1, struct tagWND *a2)
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_MultiprocessBoost__private_propertyCache,
    14650201LL,
    &unk_1C02D6BAC,
    1LL);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 812LL) & 0x30000) != 0 )
    SetForegroundPriority(*((_QWORD *)a2 + 2), 1LL);
}
