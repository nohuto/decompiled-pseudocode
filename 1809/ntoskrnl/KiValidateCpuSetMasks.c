/*
 * XREFs of KiValidateCpuSetMasks @ 0x140117B04
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x140114A0C (KeSetSystemAllowedCpuSets.c)
 *     KeSetCpuSetsProcess @ 0x14018C794 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296C70 (KeSetSelectedCpuSetsThread.c)
 *     KeSetTagCpuSets @ 0x140296FD8 (KeSetTagCpuSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiValidateCpuSetMasks(char *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  signed __int64 v4; // r9

  if ( a2 <= (unsigned __int16)KiMaximumGroups )
  {
    v2 = 0;
    if ( !a2 )
      return 0LL;
    v4 = (char *)qword_1405426A8 - a1;
    while ( (~*(_QWORD *)&a1[v4] & *(_QWORD *)a1) == 0LL )
    {
      ++v2;
      a1 += 8;
      if ( v2 >= a2 )
        return 0LL;
    }
  }
  return 3221225903LL;
}
