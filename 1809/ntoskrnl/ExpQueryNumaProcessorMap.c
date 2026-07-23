/*
 * XREFs of ExpQueryNumaProcessorMap @ 0x14066BEF8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x1400E3CA0 (KeQueryHighestNodeNumber.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall ExpQueryNumaProcessorMap(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v6; // edi
  USHORT v7; // cx
  unsigned int v8; // eax
  int v9; // ebx

  if ( a2 < 4 )
  {
    if ( a3 )
      *a3 = 4;
    return 3221225476LL;
  }
  else
  {
    *a1 = KeQueryHighestNodeNumber();
    v6 = KeQueryHighestNodeNumber() + 1;
    if ( (a2 - 8) >> 4 <= v6 )
      v6 = (a2 - 8) >> 4;
    if ( a2 >= 8 && (v7 = 0, v6) )
    {
      *a3 = 16 * v6 + 8;
      v8 = 0;
      v9 = 0;
      while ( v8 < v6 )
      {
        KeQueryNodeActiveAffinity(v7, (PGROUP_AFFINITY)&a1[4 * v9 + 2], 0LL);
        v8 = v9 + 1;
        v7 = ++v9;
      }
      return 0LL;
    }
    else
    {
      *a3 = 4;
      return 0LL;
    }
  }
}
