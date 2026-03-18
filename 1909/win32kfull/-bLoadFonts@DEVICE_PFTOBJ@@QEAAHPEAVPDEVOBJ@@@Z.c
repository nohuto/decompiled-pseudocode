/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C026FA74
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0114B4C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0090574 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0094110 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00946F0 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00F8AB4 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C010B534 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C010C928 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C011A00C (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02B3B90 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2)
{
  BOOL v5; // r15d
  HDEV v6; // rdi
  struct DHPDEV__ *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct PFF **v11; // rdx
  size_t Size; // [rsp+30h] [rbp-59h]
  _QWORD v13[10]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v14; // [rsp+100h] [rbp+77h] BYREF
  struct PFF **v15; // [rsp+108h] [rbp+7Fh] BYREF

  if ( ScrutinizeFontLoad(3u, 0LL) < 0 )
    return 1LL;
  v14 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v5 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v15) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  if ( !v5 )
  {
    v6 = *(HDEV *)a2;
    v14 = 0LL;
    v7 = (struct DHPDEV__ *)*((_QWORD *)v6 + 225);
    v8 = PDEVOBJ::cFonts(a2);
    LODWORD(Size) = 0;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v13,
      v8,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      v6,
      v7,
      *(struct PFT **)this,
      0,
      0,
      (struct _FNTCHECKSUM *)&v14,
      0LL,
      0LL,
      0);
    if ( v13[0] && (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v13, a2) )
    {
      v14 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v15) )
      {
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v13, 0) )
        {
          v9 = v13[0];
          v10 = *(_QWORD *)this;
          if ( (*(_DWORD *)(v13[0] + 52LL) & 0x200) == 0 )
            ++*(_DWORD *)(v10 + 32);
          ++*(_DWORD *)(v10 + 28);
          v11 = v15;
          if ( *v15 )
            *((_QWORD *)*v15 + 2) = v9;
          *(_QWORD *)(v9 + 8) = *v11;
          *(_QWORD *)(v9 + 16) = 0LL;
          *v11 = (struct PFF *)v9;
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v13);
          v5 = 1;
        }
        else
        {
          PFFOBJ::vRemoveHash((PFFOBJ *)v13);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v14);
    }
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v13);
  }
  return v5;
}
