/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0256BA4
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0260AB0 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C026E9D0 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C007DB14 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C007DEA8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C007F36C (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C009191C (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00CA1C0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0115480 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C0125000 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C0125CC4 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0126420 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C01350F8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02908D8 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadRemoteFonts(
        PUBLIC_PFTOBJ *this,
        struct XDCOBJ *a2,
        struct _FONTFILEVIEW **a3,
        __int64 a4,
        struct tagDESIGNVECTOR *Src,
        struct _UNIVERSAL_FONT_ID *a6,
        int *a7)
{
  struct _FONTFILEVIEW **v7; // r14
  unsigned int v8; // edi
  __int64 v9; // r15
  unsigned int v10; // esi
  char *v11; // rax
  void **v12; // rbx
  unsigned int *v13; // r8
  unsigned int *v14; // r10
  struct _FONTFILEVIEW **v15; // rdx
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned int FontFile; // r12d
  __int64 v19; // rsi
  struct PFF *v20; // rbx
  struct _UNIVERSAL_FONT_ID *v21; // r9
  unsigned int v22; // r8d
  PUBLIC_PFTOBJ *v23; // rsi
  __int64 v24; // rcx
  struct PFF **v25; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  unsigned int v28; // [rsp+90h] [rbp-80h]
  unsigned __int64 v29; // [rsp+98h] [rbp-78h] BYREF
  HDEV v30; // [rsp+A0h] [rbp-70h] BYREF
  struct _UNIVERSAL_FONT_ID *v31; // [rsp+A8h] [rbp-68h]
  PUBLIC_PFTOBJ *v32; // [rsp+B0h] [rbp-60h]
  struct PFF *v33[3]; // [rsp+B8h] [rbp-58h] BYREF
  HDEV v34; // [rsp+D0h] [rbp-40h] BYREF
  _BYTE v35[8]; // [rsp+D8h] [rbp-38h] BYREF
  int *v36; // [rsp+E0h] [rbp-30h]
  XDCOBJ *v37; // [rsp+E8h] [rbp-28h]
  struct PFF **v38; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v39; // [rsp+F8h] [rbp-18h] BYREF
  char v40; // [rsp+100h] [rbp-10h] BYREF
  _BYTE v41[32]; // [rsp+110h] [rbp+0h] BYREF
  wchar_t Dst[32]; // [rsp+130h] [rbp+20h] BYREF

  v7 = a3;
  v31 = a6;
  v8 = 0;
  v36 = a7;
  v9 = (unsigned int)a4;
  v37 = a2;
  v32 = this;
  v29 = 0LL;
  if ( Src )
    v10 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v10 = 0;
  v28 = v10;
  if ( ScrutinizeFontLoad(2LL, 0LL, (__int64)a3, a4) >= 0 )
  {
    if ( (unsigned int)v9 <= 4 )
    {
      v12 = (void **)v41;
      v13 = (unsigned int *)&v40;
    }
    else
    {
      v11 = (char *)PALLOCMEM2((unsigned int)(16 * v9), 1986422343LL, 1);
      v12 = (void **)v11;
      if ( !v11 )
        goto LABEL_32;
      v13 = (unsigned int *)(v11 + 32);
    }
    if ( (_DWORD)v9 )
    {
      v14 = v13;
      v15 = v7;
      v16 = v9;
      do
      {
        *(struct _FONTFILEVIEW **)((char *)v15 + (char *)v12 - (char *)v7) = (struct _FONTFILEVIEW *)*((_QWORD *)*v15 + 2);
        v17 = (__int64)*v15++;
        *v14++ = *(_DWORD *)(v17 + 24);
        --v16;
      }
      while ( v16 );
    }
    vLoadFontFileView(
      0LL,
      0,
      v7,
      v9,
      v12,
      v13,
      Src,
      v10,
      &v29,
      (struct PDEV **)&v30,
      (struct _FNTCHECKSUM *)v35,
      1,
      0LL);
    v34 = v30;
    if ( v12 != (void **)v41 )
      Win32FreePool(v12);
    if ( v29 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v34, v29, 2u, 0, 0LL);
      if ( FontFile - 1 <= 0xFFFFFFFD )
      {
        swprintf_s(
          Dst,
          0x1EuLL,
          L"REMOTE-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulRemoteUnique));
        v19 = -1LL;
        do
          ++v19;
        while ( Dst[v19] );
        LODWORD(Size) = v28;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v33,
          FontFile,
          Dst,
          v19 + 1,
          v9,
          Src,
          Size,
          v29,
          v30,
          0LL,
          *(struct PFT **)v32,
          0x20u,
          0x20u,
          (struct _FNTCHECKSUM *)v35,
          v7,
          v31,
          0);
        v20 = v33[0];
        if ( v33[0] )
        {
          v21 = v31;
          v7 = 0LL;
          *v36 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v33, Dst, FontFile, v21, 0LL) )
          {
            v39 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v8 = PFFOBJ::bAddHash((PFFOBJ *)v33, 0);
            if ( v8 )
            {
              v22 = v19 + 1;
              v23 = v32;
              if ( PUBLIC_PFTOBJ::pPFFGet(v32, Dst, v22, v9, Src, v28, &v38, 0) )
              {
                v8 = 0;
              }
              else
              {
                v8 = XDCOBJ::bAddRemoteFont(v37, v20);
                if ( v8 )
                {
                  v24 = *(_QWORD *)v23;
                  if ( (*((_DWORD *)v20 + 13) & 0x200) == 0 )
                    ++*(_DWORD *)(v24 + 32);
                  ++*(_DWORD *)(v24 + 28);
                  v25 = v38;
                  if ( *v38 )
                    *((_QWORD *)*v38 + 2) = v20;
                  *((_QWORD *)v20 + 1) = *v25;
                  *((_QWORD *)v20 + 2) = 0LL;
                  *v25 = v20;
                  PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v33);
                }
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v33);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v39);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v33);
      }
    }
  }
LABEL_32:
  if ( v7 )
    Win32FreePool(v7);
  return v8;
}
