/*
 * XREFs of ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00F18FC
 * Callers:
 *     CleanupIAMAccess @ 0x1C00F1880 (CleanupIAMAccess.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C006B5DC (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     SetShellWndManagementWindow @ 0x1C00F1D88 (SetShellWndManagementWindow.c)
 *     ?Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z @ 0x1C01FC818 (-Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z.c)
 */

void __fastcall CleanupShellWindowManagement(struct tagDESKTOP *a1)
{
  struct tagDESKTOP *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct tagDESKTOP *v6; // rsi
  struct tagDESKTOP **v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)a1 + 36) )
  {
    *((_QWORD *)a1 + 36) = 0LL;
    HMAssignmentUnlock((char *)a1 + 296);
    HMAssignmentUnlock((char *)a1 + 304);
    v2 = (struct tagDESKTOP *)*((_QWORD *)a1 + 39);
    if ( v2 )
    {
      while ( v2 != (struct tagDESKTOP *)((char *)a1 + 312) )
      {
        v5 = *(_QWORD *)v2;
        v6 = v2;
        v2 = (struct tagDESKTOP *)v5;
        if ( *(struct tagDESKTOP **)(v5 + 8) != v6 || (v7 = (struct tagDESKTOP **)*((_QWORD *)v6 + 1), *v7 != v6) )
          __fastfail(3u);
        *v7 = (struct tagDESKTOP *)v5;
        *(_QWORD *)(v5 + 8) = v7;
        HMAssignmentUnlock((char *)v6 + 16);
        Win32FreePool(v6);
      }
    }
    SetShellWndManagementWindow(a1, 0LL);
    v3 = ***((_QWORD ***)a1 + 1);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
    if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v3) )
      CWindowGroupManager::Cleanup(v4, 1LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  }
}
