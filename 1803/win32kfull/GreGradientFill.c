/*
 * XREFs of GreGradientFill @ 0x1C00C9504
 * Callers:
 *     NtGdiGradientFill @ 0x1C00C92F0 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C01332A0 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0099254 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C009A7B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009C1AC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C00C9B50 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C011C1DC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGradientFill(
        HDC a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v7; // edi
  __int64 v8; // r13
  unsigned int *v9; // r14
  struct _TRIVERTEX *v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // r15d
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // ebx
  size_t v17; // rcx
  ULONG v18; // ecx
  char *v19; // rax
  unsigned int v20; // r9d
  unsigned int *v21; // r8
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
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  struct _POINTL *v36; // rbx
  __int64 v37; // r15
  LONG x; // ecx
  int v39; // r14d
  struct REGION *v40; // rax
  struct ECLIPOBJ *v41; // rdx
  struct _RECTL *v42; // r15
  struct ECLIPOBJ *v43; // rdx
  __int64 v44; // r15
  __int64 v45; // rbx
  __int64 v46; // r8
  int inited; // eax
  struct _POINTL *p_right; // rax
  BOOL (__stdcall *v49)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  struct _POINTL v51[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v52; // [rsp+70h] [rbp-90h]
  int v53; // [rsp+74h] [rbp-8Ch]
  struct _RECTL *v54[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  unsigned int *v56; // [rsp+90h] [rbp-70h]
  unsigned int v57; // [rsp+98h] [rbp-68h]
  _QWORD v58[2]; // [rsp+A0h] [rbp-60h] BYREF
  HDC v59[22]; // [rsp+B0h] [rbp-50h] BYREF
  struct _RECTL si128; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v61[4]; // [rsp+170h] [rbp+70h] BYREF
  char v62[76]; // [rsp+174h] [rbp+74h] BYREF
  __int64 v63; // [rsp+1C0h] [rbp+C0h]
  int v64; // [rsp+1C8h] [rbp+C8h]
  int v65; // [rsp+1F0h] [rbp+F0h]
  __int64 v66; // [rsp+200h] [rbp+100h]

  v56 = a4;
  v7 = 0;
  v8 = a3;
  v52 = a6;
  v9 = a4;
  v10 = 0LL;
  MDCOBJ::MDCOBJ((MDCOBJ *)v54, a1);
  if ( !v54[0] || (v54[0][2].top & 0x10000) != 0 )
  {
    v39 = 0;
    goto LABEL_59;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v59);
  if ( (unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v59, (struct XDCOBJ *)v54) )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v58, (struct XDCOBJ *)v54, 516);
    if ( (*(_DWORD *)(v58[0] + 32LL) & 1) == 0 && a6 <= 1u )
    {
      v11 = 2LL * a5;
      if ( v11 > 0xFFFFFFFF
        || (v12 = 12LL * (unsigned int)v11, v12 > 0xFFFFFFFF)
        || (v13 = 2 * a5, v14 = 2 * a5 + v8, v53 = 2 * a5, v14 < 2 * a5)
        || (v15 = 16LL * v14, v15 > 0xFFFFFFFF)
        || (v16 = v15, v17 = (unsigned int)(v15 + v12), (unsigned int)v17 < 24 * a5) )
      {
        v18 = 534;
      }
      else
      {
        if ( (unsigned int)v17 <= 0x2710000 )
        {
          v19 = (char *)PALLOCMEM2(v17);
          v10 = (struct _TRIVERTEX *)v19;
          if ( v19 )
          {
            v20 = 0;
            v21 = (unsigned int *)&v19[v16];
            if ( (_DWORD)v8 )
            {
              v20 = v8;
              v22 = (char *)a2 - v19;
              v23 = v8;
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
                v57 = v25;
                LODWORD(v55) = v26;
                if ( v25 >= (unsigned int)v8 || v26 >= (unsigned int)v8 )
                  break;
                v27 = v20;
                v10[v27].x = a2[v26].x;
                v51[0] = (struct _POINTL)(16LL * v25);
                v10[v27].y = *(LONG *)((char *)&a2->y + *(_QWORD *)v51);
                LODWORD(v56) = v20 + 1;
                v28 = v20 + 1;
                v29 = v52 == 1;
                v10[v28].x = *(LONG *)((char *)&a2->x + *(_QWORD *)v51);
                v10[v28].y = a2[v26].y;
                if ( v29 )
                {
                  v10[v20].Red = *(COLOR16 *)((char *)&a2->Red + *(_QWORD *)v51);
                  v10[v20].Green = *(COLOR16 *)((char *)&a2->Green + *(_QWORD *)v51);
                  v10[v20].Blue = *(COLOR16 *)((char *)&a2->Blue + *(_QWORD *)v51);
                  v10[v20].Alpha = *(COLOR16 *)((char *)&a2->Alpha + *(_QWORD *)v51);
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
                  v31 = v51[0];
                  v10[v20].Alpha = a2[v26].Alpha;
                  v10[v20 + 1].Red = *(COLOR16 *)((char *)&a2->Red + *(_QWORD *)&v31);
                  v10[v20 + 1].Green = *(COLOR16 *)((char *)&a2->Green + *(_QWORD *)&v31);
                  v10[v20 + 1].Blue = *(COLOR16 *)((char *)&a2->Blue + *(_QWORD *)&v31);
                  Alpha = *(COLOR16 *)((char *)&a2->Alpha + *(_QWORD *)&v31);
                }
                v32 = (unsigned int)v56;
                v33 = 2 * v24;
                v10[v20 + 1].Alpha = Alpha;
                ++v24;
                v34 = 3 * v33;
                v21[v34] = v57;
                v9 += 2;
                v21[v34 + 1] = v20;
                v21[v34 + 2] = v32;
                LODWORD(v34) = v55;
                v35 = 3LL * (unsigned int)(v33 + 1);
                v21[v35 + 1] = v20;
                v20 += 2;
                v21[v35] = v34;
                v21[v35 + 2] = v32;
                if ( v24 >= a5 )
                  goto LABEL_24;
              }
              EngSetLastError(0x57u);
              Win32FreePool(v10);
              goto LABEL_28;
            }
LABEL_24:
            v9 = v21;
            v56 = v21;
            a2 = v10;
            v52 = 2;
            LODWORD(v8) = v20;
            goto LABEL_30;
          }
        }
        v18 = 8;
      }
      EngSetLastError(v18);
LABEL_28:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v59);
      goto LABEL_62;
    }
    v13 = a5;
    v53 = a5;
LABEL_30:
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    if ( (_DWORD)v8 )
    {
      v36 = (struct _POINTL *)a2;
      v37 = (unsigned int)v8;
      do
      {
        v51[0] = *v36;
        EXFORMOBJ::bXform((EXFORMOBJ *)v58, v51, 1LL);
        x = v51[0].x;
        if ( (*(_DWORD *)(*(_QWORD *)&v54[0][5].left + 312LL) & 1) != 0 )
          x = v51[0].x + 1;
        v36->x = *(&v54[0][89].left + 2 * (v54[0][2].right & 1)) + x;
        v36->y = v51[0].y + *(&v54[0][89].top + 2 * (v54[0][2].right & 1));
        v36 += 2;
        --v37;
      }
      while ( v37 );
      v13 = v53;
    }
    v39 = bCalcMeshExtent(a2, v8, v9, v13, v52, &si128);
    if ( v39 )
    {
      v40 = XDCOBJ::prgnEffRao((DC **)v54);
      v63 = 0LL;
      v64 = 0;
      v65 = 1;
      v66 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v61, v40, (struct ERECTL *)&si128, 0);
      if ( ERECTL::bEmpty((ERECTL *)v62) )
        goto LABEL_55;
      v42 = v54[0];
      if ( (v54[0][2].top & 0xE0) != 0 )
      {
        *(struct _RECTL *)&v51[0].x = si128;
        XDCOBJ::vAccumulate((XDCOBJ *)v54, v41, (struct ERECTL *)v51);
        XDCOBJ::vAccumulateTight(v54, v43, (__m128i *)v51);
        v42 = v54[0];
      }
      v44 = *(_QWORD *)&v42[31].right;
      if ( !v44 )
      {
LABEL_55:
        v39 = 1;
      }
      else
      {
        ++*(_DWORD *)(v44 + 92);
        v45 = *(_QWORD *)(v44 + 48);
        v55 = 0LL;
        if ( (*(_DWORD *)(v45 + 40) & 0x80u) != 0 || *(_DWORD *)(v44 + 96) <= 3u )
        {
          inited = EXLATEOBJ::bInitXlateObj(
                     &v55,
                     *(_QWORD *)(*(_QWORD *)&v54[0][5].left + 112LL),
                     v54[0][8].left,
                     (__int64)gppalRGB,
                     *(_QWORD *)(v44 + 128),
                     *(_QWORD *)&v54[0][6].left,
                     *(_QWORD *)&v54[0][6].left,
                     *(_DWORD *)(*(_QWORD *)&v54[0][5].left + 40LL),
                     *(_DWORD *)(*(_QWORD *)&v54[0][5].left + 32LL),
                     0,
                     0);
          v46 = v55;
          v39 = inited;
        }
        else
        {
          v46 = 0LL;
        }
        p_right = (struct _POINTL *)&v54[0][89].right;
        if ( (v54[0][2].right & 1) == 0 )
          p_right = (struct _POINTL *)&v54[0][89];
        v51[0] = *p_right;
        v51[0].y = -v51[0].y;
        v29 = *(_DWORD *)(v44 + 96) == 3;
        v51[0].x = -v51[0].x;
        if ( v29 || (*(_DWORD *)(v44 + 112) & 0x20000) == 0 )
          v49 = EngGradientFill;
        else
          v49 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v45 + 3224);
        if ( !v39
          || (v39 = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, _DWORD, unsigned int *, int, struct _RECTL *, struct _POINTL *, unsigned int))v49)(
                 v44 + 24,
                 v61,
                 v46,
                 a2,
                 v8,
                 v56,
                 v53,
                 &si128,
                 v51,
                 v52)) )
        {
          v39 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v55);
      }
    }
    goto LABEL_57;
  }
  v39 = XDCOBJ::bFullScreen((XDCOBJ *)v54);
LABEL_57:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v59);
LABEL_59:
  if ( v10 )
    Win32FreePool(v10);
  v7 = v39;
LABEL_62:
  DCOBJ::~DCOBJ((DCOBJ *)v54);
  return v7;
}
