/*
 * XREFs of MmRemoveExecuteGrants @ 0x14013A0A4
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void MmRemoveExecuteGrants()
{
  _KPROCESS *Process; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD v4[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v5[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v5, 0, 0xB8uLL);
  memset(v4, 0, sizeof(v4));
  Process = KeGetCurrentThread()->ApcState.Process;
  v4[21] = v5;
  Process = (_KPROCESS *)((char *)Process + 1280);
  LODWORD(v4[0]) = 6;
  v4[19] = MiRevokeExecutePte;
  v4[3] = Process;
  v4[20] = PsGetHostSilo;
  v4[5] = 0xFFFF7FFFFFFFFFFFuLL;
  WORD2(v5[0]) = 0;
  v5[2] = 0LL;
  v5[3] = 0LL;
  v5[1] = 20LL;
  LODWORD(v5[0]) = 1;
  BYTE4(v4[0]) = MiLockWorkingSetShared((__int64)Process);
  MiWalkPageTables((int *)v4);
  MiUnlockWorkingSetShared((__int64)Process, BYTE4(v4[0]));
  MiFlushTbList((int *)v5, v1, v2, v3);
}
