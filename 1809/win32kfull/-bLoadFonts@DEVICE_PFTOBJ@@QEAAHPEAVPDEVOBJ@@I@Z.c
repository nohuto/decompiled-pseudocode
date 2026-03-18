/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C015F1C4
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0130AE4 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C007DB14 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C007DEA8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C007EB04 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0115480 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C0125CC4 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0126420 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C01350F8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C0162480 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  BOOL v8; // r15d
  unsigned __int64 v9; // rdx
  signed __int32 v10; // ett
  SEMOBJ *v11; // rcx
  unsigned __int64 v12; // rdx
  signed __int32 v13; // ett
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct PFF **v16; // rcx
  unsigned __int64 v17; // rdx
  signed __int32 v18; // ett
  unsigned __int64 v19; // rdx
  signed __int32 v20; // ett
  size_t Size; // [rsp+30h] [rbp-69h]
  HDEV v22; // [rsp+40h] [rbp-59h]
  struct DHPDEV__ *v23; // [rsp+48h] [rbp-51h]
  struct PFT *v24; // [rsp+50h] [rbp-49h]
  struct PFF **v25; // [rsp+90h] [rbp-9h] BYREF
  __int64 v26; // [rsp+98h] [rbp-1h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v29; // [rsp+B0h] [rbp+17h] BYREF
  _QWORD v30[3]; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 v31; // [rsp+118h] [rbp+7Fh] BYREF

  v6 = a3;
  if ( ScrutinizeFontLoad(3LL, 0LL, a3, a4) < 0 )
    return 1LL;
  v26 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v8 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v25) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  if ( !v8 )
  {
    v24 = *(struct PFT **)this;
    v23 = *(struct DHPDEV__ **)(*(_QWORD *)a2 + 1800LL);
    v22 = *(HDEV *)a2;
    LODWORD(Size) = 0;
    v31 = 0LL;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v30,
      v6,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      v22,
      v23,
      v24,
      0,
      0,
      (struct _FNTCHECKSUM *)&v31,
      0LL,
      0LL,
      0);
    if ( v30[0] )
    {
      if ( (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v30, a2, v6) )
      {
        v28 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v25) && (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x40) == 0 )
        {
          if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v30, 0) )
          {
            v14 = v30[0];
            v15 = *(_QWORD *)this;
            if ( (*(_DWORD *)(v30[0] + 52LL) & 0x200) == 0 )
              ++*(_DWORD *)(v15 + 32);
            ++*(_DWORD *)(v15 + 28);
            v16 = v25;
            if ( *v25 )
              *((_QWORD *)*v25 + 2) = v14;
            *(_QWORD *)(v14 + 8) = *v16;
            *(_QWORD *)(v14 + 16) = 0LL;
            *v16 = (struct PFF *)v14;
            PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v30);
            v8 = 1;
            *(_DWORD *)(*(_QWORD *)a2 + 3568LL) = v6;
            v17 = *(_QWORD *)a2;
            _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
            do
              v18 = *(_DWORD *)(v17 + 40);
            while ( v18 != _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 40), v18 | 0x40, v18) );
          }
          else
          {
            PFFOBJ::vRemoveHash((PFFOBJ *)v30);
            v12 = *(_QWORD *)a2;
            _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
            do
              v13 = *(_DWORD *)(v12 + 40);
            while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 40), v13 | 0x40, v13) );
          }
        }
        v11 = (SEMOBJ *)&v28;
      }
      else
      {
        v27 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x40) == 0 )
        {
          v9 = *(_QWORD *)a2;
          _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
          do
            v10 = *(_DWORD *)(v9 + 40);
          while ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 40), v10 | 0x40, v10) );
        }
        v11 = (SEMOBJ *)&v27;
      }
    }
    else
    {
      v29 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x40) == 0 )
      {
        v19 = *(_QWORD *)a2;
        _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
        do
          v20 = *(_DWORD *)(v19 + 40);
        while ( v20 != _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 40), v20 | 0x40, v20) );
      }
      v11 = (SEMOBJ *)&v29;
    }
    SEMOBJ::vUnlock(v11);
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v30);
  }
  return v8;
}
