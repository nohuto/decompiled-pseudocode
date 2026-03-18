/*
 * XREFs of cFacesRes @ 0x1C0227894
 * Callers:
 *     bBMFDIFIMETRICS @ 0x1C0225BDC (bBMFDIFIMETRICS.c)
 * Callees:
 *     fsSelectionFlags @ 0x1C0226690 (fsSelectionFlags.c)
 */

__int64 __fastcall cFacesRes(_BYTE **a1)
{
  __int16 v1; // r9
  __int64 result; // rax

  v1 = fsSelectionFlags(*a1) & 0x21;
  if ( !v1 )
    return 4LL;
  if ( v1 == 32 || v1 == 1 )
    return 2LL;
  result = 4LL;
  if ( v1 == 33 )
    return 1LL;
  return result;
}
