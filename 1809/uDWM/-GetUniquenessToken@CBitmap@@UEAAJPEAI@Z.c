/*
 * XREFs of ?GetUniquenessToken@CBitmap@@UEAAJPEAI@Z @ 0x1800B3070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetUniquenessToken(CBitmap *this, unsigned int *a2)
{
  if ( !a2 )
    return 2147942487LL;
  *a2 = *((_DWORD *)this + 30);
  return 0LL;
}
