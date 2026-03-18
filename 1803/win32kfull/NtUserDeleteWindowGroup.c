/*
 * XREFs of NtUserDeleteWindowGroup @ 0x1C01ECA40
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C006B5DC (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&___ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___ @ 0x1C01FBF7C (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-___ptr64__lambda_c4bb4a127.c)
 *     _lambda_95d672bec31edc9c80b859fac5ab880a_::operator() @ 0x1C01FC3DC (_lambda_95d672bec31edc9c80b859fac5ab880a_--operator().c)
 */

__int64 __fastcall NtUserDeleteWindowGroup(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF
  struct CWindowGroupManager *v15; // [rsp+38h] [rbp+10h] BYREF
  char v16; // [rsp+40h] [rbp+18h] BYREF

  v14 = a1;
  v1 = a1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  v4 = 0LL;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v5 = 5LL;
LABEL_3:
    UserSetLastError(v5, v2);
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(v3 + 448);
  if ( v6 )
    v7 = ***(_QWORD ***)(v6 + 8);
  else
    v7 = -1LL;
  if ( !anonymous_namespace_::GroupManagementEnabledForDesktop(v7) )
  {
    v5 = 5023LL;
    goto LABEL_3;
  }
  v15 = `anonymous namespace'::g_windowGroupManager;
  Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___(
                                                                                                   (char *)`anonymous namespace'::g_windowGroupManager
                                                                                                 + 16,
                                                                                                   v1,
                                                                                                   &v14);
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c )
    lambda_95d672bec31edc9c80b859fac5ab880a_::operator()(
      &v15,
      Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c);
  v4 = 1LL;
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v4;
}
