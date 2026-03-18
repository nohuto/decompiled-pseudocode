/*
 * XREFs of PpmCheckInit @ 0x140A21F1C
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *PpmCheckInit())(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *result)(__int64, __int64, int); // rax

  PpmCheckCurrentPipelineId = 6;
  LODWORD(PpmCheckDpc) = 787;
  qword_140439578 = (__int64)PpmCheckRun;
  result = PpmCheckPeriodicStart;
  qword_140439518 = (__int64)PpmCheckPeriodicStart;
  qword_140439580 = 0LL;
  qword_140439598 = 0LL;
  qword_140439570 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_140439520 = 0LL;
  qword_140439538 = 0LL;
  qword_140439510 = 0LL;
  return result;
}
