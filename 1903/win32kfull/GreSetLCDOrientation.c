/*
 * XREFs of GreSetLCDOrientation @ 0x1C00E2B84
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void *__fastcall GreSetLCDOrientation(char a1)
{
  void *result; // rax

  result = &unk_1C02DB5C0;
  if ( (a1 & 1) == 0 )
    result = &unk_1C02EA240;
  off_1C03210F0 = result;
  return result;
}
