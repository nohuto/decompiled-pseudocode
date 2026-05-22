/*
 * XREFs of ?ShouldObserve@InputRedirectionTarget@@UEAA_NXZ @ 0x1800D2030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall InputRedirectionTarget::ShouldObserve(InputRedirectionTarget *this)
{
  return *((_BYTE *)this + 52);
}
