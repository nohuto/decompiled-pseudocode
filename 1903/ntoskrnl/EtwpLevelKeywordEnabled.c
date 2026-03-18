/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1400366C0
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035810 (PpmCheckSnapAllDeliveredPerformance.c)
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140036710 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     EtwProviderEnabled @ 0x1400AF010 (EtwProviderEnabled.c)
 *     PpmPerfAction @ 0x1400BC600 (PpmPerfAction.c)
 *     PpmPerfRecordUtility @ 0x1400FA9D0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1400FAC10 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x1400FB020 (PpmPerfSelectProcessorState.c)
 *     EtwpFailLogging @ 0x14013B424 (EtwpFailLogging.c)
 *     EtwWriteString @ 0x14032BC10 (EtwWriteString.c)
 *     EtwpDiskProvTraceDisk @ 0x14032E7D4 (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x140643270 (EtwpWriteUserEvent.c)
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
