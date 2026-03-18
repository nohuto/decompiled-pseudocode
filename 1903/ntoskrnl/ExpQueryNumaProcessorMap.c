/*
 * XREFs of ExpQueryNumaProcessorMap @ 0x1406B4EC4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x140108980 (KeQueryHighestNodeNumber.c)
 *     KeQueryNodeActiveAffinity @ 0x1401089A0 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall ExpQueryNumaProcessorMap(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v6; // edi
  USHORT v7; // cx
  unsigned int i; // ebx

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
      for ( i = 0; i < v6; v7 = i )
        KeQueryNodeActiveAffinity(v7, (PGROUP_AFFINITY)&a1[4 * i++ + 2], 0LL);
      return 0LL;
    }
    else
    {
      *a3 = 4;
      return 0LL;
    }
  }
}
