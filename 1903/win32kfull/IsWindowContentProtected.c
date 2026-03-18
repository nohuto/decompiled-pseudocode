/*
 * XREFs of IsWindowContentProtected @ 0x1C0049068
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C002C3F4 (CreateOrGetRedirectionBitmap.c)
 *     CreateSprite @ 0x1C0048AE8 (CreateSprite.c)
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     ProtectedContentAccessCheck @ 0x1C00BFCD8 (ProtectedContentAccessCheck.c)
 *     _VisrgnFromWindow @ 0x1C0128638 (_VisrgnFromWindow.c)
 * Callees:
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL) & 1;
}
