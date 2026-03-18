/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C004AB70
 * Callers:
 *     GreDrawStream @ 0x1C0047970 (GreDrawStream.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00524A0 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0098060 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C010E12C (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C02512C4 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C02A1930 (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02BDE14 (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

_DWORD *__fastcall CreateXlateObject(
        void *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        __int16 a10)
{
  unsigned int v13; // r13d
  _DWORD *result; // rax
  _DWORD *v15; // r15
  unsigned int v16; // r12d
  _DWORD *v17; // rdx
  int v18; // ecx
  int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rcx
  int v22; // eax
  int v23; // r9d
  struct PALETTE *v24; // rbx
  __int16 v25; // cx
  int v26; // eax
  struct _TRANSLATE *v27; // r11
  struct _TRANSLATE *v28; // rdx
  int v29; // eax
  __int64 v30; // rsi
  __int16 v31; // r9
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned int v36; // eax
  _DWORD *v37; // rcx
  unsigned int v38; // eax
  _DWORD *v39; // rcx
  unsigned int v40; // edx
  struct _TRANSLATE *v41; // r9
  __int64 v42; // rax
  int v43; // eax
  int v44; // r9d
  unsigned int v45; // edi
  unsigned int v46; // esi
  unsigned int v47; // eax
  int NearestIndexFromColorref; // eax
  unsigned int v49; // ebx
  size_t v50; // r8
  __int64 v51; // rdx
  int v52; // eax
  struct _TRANSLATE *v53; // rdx
  unsigned int v54; // eax
  _DWORD *v55; // rcx
  _DWORD *v56; // rsi
  int v57; // eax
  struct _TRANSLATE *v58; // r8
  unsigned int v59; // edx
  struct _TRANSLATE *v60; // r14
  __int64 v61; // rax
  unsigned int v62; // ebx
  __int64 v63; // rdi
  __int64 v64; // r13
  __int64 v65; // r14
  __int64 v66; // rdi
  unsigned int v67; // esi
  __int64 v68; // rbx
  int v69; // eax
  struct _TRANSLATE *v70; // r13
  unsigned int j; // esi
  int v72; // eax
  __int64 v73; // rcx
  int v74; // r9d
  unsigned int v75; // ecx
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // edx
  int v81; // ebx
  int v82; // r8d
  int *v83; // rdx
  int v84; // r11d
  int v85; // edi
  int v86; // r10d
  int v87; // ecx
  int *v88; // rcx
  int v89; // eax
  __int16 v90; // [rsp+20h] [rbp-71h]
  int v91; // [rsp+20h] [rbp-71h]
  struct PALETTE *i; // [rsp+28h] [rbp-69h] BYREF
  int v93; // [rsp+30h] [rbp-61h]
  struct _TRANSLATE *v94; // [rsp+38h] [rbp-59h]
  struct _TRANSLATE *v95; // [rsp+40h] [rbp-51h]
  __int64 v96; // [rsp+48h] [rbp-49h]
  int v97; // [rsp+50h] [rbp-41h]
  __int64 v98; // [rsp+58h] [rbp-39h]
  _BYTE v99[32]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v100; // [rsp+80h] [rbp-11h]
  char v101; // [rsp+E0h] [rbp+4Fh]
  __int64 v102; // [rsp+E8h] [rbp+57h] BYREF

  v102 = a4;
  v90 = a10;
  v98 = a3;
  if ( a3 )
    v13 = *(_DWORD *)(a3 + 28);
  else
    v13 = 256;
  result = (_DWORD *)AllocThreadBufferWithTag(4 * v13 + 88, 1953265735LL, 0LL, a4);
  v15 = result;
  if ( !result )
    return result;
  v16 = 0;
  v17 = result + 21;
  v18 = 0;
  *result = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  if ( !v13 )
  {
    v18 = 512;
    v17 = 0LL;
  }
  v19 = 2;
  if ( !v13 )
    v19 = 0;
  v15[1] = v19;
  *((_QWORD *)v15 + 2) = v17;
  v15[19] = v18;
  v15[2] = 0;
  v15[3] = v13;
  v15[9] = -1;
  *((_QWORD *)v15 + 5) = 0LL;
  *((_QWORD *)v15 + 6) = 0LL;
  *((_QWORD *)v15 + 7) = 0LL;
  v20 = ghsemPalette;
  v96 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v15[18] = 0;
  *((_QWORD *)v15 + 8) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      v15[18] = a2;
      *((_QWORD *)v15 + 8) = a1;
      if ( (a2 & 2) != 0 )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v99, a1);
        v21 = v100;
        if ( v100 )
        {
          v15[1] |= 0x10u;
          DEC_SHARE_REF_CNT(v21);
        }
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v99);
      }
      else if ( (a2 & 1) != 0 )
      {
        v22 = v15[1] | 0x20;
        v15[1] = v22;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            v15[1] = v22 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      v15[1] |= 0x20u;
      v15[18] = a2;
      *((_QWORD *)v15 + 8) = 0LL;
    }
  }
  v23 = v15[1] & 8;
  v93 = v23;
  if ( !v102 || (*(_DWORD *)(v102 + 24) & 0x800) != 0 )
  {
    v24 = (struct PALETTE *)a6;
    v101 = 1;
    if ( !*(_QWORD *)(a6 + 72) )
      v24 = ppalDefault;
    v25 = v90;
    if ( (v90 & 0x2000) == 0 )
    {
      v26 = v15[19] | 0x800;
      v15[19] = v26;
      if ( v102 )
        v15[19] = v26 | 0x1000;
    }
  }
  else
  {
    v24 = (struct PALETTE *)a6;
    v25 = v90;
    v101 = 0;
  }
  *((_QWORD *)v15 + 5) = a3;
  *((_QWORD *)v15 + 6) = v102;
  *((_QWORD *)v15 + 7) = v24;
  v27 = (struct _TRANSLATE *)*((_QWORD *)v24 + 9);
  v28 = (struct _TRANSLATE *)*((_QWORD *)v24 + 10);
  v95 = v27;
  v94 = v28;
  if ( a3 )
  {
    v29 = *(_DWORD *)(a3 + 24);
    LODWORD(i) = v29;
    v97 = v29 & 0x800;
    if ( (v29 & 0x800) == 0 || v27 != v28 && (v25 & 0x4000) == 0 )
    {
      v30 = v102;
      if ( (v29 & 0x8000) == 0 )
        goto LABEL_57;
      if ( !v102 )
        goto LABEL_51;
      LODWORD(v96) = *(_DWORD *)(v102 + 24);
      v31 = v96;
      if ( (v96 & 0x8000) != 0 )
      {
        v32 = *(_DWORD *)(v102 + 28);
        if ( *(_DWORD *)(a3 + 28) == v32 && v32 == 256 )
        {
          if ( (v96 & 0x100) == 0 )
          {
LABEL_43:
            LODWORD(v35) = 256;
            while ( 1 )
            {
              v35 = (unsigned int)(v35 - 1);
              if ( ((*(_DWORD *)(*(_QWORD *)(a3 + 112) + 4 * v35) ^ *(_DWORD *)(*(_QWORD *)(v102 + 112) + 4 * v35)) & 0xFFFFFF) != 0 )
                break;
              if ( !(_DWORD)v35 )
                goto LABEL_52;
            }
            v31 = v96;
LABEL_48:
            v28 = v94;
            goto LABEL_49;
          }
          v33 = *(_QWORD *)(v102 + 72);
          if ( v33 )
          {
            LODWORD(v34) = 256;
            while ( 1 )
            {
              v34 = (unsigned int)(v34 - 1);
              if ( *(unsigned __int8 *)(v34 + v33 + 4) != (_DWORD)v34 )
                goto LABEL_48;
              if ( !(_DWORD)v34 )
                goto LABEL_43;
            }
          }
        }
      }
LABEL_49:
      if ( (v31 & 0x800) == 0 || v27 != v28 )
      {
LABEL_56:
        v23 = v93;
LABEL_57:
        if ( v97 && !v30 )
        {
          v38 = 0;
          v39 = v15 + 21;
          do
            *v39++ = v38++;
          while ( v38 < 0x100 );
          v40 = 0;
          if ( *((_DWORD *)v24 + 7) )
          {
            v41 = v94;
            do
            {
              v42 = v40++;
              v15[*((unsigned __int8 *)v41 + v42 + 4) + 21] = *((unsigned __int8 *)v27 + v42 + 4);
            }
            while ( v40 < *((_DWORD *)v24 + 7) );
          }
          v43 = *(_DWORD *)(a3 + 24);
LABEL_65:
          if ( (v43 & 0x1000) != 0 )
          {
            v15[21] = 0;
            v15[276] = 255;
          }
          else if ( (v43 & 0x10000) == 0 )
          {
            v15[21] = 0;
            v15[267] = 246;
            v15[22] = 1;
            v15[268] = 247;
            v15[23] = 2;
            v15[269] = 248;
            v15[24] = 3;
            v15[270] = 249;
            v15[25] = 4;
            v15[271] = 250;
            v15[26] = 5;
            v15[272] = 251;
            v15[27] = 6;
            v15[273] = 252;
            v15[28] = 7;
            v15[274] = 253;
            v15[29] = 8;
            v15[275] = 254;
            v15[30] = 9;
            v15[276] = 255;
          }
          goto LABEL_136;
        }
        if ( ((unsigned __int16)i & 0x2000) != 0 )
        {
          if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v102) )
          {
            v15[21] = 0;
            v15[22] = 1;
          }
          else
          {
            v45 = a7;
            if ( v44 )
            {
              v46 = a8;
              v47 = a8;
              v15[21] = a7;
            }
            else
            {
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v30, v24, a7, 1LL);
              v46 = a8;
              v15[21] = NearestIndexFromColorref;
              v47 = ulGetNearestIndexFromColorref(v102, v24, v46, 1LL);
            }
            v15[22] = v47;
            v15[19] |= 0x100u;
            v15[7] = v45;
            v15[8] = v46;
          }
          goto LABEL_136;
        }
        if ( !v13 )
        {
          if ( v30 && (*(_DWORD *)(v30 + 24) & 0x2000) != 0 )
          {
            v49 = a9;
            v15[21] = ulGetNearestIndexFromColorref(a3, a5, a9, 1LL);
            v15[1] |= 4u;
            v15[6] = v49;
            *((_QWORD *)v15 + 2) = v15 + 21;
          }
          goto LABEL_136;
        }
        if ( !v30 || !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v102) )
        {
          if ( v23 )
          {
            v51 = v13;
            do
            {
              --v51;
              v15[v51 + 21] = *(_DWORD *)(v51 * 4 + *(_QWORD *)(a3 + 112));
              --v13;
            }
            while ( v13 );
          }
          else
          {
            v52 = v90 & 0x2000;
            v91 = v52;
            if ( !v101 || v52 )
            {
              v24 = (struct PALETTE *)v30;
              if ( v52 )
                v15[19] |= 0x2000u;
            }
            for ( i = v24; ; v24 = i )
            {
              --v13;
              v15[v13 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                                &i,
                                *((unsigned int *)v24 + 24),
                                *(unsigned int *)(*(_QWORD *)(a3 + 112) + 4LL * v13));
              if ( !v13 )
                break;
            }
            if ( v101 && !v91 )
            {
              v53 = v94;
              if ( !v102 )
                v53 = v95;
              XLATE::vMapNewXlate((XLATE *)v15, v53);
            }
          }
          goto LABEL_136;
        }
        v50 = 4LL * v13;
        goto LABEL_123;
      }
