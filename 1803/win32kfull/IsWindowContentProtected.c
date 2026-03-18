/*
 * XREFs of IsWindowContentProtected @ 0x1C00C4740
 * Callers:
 *     ProtectedContentAccessCheck @ 0x1C0034AF0 (ProtectedContentAccessCheck.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0074C84 (CreateOrGetRedirectionBitmap.c)
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 *     CreateSprite @ 0x1C00C4558 (CreateSprite.c)
 *     _VisrgnFromWindow @ 0x1C01B1B64 (_VisrgnFromWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return RealGetProp(*(_QWORD *)(a1 + 120), (unsigned __int16)atomDispAffinity, 1LL) & 1;
}
