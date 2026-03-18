/*
 * XREFs of ?PostPresent@CLocalAppRenderTarget@@UEAAJ_N@Z @ 0x18024EFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CLocalAppRenderTarget::PostPresent(CLocalAppRenderTarget *this)
{
  ReleaseInterface<CDisplay>((__int64 *)this + 15);
  return 0LL;
}
