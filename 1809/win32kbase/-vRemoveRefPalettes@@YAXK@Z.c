/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x1C00801B8
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E580 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgNextOwned @ 0x1C00200E0 (HmgNextOwned.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0080238 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall vRemoveRefPalettes(int a1)
{
  unsigned int Owned; // edi
  HPALETTE v3; // [rsp+38h] [rbp+10h] BYREF
  struct OBJECT *v4; // [rsp+40h] [rbp+18h] BYREF
  HSEMAPHORE v5; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  Owned = 0;
  while ( 1 )
  {
    Owned = HmgNextOwned(Owned, a1, (unsigned __int64 *)&v3);
    if ( !Owned )
      break;
    if ( (BYTE2(v3) & 0x1F) == 8 )
    {
      v5 = ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v4, v3);
      if ( v4 )
      {
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v4);
        HmgDecrementShareReferenceCountEx(v4, 0LL);
      }
      SEMOBJ::vUnlock((PERESOURCE *)&v5);
    }
  }
}
