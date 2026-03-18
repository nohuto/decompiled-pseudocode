/*
 * XREFs of VerifierEngCreateDeviceBitmap @ 0x1C0298200
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0297EAC (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDeviceBitmap(dhsurf, sizl, iFormatCompat);
}
