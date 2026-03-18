/*
 * XREFs of ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0126420
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C007EB54 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C015F1C4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0256BA4 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0256F30 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00CBC24 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C00CBC84 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x1C029D79C (-bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z.c)
 */

void __fastcall PFFMEMOBJ::~PFFMEMOBJ(PFFMEMOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // ecx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*((_BYTE *)this + 16) & 2) == 0 )
  {
    v2 = *(_QWORD *)this;
    if ( v2 )
    {
      PopThreadGuardedObject(v2 + 160);
      if ( *((_DWORD *)this + 2) )
      {
        v3 = *(_QWORD *)(*(_QWORD *)this + 144LL);
        v4 = *(_DWORD *)(v3 + 4);
        if ( (*((_DWORD *)this + 5) & 0x2C) != 0 )
          *(_DWORD *)(v3 + 4) = --v4;
        else
          --*(_DWORD *)v3;
        if ( !v4 && !*(_DWORD *)v3 )
          PFFOBJ::bRemovePvtData(this, (struct tagPvtData *)v3);
      }
      PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)v5);
      vCleanupFontFile((struct PFFCLEANUP *)v5);
    }
  }
}
