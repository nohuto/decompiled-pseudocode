/*
 * XREFs of NtUserCreateWindowGroup @ 0x1C0212A80
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C0009D4C (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?CreateGroup@CWindowGroupManager@@QEAAJPEAUWINDOW_GROUP_ID@@@Z @ 0x1C02253AC (-CreateGroup@CWindowGroupManager@@QEAAJPEAUWINDOW_GROUP_ID@@@Z.c)
 */

__int64 __fastcall NtUserCreateWindowGroup(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  CWindowGroupManager *v9; // rcx
  NTSTATUS Group; // eax
  NTSTATUS v11; // edi
  ULONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // [rsp+58h] [rbp+10h] BYREF
  char v22; // [rsp+60h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
  v5 = 0;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v6 = 5LL;
LABEL_3:
    UserSetLastError(v6, v2, v3, v4);
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(v3 + 456);
  if ( v7 )
    v8 = ***(_QWORD ***)(v7 + 8);
  else
    v8 = -1LL;
  if ( !anonymous_namespace_::GroupManagementEnabledForDesktop(v8) )
  {
    v6 = 5023LL;
    goto LABEL_3;
  }
  Group = CWindowGroupManager::CreateGroup(v9, (struct WINDOW_GROUP_ID *)&v21);
  v11 = Group;
  if ( Group < 0 )
  {
    v12 = RtlNtStatusToDosError(Group);
    UserSetLastError(v12, v13, v14, v15);
    v21 = 0;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_DWORD *)MmUserProbeAddress;
  *a1 = v21;
  LOBYTE(v5) = v11 >= 0;
LABEL_14:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v5;
}
