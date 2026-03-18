/*
 * XREFs of PnprGetMillisecondCounter @ 0x1405A95CC
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1402A0500 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1402A0BE4 (PnprSwapFinalize.c)
 *     PnprQuiesceDevices @ 0x1405AA000 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x1405AA548 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1405AAB40 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x1405AABBC (PnprWakeProcessors.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnprGetMillisecondCounter(char a1)
{
  unsigned int v2; // edi
  LONGLONG v3; // rax
  __int128 v4; // rtt
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v4 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = v4 / PerformanceFrequency.QuadPart;
  if ( !a1 )
    v2 = v3 + dword_140509E48 - dword_140509E44;
  dword_140509E44 = v3;
  result = v2;
  dword_140509E48 = v2;
  return result;
}
