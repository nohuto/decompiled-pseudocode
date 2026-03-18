/*
 * XREFs of ?SetRemarshalingFlags@CYCbCrSurfaceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01C3120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CYCbCrSurfaceMarshaler::SetRemarshalingFlags(
        DirectComposition::CYCbCrSurfaceMarshaler *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 5) )
    return *((_QWORD *)this + 6) != 0LL;
  return result;
}
