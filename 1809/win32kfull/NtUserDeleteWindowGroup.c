/*
 * XREFs of NtUserDeleteWindowGroup @ 0x1C0212D20
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C0009D4C (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&___ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___ @ 0x1C02249FC (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-___ptr64__lambda_c4bb4a127.c)
 *     _lambda_95d672bec31edc9c80b859fac5ab880a_::operator() @ 0x1C0224D34 (_lambda_95d672bec31edc9c80b859fac5ab880a_--operator().c)
 */

__int64 __fastcall NtUserDeleteWindowGroup(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v15; // [rsp+30h] [rbp+8h] BYREF
  struct CWindowGroupManager *v16; // [rsp+38h] [rbp+10h] BYREF
  char v17; // [rsp+40h] [rbp+18h] BYREF

  v15 = a1;
  v1 = a1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  v5 = 0LL;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v6 = 5LL;
LABEL_3:
    UserSetLastError(v6, v2, v3, v4);
    goto LABEL_12;
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
  v16 = `anonymous namespace'::g_windowGroupManager;
  Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___(
                                                                                                   (char *)`anonymous namespace'::g_windowGroupManager
                                                                                                 + 16,
                                                                                                   v1,
                                                                                                   &v15);
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c )
    lambda_95d672bec31edc9c80b859fac5ab880a_::operator()(
      &v16,
      Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c);
  v5 = 1LL;
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v5;
}
