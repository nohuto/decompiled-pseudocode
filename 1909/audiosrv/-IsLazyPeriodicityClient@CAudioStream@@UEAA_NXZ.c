/*
 * XREFs of ?IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x180048BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsLazyPeriodicityClient(CAudioStream *this)
{
  return *((_DWORD *)this + 82) == 2;
}
