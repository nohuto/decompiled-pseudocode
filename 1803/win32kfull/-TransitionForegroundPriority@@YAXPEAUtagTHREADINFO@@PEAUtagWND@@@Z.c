/*
 * XREFs of ?TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C005E690
 * Callers:
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C005F010 (xxxSetForegroundThreadWithWindowHint.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C005E7C0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C005FBE0 (-GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXPEAU1@@Z@Z @ 0x1C005FCF0 (--$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXP.c)
 *     SetForegroundPriority @ 0x1C005FD30 (SetForegroundPriority.c)
 *     ?TransitionForegroundPriority_BoostWindowHelper@@YAXPEAUtagWND@@@Z @ 0x1C00624B0 (-TransitionForegroundPriority_BoostWindowHelper@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall TransitionForegroundPriority(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  const struct tagWND *NearestCoreWindowAncestor; // rax
  struct tagWND *TopLevelHost; // r14
  const struct tagWND *v6; // rax
  struct tagWND *v7; // rbp
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  NearestCoreWindowAncestor = CoreWindowProp::GetNearestCoreWindowAncestor(a2);
  TopLevelHost = CoreWindowProp::GetTopLevelHost(NearestCoreWindowAncestor);
  v6 = CoreWindowProp::GetNearestCoreWindowAncestor(qword_1C032ACC8);
  v7 = CoreWindowProp::GetTopLevelHost(v6);
  if ( TopLevelHost != v7 )
    goto LABEL_6;
  if ( TopLevelHost )
    goto LABEL_13;
  if ( !a1 )
  {
LABEL_6:
    if ( gptiForeground )
      SetForegroundPriority(gptiForeground, 0LL);
    goto LABEL_8;
  }
  if ( gptiForeground )
  {
    if ( *((_QWORD *)a1 + 52) == *(_QWORD *)(gptiForeground + 416LL) )
      goto LABEL_13;
    goto LABEL_6;
  }
LABEL_8:
  if ( v7 )
    SetForegroundPriority(*((_QWORD *)v7 + 2), 0LL);
  CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND *)>(
    v7,
    TransitionForegroundPriority_DeBoostWindowHelper);
  if ( a1 )
    SetForegroundPriority(a1, 1LL);
  TransitionForegroundPriority_BoostWindowHelper(TopLevelHost);
  CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND *)>(
    TopLevelHost,
    TransitionForegroundPriority_BoostWindowHelper);
LABEL_13:
  if ( qword_1C032ACC8 != a2 )
  {
    if ( qword_1C032ACC8 )
      HMAssignmentUnlock(&qword_1C032ACC8);
    if ( a2 )
    {
      v8[0] = &qword_1C032ACC8;
      v8[1] = a2;
      HMAssignmentLock(v8);
    }
  }
}
