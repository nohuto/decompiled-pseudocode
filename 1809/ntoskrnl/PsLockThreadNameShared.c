/*
 * XREFs of PsLockThreadNameShared @ 0x1401B5F1C
 * Callers:
 *     EtwpTraceThreadRundown @ 0x14017C50C (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x1406247EC (EtwTraceThread.c)
 * Callees:
 *     PspLockThreadSecurityShared @ 0x14008FC4C (PspLockThreadSecurityShared.c)
 */

__int64 __fastcall PsLockThreadNameShared(__int64 a1, __int64 a2)
{
  return PspLockThreadSecurityShared(a1, a2);
}
