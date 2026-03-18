/*
 * XREFs of NtUserDeleteWindowGroup @ 0x1C022AAC0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C000FB24 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f391ddf1cf56839542dcbc253db2f01b___ @ 0x1C023CE8C (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f391ddf1cf5683954.c)
 *     _lambda_61241d85ba638410c71ba06bf69ceb6b_::operator() @ 0x1C023D158 (_lambda_61241d85ba638410c71ba06bf69ceb6b_--operator().c)
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
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b; // rax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  struct CWindowGroupManager *v13; // [rsp+38h] [rbp+10h] BYREF
  char v14; // [rsp+40h] [rbp+18h] BYREF

  v12 = a1;
  v1 = a1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  v5 = 0LL;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v6 = 5LL;
LABEL_3:
    UserSetLastError(v6, v2, v3, v4);
    goto LABEL_12;
  }
  v7 = *(_QWORD *)(v3 + 448);
  if ( v7 )
    v8 = ***(_QWORD ***)(v7 + 8);
  else
    v8 = -1LL;
  if ( !anonymous_namespace_::GroupManagementEnabledForDesktop(v8) )
  {
    v6 = 5023LL;
    goto LABEL_3;
  }
  v13 = `anonymous namespace'::g_windowGroupManager;
  Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___(
                                                                                           (char *)`anonymous namespace'::g_windowGroupManager
                                                                                         + 16,
                                                                                           v1,
                                                                                           &v12);
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b )
    lambda_61241d85ba638410c71ba06bf69ceb6b_::operator()(
      &v13,
      Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b);
  v5 = 1LL;
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v10);
  return v5;
}
