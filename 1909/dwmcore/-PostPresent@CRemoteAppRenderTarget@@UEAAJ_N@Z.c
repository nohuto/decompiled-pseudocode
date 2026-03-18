/*
 * XREFs of ?PostPresent@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x1801A4470
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::PostPresent(CRemoteAppRenderTarget *this)
{
  ReleaseInterface<CDisplay>((__int64 *)this + 16);
  return 0LL;
}
