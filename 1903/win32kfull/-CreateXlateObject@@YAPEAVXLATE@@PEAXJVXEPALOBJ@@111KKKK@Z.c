/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006B1C0
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C00595B4 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C005F070 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreDrawStream @ 0x1C0070630 (GreDrawStream.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C00803CC (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C011618C (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C02B8588 (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02D0BDC (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

_DWORD *CreateXlateObject(__int64 a1, int a2, __int64 a3, ...)
{
  unsigned int v6; // r12d
  _DWORD *result; // rax
  _DWORD *v8; // r15
  _DWORD *v9; // rdx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  BOOL v14; // edx
  struct PALETTE *v15; // r14
  char v16; // r8
  __int16 v17; // cx
  struct _TRANSLATE *v18; // r9
  struct _TRANSLATE *v19; // r11
  int v20; // r13d
  int v21; // eax
  __int64 v22; // rdi
  int v23; // r8d
  int v24; // edi
  void *v25; // rcx
  size_t v26; // r8
  int v27; // edi
  unsigned int v28; // r10d
  int v29; // r8d
  unsigned int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // edx
  int v34; // r10d
  int v35; // r9d
  int v36; // edi
  int v37; // ebx
  int v38; // r11d
  int v39; // ecx
  int v40; // eax
  int *v41; // rdx
  __int64 v42; // r9
  unsigned int *v43; // rcx
  unsigned int j; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // r13d
  int *v48; // rcx
  int v49; // edx
  unsigned int v50; // r10d
  int v51; // ebx
  int NearestIndexFromColorref; // eax
  unsigned int v53; // edi
  int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  int v57; // eax
  _DWORD *v58; // r12
  unsigned int v59; // eax
  _DWORD *v60; // rcx
  _DWORD *v61; // rdi
  __int64 v62; // r10
  __int64 v63; // r9
  unsigned int *v64; // rcx
  unsigned int k; // eax
  unsigned int m; // edx
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rdx
  struct _TRANSLATE *v70; // rdx
  int v71; // eax
  unsigned int v72; // edx
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rbx
  __int64 v76; // rsi
  _DWORD *v77; // r13
  __int64 v78; // r15
  __int64 v79; // rbx
  unsigned int v80; // r14d
  __int64 v81; // rdi
  int v82; // eax
  struct _TRANSLATE *v83; // r12
  unsigned int i; // edi
  int v85; // eax
  __int64 v86; // rcx
  struct PALETTE *n; // [rsp+28h] [rbp-40h] BYREF
  struct _TRANSLATE *v88; // [rsp+30h] [rbp-38h]
  struct _TRANSLATE *v89; // [rsp+38h] [rbp-30h]
  __int64 v90; // [rsp+40h] [rbp-28h]
  __int64 v91; // [rsp+48h] [rbp-20h]
  _DWORD *v92; // [rsp+50h] [rbp-18h]
  char v93; // [rsp+B0h] [rbp+48h]
  __int64 v94; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  __int64 v96; // [rsp+C0h] [rbp+58h]
  __int64 v97; // [rsp+C8h] [rbp+60h]
  __int64 v98; // [rsp+D0h] [rbp+68h]
  __int64 v99; // [rsp+D8h] [rbp+70h]
  __int64 v100; // [rsp+E0h] [rbp+78h]
  __int64 v101; // [rsp+E8h] [rbp+80h]
  va_list va1; // [rsp+F0h] [rbp+88h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v94 = va_arg(va1, _QWORD);
  v96 = va_arg(va1, _QWORD);
  v97 = va_arg(va1, _QWORD);
  v98 = va_arg(va1, _QWORD);
  v99 = va_arg(va1, _QWORD);
  v100 = va_arg(va1, _QWORD);
  v101 = va_arg(va1, _QWORD);
  v90 = a3;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 28);
  else
    v6 = 256;
  result = (_DWORD *)AllocThreadBufferWithTag(4 * v6 + 88, 1953265735LL, 0LL);
  v92 = result;
  v8 = result;
  if ( !result )
    return result;
  v9 = result + 21;
  v10 = 0;
  *result = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  if ( !v6 )
  {
    v10 = 512;
    v9 = 0LL;
  }
  v11 = 2;
  if ( !v6 )
    v11 = 0;
  v8[1] = v11;
  *((_QWORD *)v8 + 2) = v9;
  v8[19] = v10;
  v8[2] = 0;
  v8[3] = v6;
  v8[9] = -1;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 6) = 0LL;
  *((_QWORD *)v8 + 7) = 0LL;
  v12 = ghsemPalette;
  v91 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v8[18] = 0;
  *((_QWORD *)v8 + 8) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      v8[18] = a2;
      *((_QWORD *)v8 + 8) = a1;
      if ( (a2 & 2) != 0 )
      {
        LOBYTE(v13) = 14;
        v55 = HmgShareLockCheck(a1, v13);
        if ( v55 )
        {
          v8[1] |= 0x10u;
          DEC_SHARE_REF_CNT(v55);
        }
      }
      else if ( (a2 & 1) != 0 )
      {
        v56 = v8[1] | 0x20;
        v8[1] = v56;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            v8[1] = v56 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      v8[1] |= 0x20u;
      v8[18] = a2;
    }
  }
  v14 = (v8[1] & 8) != 0;
  LODWORD(n) = v14;
  if ( !v94 || (*(_DWORD *)(v94 + 24) & 0x800) != 0 )
  {
    v15 = (struct PALETTE *)v97;
    v16 = 1;
    v93 = 1;
    if ( !*(_QWORD *)(v97 + 72) )
      v15 = ppalDefault;
    v17 = v101;
    if ( (v101 & 0x2000) == 0 )
    {
      v57 = v8[19] | 0x800;
      v8[19] = v57;
      if ( v94 )
        v8[19] = v57 | 0x1000;
    }
  }
  else
  {
    v15 = (struct PALETTE *)v97;
    v16 = 0;
    v17 = v101;
    v93 = 0;
  }
  *((_QWORD *)v8 + 5) = a3;
  *((_QWORD *)v8 + 6) = v94;
  *((_QWORD *)v8 + 7) = v15;
  v18 = (struct _TRANSLATE *)*((_QWORD *)v15 + 9);
  v19 = (struct _TRANSLATE *)*((_QWORD *)v15 + 10);
  v88 = v18;
  v89 = v19;
  if ( !a3 || (v20 = *(_DWORD *)(a3 + 24), v21 = v20 & 0x800, (v20 & 0x800) != 0) && (v18 == v19 || (v17 & 0x4000) != 0) )
  {
    if ( !v18 )
    {
      v18 = (struct _TRANSLATE *)&defaultTranslate;
      v88 = (struct _TRANSLATE *)&defaultTranslate;
      v19 = (struct _TRANSLATE *)&defaultTranslate;
      v89 = (struct _TRANSLATE *)&defaultTranslate;
      v15 = ppalDefault;
      *((_QWORD *)v8 + 7) = ppalDefault;
    }
    v58 = v8 + 21;
    v59 = 0;
    v60 = v8 + 21;
    do
      *v60++ = v59++;
    while ( v59 < 0x100 );
    v61 = (_DWORD *)v94;
    if ( !v94 )
    {
      v8[1] |= 1u;
      goto LABEL_27;
    }
    LODWORD(n) = *(_DWORD *)(v94 + 24);
    v71 = (unsigned __int16)n & 0x8000;
    if ( ((unsigned __int16)n & 0x8000) != 0 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v94, v15) )
      {
        v8[1] |= 1u;
        goto LABEL_27;
      }
      v71 = (unsigned __int16)n & 0x8000;
      v18 = v88;
      v19 = v89;
    }
    if ( v71 && a3 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v61, a3) )
      {
        v8[1] |= 1u;
        goto LABEL_27;
      }
      v18 = v88;
      v19 = v89;
    }
    if ( ((unsigned __int16)n & 0x800) != 0 )
    {
      if ( v19 == v18 )
      {
        v8[1] |= 1u;
      }
      else
      {
        v72 = 0;
        if ( *((_DWORD *)v15 + 7) )
        {
          do
          {
            v73 = v72++;
            v8[*((unsigned __int8 *)v18 + v73 + 4) + 21] = *((unsigned __int8 *)v19 + v73 + 4);
          }
          while ( v72 < *((_DWORD *)v15 + 7) );
          v61 = (_DWORD *)v94;
        }
        v74 = v61[6];
        if ( (v74 & 0x1000) != 0 )
        {
          *v58 = 0;
          v8[276] = 255;
        }
        else if ( (v74 & 0x10000) == 0 )
        {
          *v58 = 0;
          v8[267] = 246;
          v8[22] = 1;
          v8[268] = 247;
          v8[23] = 2;
          v8[269] = 248;
          v8[24] = 3;
          v8[270] = 249;
          v8[25] = 4;
          v8[271] = 250;
          v8[26] = 5;
          v8[272] = 251;
          v8[27] = 6;
          v8[273] = 252;
          v8[28] = 7;
          v8[274] = 253;
          v8[29] = 8;
          v8[275] = 254;
          v8[30] = 9;
          v8[276] = 255;
        }
      }
      goto LABEL_27;
    }
    if ( !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
    {
      if ( v61[7] != 256 )
      {
        memset(v8 + 21, 0, 0x400uLL);
        v61 = (_DWORD *)v94;
      }
      v75 = 10LL;
      v76 = 0LL;
      v77 = v8 + 257;
      v78 = 10LL;
      while ( 1 )
      {
        v58[v76] = XEPALOBJ::ulDispatchGFPEFunction(
                     (__int64 *)va,
                     (unsigned int)v61[24],
                     *(unsigned int *)(v76 * 4 + logDefaultPal + 4));
        v77[v75] = XEPALOBJ::ulDispatchGFPEFunction(
                     (__int64 *)va,
                     *(unsigned int *)(v94 + 96),
                     *(unsigned int *)(v75 * 4 + logDefaultPal + 4));
        ++v75;
        ++v76;
        if ( !--v78 )
          break;
        v61 = (_DWORD *)v94;
      }
      v79 = v90;
      v12 = v91;
      v8 = v92;
      if ( (v101 & 0x2000) != 0 )
      {
        v80 = 0;
        if ( *(_DWORD *)(v90 + 28) )
        {
          do
          {
            v81 = v80;
            v82 = XEPALOBJ::ulDispatchGFPEFunction(
                    (__int64 *)va,
                    *(unsigned int *)(v94 + 96),
                    *(unsigned int *)(*(_QWORD *)(v79 + 112) + 4LL * v80++));
            v8[v81 + 21] = v82;
          }
          while ( v80 < *(_DWORD *)(v79 + 28) );
        }
        v8[19] |= 0x2000u;
      }
      else
      {
        v83 = v88;
        if ( v88 )
        {
          for ( i = 0; i < *((_DWORD *)v15 + 7); v8[v86 + 21] = v85 )
          {
            v85 = XEPALOBJ::ulDispatchGFPEFunction(
                    (__int64 *)va,
                    *(unsigned int *)(v94 + 96),
                    *(unsigned int *)(*((_QWORD *)v15 + 14) + 4LL * i));
            v86 = *((unsigned __int8 *)v83 + i++ + 4);
          }
        }
      }
      goto LABEL_27;
    }
    v26 = 1024LL;
    v25 = v8 + 21;
    goto LABEL_26;
  }
  v22 = v94;
  if ( (v20 & 0x8000) != 0 )
  {
    if ( !v94 )
      goto LABEL_113;
    v23 = *(_DWORD *)(v94 + 24);
    if ( (v23 & 0x8000) != 0 && *(_DWORD *)(v94 + 28) == 256 && *(_DWORD *)(a3 + 28) == 256 )
    {
      if ( (v23 & 0x100) == 0 )
      {
LABEL_51:
        LODWORD(v42) = 256;
        while ( 1 )
        {
          v42 = (unsigned int)(v42 - 1);
          if ( ((*(_DWORD *)(*(_QWORD *)(a3 + 112) + 4 * v42) ^ *(_DWORD *)(*(_QWORD *)(v94 + 112) + 4 * v42)) & 0xFFFFFF) != 0 )
            break;
          if ( !(_DWORD)v42 )
            goto LABEL_54;
        }
        v14 = (int)n;
        v19 = v89;
LABEL_110:
        v18 = v88;
        goto LABEL_17;
      }
      v62 = *(_QWORD *)(v94 + 72);
      if ( v62 )
      {
        LODWORD(v63) = 256;
        while ( 1 )
        {
          v63 = (unsigned int)(v63 - 1);
          if ( *(unsigned __int8 *)(v63 + v62 + 4) != (_DWORD)v63 )
            goto LABEL_110;
          if ( !(_DWORD)v63 )
            goto LABEL_51;
        }
      }
    }
LABEL_17:
    if ( (v23 & 0x800) == 0 || v18 != v19 )
    {
LABEL_18:
      v16 = v93;
      goto LABEL_19;
    }
LABEL_113:
    if ( (unsigned int)bEqualRGB_In_Palette(a3, v15) )
    {
LABEL_54:
      v28 = 0;
      v43 = v8 + 21;
      for ( j = 0; j < 0x100; ++j )
        *v43++ = j;
      v8[1] |= 1u;
      goto LABEL_28;
    }
    v21 = v20 & 0x800;
    v14 = (int)n;
    v18 = v88;
    v19 = v89;
    goto LABEL_18;
  }
