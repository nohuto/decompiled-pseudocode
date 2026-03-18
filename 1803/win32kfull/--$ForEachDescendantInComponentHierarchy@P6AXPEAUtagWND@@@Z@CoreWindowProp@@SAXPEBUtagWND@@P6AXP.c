/*
 * XREFs of ??$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXPEAU1@@Z@Z @ 0x1C005FCF0
 * Callers:
 *     ?TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C005E690 (-TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXPEAU1@@Z@Z @ 0x1C005FCF0 (--$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXP.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z @ 0x1C01D6440 (-UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXPEAU1@@Z@Z @ 0x1C005FCF0 (--$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXP.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006FE5C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C01F9DC4 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 */

void __fastcall CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND *)>(
        const struct tagWND *a1,
        void (__fastcall *a2)(struct tagWND *))
{
  const struct tagWND *i; // rdx
  struct tagWND *NextComponentWindow; // rax
  struct tagWND *v6; // rdi

  if ( a1 && (unsigned int)CoreWindowProp::IsHost(a1) )
  {
    for ( i = 0LL; ; i = v6 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, i);
      v6 = NextComponentWindow;
      if ( !NextComponentWindow )
        break;
      a2(NextComponentWindow);
      CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND *)>(v6, a2);
    }
  }
}
