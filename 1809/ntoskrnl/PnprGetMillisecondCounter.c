/*
 * XREFs of PnprGetMillisecondCounter @ 0x14057A7BC
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x14028A620 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x14028ACE8 (PnprSwapFinalize.c)
 *     PnprQuiesceDevices @ 0x14057B1E0 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x14057B720 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x14057BCE0 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x14057BD5C (PnprWakeProcessors.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnprGetMillisecondCounter(char a1)
{
  __int128 v2; // rtt
  LONGLONG v3; // rcx
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = v2 / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = (unsigned int)(v3 + dword_1404DDA5C - dword_1404DDA58);
  dword_1404DDA5C = result;
  dword_1404DDA58 = v3;
  return result;
}
