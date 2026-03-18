/*
 * XREFs of GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C0263FD0
 * Callers:
 *     NtGdiEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C027E8A0 (NtGdiEnsureDpiDepDefaultGuiFontForPlateau.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     hfontInitDefaultGuiFont @ 0x1C037E72C (hfontInitDefaultGuiFont.c)
 */

void __fastcall GreEnsureDpiDepDefaultGuiFontForPlateau(unsigned int a1)
{
  int v2; // edx
  __int64 v3; // rdi
  char v4; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 != (unsigned __int16)DrvGetLogPixels() && a1 != 96 && a1 == 24 * ((int)a1 / 24) && a1 - 120 <= 0x168 )
  {
    v2 = (int)(a1 - 120) / 24;
    if ( v2 >= 0 )
    {
      v3 = v2;
      if ( !gahDpiDepDefaultGuiFonts[v2] )
      {
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v4, gDpiDepDefaultGuiFontsPushLock);
        if ( !gahDpiDepDefaultGuiFonts[v3] )
          gahDpiDepDefaultGuiFonts[v3] = (void *)hfontInitDefaultGuiFont(a1);
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v4);
      }
    }
  }
}
