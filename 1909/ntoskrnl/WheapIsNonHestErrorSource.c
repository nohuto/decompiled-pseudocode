/*
 * XREFs of WheapIsNonHestErrorSource @ 0x140340180
 * Callers:
 *     WheaAddErrorSource @ 0x1409190B0 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x140919330 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapIsNonHestErrorSource(signed int a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( a1 > 3 )
  {
    if ( (unsigned int)a1 > 0xB )
      return 1;
    v1 = 3776;
    if ( !_bittest(&v1, a1) )
      return 1;
  }
  return result;
}
