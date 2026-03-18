/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140A21BE0
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void (*PopPowerAggregatorInitialize())()
{
  void (*result)(); // rax

  qword_140439108 = 0LL;
  PopPowerAggregatorLock = 0LL;
  memset(&PopPowerAggregatorContext, 0, 0x3D8uLL);
  stru_1404394D8.Parameter = 0LL;
  stru_1404394D8.List.Flink = 0LL;
  qword_1404394D0 = (__int64)&qword_1404394C8;
  qword_1404394C8 = (__int64)&qword_1404394C8;
  result = PopPowerAggregatorWorker;
  stru_1404394D8.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorWorker;
  xmmword_14043912C = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  dword_14043913C = 1;
  return result;
}
