/*
 * XREFs of DbgkpWakeTarget @ 0x1408492C4
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x140728374 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140848040 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140848FC0 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140849740 (NtDebugContinue.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PsResumeThread @ 0x1406CDD30 (PsResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x1408482B8 (DbgkpFreeDebugEvent.c)
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
    ExReleaseRundownProtection_0(v3 + 217);
    v1 = *((_DWORD *)P + 19);
  }
  if ( (v1 & 2) != 0 )
    DbgkpFreeDebugEvent(P);
  else
    KeSetEvent((PRKEVENT)(P + 16), 0, 0);
}
