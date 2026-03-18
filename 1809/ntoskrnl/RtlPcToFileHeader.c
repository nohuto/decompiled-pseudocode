/*
 * XREFs of RtlPcToFileHeader @ 0x14012F650
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x1406BA0D0 (EtwpLocateDbgIdForRegEntry.c)
 *     KeSetTracepoint @ 0x140844E20 (KeSetTracepoint.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400A18B0 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue >= *(&xmmword_140558020 + 1)
    && (unsigned __int64)PcValue < *(&xmmword_140558020 + 1) + (unsigned int)qword_140558030 )
  {
    v4 = *(_OWORD *)&xmmword_140558020;
  }
  else
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (__int64)&v4);
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
