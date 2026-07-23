/*
 * XREFs of RtlpHeapTrkGenerateHashRandoms @ 0x1800F8054
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1800F77B0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlRandomEx @ 0x180009C90 (RtlRandomEx.c)
 *     NtQueryPerformanceCounter @ 0x18009D4B0 (NtQueryPerformanceCounter.c)
 */

__int64 RtlpHeapTrkGenerateHashRandoms()
{
  _WORD *v0; // rbx
  __int64 v1; // rdi
  ULONG v2; // r8d
  __int64 result; // rax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
  v0 = &unk_180166A30;
  Seed = PerformanceCounter.LowPart;
  v1 = 8LL;
  do
  {
    v2 = RtlRandomEx(&Seed);
    result = 148064917 * v2;
    *v0++ = v2 % 0x1EEF;
    --v1;
  }
  while ( v1 );
  return result;
}
