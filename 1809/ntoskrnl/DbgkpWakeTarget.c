/*
 * XREFs of DbgkpWakeTarget @ 0x14080F9E0
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x1406E1374 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x14080E7A0 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x14080F6EC (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x14080FE40 (NtDebugContinue.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     PsResumeThread @ 0x1406767E0 (PsResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x14080EA10 (DbgkpFreeDebugEvent.c)
 */

void __fastcall DbgkpWakeTarget(char *P)
{
  int v1; // eax
  struct _EX_RUNDOWN_REF *v3; // rdi

  v1 = *((_DWORD *)P + 19);
  v3 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 8);
  if ( (v1 & 0x20) != 0 )
  {
    PsResumeThread(*((_QWORD *)P + 8), 0LL);
    v1 = *((_DWORD *)P + 19);
  }
  if ( (v1 & 8) != 0 )
  {
    ExReleaseRundownProtection_0(v3 + 215);
    v1 = *((_DWORD *)P + 19);
  }
  if ( (v1 & 2) != 0 )
    DbgkpFreeDebugEvent(P);
  else
    KeSetEvent((PRKEVENT)(P + 16), 0, 0);
}
