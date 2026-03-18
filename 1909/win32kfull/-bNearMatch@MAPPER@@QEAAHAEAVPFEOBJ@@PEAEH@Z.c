/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0048560
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0047FA0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C028E08C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C028E244 (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C004AC10 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z @ 0x1C004AEAC (-bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z.c)
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C004B18C (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C004BD80 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C008D1F4 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0092BB0 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C00E0748 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x1C00FF110 (-lfOutPrecision@IFIOBJ@@QEBAEXZ.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C010406C (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C01040A4 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C010AC8C (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C01567C8 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C015E824 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     memcmp @ 0x1C0163AE0 (memcmp.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B3EB8 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall MAPPER::bNearMatch(MAPPER *this, struct PFE **a2, unsigned __int8 *a3, int a4)
{
  int v4; // r15d
  struct PFE *v5; // r10
  unsigned int v6; // eax
  struct PFE *v8; // rcx
  bool v10; // zf
  char *v12; // r12
  struct PFE *v13; // rdx
  int v14; // ebp
  __int64 v15; // r11
  __int64 v16; // r9
  char v17; // cl
  char v18; // al
  char v19; // cl
  int v20; // edx
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // cl
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  unsigned __int8 v26; // si
  int v27; // edi
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int8 v30; // dl
  struct PFE *v31; // r13
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // edi
  int v37; // r10d
  int v38; // eax
  unsigned int v39; // edx
  int v40; // eax
  int v41; // edi
  int v42; // eax
  unsigned int v43; // eax
  __int64 v45; // rdi
  unsigned __int64 v46; // rcx
  __int64 v47; // r11
  __int64 v48; // r9
  __int16 v49; // ax
  int v50; // r8d
  int v51; // esi
  int v52; // r8d
  int v53; // r10d
  char v54; // dl
  char v55; // dl
  int v56; // eax
  _DWORD *v57; // rdi
  int v58; // ebp
  int v59; // r8d
  int v60; // edx
  int v61; // eax
  int v62; // ebp
  int v63; // r15d
  unsigned int v64; // eax
  struct PFE *v65; // rbp
  int v66; // ecx
  int v67; // r9d
  __int64 v68; // rax
  char *v69; // r9
  int *v70; // rax
  _BYTE *v71; // r9
  unsigned __int64 v72; // rcx
  unsigned int v73; // eax
  unsigned int v74; // r9d
  unsigned int v75; // r8d
  unsigned __int8 v76; // al
  int v77; // eax
  int v78; // r15d
  unsigned int v79; // ebp
  __int64 v80; // r11
  unsigned int v81; // r12d
  int v82; // r13d
  unsigned int v83; // r10d
  int v84; // r11d
  int v85; // r8d
  int v86; // r8d
  int v87; // r10d
  int v88; // r9d
  int v89; // eax
  int v90; // r9d
  unsigned int v91; // eax
  int v92; // r11d
  int v93; // ecx
  int v94; // ecx
  struct tagPvtData *v95; // rax
  struct _LIST_ENTRY *LinkedFontList; // r10
  struct _LIST_ENTRY *i; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 Blink_low; // rcx
  _BYTE *v100; // rax
  unsigned __int64 v101; // r8
  __int64 v102; // rdx
  int v103; // r8d
  int v104; // r9d
  __int64 v105; // rdx
  unsigned int v106; // eax
  unsigned int v107; // ecx
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r10
  unsigned int v111; // r8d
  int v112; // r11d
  unsigned int v113; // edx
  unsigned int v114; // [rsp+20h] [rbp-58h] BYREF
  struct PFE *v115; // [rsp+28h] [rbp-50h]
  _QWORD v116[2]; // [rsp+30h] [rbp-48h] BYREF
  int v117; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *Str2; // [rsp+88h] [rbp+10h] BYREF
  int v119; // [rsp+98h] [rbp+20h]

  v119 = a4;
  v4 = 0;
  v5 = *a2;
  v6 = *((_DWORD *)this + 63) & 0xFFFFB7FF;
  *((_DWORD *)this + 63) = v6;
  v8 = *a2;
  v10 = *a2 == gppfeMapperDefault;
  v115 = v5;
  Str2 = 0LL;
  if ( v10 )
  {
    *((_DWORD *)this + 63) = v6 | 0x4000;
    v8 = *a2;
  }
  v12 = (char *)this + 256;
  *((_QWORD *)this + 32) = *((_QWORD *)v8 + 4);
  v13 = *a2;
  if ( (*((_DWORD *)v13 + 3) & 2) != 0 )
    goto LABEL_292;
  v116[0] = *(_QWORD *)v13;
  if ( *(struct PFT **const *)(v116[0] + 128LL) == gpPFTPrivate )
  {
    if ( !PFFOBJ::pPvtDataMatch((PFFOBJ *)v116) )
      goto LABEL_292;
    v5 = v115;
  }
  if ( (*((_DWORD *)*a2 + 3) & 0x20) != 0 )
    goto LABEL_292;
  if ( *(struct PFT **const *)(*(_QWORD *)*a2 + 128LL) != gpPFTPrivate )
    goto LABEL_7;
  v116[0] = *(_QWORD *)*a2;
  v95 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v116);
  if ( v95 )
  {
    if ( (*((_DWORD *)v95 + 2) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
    {
LABEL_292:
      *((_DWORD *)this + 46) = -2;
      return 0LL;
    }
  }
  v5 = v115;
LABEL_7:
  v14 = *((_DWORD *)this + 63);
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  if ( v14 < 0 && (*(_DWORD *)(*((_QWORD *)*a2 + 4) + 48LL) & 0x4000) == 0
    || *((_DWORD *)this + 70) && !*((_QWORD *)v5 + 9) )
  {
    goto LABEL_148;
  }
  v15 = *((_QWORD *)this + 1);
  v16 = *(_QWORD *)v12;
  v17 = *(_BYTE *)(*(_QWORD *)v12 + 45LL);
  v18 = *(_BYTE *)(v15 + 27) & 3;
  if ( v18 )
  {
    v19 = v17 & 2;
    if ( v18 == 1 )
    {
      v20 = v19 != 0 ? 0x3A98 : 0;
      if ( !v19 )
        goto LABEL_12;
    }
    else
    {
      if ( v19 )
        goto LABEL_12;
      v20 = 350;
    }
  }
  else
  {
    if ( (v17 & 1) == 0 )
      goto LABEL_12;
    v20 = 1;
  }
  *((_DWORD *)this + 46) = v20;
  if ( (unsigned int)MAPPER::bNoMatch(this, v5) )
    return 0LL;
  v5 = v115;
LABEL_12:
  v21 = *(_BYTE *)(v16 + 45) & 0x70;
  v22 = *(_BYTE *)(v15 + 27) & 0x70;
  if ( !v22 )
  {
    if ( *((_BYTE *)this + 284) == 2 )
    {
      v22 = *(_BYTE *)(v16 + 45) & 0x70;
    }
    else if ( v21 )
    {
      if ( (v14 & 0x800000) != 0 )
        v22 = 16;
      else
        v22 = 32;
    }
  }
  if ( (v22 & 0xF0u) < 0x60 )
    Str2 = (wchar_t *)gpwszFamilyDefaultFonts[(unsigned __int64)v22 >> 4];
  if ( v22 == v21 )
    goto LABEL_25;
  v23 = 0;
  if ( !v21 )
  {
    v24 = 8000;
    goto LABEL_24;
  }
  if ( v22 > 0x30u )
  {
    if ( v21 > 0x30u )
      goto LABEL_23;
LABEL_214:
    v23 = 50;
    goto LABEL_23;
  }
  if ( v21 > 0x30u )
    goto LABEL_214;
LABEL_23:
  v24 = v23 + 9000;
LABEL_24:
  *((_DWORD *)this + 46) += v24;
  v25 = *((_DWORD *)this + 46);
  if ( v25 >= *((_DWORD *)this + 45)
    && (v25 != *((_DWORD *)this + 45) || (v14 & 0x1000080) != 0 || *((_DWORD *)v5 + 20) >= *((_DWORD *)this + 52)) )
  {
    return 0LL;
  }
LABEL_25:
  v26 = *((_BYTE *)this + 284);
  v27 = v14 & 0x8000000;
  if ( v26 != 1 && !v27 )
  {
    v28 = *((_QWORD *)*a2 + 4);
    v29 = *(int *)(v28 + 40);
    if ( (_DWORD)v29 )
    {
      if ( v26 == 0xFE )
      {
        v30 = -2;
      }
      else
      {
        v30 = *(_BYTE *)(v28 + v29);
        v71 = (_BYTE *)(v28 + v29);
        v72 = v28 + v29 + 16;
        if ( (unsigned __int64)v71 >= v72 )
        {
LABEL_129:
          if ( *((_QWORD *)*a2 + 15) )
          {
            LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)a2);
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              Flink = i[2].Flink[2].Flink;
              Blink_low = SLODWORD(Flink[2].Blink);
              if ( (_DWORD)Blink_low )
              {
                v100 = (char *)Flink + Blink_low;
                v101 = (unsigned __int64)&Flink[1] + Blink_low;
                if ( (unsigned __int64)v100 < v101 )
                {
                  while ( *v100 != v26 )
                  {
                    if ( *v100 != 1 && (unsigned __int64)++v100 < v101 )
                      continue;
                    goto LABEL_225;
                  }
LABEL_219:
                  v30 = v26;
                  break;
                }
              }
              else if ( BYTE4(Flink[2].Blink) == v26 )
              {
                goto LABEL_219;
              }
LABEL_225:
              ;
            }
            v5 = v115;
          }
        }
        else
        {
          while ( *v71 != v26 )
          {
            if ( *v71 != 1 && (unsigned __int64)++v71 < v72 )
              continue;
            goto LABEL_129;
          }
          v30 = *((_BYTE *)this + 284);
        }
      }
    }
    else
    {
      v30 = *(_BYTE *)(v28 + 44);
    }
    *a3 = v30;
    if ( v26 != v30 )
    {
      if ( (v14 & 0x4000000) == 0 )
        goto LABEL_148;
      *((_DWORD *)this + 46) += 65000;
      if ( (unsigned int)MAPPER::bNoMatch(this, v5) )
        return 0LL;
    }
    goto LABEL_30;
  }
  v76 = jMapCharset(v26, (struct PFEOBJ *)a2);
  *a3 = v76;
  if ( v26 != 1 || v27 )
  {
LABEL_30:
    v31 = v115;
    goto LABEL_31;
  }
  v31 = v115;
  if ( MAPPER::DefaultCharset != v76 )
  {
    *((_DWORD *)this + 46) += 2;
    if ( (unsigned int)MAPPER::bNoMatch(this, v31) )
      return 0LL;
  }
LABEL_31:
  if ( v119 )
  {
    if ( PFEOBJ::bCheckFamilyName((PFEOBJ *)a2, *((const unsigned __int16 **)this + 2), 0, &v117) )
    {
      if ( v117 )
        ++*((_DWORD *)this + 46);
    }
    else
    {
      *((_DWORD *)this + 46) += !Str2
                             || _wcsicmp(
                                  (const wchar_t *)(*((_QWORD *)*a2 + 4) + *(int *)(*((_QWORD *)*a2 + 4) + 8LL)),
                                  Str2)
                              ? 10000
                              : 9000;
    }
    if ( (unsigned int)MAPPER::bNoMatch(this, v31) )
      return 0LL;
  }
  v32 = *(_QWORD *)v12;
  v33 = *((_DWORD *)this + 63);
  v34 = *(int *)(*(_QWORD *)v12 + 8LL);
  if ( (v33 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)(v34 + v32) != 64 )
      goto LABEL_148;
  }
  else if ( *(_WORD *)(v34 + v32) == 64 )
  {
    goto LABEL_148;
  }
  if ( (*(_DWORD *)(v32 + 48) & 0x3000010) != 0 )
    goto LABEL_50;
  if ( (v33 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_148;
  v35 = *(_QWORD *)v12;
  if ( (*((_DWORD *)this + 63) & 2) != 0 )
    v36 = *(__int16 *)(v35 + 56);
  else
    v36 = *(__int16 *)(v35 + 60) + *(__int16 *)(v35 + 62);
  v37 = *((_DWORD *)this + 41);
  if ( v36 < v37
    && (LOBYTE(v35) = (*(_DWORD *)(v35 + 48) & 0x100000) != 0,
        ((unsigned __int8)v35 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0)
    && v37 > 7 * v36 / 4 )
  {
    if ( !(unsigned int)MAPPER::bWin31BitmapHeightScaling((MAPPER *)v35, v37, v36, &v117) )
      return 0LL;
    v38 = v117;
    if ( (unsigned int)v117 > 8 )
      v38 = 8;
  }
  else
  {
    v38 = 1;
  }
  *((_DWORD *)this + 49) = v38;
  v39 = 0;
  if ( v38 > 1 )
  {
    if ( (*((_DWORD *)this + 63) & 0x800) == 0 && v38 + 2 >= v36 )
      return 0LL;
    v36 *= v38;
    v39 = (20 * v38) | (5 * (v38 - 1));
  }
  v40 = *((_DWORD *)this + 41);
  if ( v40 >= v36 )
  {
    v39 += 150 * (v40 - v36);
  }
  else
  {
    v41 = v36 - v40;
    if ( (*((_DWORD *)this + 63) & 0x1080) == 0x1080 )
    {
      if ( v41 <= 1 )
        goto LABEL_45;
      v42 = v41 + 20;
    }
    else
    {
      v42 = v41 + 4;
    }
    v39 += 150 * v42;
  }
LABEL_45:
  if ( v39 )
  {
    *((_DWORD *)this + 46) += v39;
    v43 = *((_DWORD *)this + 46);
    if ( v43 >= *((_DWORD *)this + 45)
      && (v43 != *((_DWORD *)this + 45)
       || (*((_DWORD *)this + 63) & 0x1000080) != 0
       || *((_DWORD *)v31 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
    if ( v39 >= 0x2710 && (*((_DWORD *)this + 63) & 0x4800) == 0 )
      return 0LL;
  }
LABEL_50:
  v45 = *(_QWORD *)this;
  v46 = *(_QWORD *)(**(_QWORD **)this + 976LL);
  if ( (*(_DWORD *)(v46 + 236) & 1) != 0
    && IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 256)) == 6
    && (*((_DWORD *)this + 63) & 0x4000) == 0 )
  {
    v102 = *(_QWORD *)v12;
    v103 = *((_DWORD *)this + 61);
    v104 = *(_DWORD *)(*(_QWORD *)v12 + 128LL);
    if ( v103 != v104 || *((_DWORD *)this + 62) != *(_DWORD *)(v102 + 132) )
    {
      v46 = (unsigned int)(v104 * *((_DWORD *)this + 62));
      if ( v103 * *(_DWORD *)(v102 + 132) != (_DWORD)v46 )
        goto LABEL_148;
    }
  }
  v47 = *(_QWORD *)v12;
  v48 = *((_QWORD *)this + 1);
  v49 = *(_WORD *)(*(_QWORD *)v12 + 52LL) & 1;
  if ( *(_BYTE *)(v48 + 20) )
  {
    if ( !v49 )
    {
      if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
      {
        *((_DWORD *)this + 47) |= 0x4000u;
        v77 = 1;
      }
      else
      {
        v77 = 4;
      }
      *((_DWORD *)this + 46) += v77;
      if ( (unsigned int)MAPPER::bNoMatch(this, v31) )
        return 0LL;
    }
  }
  else if ( v49 )
  {
    *((_DWORD *)this + 46) += 4;
    if ( (unsigned int)MAPPER::bNoMatch(this, v31) )
      return 0LL;
  }
  v50 = *(unsigned __int16 *)(v47 + 46) - *((_DWORD *)this + 43);
  v51 = *((_DWORD *)this + 63);
  if ( (v51 & 0x200000) != 0 )
  {
    *((_DWORD *)this + 46) += (int)(19 * abs32(v50)) >> 7;
    if ( (unsigned int)MAPPER::bNoMatch(this, v31) )
      return 0LL;
  }
  else if ( v50 )
  {
    if ( v50 < 0 )
    {
      v50 = *((_DWORD *)this + 43) - *(unsigned __int16 *)(v47 + 46);
      if ( v50 > 150 )
      {
        if ( IFIOBJ::pvSimBold((MAPPER *)((char *)this + 256)) )
        {
          *((_DWORD *)this + 47) |= 0x2000u;
          v50 -= 120;
        }
      }
    }
    *((_DWORD *)this + 46) += (73 * v50) >> 8;
    if ( (unsigned int)MAPPER::bNoMatch(this, v31) )
      return 0LL;
  }
  v52 = v51 & 0x80;
  if ( (v51 & 0x80) == 0 )
  {
    v53 = *(_DWORD *)(v47 + 48);
    if ( (v53 & 1) == 0
      && (v53 & 2) != 0
      && ((v51 & 0x10000) != 0
       || *(int *)(*(_QWORD *)v45 + 72LL) < 0
       || ((v51 & 0x100) == 0 || *((_DWORD *)this + 61) != *((_DWORD *)this + 62)) && (v53 & 0x40000000) == 0) )
    {
      goto LABEL_148;
    }
    v54 = *(_BYTE *)(v48 + 24);
    if ( v54 == 7 && IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 256)) != 8 )
      goto LABEL_148;
    if ( v54 == 10 && v53 >= 0 )
      goto LABEL_148;
  }
  v55 = *(_BYTE *)(v48 + 24);
  if ( v55 == 9
    || (v46 = gpGdiSharedMemory, *(_DWORD *)(gpGdiSharedMemory + 1573012LL)) && ((v55 - 5) & 0xFA) != 0
    || (*(_DWORD *)(*(_QWORD *)v45 + 72LL) & 0x20000000) != 0 )
  {
    if ( v52 || (v56 = *(_DWORD *)(v47 + 48), (v56 & 1) == 0) && ((v56 & 2) != 0 || (v56 & 4) != 0 || (v56 & 8) == 0) )
    {
      *((_DWORD *)this + 46) += 2;
      v73 = *((_DWORD *)this + 46);
      if ( v73 >= *((_DWORD *)this + 45)
        && (v73 != *((_DWORD *)this + 45) || (v51 & 0x1000080) != 0 || *((_DWORD *)v31 + 20) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
    }
  }
  v57 = (_DWORD *)(v47 + 48);
  if ( (*(_DWORD *)(v47 + 48) & 0x2000010) != 0 )
    goto LABEL_76;
  v58 = *(__int16 *)(v47 + 76);
  *((_DWORD *)this + 48) = 1;
  if ( *(_DWORD *)(v48 + 4) )
  {
    if ( (v51 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_148;
    v59 = *(_DWORD *)(*(_QWORD *)v12 + 48LL);
    v57 = (_DWORD *)(*(_QWORD *)v12 + 48LL);
    v51 = *((_DWORD *)this + 63);
    LOBYTE(v46) = (v59 & 0x100000) != 0;
    if ( ((unsigned __int8)v46 & ((v51 & 0x8000) == 0)) != 0 && (v60 = *((_DWORD *)this + 42), v60 > v58) )
    {
      if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v46, v60, v58, &v117) )
        return 0LL;
      v94 = v117;
      if ( (unsigned int)v117 > 5 )
        v94 = 5;
      *((_DWORD *)this + 48) = v94;
    }
    else if ( (v59 & 0x1000000) != 0 )
    {
      v105 = (unsigned int)(*(__int16 *)(*(_QWORD *)v12 + 60LL) + *(__int16 *)(*(_QWORD *)v12 + 62LL));
      v117 = v58 * *((_DWORD *)this + 41);
      if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)v117, v105, &v117) )
        return 0LL;
      v58 = v117;
    }
    v61 = *((_DWORD *)this + 48);
    if ( v61 > 1 )
    {
      v58 *= v61;
      v4 = (v61 - 1) | (20 * v61);
    }
    if ( *((_DWORD *)this + 42) - v58 < 0 )
      v62 = v58 - *((_DWORD *)this + 42);
    else
      v62 = *((_DWORD *)this + 42) - v58;
    v63 = 50 * v62 + v4;
    if ( v63 )
    {
      *((_DWORD *)this + 46) += v63;
      v64 = *((_DWORD *)this + 46);
      if ( v64 >= *((_DWORD *)this + 45)
        && (v64 != *((_DWORD *)this + 45) || (v51 & 0x1000080) != 0 || *((_DWORD *)v31 + 20) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
    }
    goto LABEL_76;
  }
  if ( (*v57 & 0x100000) == 0 || (v51 & 0x8000) != 0 )
  {
LABEL_76:
    v65 = v115;
    goto LABEL_77;
  }
  v78 = *((_DWORD *)this + 62);
  v79 = *((_DWORD *)this + 61);
  if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>((unsigned int)(100 * v78), v79, &v117) )
    return 0LL;
  v81 = *(_DWORD *)(v80 + 132);
  if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * *(_DWORD *)(v80 + 128)), v81, &Str2) )
    return 0LL;
  v82 = (int)Str2;
  if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)Str2, *((unsigned int *)this + 49), &v114) )
    return 0LL;
  v85 = 0;
  if ( v84 == v81 && v79 == v78 )
  {
    v85 = 1;
    if ( v83 == 1 )
    {
      v12 = (char *)this + 256;
      goto LABEL_76;
    }
    v90 = v117;
    v91 = v83;
  }
  else
  {
    v92 = 1;
    v90 = v117;
    if ( v117 <= (3 * v114) >> 1 )
    {
      v93 = 0;
LABEL_192:
      if ( !v83 )
        goto LABEL_148;
      v93 += 30 * abs32(v90 - v82 * v92 / v83);
      goto LABEL_187;
    }
    if ( !v114 )
      goto LABEL_148;
    v91 = v117 / v114;
  }
  if ( v91 > 5 )
    v91 = 5;
  *((_DWORD *)this + 48) = v91;
  v92 = v91;
  v93 = 20 * v91;
  if ( !v85 || v91 != v83 )
    goto LABEL_192;
