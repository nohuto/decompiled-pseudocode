/*
 * XREFs of ?MKButtonSelect@@YAHG@Z @ 0x1C015C230
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionPostAccessibility @ 0x1C019B57C (ApiSetEditionPostAccessibility.c)
 */

__int64 __fastcall MKButtonSelect(__int16 a1)
{
  gwMKCurrentButton = a1;
  ApiSetEditionPostAccessibility(3LL);
  return 0LL;
}
