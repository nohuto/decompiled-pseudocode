/*
 * XREFs of RtlPcToFileHeader @ 0x14012F740
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x1406BB350 (EtwpLocateDbgIdForRegEntry.c)
 *     KeSetTracepoint @ 0x140846060 (KeSetTracepoint.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400A17F0 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue >= *(&xmmword_140559020 + 1)
    && (unsigned __int64)PcValue < *(&xmmword_140559020 + 1) + (unsigned int)qword_140559030 )
  {
    v4 = *(_OWORD *)&xmmword_140559020;
  }
  else
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (__int64)&v4);
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
