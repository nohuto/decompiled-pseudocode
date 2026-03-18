/*
 * XREFs of IsWindowContentProtected @ 0x1C008DB28
 * Callers:
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0032864 (CreateOrGetRedirectionBitmap.c)
 *     ProtectedContentAccessCheck @ 0x1C00613B8 (ProtectedContentAccessCheck.c)
 *     CreateSprite @ 0x1C008D5A8 (CreateSprite.c)
 *     _VisrgnFromWindow @ 0x1C01036E4 (_VisrgnFromWindow.c)
 * Callees:
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL) & 1;
}
