/*
 * XREFs of MiInitializeWsSwapping @ 0x140750250
 * Callers:
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall MiInitializeWsSwapping(_QWORD *a1))(__int64 a1)
{
  void (__fastcall *result)(__int64); // rax

  a1[140] = 0LL;
  result = MiContractWsSwapPageFileWorker;
  a1[135] = 0LL;
  a1[137] = MiContractWsSwapPageFileWorker;
  a1[138] = a1;
  return result;
}
