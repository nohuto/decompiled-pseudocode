/*
 * XREFs of KiConfigureAllSchedulingInformation @ 0x1409ED6DC
 * Callers:
 *     KeStartAllProcessors @ 0x1409EDD08 (KeStartAllProcessors.c)
 * Callees:
 *     KiConfigureNodeSchedulingInformation @ 0x140185620 (KiConfigureNodeSchedulingInformation.c)
 *     KiConfigureSchedulingInformation @ 0x14059F080 (KiConfigureSchedulingInformation.c)
 */

__int64 KiConfigureAllSchedulingInformation()
{
  __int64 result; // rax
  unsigned __int16 v1; // di
  unsigned __int16 v2; // si
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  int v5; // r14d
  unsigned __int64 v6; // rbx

  result = (unsigned __int16)KeNumberNodes;
  v1 = 0;
  v2 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v3 = KeNodeBlock[v2];
      v4 = *(_QWORD *)(v3 + 136);
      if ( v4 )
      {
        v5 = *(unsigned __int16 *)(v3 + 144) << 6;
        do
        {
          _BitScanForward64(&v6, v4);
          KiConfigureSchedulingInformation(
            KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v5 + v6)]],
            0);
          v4 &= ~(1LL << v6);
        }
        while ( v4 );
      }
      result = (unsigned __int16)KeNumberNodes;
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
    if ( KeNumberNodes )
    {
      do
        result = KiConfigureNodeSchedulingInformation(KeNodeBlock[v1++]);
      while ( v1 < (unsigned __int16)KeNumberNodes );
    }
  }
  return result;
}
