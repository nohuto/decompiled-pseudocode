/*
 * XREFs of ?UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z @ 0x1C005F668
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C005F53C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C005E7C0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C005F920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C005FB94 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C005FBE0 (-GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     SetForegroundPriority @ 0x1C005FD30 (SetForegroundPriority.c)
 */

void __fastcall UpdateProcessPriorityWhenEnableStateIsChanging(struct tagWND *a1, int a2)
{
  const struct tagWND *NearestCoreWindowAncestor; // rdi
  struct tagWND *TopLevelHost; // rax
  __int64 v6; // rdx

  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_MultiprocessBoost__private_propertyCache,
    14650201LL,
    &unk_1C02D6BAC,
    1LL);
  NearestCoreWindowAncestor = CoreWindowProp::GetNearestCoreWindowAncestor(a1);
  if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(NearestCoreWindowAncestor) )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(NearestCoreWindowAncestor);
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)TopLevelHost + 2) + 416LL) + 812LL) & 0x30000) == 0 )
        return;
      v6 = 1LL;
    }
    else
    {
      v6 = 0LL;
    }
    SetForegroundPriority(*((_QWORD *)a1 + 2), v6);
  }
}
