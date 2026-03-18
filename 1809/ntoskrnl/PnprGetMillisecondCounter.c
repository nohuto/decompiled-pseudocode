/*
 * XREFs of PnprGetMillisecondCounter @ 0x1405797BC
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x14028A330 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x14028A9F8 (PnprSwapFinalize.c)
 *     PnprQuiesceDevices @ 0x14057A1E0 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x14057A720 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x14057ACE0 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x14057AD5C (PnprWakeProcessors.c)
 *     PnpReplacePartitionUnit @ 0x1408337A0 (PnpReplacePartitionUnit.c)
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
    result = (unsigned int)(v3 + dword_1404DC99C - dword_1404DC998);
  dword_1404DC99C = result;
  dword_1404DC998 = v3;
  return result;
}
