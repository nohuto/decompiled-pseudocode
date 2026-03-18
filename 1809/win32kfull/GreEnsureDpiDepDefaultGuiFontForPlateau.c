/*
 * XREFs of GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C0277BB0
 * Callers:
 *     NtGdiEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C0291B90 (NtGdiEnsureDpiDepDefaultGuiFontForPlateau.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     hfontInitDefaultGuiFont @ 0x1C036D8B4 (hfontInitDefaultGuiFont.c)
 */

void __fastcall GreEnsureDpiDepDefaultGuiFontForPlateau(unsigned int a1)
{
  int v2; // ecx
  int v3; // edx
  __int64 v4; // rdi
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 != (unsigned __int16)DrvGetLogPixels() && a1 != 96 && a1 == 24 * ((int)a1 / 24) )
  {
    v2 = a1 - 120;
    if ( a1 - 120 <= 0x168 )
    {
      v3 = v2 / 24;
      if ( v2 / 24 >= 0 )
      {
        v4 = v3;
        if ( !gahDpiDepDefaultGuiFonts[v3] )
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v5, gDpiDepDefaultGuiFontsPushLock);
          if ( !gahDpiDepDefaultGuiFonts[v4] )
            gahDpiDepDefaultGuiFonts[v4] = (void *)hfontInitDefaultGuiFont(a1);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
        }
      }
    }
  }
}
