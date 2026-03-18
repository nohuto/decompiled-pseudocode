/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C027018C
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C013AB4C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0077CC0 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00782A0 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00782DC (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C007A238 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C0130C44 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0131E28 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C013FB2C (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02B4040 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2, __int64 a3, __int64 a4)
{
  BOOL v7; // r15d
  HDEV v8; // rdi
  struct DHPDEV__ *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct PFF **v13; // rdx
  size_t Size; // [rsp+30h] [rbp-59h]
  _QWORD v15[10]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v16; // [rsp+100h] [rbp+77h] BYREF
  struct PFF **v17; // [rsp+108h] [rbp+7Fh] BYREF

  if ( ScrutinizeFontLoad(3LL, 0LL, a3, a4) < 0 )
    return 1LL;
  v16 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v7 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v17) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  if ( !v7 )
  {
    v8 = *(HDEV *)a2;
    v16 = 0LL;
    v9 = (struct DHPDEV__ *)*((_QWORD *)v8 + 225);
    v10 = PDEVOBJ::cFonts(a2);
    LODWORD(Size) = 0;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v15,
      v10,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      v8,
      v9,
      *(struct PFT **)this,
      0,
      0,
      (struct _FNTCHECKSUM *)&v16,
      0LL,
      0LL,
      0);
    if ( v15[0] && (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v15, a2) )
    {
      v16 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v17) )
      {
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v15, 0) )
        {
          v11 = v15[0];
          v12 = *(_QWORD *)this;
          if ( (*(_DWORD *)(v15[0] + 52LL) & 0x200) == 0 )
            ++*(_DWORD *)(v12 + 32);
          ++*(_DWORD *)(v12 + 28);
          v13 = v17;
          if ( *v17 )
            *((_QWORD *)*v17 + 2) = v11;
          *(_QWORD *)(v11 + 8) = *v13;
          *(_QWORD *)(v11 + 16) = 0LL;
          *v13 = (struct PFF *)v11;
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v15);
          v7 = 1;
        }
        else
        {
          PFFOBJ::vRemoveHash((PFFOBJ *)v15);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v16);
    }
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v15);
  }
  return v7;
}
