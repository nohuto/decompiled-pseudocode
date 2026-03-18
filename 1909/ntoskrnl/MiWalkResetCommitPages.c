/*
 * XREFs of MiWalkResetCommitPages @ 0x1402BC454
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x1402BBEB4 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
  memset(v9, 0, 0xA8uLL);
  v2 = *(unsigned __int8 *)(a1 + 33);
  v3 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9[20] = &v8;
  Process = (_KPROCESS *)((char *)Process + 1280);
  LOWORD(v9[0]) = 7;
  v9[18] = MiWalkResetCommitPte;
  v5 = *(unsigned int *)(a1 + 24) | v3;
  v9[2] = Process;
  v6 = ((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v2 << 32)) << 12) | 0xFFF;
  v9[3] = v5 << 12;
  v9[4] = v6;
  BYTE6(v9[0]) = MiLockWorkingSetShared((__int64)Process);
  MiWalkPageTables((__int16 *)v9);
  MiUnlockWorkingSetShared((__int64)Process, BYTE6(v9[0]));
  return v8;
}
