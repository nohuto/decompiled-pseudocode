/*
 * XREFs of GreGradientFill @ 0x1C0079484
 * Callers:
 *     NtGdiGradientFill @ 0x1C0079CF0 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C0157ED0 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002B5A8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C005A464 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0062450 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0075C14 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C007668C (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0079AE0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C0079AFC (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00FB020 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGradientFill(
        HDC a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v7; // edi
  unsigned int *v9; // r14
  struct _TRIVERTEX *v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  unsigned __int64 v14; // rbx
  size_t v15; // rcx
  char *v16; // rax
  unsigned int v17; // r9d
  char *v18; // r8
  signed __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // r10d
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // r11
  __int64 v25; // rbx
  __int64 v26; // rcx
  COLOR16 Alpha; // ax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r11d
  __int64 v31; // rax
  unsigned int v32; // r15d
  __int64 v33; // rdx
  SURFACE **v34; // r8
  __int64 v35; // r9
  ULONG v36; // ecx
  struct _POINTL *v37; // rbx
  __int64 v38; // r15
  LONG x; // edx
  char *v40; // rcx
  struct ECLIPOBJ *v41; // rdx
  SURFACE **v42; // r8
  __int64 v43; // r9
  int v44; // r14d
  struct REGION *v45; // rax
  DC *v46; // r15
  struct ECLIPOBJ *v47; // rdx
  __int64 v48; // r15
  __int64 v49; // rbx
  __int64 v50; // r8
  int inited; // eax
  char *v52; // rax
  __int64 v53; // rax
  BOOL (__stdcall *v54)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  unsigned int v56; // [rsp+60h] [rbp-A0h]
  unsigned int v57; // [rsp+64h] [rbp-9Ch]
  struct _POINTL v58[2]; // [rsp+70h] [rbp-90h] BYREF
  DC *v59[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  char *v61; // [rsp+98h] [rbp-68h]
  _QWORD v62[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v63[192]; // [rsp+B0h] [rbp-50h] BYREF
  struct _RECTL si128; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v65[4]; // [rsp+180h] [rbp+80h] BYREF
  char v66[76]; // [rsp+184h] [rbp+84h] BYREF
  __int64 v67; // [rsp+1D0h] [rbp+D0h]
  int v68; // [rsp+1D8h] [rbp+D8h]
  int v69; // [rsp+200h] [rbp+100h]
  __int64 v70; // [rsp+210h] [rbp+110h]

  v61 = a4;
  v7 = 0;
  v56 = a6;
  v9 = (unsigned int *)a4;
  v10 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v59, a1);
  if ( !v59[0] || (*((_DWORD *)v59[0] + 9) & 0x10000) != 0 )
  {
    v44 = 0;
    goto LABEL_61;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v63);
  if ( (unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v63, (struct XDCOBJ *)v59) )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v62, (struct XDCOBJ *)v59, 0x204u);
    if ( (*(_DWORD *)(v62[0] + 32LL) & 1) == 0 && a6 <= 1u )
    {
      v11 = 2LL * a5;
      if ( v11 > 0xFFFFFFFF
        || (v12 = 12LL * (unsigned int)v11, v12 > 0xFFFFFFFF)
        || (v13 = 2 * a5 + a3, v57 = 2 * a5, v13 < 2 * a5)
        || (v14 = 16LL * v13, v14 > 0xFFFFFFFF)
        || (v15 = (unsigned int)(v14 + v12), (unsigned int)v15 < (unsigned int)v12) )
      {
        v36 = 534;
      }
      else
      {
        if ( (unsigned int)v15 <= 0x2710000 )
        {
          v16 = (char *)PALLOCMEM2(v15, 1886221383LL, 0);
          v10 = (struct _TRIVERTEX *)v16;
          if ( v16 )
          {
            v17 = 0;
            v18 = &v16[(unsigned int)v14];
            if ( a3 )
            {
              v17 = a3;
              v19 = (char *)a2 - v16;
              v20 = a3;
              do
              {
                *(_OWORD *)v16 = *(_OWORD *)&v16[v19];
                v16 += 16;
                --v20;
              }
              while ( v20 );
            }
            v21 = 0;
            if ( a5 )
            {
              while ( 1 )
              {
                v22 = *v9;
                v23 = v9[1];
                LODWORD(v61) = v22;
                v58[0].x = v23;
                if ( v22 >= a3 || v23 >= a3 )
                  break;
                v24 = v17;
                v25 = v22;
                v10[v24].x = a2[v23].x;
                v10[v24].y = a2[v22].y;
                v26 = v17 + 1;
                LODWORD(v60) = v17 + 1;
                v10[v26].x = a2[v25].x;
                v10[v26].y = a2[v23].y;
                if ( a6 == 1 )
                {
                  v10[v17].Red = a2[v25].Red;
                  v10[v17].Green = a2[v25].Green;
                  v10[v17].Blue = a2[v25].Blue;
                  v10[v17].Alpha = a2[v25].Alpha;
                  v10[v17 + 1].Red = a2[v23].Red;
                  v10[v17 + 1].Green = a2[v23].Green;
                  v10[v17 + 1].Blue = a2[v23].Blue;
                  Alpha = a2[v23].Alpha;
                }
                else
                {
                  v10[v17].Red = a2[v23].Red;
                  v10[v17].Green = a2[v23].Green;
                  v10[v17].Blue = a2[v23].Blue;
                  v10[v17].Alpha = a2[v23].Alpha;
                  v10[v17 + 1].Red = a2[v25].Red;
                  v10[v17 + 1].Green = a2[v25].Green;
                  v10[v17 + 1].Blue = a2[v25].Blue;
                  Alpha = a2[v25].Alpha;
                }
                v10[v17 + 1].Alpha = Alpha;
                v28 = 2 * v21;
                v29 = 3 * v28;
                v30 = v60;
                ++v21;
                *(_DWORD *)&v18[4 * v29] = (_DWORD)v61;
                v9 += 2;
                *(_DWORD *)&v18[4 * v29 + 4] = v17;
                v31 = 3LL * (unsigned int)(v28 + 1);
                *(_DWORD *)&v18[4 * v29 + 8] = v30;
                LODWORD(v29) = v58[0].x;
                *(_DWORD *)&v18[4 * v31 + 4] = v17;
                v17 += 2;
                *(_DWORD *)&v18[4 * v31] = v29;
                *(_DWORD *)&v18[4 * v31 + 8] = v30;
                if ( v21 >= a5 )
                  goto LABEL_23;
              }
              EngSetLastError(0x57u);
              Win32FreePool(v10);
              goto LABEL_28;
            }
LABEL_23:
            v32 = 2 * a5;
            v9 = (unsigned int *)v18;
            v61 = v18;
            a2 = v10;
            v56 = 2;
            a3 = v17;
            goto LABEL_30;
          }
        }
        v36 = 8;
      }
      EngSetLastError(v36);
LABEL_28:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v63, v33, v34, v35);
      goto LABEL_64;
    }
    v32 = a5;
    v57 = a5;
LABEL_30:
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    if ( a3 )
    {
      v37 = (struct _POINTL *)a2;
      v38 = a3;
      do
      {
        v58[0] = *v37;
        EXFORMOBJ::bXform((EXFORMOBJ *)v62, v58, 1LL);
        x = v58[0].x;
        if ( (*(_DWORD *)(*((_QWORD *)v59[0] + 122) + 108LL) & 1) != 0 )
          x = v58[0].x + 1;
        v40 = (char *)v59[0] + 1024;
        if ( (*((_DWORD *)v59[0] + 10) & 1) == 0 )
          v40 = (char *)v59[0] + 1016;
        v37->x = x + *(_DWORD *)v40;
        v37->y = v58[0].y + *((_DWORD *)v59[0] + 2 * (*((_DWORD *)v59[0] + 10) & 1) + 255);
        v37 += 2;
        --v38;
      }
      while ( v38 );
      v32 = v57;
    }
    v44 = bCalcMeshExtent(a2, a3, v9, v32, v56, &si128);
    if ( v44 )
    {
      v45 = XDCOBJ::prgnEffRao(v59);
      v67 = 0LL;
      v68 = 0;
      v69 = 1;
      v70 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v65, v45, (struct ERECTL *)&si128, 0);
      if ( ERECTL::bEmpty((ERECTL *)v66) )
        goto LABEL_57;
      v46 = v59[0];
      if ( (*((_DWORD *)v59[0] + 9) & 0xE0) != 0 )
      {
        *(struct _RECTL *)&v58[0].x = si128;
        XDCOBJ::vAccumulate((XDCOBJ *)v59, v41, (struct ERECTL *)v58);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v59, v47, (__m128i *)v58);
        v46 = v59[0];
      }
      v48 = *((_QWORD *)v46 + 62);
      if ( !v48 )
      {
LABEL_57:
        v44 = 1;
      }
      else
      {
        ++*(_DWORD *)(v48 + 92);
        v49 = *(_QWORD *)(v48 + 48);
        v60 = 0LL;
        if ( (*(_DWORD *)(v49 + 40) & 0x80u) != 0 || *(_DWORD *)(v48 + 96) <= 3u )
        {
          inited = EXLATEOBJ::bInitXlateObj(
                     &v60,
                     *(_QWORD *)(*((_QWORD *)v59[0] + 122) + 248LL),
                     *((_DWORD *)v59[0] + 30),
                     (__int64)gppalRGB,
                     *(_QWORD *)(v48 + 128),
                     *((_QWORD *)v59[0] + 11),
                     *((_QWORD *)v59[0] + 11),
                     *(_DWORD *)(*((_QWORD *)v59[0] + 122) + 184LL),
                     *(_DWORD *)(*((_QWORD *)v59[0] + 122) + 176LL),
                     0,
                     0);
          v50 = v60;
          v44 = inited;
        }
        else
        {
          v50 = 0LL;
        }
        v52 = (char *)v59[0] + 1024;
        if ( (*((_DWORD *)v59[0] + 10) & 1) == 0 )
          v52 = (char *)v59[0] + 1016;
        v53 = *(_QWORD *)v52;
        v58[0].x = -(int)v53;
        v58[0].y = -HIDWORD(v53);
        if ( *(_DWORD *)(v48 + 96) == 3 || (*(_DWORD *)(v48 + 112) & 0x20000) == 0 )
          v54 = EngGradientFill;
        else
          v54 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v49 + 3232);
        if ( !v44
          || (v44 = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, unsigned int, char *, unsigned int, struct _RECTL *, struct _POINTL *, unsigned int))v54)(
                 v48 + 24,
                 v65,
                 v50,
                 a2,
                 a3,
                 v61,
                 v57,
                 &si128,
                 v58,
                 v56)) )
        {
          v44 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
      }
    }
    goto LABEL_59;
  }
  v44 = XDCOBJ::bFullScreen((XDCOBJ *)v59);
LABEL_59:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v63, (__int64)v41, v42, v43);
LABEL_61:
  if ( v10 )
    Win32FreePool(v10);
  v7 = v44;
LABEL_64:
  DCOBJ::~DCOBJ((DCOBJ *)v59);
  return v7;
}
