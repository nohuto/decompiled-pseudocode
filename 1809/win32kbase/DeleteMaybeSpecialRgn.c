/*
 * XREFs of DeleteMaybeSpecialRgn @ 0x1C0045460
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 */

__int64 __fastcall DeleteMaybeSpecialRgn(HRGN a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 > 2 )
    return GreDeleteObject(a1);
  return result;
}
