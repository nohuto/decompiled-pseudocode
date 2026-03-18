/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00893D0
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00A06E8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A42B0 (GreSetDIBitsToDeviceInternal.c)
 *     GreDrawStream @ 0x1C00A6FB0 (GreDrawStream.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C011B090 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C0017B08 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C028E108 (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02ABBB4 (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

_DWORD *CreateXlateObject(__int64 a1, int a2, __int64 a3, ...)
{
  unsigned int v6; // r12d
  _DWORD *result; // rax
  _DWORD *v8; // r15
  _DWORD *v9; // rcx
  int v10; // edx
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  BOOL v14; // edx
  struct PALETTE *v15; // r14
  char v16; // r8
  __int16 v17; // r10
  struct _TRANSLATE *v18; // r9
  struct _TRANSLATE *v19; // r11
  int v20; // r13d
  int v21; // eax
  __int64 v22; // rdi
  int v23; // r8d
  unsigned int v24; // r10d
  int v25; // r8d
  unsigned int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // edx
  int v30; // r10d
  int v31; // r9d
  int v32; // edi
  int v33; // ebx
  int v34; // r11d
  int v35; // ecx
  int v36; // eax
  int *v37; // rdx
  int v38; // edi
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // r10d
  int v42; // edi
  int *v43; // rcx
  int v44; // edx
  int v45; // ebx
  int NearestIndexFromColorref; // eax
  unsigned int v47; // edi
  int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  int v51; // eax
  unsigned int *v52; // r12
  unsigned int v53; // eax
  _DWORD *v54; // rcx
  _DWORD *v55; // rdi
  __int64 v56; // r10
  __int64 v57; // r9
  __int64 v58; // r9
  unsigned int *v59; // rcx
  unsigned int k; // eax
  unsigned int *v61; // rdx
  unsigned int v62; // eax
  _DWORD *v63; // rcx
  unsigned int i; // r8d
  __int64 v65; // rax
  int v66; // eax
  unsigned int v67; // ecx
  unsigned int *v68; // r8
  unsigned int v69; // eax
  __int64 v70; // rdx
  struct _TRANSLATE *v71; // rdx
  int v72; // eax
  unsigned int v73; // edx
  __int64 v74; // rax
  int v75; // eax
  unsigned int v76; // ecx
  unsigned int *v77; // rdx
  unsigned int v78; // eax
  int v79; // edi
  __int64 v80; // rbx
  __int64 v81; // rsi
  _DWORD *v82; // r13
  __int64 v83; // r15
  __int64 v84; // rbx
  unsigned int v85; // r14d
  __int64 v86; // rdi
  int v87; // eax
  unsigned int m; // edi
  int v89; // eax
  __int64 v90; // rcx
  __int16 v91; // [rsp+20h] [rbp-48h]
  int v92; // [rsp+20h] [rbp-48h]
  struct _TRANSLATE *v93; // [rsp+28h] [rbp-40h]
  struct PALETTE *j; // [rsp+30h] [rbp-38h] BYREF
  struct _TRANSLATE *v95; // [rsp+38h] [rbp-30h]
  __int64 v96; // [rsp+40h] [rbp-28h]
  __int64 v97; // [rsp+48h] [rbp-20h]
  _DWORD *v98; // [rsp+50h] [rbp-18h]
  char v99; // [rsp+B0h] [rbp+48h]
  __int64 v100; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  __int64 v102; // [rsp+C0h] [rbp+58h]
  __int64 v103; // [rsp+C8h] [rbp+60h]
  __int64 v104; // [rsp+D0h] [rbp+68h]
  __int64 v105; // [rsp+D8h] [rbp+70h]
  __int64 v106; // [rsp+E0h] [rbp+78h]
  __int64 v107; // [rsp+E8h] [rbp+80h]
  va_list va1; // [rsp+F0h] [rbp+88h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v100 = va_arg(va1, _QWORD);
  v102 = va_arg(va1, _QWORD);
  v103 = va_arg(va1, _QWORD);
  v104 = va_arg(va1, _QWORD);
  v105 = va_arg(va1, _QWORD);
  v106 = va_arg(va1, _QWORD);
  v107 = va_arg(va1, _QWORD);
  v96 = a3;
  v91 = v107;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 28);
  else
    v6 = 256;
  result = (_DWORD *)AllocThreadBufferWithTag(4 * v6 + 88, 1953265735LL, 0LL);
  v98 = result;
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
  v97 = ghsemPalette;
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
        v49 = HmgShareLockCheck(a1, v13);
        if ( v49 )
        {
          v8[1] |= 0x10u;
          DEC_SHARE_REF_CNT(v49);
        }
      }
      else if ( (a2 & 1) != 0 )
      {
        v50 = v8[1] | 0x20;
        v8[1] = v50;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            v8[1] = v50 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      v8[1] |= 0x20u;
      v8[18] = a2;
      *((_QWORD *)v8 + 8) = 0LL;
    }
  }
  v14 = (v8[1] & 8) != 0;
  LODWORD(j) = v14;
  if ( !v100 || (*(_DWORD *)(v100 + 24) & 0x800) != 0 )
  {
    v15 = (struct PALETTE *)v103;
    v16 = 1;
    v99 = 1;
    if ( !*(_QWORD *)(v103 + 72) )
      v15 = ppalDefault;
    v17 = v91;
    if ( (v91 & 0x2000) == 0 )
    {
      v51 = v8[19] | 0x800;
      v8[19] = v51;
      if ( v100 )
        v8[19] = v51 | 0x1000;
    }
  }
  else
  {
    v15 = (struct PALETTE *)v103;
    v16 = 0;
    v17 = v91;
    v99 = 0;
  }
  *((_QWORD *)v8 + 5) = a3;
  *((_QWORD *)v8 + 6) = v100;
  *((_QWORD *)v8 + 7) = v15;
  v18 = (struct _TRANSLATE *)*((_QWORD *)v15 + 9);
  v19 = (struct _TRANSLATE *)*((_QWORD *)v15 + 10);
  v93 = v18;
  v95 = v19;
  if ( a3 )
  {
    v20 = *(_DWORD *)(a3 + 24);
    v21 = v20 & 0x800;
    if ( (v20 & 0x800) == 0 || v18 != v19 && (v17 & 0x4000) == 0 )
    {
      v22 = v100;
      if ( (v20 & 0x8000) == 0 )
      {
LABEL_19:
        if ( v21 && !v22 )
        {
          v24 = 0;
          v61 = v8 + 21;
          v62 = 0;
          v63 = v8 + 21;
          do
            *v63++ = v62++;
          while ( v62 < 0x100 );
          for ( i = 0;
                i < *((_DWORD *)v15 + 7);
                v8[*((unsigned __int8 *)v19 + v65 + 4) + 21] = *((unsigned __int8 *)v18 + v65 + 4) )
          {
            v65 = i++;
          }
          v66 = *(_DWORD *)(a3 + 24);
          if ( (v66 & 0x1000) != 0 )
          {
            *v61 = 0;
            v8[276] = 255;
          }
          else if ( (v66 & 0x10000) == 0 )
          {
            v67 = 0;
            v68 = v8 + 267;
            do
            {
              *v61 = v67;
              v69 = v67 + 246;
              ++v67;
              *v68++ = v69;
              ++v61;
            }
            while ( v67 < 0xA );
          }
          goto LABEL_26;
        }
        if ( (v20 & 0x2000) != 0 )
        {
          if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
          {
            v24 = 0;
            v8[21] = 0;
            v8[22] = 1;
            goto LABEL_26;
          }
          v45 = v104;
          if ( v44 )
          {
            v47 = v105;
            v48 = v105;
            v8[21] = v104;
          }
          else
          {
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v22, v15, (unsigned int)v104, 1LL);
            v47 = v105;
            v8[21] = NearestIndexFromColorref;
            v48 = ulGetNearestIndexFromColorref(v100, v15, v47, 1LL);
          }
          v8[22] = v48;
          v8[19] |= 0x100u;
          v8[7] = v45;
          v8[8] = v47;
        }
        else if ( v6 )
        {
          if ( v22 && (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
          {
            memset(v8 + 21, 0, 4LL * v6);
            v42 = v106;
            v8[(unsigned int)ulGetNearestIndexFromColorref(a3, v102, (unsigned int)v106, 1LL) + 21] = 1;
            v8[1] |= 4u;
            v8[6] = v42;
          }
          else
          {
            if ( !v14 )
            {
              v41 = v17 & 0x2000;
              v92 = v41;
              if ( !v16 || v41 )
              {
                v15 = (struct PALETTE *)v22;
                if ( v41 )
                  v8[19] |= 0x2000u;
              }
              for ( j = v15; ; v15 = j )
              {
                --v6;
                v8[v6 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                                &j,
                                *((unsigned int *)v15 + 24),
                                *(unsigned int *)(*(_QWORD *)(a3 + 112) + 4LL * v6));
                if ( !v6 )
                  break;
              }
              v24 = 0;
              if ( v99 && !v92 )
              {
                v71 = v95;
                if ( !v100 )
                  v71 = v93;
                XLATE::vMapNewXlate((XLATE *)v8, v71);
              }
              goto LABEL_26;
            }
            v70 = v6;
            do
            {
              --v70;
              v8[v70 + 21] = *(_DWORD *)(v70 * 4 + *(_QWORD *)(a3 + 112));
              --v6;
            }
            while ( v6 );
          }
        }
        else if ( v22 && (*(_DWORD *)(v22 + 24) & 0x2000) != 0 )
        {
          v38 = v106;
          v8[21] = ulGetNearestIndexFromColorref(a3, v102, (unsigned int)v106, 1LL);
          v8[1] |= 4u;
          v8[6] = v38;
          *((_QWORD *)v8 + 2) = v8 + 21;
        }
        goto LABEL_25;
      }
      if ( !v100 )
        goto LABEL_112;
      v23 = *(_DWORD *)(v100 + 24);
      if ( (v23 & 0x8000) == 0 || *(_DWORD *)(v100 + 28) != 256 || *(_DWORD *)(a3 + 28) != 256 )
      {
LABEL_17:
        if ( (v23 & 0x800) == 0 || v18 != v19 )
        {
LABEL_18:
          v16 = v99;
          goto LABEL_19;
        }
LABEL_112:
        if ( (unsigned int)bEqualRGB_In_Palette(a3, v15) )
        {
LABEL_105:
          v24 = 0;
          v59 = v8 + 21;
          for ( k = 0; k < 0x100; ++k )
            *v59++ = k;
          v8[1] |= 1u;
          goto LABEL_26;
        }
        v21 = v20 & 0x800;
        v14 = (int)j;
        v18 = v93;
        v19 = v95;
        v17 = v91;
        goto LABEL_18;
      }
      if ( (v23 & 0x100) != 0 )
      {
        v56 = *(_QWORD *)(v100 + 72);
        if ( !v56 )
        {
LABEL_110:
          v17 = v91;
          goto LABEL_17;
        }
        LODWORD(v57) = 256;
        while ( 1 )
        {
          v57 = (unsigned int)(v57 - 1);
          if ( *(unsigned __int8 *)(v57 + v56 + 4) != (_DWORD)v57 )
            break;
          if ( !(_DWORD)v57 )
            goto LABEL_102;
        }
      }
      else
      {
LABEL_102:
        LODWORD(v58) = 256;
        while ( 1 )
        {
          v58 = (unsigned int)(v58 - 1);
          if ( ((*(_DWORD *)(*(_QWORD *)(v100 + 112) + 4 * v58) ^ *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4 * v58)) & 0xFFFFFF) != 0 )
            break;
          if ( !(_DWORD)v58 )
            goto LABEL_105;
        }
        v14 = (int)j;
        v19 = v95;
      }
      v18 = v93;
      goto LABEL_110;
    }
  }
  if ( !v18 )
  {
    v18 = (struct _TRANSLATE *)&defaultTranslate;
    v93 = (struct _TRANSLATE *)&defaultTranslate;
    v19 = (struct _TRANSLATE *)&defaultTranslate;
    v95 = (struct _TRANSLATE *)&defaultTranslate;
    v15 = ppalDefault;
    *((_QWORD *)v8 + 7) = ppalDefault;
  }
  v52 = v8 + 21;
  v53 = 0;
  v54 = v8 + 21;
  do
    *v54++ = v53++;
  while ( v53 < 0x100 );
  v55 = (_DWORD *)v100;
  if ( v100 )
  {
    LODWORD(j) = *(_DWORD *)(v100 + 24);
    v72 = (unsigned __int16)j & 0x8000;
    if ( ((unsigned __int16)j & 0x8000) != 0 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v100, v15) )
      {
        v8[1] |= 1u;
        goto LABEL_25;
      }
      v72 = (unsigned __int16)j & 0x8000;
      v18 = v93;
      v19 = v95;
    }
    if ( v72 && a3 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v55, a3) )
      {
        v8[1] |= 1u;
        goto LABEL_25;
      }
      v18 = v93;
      v19 = v95;
    }
    if ( ((unsigned __int16)j & 0x800) != 0 )
    {
      if ( v19 == v18 )
      {
        v8[1] |= 1u;
      }
      else
      {
        v73 = 0;
        if ( *((_DWORD *)v15 + 7) )
        {
          do
          {
            v74 = v73++;
            v8[*((unsigned __int8 *)v18 + v74 + 4) + 21] = *((unsigned __int8 *)v19 + v74 + 4);
          }
          while ( v73 < *((_DWORD *)v15 + 7) );
          v55 = (_DWORD *)v100;
        }
        v75 = v55[6];
        if ( (v75 & 0x1000) != 0 )
        {
          *v52 = 0;
          v8[276] = 255;
        }
        else if ( (v75 & 0x10000) == 0 )
        {
          v76 = 0;
          v77 = v8 + 267;
          do
          {
            *v52 = v76;
            v78 = v76 + 246;
            ++v76;
            *v77++ = v78;
            ++v52;
          }
          while ( v76 < 0xA );
        }
      }
    }
    else if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
    {
      memset(v8 + 21, 0, 0x400uLL);
      v79 = v106;
      v8[(unsigned int)ulGetNearestIndexFromColorref(a3, v102, (unsigned int)v106, 1LL) + 21] = 1;
      v8[1] |= 4u;
      v8[6] = v79;
    }
    else
    {
      if ( v55[7] != 256 )
      {
        memset(v8 + 21, 0, 0x400uLL);
        v55 = (_DWORD *)v100;
      }
      v80 = 10LL;
      v81 = 0LL;
      v82 = v8 + 257;
      v83 = 10LL;
      while ( 1 )
      {
        v52[v81] = XEPALOBJ::ulDispatchGFPEFunction(
                     (__int64 *)va,
                     (unsigned int)v55[24],
                     *(unsigned int *)(v81 * 4 + logDefaultPal + 4));
        v82[v80] = XEPALOBJ::ulDispatchGFPEFunction(
                     (__int64 *)va,
                     *(unsigned int *)(v100 + 96),
                     *(unsigned int *)(v80 * 4 + logDefaultPal + 4));
        ++v80;
        ++v81;
        if ( !--v83 )
          break;
        v55 = (_DWORD *)v100;
      }
      v84 = v96;
      v12 = v97;
      v8 = v98;
      if ( (v91 & 0x2000) != 0 )
      {
        v85 = 0;
        if ( *(_DWORD *)(v96 + 28) )
        {
          do
          {
            v86 = v85;
            v87 = XEPALOBJ::ulDispatchGFPEFunction(
                    (__int64 *)va,
                    *(unsigned int *)(v100 + 96),
                    *(unsigned int *)(*(_QWORD *)(v84 + 112) + 4LL * v85++));
            v8[v86 + 21] = v87;
          }
          while ( v85 < *(_DWORD *)(v84 + 28) );
        }
        v8[19] |= 0x2000u;
      }
      else if ( v93 )
      {
        for ( m = 0; m < *((_DWORD *)v15 + 7); v8[v90 + 21] = v89 )
        {
          v89 = XEPALOBJ::ulDispatchGFPEFunction(
                  (__int64 *)va,
                  *(unsigned int *)(v100 + 96),
                  *(unsigned int *)(*((_QWORD *)v15 + 14) + 4LL * m));
          v90 = *((unsigned __int8 *)v93 + m++ + 4);
        }
      }
    }
    goto LABEL_25;
  }
  v8[1] |= 1u;
