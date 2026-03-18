/*
 * XREFs of VerifierEngCreateDeviceSurface @ 0x1C0298250
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0297EAC (-VerifierRandomFailure@@YAHK@Z.c)
 */

HSURF __fastcall VerifierEngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDeviceSurface(dhsurf, sizl, iFormatCompat);
}
