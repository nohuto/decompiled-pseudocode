/*
 * XREFs of PpmCheckRecordAllUtility @ 0x140102480
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfRecordUtility @ 0x140102530 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1401028A0 (PpmParkRecordNodeStatistics.c)
 */

char PpmCheckRecordAllUtility()
{
  unsigned __int64 v0; // rbx
  unsigned __int16 v1; // di
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

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
    PpmPerfRecordUtility(v4);
  }
  while ( ++v1 < (unsigned int)(unsigned __int16)PpmCheckRegistered )
  {
    v0 = qword_140405158[v1];
    if ( v0 )
      goto LABEL_3;
  }
  PpmParkRecordNodeStatistics();
  return 1;
}
