/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0256F30
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C026E8CC (GreAddFontMemResourceEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C007DB14 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C007DEA8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C007F36C (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C009191C (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00CA1C0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0115480 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0122C48 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C0125000 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C0125CC4 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0126420 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C01350F8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::hLoadMemFonts(
        struct PFT **this,
        struct _FONTFILEVIEW **a2,
        struct tagDESIGNVECTOR *a3,
        __int64 a4,
        unsigned int *a5,
        int *a6)
{
  struct _FONTFILEVIEW **v6; // rsi
  struct _FONTFILEVIEW *v7; // rdx
  unsigned int v8; // ebx
  __int64 v11; // r15
  unsigned int FontFile; // eax
  unsigned int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rbx
  struct PFT *v16; // rcx
  struct PFF **v17; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  unsigned int v20; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v21; // [rsp+94h] [rbp-7Ch]
  unsigned __int64 v22; // [rsp+98h] [rbp-78h] BYREF
  HDEV v23; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v24[3]; // [rsp+A8h] [rbp-68h] BYREF
  void *v25; // [rsp+C0h] [rbp-50h] BYREF
  HDEV v26; // [rsp+C8h] [rbp-48h] BYREF
  _BYTE v27[8]; // [rsp+D0h] [rbp-40h] BYREF
  int *v28; // [rsp+D8h] [rbp-38h]
  struct PFF **v29; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-28h] BYREF
  wchar_t Dst[32]; // [rsp+F0h] [rbp-20h] BYREF

  v6 = a2;
  v7 = *a2;
  v8 = a4;
  v28 = a6;
  v21 = a4;
  v11 = 0LL;
  v25 = (void *)*((_QWORD *)v7 + 2);
  v20 = *((_DWORD *)v7 + 6);
  v22 = 0LL;
  if ( ScrutinizeFontLoad(1LL, 0LL, (__int64)a3, a4) >= 0 )
  {
    vLoadFontFileView(
      0LL,
      0,
      v6,
      1u,
      &v25,
      &v20,
      a3,
      v8,
      &v22,
      (struct PDEV **)&v23,
      (struct _FNTCHECKSUM *)v27,
      1,
      0LL);
    v26 = v23;
    if ( v22 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v26, v22, 2u, 0, 0LL);
      v13 = FontFile;
      if ( FontFile - 1 <= 0xFFFFFFFD )
      {
        *a5 = FontFile;
        swprintf_s(
          Dst,
          0x1EuLL,
          L"MEMORY-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulMemoryUnique));
        v14 = -1LL;
        do
          ++v14;
        while ( Dst[v14] );
        LODWORD(Size) = v8;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v24,
          v13,
          Dst,
          v14 + 1,
          1u,
          a3,
          Size,
          v22,
          v23,
          0LL,
          *this,
          0x10u,
          0x30u,
          (struct _FNTCHECKSUM *)v27,
          v6,
          0LL,
          0);
        v15 = v24[0];
        if ( v24[0] )
        {
          v6 = 0LL;
          *v28 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v24, Dst, v13, 0LL, 0LL) )
          {
            v30 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v24, 0) )
            {
              if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, (int)v14 + 1, 1, a3, v21, &v29, 0) )
              {
                v16 = *this;
                if ( (*(_DWORD *)(v15 + 52) & 0x200) == 0 )
                  ++*((_DWORD *)v16 + 8);
                ++*((_DWORD *)v16 + 7);
                v17 = v29;
                if ( *v29 )
                  *((_QWORD *)*v29 + 2) = v15;
                *(_QWORD *)(v15 + 8) = *v17;
                *(_QWORD *)(v15 + 16) = 0LL;
                *v17 = (struct PFF *)v15;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v24);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v24);
                v11 = *(unsigned int *)(v15 + 140);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v24);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v30);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v24);
      }
    }
  }
  if ( v6 )
    Win32FreePool(v6);
  return v11;
}
