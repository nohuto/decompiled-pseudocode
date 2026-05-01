/*
 * XREFs of ?_SHIsMenuSeparator2@@YAHPEAUHMENU__@@HPEAH@Z @ 0x180378188
 * Callers:
 *     ?_SHPrettyMenu@@YAXPEAUHMENU__@@@Z @ 0x180378234 (-_SHPrettyMenu@@YAXPEAUHMENU__@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 */

__int64 __fastcall _SHIsMenuSeparator2(HMENU hmenu, UINT item, int *a3)
{
  int v3; // esi
  int *v4; // r14
  struct tagMENUITEMINFOW mii; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0;
  mii.cbSize = 80;
  v4 = (int *)&v9;
  if ( a3 )
    v4 = a3;
  *v4 = 0;
  memset_0(&mii.fMask, 0, 0x4CuLL);
  mii.fMask = 18;
  if ( !GetMenuItemInfoW(hmenu, item, 1, &mii) || (mii.fType & 0x800) == 0 )
    return 0LL;
  if ( LOWORD(mii.wID) != 0xFFFF )
  {
    if ( mii.wID )
      v3 = 1;
  }
  *v4 = v3;
  return 1LL;
}
