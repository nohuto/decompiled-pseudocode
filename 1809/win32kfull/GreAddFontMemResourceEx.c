/*
 * XREFs of GreAddFontMemResourceEx @ 0x1C026E8CC
 * Callers:
 *     NtGdiAddFontMemResourceEx @ 0x1C02915F0 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C0256AC0 (-bInitPrivatePFT@@YAHXZ.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0256F30 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C026E284 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C026EBE8 (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C026F0C0 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall GreAddFontMemResourceEx(
        struct tagDOWNLOADFONTHEADER *a1,
        int a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        _DWORD *a5)
{
  __int64 v6; // rbx
  int v9; // eax
  struct _FONTFILEVIEW **v11; // [rsp+30h] [rbp-51h] BYREF
  struct PFT **v12; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v13[128]; // [rsp+40h] [rbp-41h] BYREF
  struct tagDOWNLOADFONTHEADER *v14; // [rsp+E0h] [rbp+5Fh] BYREF
  int v15; // [rsp+E8h] [rbp+67h] BYREF

  v14 = a1;
  v6 = 0LL;
  v11 = 0LL;
  v9 = cMapRemoteFonts(&v14, (unsigned int)(a2 + 16), v13, 2LL);
  if ( v14 && v9 )
  {
    v15 = 1;
    if ( (unsigned int)bCreateFontFileView((const struct _FONTFILEVIEW *)v13, v14, a2 + 16, &v11, 1u)
      && (gpPFTPrivate || bInitPrivatePFT()) )
    {
      v12 = gpPFTPrivate;
      v6 = PUBLIC_PFTOBJ::hLoadMemFonts((struct PFT **)&v12, v11, a3, a4, (unsigned int *)&v14, &v15);
      if ( v6 )
      {
        *a5 = (_DWORD)v14;
        return v6;
      }
      if ( !v15 )
        return v6;
    }
    vUnmapRemoteFonts(v13);
  }
  return v6;
}
