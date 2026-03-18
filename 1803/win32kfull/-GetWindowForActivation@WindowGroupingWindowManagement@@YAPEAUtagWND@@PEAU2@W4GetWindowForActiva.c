/*
 * XREFs of ?GetWindowForActivation@WindowGroupingWindowManagement@@YAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@1@@Z @ 0x1C006B5FC
 * Callers:
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C006B5DC (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C006C050 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006E820 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@WindowGroupingWindowManagement@@@Z @ 0x1C01FCCD8 (-GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@.c)
 */

__int64 __fastcall WindowGroupingWindowManagement::GetWindowForActivation(__int64 a1)
{
  __int64 GroupActiveWindow; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  struct tagWND *RootOwner; // rax
  __int64 v9; // rcx
  char v10; // [rsp+40h] [rbp+18h] BYREF

  GroupActiveWindow = 0LL;
  v3 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v3 )
    v4 = ***(_QWORD ***)(v3 + 8);
  else
    v4 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v4) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
    if ( TopLevelWindow )
    {
      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
      RootOwner = GetRootOwner(CompositeAppFrameWindowOrSelf);
      if ( *((_DWORD *)RootOwner + 70) )
        GroupActiveWindow = CWindowGroupManager::GetGroupActiveWindow(v9, RootOwner);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  }
  return GroupActiveWindow;
}