LABEL_51:
      if ( (unsigned int)bEqualRGB_In_Palette(a3, v24) )
      {
LABEL_52:
        v36 = 0;
        v37 = v15 + 21;
        do
          *v37++ = v36++;
        while ( v36 < 0x100 );
        v15[1] |= 1u;
        goto LABEL_136;
      }
      v27 = v95;
      goto LABEL_56;
    }
  }
  if ( !v27 )
  {
    v95 = (struct _TRANSLATE *)&defaultTranslate;
    v94 = (struct _TRANSLATE *)&defaultTranslate;
    v24 = ppalDefault;
    *((_QWORD *)v15 + 7) = ppalDefault;
  }
  v54 = 0;
  v55 = v15 + 21;
  do
    *v55++ = v54++;
  while ( v54 < 0x100 );
  v56 = (_DWORD *)v102;
  if ( v102 )
  {
    LODWORD(i) = *(_DWORD *)(v102 + 24);
    v57 = (unsigned __int16)i & 0x8000;
    if ( ((unsigned __int16)i & 0x8000) != 0 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v102, v24) )
      {
        v15[1] |= 1u;
        goto LABEL_136;
      }
      v57 = (unsigned __int16)i & 0x8000;
    }
    if ( v57 && a3 && (unsigned int)bEqualRGB_In_Palette(v56, a3) )
    {
      v15[1] |= 1u;
    }
    else
    {
      if ( ((unsigned __int16)i & 0x800) == 0 )
      {
        if ( !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v102) )
        {
          if ( v56[7] != 256 )
          {
            memset(v15 + 21, 0, 0x400uLL);
            v56 = (_DWORD *)v102;
          }
          v63 = 10LL;
          v64 = 0LL;
          v65 = 10LL;
          while ( 1 )
          {
            v15[v64 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                              &v102,
                              (unsigned int)v56[24],
                              *(unsigned int *)(logDefaultPal + v64 * 4 + 4));
            v15[v65 + 257] = XEPALOBJ::ulDispatchGFPEFunction(
                               &v102,
                               *(unsigned int *)(v102 + 96),
                               *(unsigned int *)(v65 * 4 + logDefaultPal + 4));
            ++v65;
            ++v64;
            if ( !--v63 )
              break;
            v56 = (_DWORD *)v102;
          }
          v66 = v98;
          v20 = v96;
          if ( (v90 & 0x2000) != 0 )
          {
            v67 = 0;
            if ( *(_DWORD *)(v98 + 28) )
            {
              do
              {
                v68 = v67;
                v69 = XEPALOBJ::ulDispatchGFPEFunction(
                        &v102,
                        *(unsigned int *)(v102 + 96),
                        *(unsigned int *)(*(_QWORD *)(v66 + 112) + 4LL * v67++));
                v15[v68 + 21] = v69;
              }
              while ( v67 < *(_DWORD *)(v66 + 28) );
            }
            v15[19] |= 0x2000u;
          }
          else
          {
            v70 = v95;
            if ( v95 )
            {
              for ( j = 0; j < *((_DWORD *)v24 + 7); v15[v73 + 21] = v72 )
              {
                v72 = XEPALOBJ::ulDispatchGFPEFunction(
                        &v102,
                        *(unsigned int *)(v102 + 96),
                        *(unsigned int *)(*((_QWORD *)v24 + 14) + 4LL * j));
                v73 = *((unsigned __int8 *)v70 + j++ + 4);
              }
            }
          }
          goto LABEL_136;
        }
        v50 = 1024LL;
LABEL_123:
        memset(v15 + 21, 0, v50);
        v62 = a9;
        v15[(unsigned int)ulGetNearestIndexFromColorref(a3, a5, a9, 1LL) + 21] = 1;
        v15[1] |= 4u;
        v15[6] = v62;
        goto LABEL_136;
      }
      v58 = v95;
      if ( v94 != v95 )
      {
        v59 = 0;
        if ( *((_DWORD *)v24 + 7) )
        {
          v60 = v94;
          do
          {
            v61 = v59++;
            v15[*((unsigned __int8 *)v58 + v61 + 4) + 21] = *((unsigned __int8 *)v60 + v61 + 4);
          }
          while ( v59 < *((_DWORD *)v24 + 7) );
          v56 = (_DWORD *)v102;
          v20 = v96;
        }
        v43 = v56[6];
        goto LABEL_65;
      }
      v15[1] |= 1u;
    }
  }
  else
  {
    v15[1] |= 1u;
  }
