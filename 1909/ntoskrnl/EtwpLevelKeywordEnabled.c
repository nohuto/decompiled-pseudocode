/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x140036AB0
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035C00 (PpmCheckSnapAllDeliveredPerformance.c)
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140036B00 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     PpmPerfAction @ 0x14009C480 (PpmPerfAction.c)
 *     EtwProviderEnabled @ 0x1400E5560 (EtwProviderEnabled.c)
 *     PpmPerfRecordUtility @ 0x1400F36B0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1400F38F0 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x1400F3D00 (PpmPerfSelectProcessorState.c)
 *     EtwpFailLogging @ 0x14013BA44 (EtwpFailLogging.c)
 *     EtwWriteString @ 0x14032B660 (EtwWriteString.c)
 *     EtwpDiskProvTraceDisk @ 0x14032E234 (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x140656DC0 (EtwpWriteUserEvent.c)
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
