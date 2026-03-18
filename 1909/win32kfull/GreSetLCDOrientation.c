/*
 * XREFs of GreSetLCDOrientation @ 0x1C013C34C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void *__fastcall GreSetLCDOrientation(char a1)
{
  void *result; // rax

  result = &unk_1C02D8E20;
  if ( (a1 & 1) == 0 )
    result = &unk_1C02E9870;
  off_1C031F0F0 = result;
  return result;
}
