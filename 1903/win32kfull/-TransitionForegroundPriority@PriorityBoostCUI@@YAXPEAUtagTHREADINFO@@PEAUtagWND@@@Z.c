/*
 * XREFs of ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0016590
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0014388 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00166E8 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00169C4 (-GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0016A00 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C0016A38 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C0016F0C (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C0016F40 (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
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
  __int64 v9; // rdx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  NearestCoreWindowAncestor = CoreWindowProp::GetNearestCoreWindowAncestor(a2);
  TopLevelHost = CoreWindowProp::GetTopLevelHost(NearestCoreWindowAncestor);
  v7 = CoreWindowProp::GetNearestCoreWindowAncestor(qword_1C032DE90);
  v8 = CoreWindowProp::GetTopLevelHost(v7);
  if ( TopLevelHost != v8
    || !TopLevelHost && (!this || !gptiForeground || *((_QWORD *)this + 52) != *(_QWORD *)(gptiForeground + 416LL)) )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, (struct _EX_PUSH_LOCK *)&`anonymous namespace'::boostLock);
    if ( gptiForeground )
      anonymous_namespace_::RequestPriorityUpdate(gptiForeground, 1LL);
    if ( v8 )
      anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)v8 + 2), 1LL);
    CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND const *)>(v8);
    if ( this )
      anonymous_namespace_::RequestPriorityUpdate(this, 0LL);
    if ( TopLevelHost && (*(_BYTE *)(*((_QWORD *)TopLevelHost + 5) + 31LL) & 8) == 0 )
      anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)TopLevelHost + 2), 0LL);
    LOBYTE(v9) = v11;
    CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___(TopLevelHost, v9);
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( qword_1C032DE90 != a2 )
  {
    if ( qword_1C032DE90 )
      HMAssignmentUnlock(&qword_1C032DE90);
    if ( a2 )
    {
      v10[0] = &qword_1C032DE90;
      v10[1] = a2;
      HMAssignmentLock(v10);
    }
  }
}
