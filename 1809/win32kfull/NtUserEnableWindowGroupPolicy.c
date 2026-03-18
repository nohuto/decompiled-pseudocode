/*
 * XREFs of NtUserEnableWindowGroupPolicy @ 0x1C02139B0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C0009D4C (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&___ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___ @ 0x1C02249FC (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-___ptr64__lambda_c4bb4a127.c)
 */

__int64 __fastcall NtUserEnableWindowGroupPolicy(unsigned int a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v19; // [rsp+40h] [rbp+8h] BYREF
  char v20; // [rsp+58h] [rbp+20h] BYREF

  v19 = a1;
  v4 = a1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v20);
  v9 = 0LL;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v10 = 5LL;
LABEL_13:
    UserSetLastError(v10, v6, v7, v8);
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(v7 + 456);
  if ( v11 )
    v12 = ***(_QWORD ***)(v11 + 8);
  else
    v12 = -1LL;
  if ( !anonymous_namespace_::GroupManagementEnabledForDesktop(v12) )
  {
    v10 = 5023LL;
    goto LABEL_13;
  }
  if ( (a3 & 0xFFFFFFFE) != 0 )
  {
    v10 = 87LL;
    goto LABEL_13;
  }
  Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___(
                                                                                                   (char *)`anonymous namespace'::g_windowGroupManager
                                                                                                 + 16,
                                                                                                   v4,
                                                                                                   &v19);
  if ( !Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c )
  {
    v10 = RtlNtStatusToDosError(-1073741275);
    goto LABEL_13;
  }
  v9 = 1LL;
  *(_DWORD *)(Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c + 20) = a3 & a2 | *(_DWORD *)(Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c + 20) & ~a2;
LABEL_14:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v20);
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v9;
}
