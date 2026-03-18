/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x1400D9F38
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406738A0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x1400D9F78 (MiTranslateWsType.c)
 *     MiGetCurrentMultiplexedVm @ 0x1400D9FBC (MiGetCurrentMultiplexedVm.c)
 */

char *__fastcall MmGetWorkingSetLeafSize(__int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax

  if ( (_DWORD)a1 == 2 )
  {
    result = (char *)MiGetCurrentMultiplexedVm(a1, a2, a3);
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_140466780 + 320 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 15);
}
