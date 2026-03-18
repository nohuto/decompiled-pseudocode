/*
 * XREFs of ??$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXPEAU1@@Z@Z @ 0x1C00CF014
 * Callers:
 *     ?TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00CDE60 (-TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXPEAU1@@Z@Z @ 0x1C00CF014 (--$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXP.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z @ 0x1C01FB0C0 (-UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0072A2C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXPEAU1@@Z@Z @ 0x1C00CF014 (--$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXP.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C02224BC (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
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
