/*
 * XREFs of PsUnlockThreadNameShared @ 0x1401B5F30
 * Callers:
 *     EtwpTraceThreadRundown @ 0x14017C50C (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x1406247EC (EtwTraceThread.c)
 * Callees:
 *     PspUnlockThreadSecurityShared @ 0x140136134 (PspUnlockThreadSecurityShared.c)
 */

_QWORD *__fastcall PsUnlockThreadNameShared(__int64 a1, __int64 a2)
{
  return PspUnlockThreadSecurityShared(a1, a2);
}
