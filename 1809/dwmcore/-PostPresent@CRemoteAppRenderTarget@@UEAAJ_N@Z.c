/*
 * XREFs of ?PostPresent@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x18015FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18006E0A0 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::PostPresent(CRemoteAppRenderTarget *this)
{
  ReleaseInterface<CDisplay>((__int64 *)this + 16);
  return 0LL;
}
