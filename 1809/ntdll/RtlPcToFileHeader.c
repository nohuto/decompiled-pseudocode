/*
 * XREFs of RtlPcToFileHeader @ 0x180077850
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_180178500 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_180178500 + 1)
                                  + (unsigned __int64)(unsigned int)qword_180178510 )
  {
    RtlpxLookupFunctionTable(PcValue, (__int64)&v4);
  }
  else
  {
    v4 = xmmword_180178500;
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
