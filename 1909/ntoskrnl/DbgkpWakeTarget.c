/*
 * XREFs of DbgkpWakeTarget @ 0x1408489C4
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x1407296E4 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140847740 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1408486C0 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140848E40 (NtDebugContinue.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PsResumeThread @ 0x1406CCAD0 (PsResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x1408479B8 (DbgkpFreeDebugEvent.c)
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