LABEL_136:
  v74 = v15[1];
  if ( (v74 & 9) == 0 )
  {
    v75 = v15[3];
    if ( v75 )
    {
      v76 = *((_QWORD *)v15 + 5);
      if ( !v76 || (v77 = *((_QWORD *)v15 + 6)) == 0 || *(_DWORD *)(v76 + 28) == *(_DWORD *)(v77 + 28) )
      {
        while ( *(_DWORD *)(*((_QWORD *)v15 + 2) + 4LL * v16) == v16 )
        {
          if ( ++v16 >= v75 )
            goto LABEL_160;
        }
      }
    }
    else
    {
      v78 = *((_QWORD *)v15 + 5);
      v79 = *((_QWORD *)v15 + 6);
      if ( v78 && v79 && !*(_DWORD *)(v79 + 28) )
      {
        v80 = *(_DWORD *)(v78 + 24);
        v81 = 65280;
        v82 = 16711680;
        if ( (v80 & 2) != 0 )
        {
          v83 = *(int **)(v78 + 112);
          v84 = *v83;
          v85 = v83[1];
          v86 = v83[2];
        }
        else
        {
          v85 = 65280;
          if ( (v80 & 4) != 0 )
          {
            v84 = 255;
            v86 = 16711680;
          }
          else
          {
            v84 = 16711680;
            v86 = 255;
          }
        }
        v87 = *(_DWORD *)(v79 + 24);
        if ( (v87 & 2) != 0 )
        {
          v88 = *(int **)(v79 + 112);
          v89 = *v88;
          v81 = v88[1];
          v82 = v88[2];
        }
        else if ( (v87 & 4) != 0 )
        {
          v89 = 255;
        }
        else
        {
          v89 = 16711680;
          v82 = 255;
        }
        if ( v84 == v89 && v85 == v81 && v86 == v82 )
LABEL_160:
          v15[1] = v74 | 1;
      }
    }
  }
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v20);
    GreReleaseSemaphoreInternal(v20);
  }
  return v15;
}
