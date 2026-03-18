/*
 * XREFs of ?MKButtonSelect@@YAHG@Z @ 0x1C015E430
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionPostAccessibility @ 0x1C019D82C (ApiSetEditionPostAccessibility.c)
 */

__int64 __fastcall MKButtonSelect(__int16 a1)
{
  gwMKCurrentButton = a1;
  ApiSetEditionPostAccessibility(3LL);
  return 0LL;
}
