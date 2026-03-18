/*
 * XREFs of NtUserClearForeground @ 0x1C0229CC0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 NtUserClearForeground()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = 1LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
  v3 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v3 == grpdeskRitInput || !IAMThreadAccessGranted(gptiCurrent) )
  {
    UserSetLastError(5LL, v1, v3, v2);
    v0 = 0LL;
  }
  else if ( v3 )
  {
    HMAssignmentUnlock(v3 + 88);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
  UserSessionSwitchLeaveCrit(v4);
  return v0;
}
