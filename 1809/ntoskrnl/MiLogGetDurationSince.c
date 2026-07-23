/*
 * XREFs of MiLogGetDurationSince @ 0x1402A949C
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x1400E659C (MiAllocateContiguousMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLogGetDurationSince(__int64 a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER v2; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  PerformanceFrequency = a2;
  v2.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - a1;
  if ( is_mul_ok(v2.QuadPart, 0xF4240uLL) )
    return (unsigned __int64)v2.QuadPart
         * (unsigned __int128)0xF4240uLL
         / (unsigned __int64)PerformanceFrequency.QuadPart;
  if ( PerformanceFrequency.QuadPart / 0xF4240uLL )
    return v2.QuadPart / (PerformanceFrequency.QuadPart / 0xF4240uLL);
  return 0LL;
}
