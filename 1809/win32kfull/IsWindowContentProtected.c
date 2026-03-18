/*
 * XREFs of IsWindowContentProtected @ 0x1C00722D4
 * Callers:
 *     ProtectedContentAccessCheck @ 0x1C00411D0 (ProtectedContentAccessCheck.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0077534 (CreateOrGetRedirectionBitmap.c)
 *     CreateSprite @ 0x1C007C114 (CreateSprite.c)
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     _VisrgnFromWindow @ 0x1C011D5A8 (_VisrgnFromWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL) & 1;
}
