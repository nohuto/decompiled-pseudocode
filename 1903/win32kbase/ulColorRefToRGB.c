/*
 * XREFs of ulColorRefToRGB @ 0x1C00B37F0
 * Callers:
 *     <none>
 * Callees:
 *     ulIndexToRGB @ 0x1C0060EF0 (ulIndexToRGB.c)
 */

unsigned int __fastcall ulColorRefToRGB(struct _ERESOURCE *a1, __int64 a2, int a3)
{
  if ( (a3 & 0x10FF0000) == 0x10FF0000 )
    return ulIndexToRGB(a1, a2, (unsigned __int8)a3);
  else
    return a3;
}
