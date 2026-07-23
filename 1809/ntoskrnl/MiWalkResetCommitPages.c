/*
 * XREFs of MiWalkResetCommitPages @ 0x1402A5550
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x1402A4FB4 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiWalkResetCommitPages(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v9[22]; // [rsp+30h] [rbp-69h] BYREF

  v8 = 0LL;
  memset(v9, 0, sizeof(v9));
  v2 = *(unsigned __int8 *)(a1 + 33);
  v3 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9[21] = &v8;
  Process = (_KPROCESS *)((char *)Process + 1280);
  v9[19] = MiWalkResetCommitPte;
  v5 = *(unsigned int *)(a1 + 24) | v3;
  LODWORD(v9[0]) = 7;
  v6 = ((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v2 << 32)) << 12) | 0xFFF;
  v9[4] = v5 << 12;
  v9[5] = v6;
  v9[3] = Process;
  BYTE4(v9[0]) = MiLockWorkingSetShared((__int64)Process);
  MiWalkPageTables((int *)v9);
  MiUnlockWorkingSetShared((__int64)Process, BYTE4(v9[0]));
  return v8;
}
