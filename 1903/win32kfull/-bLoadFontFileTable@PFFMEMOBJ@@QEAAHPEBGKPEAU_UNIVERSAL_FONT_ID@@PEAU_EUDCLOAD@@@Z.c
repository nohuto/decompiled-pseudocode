/*
 * XREFs of ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C004723C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C004C338 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C027036C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C02706FC (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C0044A54 (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0047334 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C0047C40 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C0291FBC (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadFontFileTable(
        PFFMEMOBJ *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct _UNIVERSAL_FONT_ID *a4,
        struct _EUDCLOAD *a5)
{
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v10; // esi
  struct _EUDCLOAD *v11; // r15
  struct _IFIMETRICS *v12; // rax
  struct _IFIMETRICS *v13; // rbp
  void (__fastcall *v15)(struct _IFIMETRICS *, unsigned __int64); // rax
  _QWORD v16[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  struct _UNIVERSAL_FONT_ID *v18; // [rsp+A8h] [rbp+20h]

  v18 = a4;
  v8 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  v16[0] = v8;
  if ( !(unsigned int)PFFMEMOBJ::bAllocPFEData(this, a3) )
    return 0;
  v9 = 1;
  v10 = 1;
  if ( a3 )
  {
    v11 = a5;
    while ( 1 )
    {
      v12 = PDEVOBJ::QueryFont(
              (PDEVOBJ *)v16,
              *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL),
              *(_QWORD *)(*(_QWORD *)this + 80LL),
              v10,
              &v17);
      v13 = v12;
      if ( !v12 )
        break;
      if ( bReadyToInitializeFontAssocDefault
        && !v11
        && !(unsigned int)FindDefaultLinkedFontEntry((wchar_t *)((char *)v12 + v12->dpwszFamilyName), a2)
        || !PFFMEMOBJ::bAddEntry(this, v10, 0LL, 0LL, v13, v17, v18, v11) )
      {
        v15 = *(void (__fastcall **)(struct _IFIMETRICS *, unsigned __int64))(v8 + 3024);
        if ( v15 )
          v15(v13, v17);
        return 0;
      }
      if ( ++v10 > a3 )
        return v9;
    }
    return 0;
  }
  return v9;
}
