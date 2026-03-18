/*
 * XREFs of VerifierEngCreateRedirectionDeviceBitmap @ 0x1C0282200
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0281D14 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateRedirectionDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateRedirectionDeviceBitmap(dhsurf, sizl, iFormatCompat);
}
