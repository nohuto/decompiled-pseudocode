/*
 * XREFs of PnprGetMillisecondCounter @ 0x1405A95EC
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1402A07A0 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1402A0E84 (PnprSwapFinalize.c)
 *     PnprQuiesceDevices @ 0x1405AA020 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x1405AA568 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1405AAB60 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x1405AABDC (PnprWakeProcessors.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
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
    v2 = v3 + dword_14050A108 - dword_14050A104;
  dword_14050A104 = v3;
  result = v2;
  dword_14050A108 = v2;
  return result;
}
