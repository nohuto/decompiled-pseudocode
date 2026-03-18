/*
 * XREFs of NtUserEnableWindowGroupPolicy @ 0x1C01ED630
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C006B5DC (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&___ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___ @ 0x1C01FBF7C (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-___ptr64__lambda_c4bb4a127.c)
 */

__int64 __fastcall NtUserEnableWindowGroupPolicy(unsigned int a1, int a2, int a3)
{
  __int64 v4; // rbx
  int v5; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c; // rax
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v21; // [rsp+40h] [rbp+8h] BYREF
  char v22; // [rsp+58h] [rbp+20h] BYREF

  v21 = a1;
  v4 = a1;
  v5 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
  v9 = 0;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v10 = 5LL;
LABEL_3:
    UserSetLastError(v10, v7);
    goto LABEL_15;
  }
  v11 = *(_QWORD *)(v8 + 448);
  if ( v11 )
    v12 = ***(_QWORD ***)(v11 + 8);
  else
    v12 = -1LL;
  if ( !anonymous_namespace_::GroupManagementEnabledForDesktop(v12) )
  {
    v10 = 5023LL;
    goto LABEL_3;
  }
  if ( (a3 & 0xFFFFFFFE) != 0 )
  {
    v10 = 87LL;
    goto LABEL_3;
  }
  Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___(
                                                                                                   (char *)`anonymous namespace'::g_windowGroupManager
                                                                                                 + 16,
                                                                                                   v4,
                                                                                                   &v21);
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c )
  {
    *(_DWORD *)(Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c + 20) = a3 & a2 | *(_DWORD *)(Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c + 20) & ~a2;
  }
  else
  {
    v14 = RtlNtStatusToDosError(-1073741275);
    UserSetLastError(v14, v15);
    v5 = 0;
  }
  v9 = v5;
LABEL_15:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v9;
}
