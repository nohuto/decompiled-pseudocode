/*
 * XREFs of GreGradientFill @ 0x1C009C47C
 * Callers:
 *     NtGdiGradientFill @ 0x1C009C260 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C0151EB0 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004CB44 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C009CB1C (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009F614 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00A0014 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A12B4 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
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
  int v11; // r8d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // r15d
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  int v17; // ebx
  size_t v18; // rcx
  char *v19; // rax
  unsigned int v20; // r9d
  char *v21; // r8
  signed __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // r11d
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rcx
  bool v29; // zf
  COLOR16 Alpha; // ax
  struct _POINTL v31; // rdx
  int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  ULONG v36; // ecx
  struct _POINTL *v37; // rbx
  __int64 v38; // r15
  LONG x; // edx
  char *v40; // rcx
  int v41; // r14d
  struct REGION *v42; // rax
  struct ECLIPOBJ *v43; // rdx
  DC *v44; // r15
  struct ECLIPOBJ *v45; // rdx
  __int64 v46; // r15
  __int64 v47; // rbx
  __int64 v48; // r8
  int inited; // eax
  struct _POINTL *v50; // rax
  BOOL (__stdcall *v51)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  struct _POINTL v53[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-90h]
  int v55; // [rsp+74h] [rbp-8Ch]
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  char *v57; // [rsp+80h] [rbp-80h]
  unsigned int v58; // [rsp+88h] [rbp-78h]
  DC *v59[6]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v60[2]; // [rsp+C0h] [rbp-40h] BYREF
  HDC v61[34]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL si128; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v63[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  char v64[52]; // [rsp+1F4h] [rbp+F4h] BYREF
  __int64 v65; // [rsp+228h] [rbp+128h]
  __int64 v66; // [rsp+240h] [rbp+140h]
  int v67; // [rsp+248h] [rbp+148h]
  int v68; // [rsp+270h] [rbp+170h]
  __int64 v69; // [rsp+280h] [rbp+180h]

  v57 = a4;
  v7 = 0;
  v54 = a6;
  v9 = (unsigned int *)a4;
  v10 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v59, a1);
  if ( !v59[0] || (*((_DWORD *)v59[0] + 9) & 0x10000) != 0 )
  {
    v41 = 0;
    goto LABEL_61;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v61);
  if ( DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v61, (struct XDCOBJ *)v59, v11) )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v60, (struct XDCOBJ *)v59, 0x204u);
    if ( (*(_DWORD *)(v60[0] + 32LL) & 1) == 0 && a6 <= 1u )
    {
      v12 = 2LL * a5;
      if ( v12 > 0xFFFFFFFF
        || (v13 = 12LL * (unsigned int)v12, v13 > 0xFFFFFFFF)
        || (v14 = 2 * a5, v15 = 2 * a5 + a3, v55 = 2 * a5, v15 < 2 * a5)
        || (v16 = 16LL * v15, v16 > 0xFFFFFFFF)
        || (v17 = v16, v18 = (unsigned int)(v16 + v13), (unsigned int)v18 < 24 * a5) )
      {
        v36 = 534;
      }
      else
      {
        if ( (unsigned int)v18 <= 0x2710000 )
        {
          v19 = (char *)PALLOCMEM2(v18, 1886221383LL, 0);
          v10 = (struct _TRIVERTEX *)v19;
          if ( v19 )
          {
            v20 = 0;
            v21 = &v19[v17];
            if ( a3 )
            {
              v20 = a3;
              v22 = (char *)a2 - v19;
              v23 = a3;
              do
              {
                *(_OWORD *)v19 = *(_OWORD *)&v19[v22];
                v19 += 16;
                --v23;
              }
              while ( v23 );
            }
            v24 = 0;
            if ( a5 )
            {
              while ( 1 )
              {
                v25 = *v9;
                v26 = v9[1];
                v58 = v25;
                LODWORD(v56) = v26;
                if ( v25 >= a3 || v26 >= a3 )
                  break;
                v27 = v20;
                v10[v27].x = a2[v26].x;
                v53[0] = (struct _POINTL)(16LL * v25);
                v10[v27].y = *(LONG *)((char *)&a2->y + *(_QWORD *)v53);
                LODWORD(v57) = v20 + 1;
                v28 = v20 + 1;
                v29 = v54 == 1;
                v10[v28].x = *(LONG *)((char *)&a2->x + *(_QWORD *)v53);
                v10[v28].y = a2[v26].y;
                if ( v29 )
                {
                  v10[v20].Red = *(COLOR16 *)((char *)&a2->Red + *(_QWORD *)v53);
                  v10[v20].Green = *(COLOR16 *)((char *)&a2->Green + *(_QWORD *)v53);
                  v10[v20].Blue = *(COLOR16 *)((char *)&a2->Blue + *(_QWORD *)v53);
                  v10[v20].Alpha = *(COLOR16 *)((char *)&a2->Alpha + *(_QWORD *)v53);
                  v10[v20 + 1].Red = a2[v26].Red;
                  v10[v20 + 1].Green = a2[v26].Green;
                  v10[v20 + 1].Blue = a2[v26].Blue;
                  Alpha = a2[v26].Alpha;
                }
                else
                {
                  v10[v20].Red = a2[v26].Red;
                  v10[v20].Green = a2[v26].Green;
                  v10[v20].Blue = a2[v26].Blue;
                  v31 = v53[0];
                  v10[v20].Alpha = a2[v26].Alpha;
                  v10[v20 + 1].Red = *(COLOR16 *)((char *)&a2->Red + *(_QWORD *)&v31);
                  v10[v20 + 1].Green = *(COLOR16 *)((char *)&a2->Green + *(_QWORD *)&v31);
                  v10[v20 + 1].Blue = *(COLOR16 *)((char *)&a2->Blue + *(_QWORD *)&v31);
                  Alpha = *(COLOR16 *)((char *)&a2->Alpha + *(_QWORD *)&v31);
                }
                v32 = (int)v57;
                v33 = 2 * v24;
                v10[v20 + 1].Alpha = Alpha;
                ++v24;
                v34 = 3 * v33;
                *(_DWORD *)&v21[4 * v34] = v58;
                v9 += 2;
                *(_DWORD *)&v21[4 * v34 + 4] = v20;
                *(_DWORD *)&v21[4 * v34 + 8] = v32;
                LODWORD(v34) = v56;
                v35 = 3LL * (unsigned int)(v33 + 1);
                *(_DWORD *)&v21[4 * v35 + 4] = v20;
                v20 += 2;
                *(_DWORD *)&v21[4 * v35] = v34;
                *(_DWORD *)&v21[4 * v35 + 8] = v32;
                if ( v24 >= a5 )
                  goto LABEL_23;
              }
              EngSetLastError(0x57u);
              Win32FreePool(v10);
              goto LABEL_28;
            }
LABEL_23:
            v9 = (unsigned int *)v21;
            v57 = v21;
            a2 = v10;
            v54 = 2;
            a3 = v20;
            goto LABEL_30;
          }
        }
        v36 = 8;
      }
      EngSetLastError(v36);
LABEL_28:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v61);
      goto LABEL_64;
    }
    v14 = a5;
    v55 = a5;
LABEL_30:
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    if ( a3 )
    {
      v37 = (struct _POINTL *)a2;
      v38 = a3;
      do
      {
        v53[0] = *v37;
        EXFORMOBJ::bXform((EXFORMOBJ *)v60, v53, 1uLL);
        x = v53[0].x;
        if ( (*(_DWORD *)(*((_QWORD *)v59[0] + 122) + 108LL) & 1) != 0 )
          x = v53[0].x + 1;
        v40 = (char *)v59[0] + 1024;
        if ( (*((_DWORD *)v59[0] + 10) & 1) == 0 )
          v40 = (char *)v59[0] + 1016;
        v37->x = x + *(_DWORD *)v40;
        v37->y = v53[0].y + *((_DWORD *)v59[0] + 2 * (*((_DWORD *)v59[0] + 10) & 1) + 255);
        v37 += 2;
        --v38;
      }
      while ( v38 );
      v14 = v55;
    }
    v41 = bCalcMeshExtent(a2, a3, v9, v14, v54, &si128);
    if ( v41 )
    {
      v42 = XDCOBJ::prgnEffRao(v59);
      v65 = 0LL;
      v66 = 0LL;
      v67 = 0;
      v68 = 1;
      v69 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v63, v42, (struct ERECTL *)&si128, 0);
      if ( ERECTL::bEmpty((ERECTL *)v64) )
        goto LABEL_57;
      v44 = v59[0];
      if ( (*((_DWORD *)v59[0] + 9) & 0xE0) != 0 )
      {
        *(struct _RECTL *)&v53[0].x = si128;
        XDCOBJ::vAccumulate((XDCOBJ *)v59, v43, (struct ERECTL *)v53);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v59, v45, (struct ERECTL *)v53);
        v44 = v59[0];
      }
      v46 = *((_QWORD *)v44 + 62);
      if ( !v46 )
      {
LABEL_57:
        v41 = 1;
      }
      else
      {
        ++*(_DWORD *)(v46 + 92);
        v47 = *(_QWORD *)(v46 + 48);
        v56 = 0LL;
        if ( (*(_DWORD *)(v47 + 40) & 0x80u) != 0 || *(_DWORD *)(v46 + 96) <= 3u )
        {
          inited = EXLATEOBJ::bInitXlateObj(
                     &v56,
                     *(_QWORD *)(*((_QWORD *)v59[0] + 122) + 248LL),
                     *((_DWORD *)v59[0] + 30),
                     (__int64)gppalRGB,
                     *(_QWORD *)(v46 + 128),
                     *((_QWORD *)v59[0] + 11),
                     *((_QWORD *)v59[0] + 11),
                     *(_DWORD *)(*((_QWORD *)v59[0] + 122) + 184LL),
                     *(_DWORD *)(*((_QWORD *)v59[0] + 122) + 176LL),
                     0,
                     0);
          v48 = v56;
          v41 = inited;
        }
        else
        {
          v48 = 0LL;
        }
        v50 = (struct _POINTL *)((char *)v59[0] + 1024);
        if ( (*((_DWORD *)v59[0] + 10) & 1) == 0 )
          v50 = (struct _POINTL *)((char *)v59[0] + 1016);
        v53[0] = *v50;
        v53[0].y = -v53[0].y;
        v29 = *(_DWORD *)(v46 + 96) == 3;
        v53[0].x = -v53[0].x;
        if ( v29 || (*(_DWORD *)(v46 + 112) & 0x20000) == 0 )
          v51 = EngGradientFill;
        else
          v51 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v47 + 3232);
        if ( !v41
          || (v41 = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, unsigned int, char *, int, struct _RECTL *, struct _POINTL *, unsigned int))v51)(
                 v46 + 24,
                 v63,
                 v48,
                 a2,
                 a3,
                 v57,
                 v55,
                 &si128,
                 v53,
                 v54)) )
        {
          v41 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v56);
      }
    }
    goto LABEL_59;
  }
  v41 = XDCOBJ::bFullScreen((XDCOBJ *)v59);
LABEL_59:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v61);
LABEL_61:
  if ( v10 )
    Win32FreePool(v10);
  v7 = v41;
LABEL_64:
  DCOBJ::~DCOBJ((DCOBJ *)v59);
  return v7;
}
