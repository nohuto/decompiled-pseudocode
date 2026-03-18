/*
 * XREFs of ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0131E28
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C004C338 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C027018C (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C027036C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C02706FC (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x1C02B42B4 (-bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02B43C0 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFMEMOBJ::~PFFMEMOBJ(PFFMEMOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // ecx

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
      PFFOBJ::vPFFC_DeleteAndCleanup(this);
    }
  }
}
