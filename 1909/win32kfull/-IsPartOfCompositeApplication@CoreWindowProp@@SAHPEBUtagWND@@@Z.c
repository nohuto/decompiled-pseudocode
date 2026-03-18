/*
 * XREFs of ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C012FCE0
 * Callers:
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z @ 0x1C012FC38 (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0136CA8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C0137850 (NtUserSetForegroundWindowForApplication.c)
 * Callees:
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C001A39C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0027DC4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C012FA58 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsPartOfCompositeApplication(const struct tagWND *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
  {
    LOBYTE(v1) = CoreWindowProp::GetTopLevelHost(a1) != 0LL;
    return v1;
  }
  else
  {
    return (unsigned int)CoreWindowProp::IsHost(a1) != 0;
  }
}
