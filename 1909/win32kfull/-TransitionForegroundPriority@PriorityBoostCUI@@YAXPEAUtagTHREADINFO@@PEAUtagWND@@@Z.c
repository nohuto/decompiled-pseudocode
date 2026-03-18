/*
 * XREFs of ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C012F900
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0132EE8 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C010EAD0 (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C010EB00 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C012FA58 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C012FD34 (-GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C012FD70 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C012FDA8 (_anonymous_namespace_--RequestPriorityUpdate.c)
 */

void __fastcall PriorityBoostCUI::TransitionForegroundPriority(
        PriorityBoostCUI *this,
        struct tagTHREADINFO *a2,
        struct tagWND *a3)
{
  const struct tagWND *NearestCoreWindowAncestor; // rax
  struct tagWND *TopLevelHost; // rbx
  const struct tagWND *v7; // rax
  struct tagWND *v8; // r14
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  NearestCoreWindowAncestor = CoreWindowProp::GetNearestCoreWindowAncestor(a2);
  TopLevelHost = CoreWindowProp::GetTopLevelHost(NearestCoreWindowAncestor);
  v7 = CoreWindowProp::GetNearestCoreWindowAncestor(qword_1C032BE80);
  v8 = CoreWindowProp::GetTopLevelHost(v7);
  if ( TopLevelHost != v8
    || !TopLevelHost && (!this || !gptiForeground || *((_QWORD *)this + 52) != *(_QWORD *)(gptiForeground + 416LL)) )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v10, (struct _EX_PUSH_LOCK *)&`anonymous namespace'::boostLock);
    if ( gptiForeground )
      anonymous_namespace_::RequestPriorityUpdate(gptiForeground, 1LL);
    if ( v8 )
      anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)v8 + 2), 1LL);
    CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND const *)>(v8);
    if ( this )
      anonymous_namespace_::RequestPriorityUpdate(this, 0LL);
    if ( TopLevelHost && (*(_BYTE *)(*((_QWORD *)TopLevelHost + 5) + 31LL) & 8) == 0 )
      anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)TopLevelHost + 2), 0LL);
    CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___(TopLevelHost);
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( qword_1C032BE80 != a2 )
  {
    if ( qword_1C032BE80 )
      HMAssignmentUnlock(&qword_1C032BE80);
    if ( a2 )
    {
      v9[0] = &qword_1C032BE80;
      v9[1] = a2;
      HMAssignmentLock(v9);
    }
  }
}
