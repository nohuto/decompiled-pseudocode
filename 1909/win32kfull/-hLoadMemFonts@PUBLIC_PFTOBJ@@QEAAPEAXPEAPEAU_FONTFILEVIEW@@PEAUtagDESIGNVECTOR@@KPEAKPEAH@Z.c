/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026FFE4
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C0286AE8 (GreAddFontMemResourceEx.c)
 * Callees:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C008BC0C (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0090574 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C009377C (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0094110 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00F8AB4 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0107F0C (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C010AC1C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C010B534 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C010C928 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C011A00C (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C012112C (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::hLoadMemFonts(
        struct PFT **this,
        struct _FONTFILEVIEW **a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6)
{
  struct _FONTFILEVIEW **v6; // rsi
  struct _FONTFILEVIEW *v7; // rdx
  __int64 v11; // r15
  unsigned int v12; // eax
  unsigned int FontFile; // eax
  unsigned int v14; // r14d
  __int64 v15; // rdi
  __int64 v16; // rbx
  struct PFT *v17; // rcx
  struct PFF **v18; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  unsigned int v21; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v22; // [rsp+94h] [rbp-7Ch]
  unsigned __int64 v23; // [rsp+98h] [rbp-78h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-70h] BYREF
  HDEV v25; // [rsp+A8h] [rbp-68h] BYREF
  _QWORD v26[3]; // [rsp+B0h] [rbp-60h] BYREF
  void *v27; // [rsp+C8h] [rbp-48h] BYREF
  HDEV v28; // [rsp+D0h] [rbp-40h] BYREF
  int *v29; // [rsp+D8h] [rbp-38h]
  struct PFF **v30; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-28h] BYREF
  wchar_t Dst[32]; // [rsp+F0h] [rbp-20h] BYREF

  v6 = a2;
  v7 = *a2;
  v29 = a6;
  v22 = a4;
  v11 = 0LL;
  v27 = (void *)*((_QWORD *)v7 + 2);
  v12 = *((_DWORD *)v7 + 6);
  v24 = 0LL;
  v21 = v12;
  v23 = 0LL;
  if ( ScrutinizeFontLoad(1u, 0LL) >= 0 )
  {
    vLoadFontFileView(
      0LL,
      0,
      v6,
      1LL,
      &v27,
      &v21,
      a3,
      a4,
      &v23,
      (struct PDEV **)&v25,
      (struct _FNTCHECKSUM *)&v24,
      1,
      0LL);
    v28 = v25;
    if ( v23 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v28, v23, 2u, 0, 0LL);
      v14 = FontFile;
      if ( FontFile - 1 <= 0xFFFFFFFD )
      {
        *a5 = FontFile;
        swprintf_s(
          Dst,
          0x1EuLL,
          L"MEMORY-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulMemoryUnique));
        v15 = -1LL;
        do
          ++v15;
        while ( Dst[v15] );
        LODWORD(Size) = a4;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v26,
          v14,
          Dst,
          v15 + 1,
          1u,
          a3,
          Size,
          v23,
          v25,
          0LL,
          *this,
          0x10u,
          0x30u,
          (struct _FNTCHECKSUM *)&v24,
          v6,
          0LL,
          0);
        v16 = v26[0];
        if ( v26[0] )
        {
          v6 = 0LL;
          *v29 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v26, Dst, v14, 0LL, 0LL) )
          {
            v31 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v26, 0) )
            {
              if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, (int)v15 + 1, 1, a3, v22, &v30, 0) )
              {
                v17 = *this;
                if ( (*(_DWORD *)(v16 + 52) & 0x200) == 0 )
                  ++*((_DWORD *)v17 + 8);
                ++*((_DWORD *)v17 + 7);
                v18 = v30;
                if ( *v30 )
                  *((_QWORD *)*v30 + 2) = v16;
                *(_QWORD *)(v16 + 8) = *v18;
                *(_QWORD *)(v16 + 16) = 0LL;
                *v18 = (struct PFF *)v16;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v26);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v26);
                v11 = *(unsigned int *)(v16 + 140);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v26);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v31);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v26);
      }
    }
  }
  if ( v6 )
    Win32FreePool(v6);
  return v11;
}