LABEL_19:
  if ( v21 && !v22 )
  {
    v28 = 0;
    v64 = v8 + 21;
    for ( k = 0; k < 0x100; ++k )
      *v64++ = k;
    for ( m = 0;
          m < *((_DWORD *)v15 + 7);
          v8[*((unsigned __int8 *)v19 + v67 + 4) + 21] = *((unsigned __int8 *)v18 + v67 + 4) )
    {
      v67 = m++;
    }
    v68 = *(_DWORD *)(a3 + 24);
    if ( (v68 & 0x1000) != 0 )
    {
      v8[21] = 0;
      v8[276] = 255;
    }
    else if ( (v68 & 0x10000) == 0 )
    {
      v8[21] = 0;
      v8[267] = 246;
      v8[22] = 1;
      v8[268] = 247;
      v8[23] = 2;
      v8[269] = 248;
      v8[24] = 3;
      v8[270] = 249;
      v8[25] = 4;
      v8[271] = 250;
      v8[26] = 5;
      v8[272] = 251;
      v8[27] = 6;
      v8[273] = 252;
      v8[28] = 7;
      v8[274] = 253;
      v8[29] = 8;
      v8[275] = 254;
      v8[30] = 9;
      v8[276] = 255;
    }
    goto LABEL_28;
  }
  if ( (v20 & 0x2000) == 0 )
  {
    if ( !v6 )
    {
      if ( v22 && (*(_DWORD *)(v22 + 24) & 0x2000) != 0 )
      {
        v24 = v100;
        v8[21] = ulGetNearestIndexFromColorref(a3, v96, (unsigned int)v100, 1LL);
        v8[1] |= 4u;
        v8[6] = v24;
        *((_QWORD *)v8 + 2) = v8 + 21;
      }
      goto LABEL_27;
    }
    if ( !v22 || !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
    {
      if ( !v14 )
      {
        v47 = v101 & 0x2000;
        if ( !v16 || (v101 & 0x2000) != 0 )
        {
          v15 = (struct PALETTE *)v22;
          if ( (v101 & 0x2000) != 0 )
            v8[19] |= 0x2000u;
        }
        for ( n = v15; ; v15 = n )
        {
          --v6;
          v8[v6 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                          &n,
                          *((unsigned int *)v15 + 24),
                          *(unsigned int *)(*(_QWORD *)(a3 + 112) + 4LL * v6));
          if ( !v6 )
            break;
        }
        v28 = 0;
        if ( v93 && !v47 )
        {
          v70 = v89;
          if ( !v94 )
            v70 = v88;
          XLATE::vMapNewXlate((XLATE *)v8, v70);
        }
        goto LABEL_28;
      }
      v69 = v6;
      do
      {
        --v69;
        v8[v69 + 21] = *(_DWORD *)(v69 * 4 + *(_QWORD *)(a3 + 112));
        --v6;
      }
      while ( v6 );
      goto LABEL_27;
    }
    v25 = v8 + 21;
    v26 = 4LL * v6;
LABEL_26:
    memset(v25, 0, v26);
    v27 = v100;
    v8[(unsigned int)ulGetNearestIndexFromColorref(a3, v96, (unsigned int)v100, 1LL) + 21] = 1;
    v8[1] |= 4u;
    v8[6] = v27;
    goto LABEL_27;
  }
  if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
  {
    v28 = 0;
    v8[22] = 1;
    v8[21] = 0;
    goto LABEL_28;
  }
  v51 = v98;
  if ( v49 )
  {
    v53 = v99;
    v54 = v99;
    v8[21] = v98;
  }
  else
  {
    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v22, v15, (unsigned int)v98, v50);
    v53 = v99;
    v8[21] = NearestIndexFromColorref;
    v54 = ulGetNearestIndexFromColorref(v94, v15, v53, 1LL);
  }
  v8[22] = v54;
  v8[19] |= 0x100u;
  v8[7] = v51;
  v8[8] = v53;
