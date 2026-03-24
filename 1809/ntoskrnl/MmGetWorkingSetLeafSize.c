/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x1400F0DB8
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14066CFDC (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetCurrentMultiplexedVm @ 0x1400EF4E4 (MiGetCurrentMultiplexedVm.c)
 *     MiTranslateWsType @ 0x1400EF520 (MiTranslateWsType.c)
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
    result = (char *)&unk_14043B080 + 272 * (int)MiTranslateWsType(a1);
  }
  return (char *)*((_QWORD *)result + 15);
}
