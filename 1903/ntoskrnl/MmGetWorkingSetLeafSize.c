/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x1400F19F8
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406A5030 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x1400F1A38 (MiTranslateWsType.c)
 *     MiGetCurrentMultiplexedVm @ 0x1400F1A7C (MiGetCurrentMultiplexedVm.c)
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
    result = (char *)&unk_140466A80 + 320 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 15);
}
