/*
 * XREFs of MmRemoveExecuteGrants @ 0x14013BF24
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 * Callees:
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
  memset(v4, 0, 0xA8uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  LOWORD(v4[0]) = -32762;
  Process = (_KPROCESS *)((char *)Process + 1280);
  v4[2] = Process;
  v4[20] = v5;
  LODWORD(v5[0]) = 1;
  v4[18] = MiRevokeExecutePte;
  v4[19] = PsGetHostSilo;
  v4[4] = 0xFFFF7FFFFFFFFFFFuLL;
  WORD2(v5[0]) = 0;
  v5[2] = 0LL;
  v5[3] = 0LL;
  LODWORD(v5[1]) = 20;
  BYTE6(v4[0]) = MiLockWorkingSetShared((__int64)Process);
  MiWalkPageTables((__int16 *)v4);
  MiUnlockWorkingSetShared((__int64)Process, BYTE6(v4[0]));
  MiFlushTbList((int *)v5, v1, v2, v3);
}
