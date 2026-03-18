/*
 * XREFs of ?UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z @ 0x1C00CEE18
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00CECE8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CDF9C (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00CEEB0 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CEF04 (-GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     SetForegroundPriority @ 0x1C00CF050 (SetForegroundPriority.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C015C07C (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

void __fastcall UpdateProcessPriorityWhenEnableStateIsChanging(struct tagWND *a1, int a2)
{
  const struct tagWND *NearestCoreWindowAncestor; // rdi
  struct tagWND *TopLevelHost; // rax
  __int64 v6; // rdx

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_MultiprocessBoost__private_propertyCache,
    14650201,
    (unsigned int)&unk_1C02C86B0,
    1);
  NearestCoreWindowAncestor = CoreWindowProp::GetNearestCoreWindowAncestor(a1);
  if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(NearestCoreWindowAncestor) )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(NearestCoreWindowAncestor);
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)TopLevelHost + 2) + 424LL) + 820LL) & 0x30000) == 0 )
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
