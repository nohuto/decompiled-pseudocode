/*
 * XREFs of RtlPcToFileHeader @ 0x14012FF70
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x140314D54 (RtlGuardCheckLongJumpTarget.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406DB4EC (EtwpLocateDbgIdForRegEntry.c)
 *     KeSetTracepoint @ 0x14087F280 (KeSetTracepoint.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14001B800 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0uLL;
  v5 = 0LL;
  if ( (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_140589020 + 1)
    && (unsigned __int64)PcValue < *((_QWORD *)&xmmword_140589020 + 1) + (unsigned __int64)(unsigned int)qword_140589030 )
  {
    v4 = xmmword_140589020;
  }
  else
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (__int64)&v4);
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
