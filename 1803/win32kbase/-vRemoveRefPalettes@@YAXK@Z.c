/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0067020
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgNextOwned @ 0x1C002B7B0 (HmgNextOwned.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C003E284 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F93C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

void __fastcall vRemoveRefPalettes(int a1)
{
  unsigned int Owned; // edi
  __int64 v3; // rdx
  int v4; // r8d
  HPALETTE v5; // [rsp+38h] [rbp+10h] BYREF
  struct OBJECT *v6; // [rsp+40h] [rbp+18h] BYREF
  struct _ERESOURCE *v7; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  Owned = 0;
  while ( 1 )
  {
    Owned = HmgNextOwned(Owned, a1, (unsigned __int64 *)&v5);
    if ( !Owned )
      break;
    if ( (BYTE2(v5) & 0x1F) == 8 )
    {
      v7 = (struct _ERESOURCE *)ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v6, v5);
      if ( v6 )
      {
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v6);
        HmgDecrementShareReferenceCountEx(v6, 0LL);
      }
      SEMOBJ::vUnlock(&v7, v3, v4);
    }
  }
}
