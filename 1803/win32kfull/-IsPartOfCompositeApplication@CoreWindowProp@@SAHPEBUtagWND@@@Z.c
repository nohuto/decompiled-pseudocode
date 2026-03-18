/*
 * XREFs of ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C005FB94
 * Callers:
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z @ 0x1C005F668 (-UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C005E7C0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006FE5C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsPartOfCompositeApplication(const struct tagWND *a1)
{
  unsigned int v1; // ebx
  bool v4; // zf

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
    v4 = CoreWindowProp::GetTopLevelHost(a1) == 0LL;
  else
    v4 = (unsigned int)CoreWindowProp::IsHost(a1) == 0;
  LOBYTE(v1) = !v4;
  return v1;
}
