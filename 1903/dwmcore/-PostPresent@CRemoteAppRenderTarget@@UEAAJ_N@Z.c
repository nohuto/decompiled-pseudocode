/*
 * XREFs of ?PostPresent@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x1801A5D30
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::PostPresent(CRemoteAppRenderTarget *this)
{
  ReleaseInterface<CDisplay>((__int64 *)this + 16);
  return 0LL;
}