LABEL_25:
  v24 = 0;
LABEL_26:
  v25 = v8[1];
  if ( (v25 & 9) == 0 )
  {
    v26 = v8[3];
    if ( v26 )
    {
      v39 = *((_QWORD *)v8 + 5);
      if ( !v39 || (v40 = *((_QWORD *)v8 + 6)) == 0 || *(_DWORD *)(v39 + 28) == *(_DWORD *)(v40 + 28) )
      {
        while ( *(_DWORD *)(*((_QWORD *)v8 + 2) + 4LL * v24) == v24 )
        {
          if ( ++v24 >= v26 )
            goto LABEL_40;
        }
      }
    }
    else
    {
      v27 = *((_QWORD *)v8 + 5);
      v28 = *((_QWORD *)v8 + 6);
      if ( v27 && v28 && !*(_DWORD *)(v28 + 28) )
      {
        v29 = *(_DWORD *)(v27 + 24);
        v30 = 65280;
        v31 = 16711680;
        if ( (v29 & 2) != 0 )
        {
          v37 = *(int **)(v27 + 112);
          v33 = *v37;
          v32 = v37[1];
          v34 = v37[2];
        }
        else
        {
          v32 = 65280;
          if ( (v29 & 4) != 0 )
          {
            v33 = 255;
            v34 = 16711680;
          }
          else
          {
            v33 = 16711680;
            v34 = 255;
          }
        }
        v35 = *(_DWORD *)(v28 + 24);
        if ( (v35 & 2) != 0 )
        {
          v43 = *(int **)(v28 + 112);
          v36 = *v43;
          v30 = v43[1];
          v31 = v43[2];
        }
        else if ( (v35 & 4) != 0 )
        {
          v36 = 255;
        }
        else
        {
          v36 = 16711680;
          v31 = 255;
        }
        if ( v33 == v36 && v32 == v30 && v34 == v31 )
LABEL_40:
          v8[1] = v25 | 1;
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
