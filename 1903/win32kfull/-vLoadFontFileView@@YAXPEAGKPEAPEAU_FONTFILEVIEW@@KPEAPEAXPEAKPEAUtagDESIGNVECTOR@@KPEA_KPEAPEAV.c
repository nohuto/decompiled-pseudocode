/*
 * XREFs of ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C007C2DC
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C004C338 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C027036C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C02706FC (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     UmfdLoadFontFileView @ 0x1C007C3D4 (UmfdLoadFontFileView.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C007CB9C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vLoadFontFileView(
        unsigned __int16 *a1,
        unsigned int a2,
        struct _FONTFILEVIEW **a3,
        __int64 a4,
        void **a5,
        unsigned int *a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8,
        unsigned __int64 *a9,
        struct PDEV **a10,
        struct _FNTCHECKSUM *a11,
        int a12,
        int *a13)
{
  __int64 v15; // [rsp+70h] [rbp-18h] BYREF

  UmfdHostLifeTimeManager::EnsureUmfdHost();
  v15 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  *((_DWORD *)a11 + 1) = 0;
  *(_DWORD *)a11 = 0;
  UmfdLoadFontFileView(
    a1,
    a2,
    (char)a5,
    (char)a6,
    a7,
    a8,
    (__int64)a9,
    (__int64)a10,
    (unsigned int *)a11,
    a12,
    (__int64)a13);
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
}
