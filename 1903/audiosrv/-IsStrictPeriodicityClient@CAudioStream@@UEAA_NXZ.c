/*
 * XREFs of ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x1800438B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsStrictPeriodicityClient(CAudioStream *this)
{
  return *((_DWORD *)this + 82) == 1;
}
