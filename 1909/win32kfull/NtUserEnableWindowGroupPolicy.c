/*
 * XREFs of NtUserEnableWindowGroupPolicy @ 0x1C022B220
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C000EA24 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f391ddf1cf56839542dcbc253db2f01b___ @ 0x1C023C86C (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f391ddf1cf5683954.c)
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
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b; // rax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF
  char v17; // [rsp+58h] [rbp+20h] BYREF

  v16 = a1;
  v4 = a1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  v9 = 0LL;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v10 = 5LL;
LABEL_13:
    UserSetLastError(v10, v6, v7, v8);
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(v7 + 448);
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
  Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___(
                                                                                           (char *)`anonymous namespace'::g_windowGroupManager
                                                                                         + 16,
                                                                                           v4,
                                                                                           &v16);
  if ( !Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b )
  {
    v10 = RtlNtStatusToDosError(-1073741275);
    goto LABEL_13;
  }
  v9 = 1LL;
  *(_DWORD *)(Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b + 20) = a3 & a2 | *(_DWORD *)(Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b + 20) & ~a2;
LABEL_14:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
  UserSessionSwitchLeaveCrit(v14);
  return v9;
}
