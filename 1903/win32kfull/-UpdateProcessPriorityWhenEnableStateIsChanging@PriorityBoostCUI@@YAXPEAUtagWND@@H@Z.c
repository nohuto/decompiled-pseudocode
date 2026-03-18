/*
 * XREFs of ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z @ 0x1C00168C8
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00167A8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00166E8 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0016970 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00169C4 (-GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0016A00 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C0016A38 (_anonymous_namespace_--RequestPriorityUpdate.c)
 */

void __fastcall PriorityBoostCUI::UpdateProcessPriorityWhenEnableStateIsChanging(
        PriorityBoostCUI *this,
        struct tagWND *a2)
{
  int v2; // esi
  const struct tagWND *NearestCoreWindowAncestor; // rdi
  struct tagWND *TopLevelHost; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = (int)a2;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)&`anonymous namespace'::boostLock);
  NearestCoreWindowAncestor = CoreWindowProp::GetNearestCoreWindowAncestor(this);
  if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(NearestCoreWindowAncestor) )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(NearestCoreWindowAncestor);
    if ( v2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)TopLevelHost + 2) + 416LL) + 812LL) & 0x60000) == 0 )
        goto LABEL_2;
      v6 = 0LL;
    }
    else
    {
      v6 = 1LL;
    }
    anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)this + 2), v6);
  }
LABEL_2:
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
}
