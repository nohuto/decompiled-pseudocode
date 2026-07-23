/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x14005B930
 * Callers:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14005B870 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KiIntSteerEtwEventEnabled @ 0x14005B8E0 (KiIntSteerEtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     EtwProviderEnabled @ 0x1400F1800 (EtwProviderEnabled.c)
 *     PpmPerfRecordUtility @ 0x140102530 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1401028A0 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x140102CB0 (PpmPerfSelectProcessorState.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14010BAC0 (PpmPerfSnapDeliveredPerformance.c)
 *     EtwpFailLogging @ 0x14011318C (EtwpFailLogging.c)
 *     EtwWriteString @ 0x14030E1F0 (EtwWriteString.c)
 *     EtwpDiskProvTraceDisk @ 0x140310AC4 (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x1406483F0 (EtwpWriteUserEvent.c)
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
