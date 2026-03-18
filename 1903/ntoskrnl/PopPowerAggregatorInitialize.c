/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140A21B00
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void (*PopPowerAggregatorInitialize())()
{
  void (*result)(); // rax

  qword_140439188 = 0LL;
  PopPowerAggregatorLock = 0LL;
  memset(&PopPowerAggregatorContext, 0, 0x3D8uLL);
  stru_140439558.Parameter = 0LL;
  stru_140439558.List.Flink = 0LL;
  qword_140439550 = (__int64)&qword_140439548;
  qword_140439548 = (__int64)&qword_140439548;
  result = PopPowerAggregatorWorker;
  stru_140439558.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorWorker;
  xmmword_1404391AC = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  dword_1404391BC = 1;
  return result;
}
