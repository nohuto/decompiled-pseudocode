/*
 * XREFs of _lambda_0d160d279100fee8fb6f37f20079cc99_::_lambda_invoker_cdecl_ @ 0x1C0009CD0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C0009D4C (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C000EEE4 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006F324 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@WindowGroupingWindowManagement@@@Z @ 0x1C0225730 (-GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@.c)
 */

bool __fastcall lambda_0d160d279100fee8fb6f37f20079cc99_::_lambda_invoker_cdecl_(__int64 a1, _OWORD *a2)
{
  __int64 GroupActiveWindow; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  struct tagWND *RootOwner; // rax
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h]
  char v13; // [rsp+48h] [rbp+10h] BYREF

  GroupActiveWindow = 0LL;
  v12 = 0uLL;
  *a2 = 0uLL;
  v5 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v5 )
    v6 = ***(_QWORD ***)(v5 + 8);
  else
    v6 = -1LL;
  if ( (unsigned __int8)anonymous_namespace_::GroupManagementEnabledForDesktop(v6) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
    if ( TopLevelWindow )
    {
      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
      RootOwner = GetRootOwner(CompositeAppFrameWindowOrSelf);
      if ( *((_DWORD *)RootOwner + 73) )
        GroupActiveWindow = CWindowGroupManager::GetGroupActiveWindow(v11, RootOwner);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
    if ( GroupActiveWindow )
    {
      *(_QWORD *)&v12 = GroupActiveWindow;
      DWORD2(v12) = 6;
      *a2 = v12;
    }
  }
  return *(_QWORD *)a2 != 0LL;
}
