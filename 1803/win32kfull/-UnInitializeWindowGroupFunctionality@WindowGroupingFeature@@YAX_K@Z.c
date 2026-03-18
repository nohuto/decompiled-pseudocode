/*
 * XREFs of ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C0108CEC
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C010889C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     _EnableShellWindowManagementBehavior @ 0x1C01128C0 (_EnableShellWindowManagementBehavior.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C006B5DC (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ?Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z @ 0x1C01FC818 (-Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z.c)
 */

void __fastcall WindowGroupingFeature::UnInitializeWindowGroupFunctionality(WindowGroupingFeature *this)
{
  __int64 v2; // rcx
  struct CWindowGroupManager *v3; // rbx
  __int64 v4; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v5);
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop((__int64)this) )
  {
    CWindowGroupManager::Cleanup(v2, 0LL);
    v3 = `anonymous namespace'::g_windowGroupManager;
    if ( `anonymous namespace'::g_windowGroupManager )
    {
      v4 = *((_QWORD *)`anonymous namespace'::g_windowGroupManager + 3);
      if ( v4 )
        Win32FreePool(v4);
      Win32FreePool(v3);
    }
    `anonymous namespace'::g_windowGroupManager = 0LL;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
}
