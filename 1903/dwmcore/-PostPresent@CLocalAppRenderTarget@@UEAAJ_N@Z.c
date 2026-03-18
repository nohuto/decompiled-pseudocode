/*
 * XREFs of ?PostPresent@CLocalAppRenderTarget@@UEAAJ_N@Z @ 0x180250760
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CLocalAppRenderTarget::PostPresent(CLocalAppRenderTarget *this)
{
  ReleaseInterface<CDisplay>((__int64 *)this + 15);
  return 0LL;
}
