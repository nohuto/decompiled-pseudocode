/*
 * XREFs of ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C010EAD0
 * Callers:
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C010EAD0 (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C012F900 (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0211904 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C001A39C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C010EAD0 (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 *     _anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper @ 0x1C02118E0 (_anonymous_namespace_--TransitionForegroundPriority_DeBoostWindowHelper.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C023A574 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 */

void __fastcall CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND const *)>(struct tagWND *a1)
{
  const struct tagWND *i; // rdx
  struct tagWND *NextComponentWindow; // rax
  struct tagWND *v4; // rdi

  if ( a1 && (unsigned int)CoreWindowProp::IsHost(a1) )
  {
    for ( i = 0LL; ; i = v4 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, i);
      v4 = NextComponentWindow;
      if ( !NextComponentWindow )
        break;
      anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper(NextComponentWindow);
      CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND const *)>(v4);
    }
  }
}
