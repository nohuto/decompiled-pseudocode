/*
 * XREFs of ?IsValidFONTDIFF@@YA_NPEBXKJ@Z @ 0x1C0278940
 * Callers:
 *     ?IsValidFONTSIM@@YA_NPEBXKJ@Z @ 0x1C027897C (-IsValidFONTSIM@@YA_NPEBXKJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValidFONTDIFF(const void *a1, unsigned int a2, int a3)
{
  if ( !a3 )
    return 1;
  if ( a3 <= 0 || a3 >= a2 || a2 <= 0x14 || (unsigned int)a3 >= (unsigned __int64)a2 - 20 )
    return 0;
  return (((_BYTE)a1 + (_BYTE)a3) & 3) == 0;
}
