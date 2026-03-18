/*
 * XREFs of GreSetLCDOrientation @ 0x1C00BE7D4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void *__fastcall GreSetLCDOrientation(char a1)
{
  void *result; // rax

  result = &unk_1C02C7830;
  if ( (a1 & 1) == 0 )
    result = &unk_1C02D7660;
  off_1C030C100 = result;
  return result;
}
