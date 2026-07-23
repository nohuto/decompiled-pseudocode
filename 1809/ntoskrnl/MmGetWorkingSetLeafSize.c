/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x1400F0E38
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14066E19C (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetCurrentMultiplexedVm @ 0x1400EF564 (MiGetCurrentMultiplexedVm.c)
 *     MiTranslateWsType @ 0x1400EF5A0 (MiTranslateWsType.c)
 */

char *__fastcall MmGetWorkingSetLeafSize(int a1)
{
  char *result; // rax

  if ( a1 == 2 )
  {
    result = (char *)MiGetCurrentMultiplexedVm();
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_14043C140 + 272 * (int)MiTranslateWsType(a1);
  }
  return (char *)*((_QWORD *)result + 15);
}
