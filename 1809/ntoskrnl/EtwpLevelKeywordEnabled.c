/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x14005B930
 * Callers:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14005B870 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KiIntSteerEtwEventEnabled @ 0x14005B8E0 (KiIntSteerEtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     EtwWriteEx @ 0x1400CAD60 (EtwWriteEx.c)
 *     EtwProviderEnabled @ 0x1400F1780 (EtwProviderEnabled.c)
 *     PpmPerfRecordUtility @ 0x1401024B0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x140102820 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x140102C30 (PpmPerfSelectProcessorState.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14010BA40 (PpmPerfSnapDeliveredPerformance.c)
 *     EtwpFailLogging @ 0x14011311C (EtwpFailLogging.c)
 *     EtwWriteString @ 0x14030E000 (EtwWriteString.c)
 *     EtwpDiskProvTraceDisk @ 0x1403108D4 (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x1406473D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpLevelKeywordEnabled(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  bool result; // al

  result = *(_DWORD *)a1
        && ((v3 = *(_BYTE *)(a1 + 4), a2 <= v3) || !v3)
        && ((*(_DWORD *)(a1 + 8) & 0x40) != 0 && !a3
         || (*(_QWORD *)(a1 + 16) & a3) != 0 && (a3 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24));
  return result;
}