LABEL_27:
  v28 = 0;
LABEL_28:
  v29 = v8[1];
  if ( (v29 & 9) == 0 )
  {
    v30 = v8[3];
    if ( v30 )
    {
      v45 = *((_QWORD *)v8 + 5);
      if ( !v45 || (v46 = *((_QWORD *)v8 + 6)) == 0 || *(_DWORD *)(v45 + 28) == *(_DWORD *)(v46 + 28) )
      {
        while ( *(_DWORD *)(*((_QWORD *)v8 + 2) + 4LL * v28) == v28 )
        {
          if ( ++v28 >= v30 )
            goto LABEL_42;
        }
      }
    }
    else
    {
      v31 = *((_QWORD *)v8 + 5);
      v32 = *((_QWORD *)v8 + 6);
      if ( v31 && v32 && !*(_DWORD *)(v32 + 28) )
      {
        v33 = *(_DWORD *)(v31 + 24);
        v34 = 65280;
        v35 = 16711680;
        if ( (v33 & 2) != 0 )
        {
          v41 = *(int **)(v31 + 112);
          v37 = *v41;
          v36 = v41[1];
          v38 = v41[2];
        }
        else
        {
          v36 = 65280;
          if ( (v33 & 4) != 0 )
          {
            v37 = 255;
            v38 = 16711680;
          }
          else
          {
            v37 = 16711680;
            v38 = 255;
          }
        }
        v39 = *(_DWORD *)(v32 + 24);
        if ( (v39 & 2) != 0 )
        {
          v48 = *(int **)(v32 + 112);
          v40 = *v48;
          v34 = v48[1];
          v35 = v48[2];
        }
        else if ( (v39 & 4) != 0 )
        {
          v40 = 255;
        }
        else
        {
          v40 = 16711680;
          v35 = 255;
        }
        if ( v37 == v40 && v36 == v34 && v38 == v35 )
LABEL_42:
          v8[1] = v29 | 1;
      }
    }
  }
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v12);
    GreReleaseSemaphoreInternal(v12);
  }
  return v8;
}
