/*
 * XREFs of PpmCheckInit @ 0x140A21E3C
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *PpmCheckInit())(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *result)(__int64, __int64, int); // rax

  PpmCheckCurrentPipelineId = 6;
  LODWORD(PpmCheckDpc) = 787;
  qword_1404395F8 = (__int64)PpmCheckRun;
  result = PpmCheckPeriodicStart;
  qword_140439598 = (__int64)PpmCheckPeriodicStart;
  qword_140439600 = 0LL;
  qword_140439618 = 0LL;
  qword_1404395F0 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_1404395A0 = 0LL;
  qword_1404395B8 = 0LL;
  qword_140439590 = 0LL;
  return result;
}