LABEL_187:
  v65 = v115;
  if ( v93 )
  {
    *((_DWORD *)this + 46) += v93;
    if ( (unsigned int)MAPPER::bNoMatch(this, v65) )
      return 0LL;
  }
  v12 = (char *)this + 256;
LABEL_77:
  v66 = *((_DWORD *)this + 48);
  if ( v66 > 1 || *((int *)this + 49) > 1 )
  {
    v86 = *((_DWORD *)this + 49);
    v87 = *((_DWORD *)this + 46) + 50;
    *((_DWORD *)this + 46) = v87;
    if ( v66 > v86 )
    {
      if ( v86 )
      {
        v88 = 100 * v66;
        if ( v86 == 1 )
          goto LABEL_179;
        v89 = (v88 + v86 / 2) / v86;
        goto LABEL_178;
      }
    }
    else
    {
      if ( v66 >= v86 )
        goto LABEL_180;
      if ( v66 )
      {
        v88 = 100 * v86;
        if ( v66 == 1 )
        {
LABEL_179:
          *((_DWORD *)this + 46) = v87 + 4 * v88;
LABEL_180:
          if ( (unsigned int)MAPPER::bNoMatch(this, v65) )
            return 0LL;
          goto LABEL_79;
        }
        v89 = (v88 + v66 / 2) / v66;
LABEL_178:
        v88 = v89;
        goto LABEL_179;
      }
    }
LABEL_148:
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
LABEL_79:
  if ( (*v57 & 0x10) == 0 && (v51 & 0x41000) != 0x41000 )
  {
    if ( (v51 & 0x80000) == 0 && !(unsigned int)MAPPER::bCalcOrientation(this) )
      goto LABEL_148;
    v74 = *((_DWORD *)this + 44);
    v75 = v74 - *((_DWORD *)*a2 + 17);
    if ( v75 && (*((_DWORD *)this + 63) & 0x480) == 0x480 )
    {
      v106 = *((_DWORD *)*a2 + 17) - *((_DWORD *)this + 44);
      if ( v75 <= v74 )
        v106 = *((_DWORD *)this + 44) - *((_DWORD *)*a2 + 17);
      v75 = v106 % 0x384;
    }
    if ( v75 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v12 + 48LL) & 0x200000) != 0 )
      {
        v107 = -v75;
        if ( v75 <= v74 )
          v107 = v75;
        v75 = v107 % 0x384;
      }
      if ( v75 )
        goto LABEL_148;
    }
  }
  v67 = *((_DWORD *)this + 63);
  if ( (v67 & 0x400000) != 0 )
  {
    ++*((_DWORD *)this + 46);
    if ( (unsigned int)MAPPER::bNoMatch(this, v65) )
      return 0LL;
  }
  if ( v67 < 0 )
  {
    v69 = (char *)this + 100;
    v70 = (int *)((char *)this + 96);
  }
  else
  {
    v68 = *((_QWORD *)this + 1);
    v69 = (char *)(v68 + 356);
    v70 = (int *)(v68 + 352);
  }
  if ( *v70 )
  {
    v108 = *(_QWORD *)v12;
    if ( *(_DWORD *)(*(_QWORD *)v12 + 4LL) < 0x10u )
      goto LABEL_148;
    v109 = *(int *)(v108 + 204);
    if ( !(_DWORD)v109 )
      goto LABEL_148;
    v110 = v108 + v109;
    if ( !(v108 + v109) )
      goto LABEL_148;
    v111 = *(_DWORD *)(v110 + 4);
    v112 = *v70;
    v113 = v111;
    if ( v111 && *v70 == v111 && *((_DWORD *)this + 46) <= 0x88B8u )
    {
      *((_QWORD *)this + 36) = v65;
      v112 = *v70;
      v113 = *(_DWORD *)(v110 + 4);
    }
    if ( v112 != v113 || memcmp(v69, (const void *)(v110 + 8), 4LL * v113) )
      goto LABEL_148;
  }
  return 1LL;
}
