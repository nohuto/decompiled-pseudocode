/*
 * XREFs of NtUserClearForeground @ 0x1C0212590
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 NtUserClearForeground()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v0 = 1LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v3 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v3 == grpdeskRitInput || !IAMThreadAccessGranted(gptiCurrent) )
  {
    UserSetLastError(5LL, v1, v3, v2);
    v0 = 0LL;
  }
  else if ( v3 )
  {
    HMAssignmentUnlock(v3 + 88);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v0;
}
