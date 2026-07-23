/*
 * XREFs of PpmCheckSnapAllUtility @ 0x140104750
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfSnapUtility @ 0x140104800 (PpmPerfSnapUtility.c)
 *     PpmParkSnapNodeStatistics @ 0x1401049D4 (PpmParkSnapNodeStatistics.c)
 */

char PpmCheckSnapAllUtility()
{
  unsigned __int64 v0; // rbx
  unsigned __int16 v1; // di
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  PpmParkSnapNodeStatistics();
  v0 = qword_140405158[0];
  v1 = 0;
  while ( v0 )
  {
LABEL_3:
    _BitScanForward64(&v2, v0);
    v0 &= ~(1LL << v2);
    v3 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v1 + (unsigned __int8)v2];
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
      v4 = 0LL;
    else
      v4 = KiProcessorBlock[v3];
    PpmPerfSnapUtility(v4);
  }
  while ( ++v1 < (unsigned int)(unsigned __int16)PpmCheckRegistered )
  {
    v0 = qword_140405158[v1];
    if ( v0 )
      goto LABEL_3;
  }
  return 1;
}
