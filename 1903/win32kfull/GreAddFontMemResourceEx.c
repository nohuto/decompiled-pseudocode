/*
 * XREFs of GreAddFontMemResourceEx @ 0x1C02871A8
 * Callers:
 *     NtGdiAddFontMemResourceEx @ 0x1C02A71A0 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C02700C0 (-bInitPrivatePFT@@YAHXZ.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C02706FC (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C0286B24 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C028751C (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C02879F0 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall GreAddFontMemResourceEx(
        struct tagDOWNLOADFONTHEADER *a1,
        int a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        _DWORD *a5)
{
  __int64 v9; // rdi
  int v10; // eax
  struct _FONTFILEVIEW **v12; // [rsp+30h] [rbp-61h] BYREF
  struct PFT **v13; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v14[160]; // [rsp+40h] [rbp-51h] BYREF
  struct tagDOWNLOADFONTHEADER *v15; // [rsp+F0h] [rbp+5Fh] BYREF
  int v16; // [rsp+F8h] [rbp+67h] BYREF

  memset(v14, 0, 0x78uLL);
  v9 = 0LL;
  v15 = a1;
  v12 = 0LL;
  v10 = cMapRemoteFonts(&v15, (unsigned int)(a2 + 16), v14, 2LL);
  if ( v15 && v10 )
  {
    v16 = 1;
    if ( (unsigned int)bCreateFontFileView((const struct _FONTFILEVIEW *)v14, v15, a2 + 16, &v12, 1u)
      && (gpPFTPrivate || (unsigned int)bInitPrivatePFT()) )
    {
      v13 = gpPFTPrivate;
      v9 = PUBLIC_PFTOBJ::hLoadMemFonts((struct PFT **)&v13, v12, a3, a4, (unsigned int *)&v15, &v16);
      if ( v9 )
      {
        *a5 = (_DWORD)v15;
        return v9;
      }
      if ( !v16 )
        return v9;
    }
    vUnmapRemoteFonts(v14);
  }
  return v9;
}
