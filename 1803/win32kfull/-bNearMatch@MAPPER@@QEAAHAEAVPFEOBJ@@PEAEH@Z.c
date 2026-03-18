/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C003FCE0
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C003F740 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C02648A8 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C0264A5C (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C003F620 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z @ 0x1C003F658 (-bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0040828 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C00408B4 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C00CABFC (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00CCBE8 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00CCC08 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x1C00CFD6C (-lfOutPrecision@IFIOBJ@@QEBAEXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C00CFD98 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C00FD534 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C010053C (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0119928 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C012E300 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     memcmp @ 0x1C01396C0 (memcmp.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C0289BD0 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall MAPPER::bNearMatch(MAPPER *this, struct PFE **a2, unsigned __int8 *a3, int a4)
{
  int v4; // r13d
  struct PFE *v5; // r10
  unsigned int v6; // eax
  struct PFE *v8; // rcx
  bool v10; // zf
  char *v12; // r12
  struct PFE *v13; // rdx
  int v14; // ebp
  __int64 v15; // r11
  __int64 v16; // rdi
  char v17; // cl
  char v18; // al
  char v19; // cl
  int v20; // edx
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // cl
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned __int8 v27; // si
  int v28; // edi
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int8 v31; // dl
  struct PFE *v32; // r15
  __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rcx
  signed int v37; // edi
  int v38; // r10d
  int v39; // eax
  unsigned int v40; // edx
  int v41; // ecx
  int v42; // edi
  int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 v47; // rdi
  unsigned __int64 v48; // rcx
  __int64 v49; // r11
  __int64 v50; // rbp
  __int16 v51; // ax
  int v52; // r8d
  int v53; // esi
  int v54; // r8d
  int v55; // r9d
  char v56; // dl
  char v57; // dl
  int v58; // eax
  _DWORD *v59; // rdi
  int v60; // r15d
  int v61; // r8d
  int v62; // edx
  int v63; // eax
  int v64; // r15d
  int v65; // r13d
  unsigned int v66; // eax
  unsigned int v67; // ecx
  struct PFE *v68; // rbp
  int v69; // ecx
  int v70; // r11d
  char *v71; // rcx
  int v72; // eax
  _BYTE *v73; // r9
  unsigned __int64 v74; // rcx
  unsigned int v75; // eax
  unsigned int v76; // r9d
  unsigned int v77; // r8d
  unsigned __int8 v78; // al
  int v79; // eax
  int v80; // r15d
  unsigned int v81; // ebp
  __int64 v82; // r11
  unsigned int v83; // r12d
  int v84; // r13d
  unsigned int v85; // r10d
  int v86; // r11d
  int v87; // r8d
  int v88; // r8d
  int v89; // r10d
  int v90; // r9d
  unsigned int v91; // eax
  int v92; // r11d
  int v93; // ecx
  int v94; // r9d
  int v95; // eax
  int v96; // ecx
  struct tagPvtData *v97; // rax
  struct _LIST_ENTRY *LinkedFontList; // r10
  struct _LIST_ENTRY *i; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 Blink_low; // rcx
  _BYTE *v102; // rax
  unsigned __int64 v103; // r8
  __int64 v104; // rdx
  unsigned int v105; // eax
  unsigned int v106; // ecx
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  unsigned int v110; // r8d
  int v111; // r10d
  unsigned int v112; // edx
  unsigned int v113; // [rsp+20h] [rbp-58h] BYREF
  struct PFE *v114; // [rsp+28h] [rbp-50h]
  _QWORD v115[2]; // [rsp+30h] [rbp-48h] BYREF
  int v116; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *Str2; // [rsp+88h] [rbp+10h] BYREF
  int v118; // [rsp+98h] [rbp+20h]

  v118 = a4;
  v4 = 0;
  v5 = *a2;
  v6 = *((_DWORD *)this + 63) & 0xFFFFB7FF;
  *((_DWORD *)this + 63) = v6;
  v8 = *a2;
  v10 = *a2 == gppfeMapperDefault;
  v114 = v5;
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
    goto LABEL_203;
  v115[0] = *(_QWORD *)v13;
  if ( *(struct PFT **const *)(v115[0] + 128LL) == gpPFTPrivate )
  {
    if ( !PFFOBJ::pPvtDataMatch((PFFOBJ *)v115) )
      goto LABEL_203;
    v5 = v114;
  }
  if ( (*((_DWORD *)*a2 + 3) & 0x20) != 0 )
    goto LABEL_203;
  if ( *(struct PFT **const *)(*(_QWORD *)*a2 + 128LL) != gpPFTPrivate )
    goto LABEL_7;
  v115[0] = *(_QWORD *)*a2;
  v97 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v115);
  if ( v97 )
  {
    if ( (*((_DWORD *)v97 + 2) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
    {
LABEL_203:
      *((_DWORD *)this + 46) = -2;
      return 0LL;
    }
  }
  v5 = v114;
LABEL_7:
  v14 = *((_DWORD *)this + 63);
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  if ( v14 < 0 && (*(_DWORD *)(*((_QWORD *)*a2 + 4) + 48LL) & 0x4000) == 0
    || *((_DWORD *)this + 70) && !*((_QWORD *)v5 + 9) )
  {
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  v15 = *(_QWORD *)v12;
  v16 = *((_QWORD *)this + 1);
  v17 = *(_BYTE *)(*(_QWORD *)v12 + 45LL);
  v18 = *(_BYTE *)(v16 + 27) & 3;
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
  v5 = v114;
LABEL_12:
  v21 = *(_BYTE *)(v15 + 45) & 0x70;
  v22 = *(_BYTE *)(v16 + 27) & 0x70;
  if ( !v22 )
  {
    if ( *((_BYTE *)this + 284) == 2 )
    {
      v22 = *(_BYTE *)(v15 + 45) & 0x70;
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
  v26 = *((_DWORD *)this + 45);
  if ( v25 >= v26 && (v25 != v26 || (v14 & 0x1000080) != 0 || *((_DWORD *)v5 + 20) >= *((_DWORD *)this + 52)) )
    return 0LL;
LABEL_25:
  v27 = *((_BYTE *)this + 284);
  v28 = v14 & 0x8000000;
  if ( v27 != 1 && !v28 )
  {
    v29 = *((_QWORD *)*a2 + 4);
    v30 = *(int *)(v29 + 40);
    if ( (_DWORD)v30 )
    {
      v31 = *(_BYTE *)(v29 + v30);
      v73 = (_BYTE *)(v29 + v30);
      v74 = v29 + v30 + 16;
      if ( (unsigned __int64)v73 >= v74 )
      {
LABEL_130:
        if ( *((_QWORD *)*a2 + 15) )
        {
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)a2);
          for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
          {
            Flink = i[2].Flink[2].Flink;
            Blink_low = SLODWORD(Flink[2].Blink);
            if ( (_DWORD)Blink_low )
            {
              v102 = (char *)Flink + Blink_low;
              v103 = (unsigned __int64)&Flink[1] + Blink_low;
              if ( (unsigned __int64)v102 < v103 )
              {
                while ( *v102 != v27 )
                {
                  if ( *v102 != 1 && (unsigned __int64)++v102 < v103 )
                    continue;
                  goto LABEL_224;
                }
LABEL_218:
                v31 = v27;
                break;
              }
            }
            else if ( BYTE4(Flink[2].Blink) == v27 )
            {
              goto LABEL_218;
            }
LABEL_224:
            ;
          }
          v5 = v114;
        }
      }
      else
      {
        while ( *v73 != v27 )
        {
          if ( *v73 != 1 && (unsigned __int64)++v73 < v74 )
            continue;
          goto LABEL_130;
        }
        v31 = *((_BYTE *)this + 284);
      }
    }
    else
    {
      v31 = *(_BYTE *)(v29 + 44);
    }
    *a3 = v31;
    if ( v27 != v31 )
    {
      if ( (v14 & 0x4000000) == 0 )
        goto LABEL_147;
      *((_DWORD *)this + 46) += 65000;
      if ( (unsigned int)MAPPER::bNoMatch(this, v5) )
        return 0LL;
    }
    goto LABEL_30;
  }
  v78 = jMapCharset(v27, (struct PFEOBJ *)a2);
  *a3 = v78;
  if ( v27 != 1 || v28 )
  {
LABEL_30:
    v32 = v114;
    goto LABEL_31;
  }
  v32 = v114;
  if ( MAPPER::DefaultCharset != v78 )
  {
    *((_DWORD *)this + 46) += 2;
    if ( (unsigned int)MAPPER::bNoMatch(this, v32) )
      return 0LL;
  }
LABEL_31:
  if ( v118 )
  {
    if ( PFEOBJ::bCheckFamilyName((PFEOBJ *)a2, *((const unsigned __int16 **)this + 2), 0, &v116) )
    {
      if ( v116 )
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
    if ( (unsigned int)MAPPER::bNoMatch(this, v32) )
      return 0LL;
  }
  v33 = *(_QWORD *)v12;
  v34 = *((_DWORD *)this + 63);
  v35 = *(int *)(*(_QWORD *)v12 + 8LL);
  if ( (v34 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)(v35 + v33) != 64 )
      goto LABEL_147;
  }
  else if ( *(_WORD *)(v35 + v33) == 64 )
  {
    goto LABEL_147;
  }
  if ( (*(_DWORD *)(v33 + 48) & 0x3000010) == 0 )
  {
    if ( (v34 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_147;
    v36 = *(_QWORD *)v12;
    if ( (*((_DWORD *)this + 63) & 2) != 0 )
      v37 = *(__int16 *)(v36 + 56);
    else
      v37 = *(__int16 *)(v36 + 60) + *(__int16 *)(v36 + 62);
    v38 = *((_DWORD *)this + 41);
    if ( v37 < v38
      && (LOBYTE(v36) = (*(_DWORD *)(v36 + 48) & 0x100000) != 0,
          ((unsigned __int8)v36 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0)
      && v38 > 7 * v37 / 4 )
    {
      if ( !MAPPER::bWin31BitmapHeightScaling((MAPPER *)v36, v38, v37, &v116) )
        return 0LL;
      v39 = v116;
      if ( (unsigned int)v116 > 8 )
        v39 = 8;
    }
    else
    {
      v39 = 1;
    }
    *((_DWORD *)this + 49) = v39;
    v40 = 0;
    if ( v39 > 1 )
    {
      if ( (*((_DWORD *)this + 63) & 0x800) == 0 && v39 + 2 >= v37 )
        return 0LL;
      v37 *= v39;
      v40 = (20 * v39) | (5 * (v39 - 1));
    }
    v41 = *((_DWORD *)this + 41);
    if ( v41 >= v37 )
    {
      v43 = 150 * (v41 - v37);
    }
    else
    {
      v42 = v37 - v41;
      if ( (*((_DWORD *)this + 63) & 0x1080) == 0x1080 )
      {
        if ( v42 > 1 )
          v40 += 150 * (v42 + 20);
LABEL_45:
        if ( v40 )
        {
          *((_DWORD *)this + 46) += v40;
          v44 = *((_DWORD *)this + 46);
          v45 = *((_DWORD *)this + 45);
          if ( v44 >= v45
            && (v44 != v45
             || (*((_DWORD *)this + 63) & 0x1000080) != 0
             || *((_DWORD *)v32 + 20) >= *((_DWORD *)this + 52)) )
          {
            return 0LL;
          }
          if ( v40 >= 0x2710 && (*((_DWORD *)this + 63) & 0x4800) == 0 )
            return 0LL;
        }
        goto LABEL_50;
      }
      v43 = 150 * (v42 + 4);
    }
    v40 += v43;
    goto LABEL_45;
  }
LABEL_50:
  v47 = *(_QWORD *)this;
  v48 = *(_QWORD *)(**(_QWORD **)this + 80LL);
  if ( (*(_DWORD *)(v48 + 104) & 1) != 0
    && IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 256)) == 6
    && (*((_DWORD *)this + 63) & 0x4000) == 0
    && *(_QWORD *)((char *)this + 244) != *(_QWORD *)(*(_QWORD *)v12 + 128LL) )
  {
    v48 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v12 + 128LL) * *((_DWORD *)this + 62));
    if ( *((_DWORD *)this + 61) * *(_DWORD *)(*(_QWORD *)v12 + 132LL) != (_DWORD)v48 )
      goto LABEL_147;
  }
  v49 = *(_QWORD *)v12;
  v50 = *((_QWORD *)this + 1);
  v51 = *(_WORD *)(*(_QWORD *)v12 + 52LL) & 1;
  if ( *(_BYTE *)(v50 + 20) )
  {
    if ( !v51 )
    {
      if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
      {
        *((_DWORD *)this + 47) |= 0x4000u;
        v79 = 1;
      }
      else
      {
        v79 = 4;
      }
      *((_DWORD *)this + 46) += v79;
      if ( (unsigned int)MAPPER::bNoMatch(this, v32) )
        return 0LL;
    }
  }
  else if ( v51 )
  {
    *((_DWORD *)this + 46) += 4;
    if ( (unsigned int)MAPPER::bNoMatch(this, v32) )
      return 0LL;
  }
  v52 = *(unsigned __int16 *)(v49 + 46) - *((_DWORD *)this + 43);
  v53 = *((_DWORD *)this + 63);
  if ( (v53 & 0x200000) != 0 )
  {
    *((_DWORD *)this + 46) += (int)(19 * abs32(v52)) >> 7;
    if ( (unsigned int)MAPPER::bNoMatch(this, v32) )
      return 0LL;
  }
  else if ( v52 )
  {
    if ( v52 < 0 )
    {
      v52 = *((_DWORD *)this + 43) - *(unsigned __int16 *)(v49 + 46);
      if ( v52 > 150 )
      {
        if ( IFIOBJ::pvSimBold((MAPPER *)((char *)this + 256)) )
        {
          *((_DWORD *)this + 47) |= 0x2000u;
          v52 -= 120;
        }
      }
    }
    *((_DWORD *)this + 46) += (73 * v52) >> 8;
    if ( (unsigned int)MAPPER::bNoMatch(this, v32) )
      return 0LL;
  }
  v54 = v53 & 0x80;
  if ( (v53 & 0x80) == 0 )
  {
    v55 = *(_DWORD *)(v49 + 48);
    if ( (v55 & 1) == 0
      && (v55 & 2) != 0
      && ((v53 & 0x10000) != 0
       || *(int *)(*(_QWORD *)v47 + 72LL) < 0
       || ((v53 & 0x100) == 0 || *((_DWORD *)this + 61) != *((_DWORD *)this + 62)) && (v55 & 0x40000000) == 0) )
    {
      goto LABEL_147;
    }
    v56 = *(_BYTE *)(v50 + 24);
    if ( v56 == 7 && IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 256)) != 8 )
      goto LABEL_147;
    if ( v56 == 10 && v55 >= 0 )
      goto LABEL_147;
  }
  v57 = *(_BYTE *)(v50 + 24);
  if ( v57 == 9
    || (v48 = gpGdiSharedMemory, *(_DWORD *)(gpGdiSharedMemory + 1573012LL)) && ((v57 - 5) & 0xFA) != 0
    || (*(_DWORD *)(*(_QWORD *)v47 + 72LL) & 0x20000000) != 0 )
  {
    if ( v54 || (v58 = *(_DWORD *)(v49 + 48), (v58 & 1) == 0) && ((v58 & 2) != 0 || (v58 & 4) != 0 || (v58 & 8) == 0) )
    {
      *((_DWORD *)this + 46) += 2;
      v75 = *((_DWORD *)this + 46);
      v48 = *((unsigned int *)this + 45);
      if ( v75 >= (unsigned int)v48
        && (v75 != (_DWORD)v48 || (v53 & 0x1000080) != 0 || *((_DWORD *)v32 + 20) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
    }
  }
  v59 = (_DWORD *)(v49 + 48);
  if ( (*(_DWORD *)(v49 + 48) & 0x2000010) != 0 )
    goto LABEL_76;
  v60 = *(__int16 *)(v49 + 76);
  *((_DWORD *)this + 48) = 1;
  if ( !*(_DWORD *)(v50 + 4) )
  {
    if ( (*v59 & 0x100000) == 0 || (v53 & 0x8000) != 0 )
    {
LABEL_76:
      v68 = v114;
      goto LABEL_77;
    }
    v80 = *((_DWORD *)this + 62);
    v81 = *((_DWORD *)this + 61);
    if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>((unsigned int)(100 * v80), v81, &v116) )
      return 0LL;
    v83 = *(_DWORD *)(v82 + 132);
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * *(_DWORD *)(v82 + 128)), v83, &Str2) )
      return 0LL;
    v84 = (int)Str2;
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)Str2, *((unsigned int *)this + 49), &v113) )
      return 0LL;
    v87 = 0;
    if ( v86 == v83 && v81 == v80 )
    {
      v87 = 1;
      if ( v85 == 1 )
      {
        v12 = (char *)this + 256;
        goto LABEL_76;
      }
      v90 = v116;
      v91 = v85;
    }
    else
    {
      v92 = 1;
      v90 = v116;
      if ( v116 <= (3 * v113) >> 1 )
      {
        v93 = 0;
        goto LABEL_198;
      }
      if ( !v113 )
        goto LABEL_147;
      v91 = v116 / v113;
    }
    if ( v91 > 5 )
      v91 = 5;
    *((_DWORD *)this + 48) = v91;
    v92 = v91;
    v93 = 20 * v91;
    if ( v87 && v91 == v85 )
    {
LABEL_183:
      v68 = v114;
      if ( v93 )
      {
        *((_DWORD *)this + 46) += v93;
        if ( (unsigned int)MAPPER::bNoMatch(this, v68) )
          return 0LL;
      }
      v12 = (char *)this + 256;
      goto LABEL_77;
    }
LABEL_198:
    if ( !v85 )
      goto LABEL_147;
    v93 += 30 * abs32(v90 - v84 * v92 / v85);
    goto LABEL_183;
  }
  if ( (v53 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_147;
  v61 = *(_DWORD *)(*(_QWORD *)v12 + 48LL);
  v59 = (_DWORD *)(*(_QWORD *)v12 + 48LL);
  v53 = *((_DWORD *)this + 63);
  LOBYTE(v48) = (v61 & 0x100000) != 0;
  if ( ((unsigned __int8)v48 & ((v53 & 0x8000) == 0)) != 0 && (v62 = *((_DWORD *)this + 42), v62 > v60) )
  {
    if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v48, v62, v60, &v116) )
      return 0LL;
    v96 = v116;
    if ( (unsigned int)v116 > 5 )
      v96 = 5;
    *((_DWORD *)this + 48) = v96;
  }
  else if ( (v61 & 0x1000000) != 0 )
  {
    v104 = (unsigned int)(*(__int16 *)(*(_QWORD *)v12 + 60LL) + *(__int16 *)(*(_QWORD *)v12 + 62LL));
    v116 = v60 * *((_DWORD *)this + 41);
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)v116, v104, &v116) )
      return 0LL;
    v60 = v116;
  }
  v63 = *((_DWORD *)this + 48);
  if ( v63 > 1 )
  {
    v60 *= v63;
    v4 = (v63 - 1) | (20 * v63);
  }
  if ( *((_DWORD *)this + 42) - v60 < 0 )
    v64 = v60 - *((_DWORD *)this + 42);
  else
    v64 = *((_DWORD *)this + 42) - v60;
  v65 = 50 * v64 + v4;
  if ( !v65 )
    goto LABEL_76;
  *((_DWORD *)this + 46) += v65;
  v66 = *((_DWORD *)this + 46);
  v67 = *((_DWORD *)this + 45);
  if ( v66 < v67 )
    goto LABEL_76;
  if ( v66 != v67 || (v53 & 0x1000080) != 0 )
    return 0LL;
  v68 = v114;
  if ( *((_DWORD *)v114 + 20) < *((_DWORD *)this + 52) )
  {
LABEL_77:
    v69 = *((_DWORD *)this + 48);
    if ( v69 <= 1 && *((int *)this + 49) <= 1 )
    {
LABEL_79:
      if ( (*v59 & 0x10) != 0 || (v53 & 0x41000) == 0x41000 )
        goto LABEL_80;
      if ( (v53 & 0x80000) != 0 || (unsigned int)MAPPER::bCalcOrientation(this) )
      {
        v76 = *((_DWORD *)this + 44);
        v77 = v76 - *((_DWORD *)*a2 + 17);
        if ( v77 && (*((_DWORD *)this + 63) & 0x480) == 0x480 )
        {
          v105 = *((_DWORD *)*a2 + 17) - *((_DWORD *)this + 44);
          if ( v77 <= v76 )
            v105 = *((_DWORD *)this + 44) - *((_DWORD *)*a2 + 17);
          v77 = v105 % 0x384;
        }
        if ( !v77 )
          goto LABEL_80;
        if ( (*(_DWORD *)(*(_QWORD *)v12 + 48LL) & 0x200000) != 0 )
        {
          v106 = -v77;
          if ( v77 <= v76 )
            v106 = v77;
          v77 = v106 % 0x384;
        }
        if ( !v77 )
        {
LABEL_80:
          v70 = *((_DWORD *)this + 63);
          if ( (v70 & 0x400000) != 0 )
          {
            ++*((_DWORD *)this + 46);
            if ( (unsigned int)MAPPER::bNoMatch(this, v68) )
              return 0LL;
          }
          if ( v70 < 0 )
            v71 = (char *)this + 92;
          else
            v71 = (char *)(*((_QWORD *)this + 1) + 348LL);
          v72 = *((_DWORD *)v71 + 1);
          if ( !v72 )
            return 1LL;
          v107 = *(_QWORD *)v12;
          if ( *(_DWORD *)(*(_QWORD *)v12 + 4LL) >= 0x10u )
          {
            v108 = *(int *)(v107 + 204);
            if ( (_DWORD)v108 )
            {
              v109 = v107 + v108;
              if ( v107 + v108 )
              {
                v110 = *(_DWORD *)(v109 + 4);
                v111 = *((_DWORD *)v71 + 1);
                v112 = v110;
                if ( v110 && v72 == v110 && *((_DWORD *)this + 46) <= 0x88B8u )
                {
                  *((_QWORD *)this + 36) = v68;
                  v111 = *((_DWORD *)v71 + 1);
                  v112 = *(_DWORD *)(v109 + 4);
                }
                if ( v111 == v112 && !memcmp(v71 + 8, (const void *)(v109 + 8), 4LL * v112) )
                  return 1LL;
              }
            }
          }
        }
      }
      goto LABEL_147;
    }
    v88 = *((_DWORD *)this + 49);
    v89 = *((_DWORD *)this + 46) + 50;
    *((_DWORD *)this + 46) = v89;
    if ( v69 < v88 )
    {
      if ( v69 )
      {
        v94 = 100 * v88;
        if ( v69 == 1 )
        {
LABEL_192:
          *((_DWORD *)this + 46) = v89 + 4 * v94;
LABEL_176:
          if ( (unsigned int)MAPPER::bNoMatch(this, v68) )
            return 0LL;
          goto LABEL_79;
        }
        v95 = (v94 + v69 / 2) / v69;
LABEL_191:
        v94 = v95;
        goto LABEL_192;
      }
    }
    else
    {
      if ( v69 <= v88 )
        goto LABEL_176;
      if ( v88 )
      {
        v94 = 100 * v69;
        if ( v88 == 1 )
          goto LABEL_192;
        v95 = (v94 + v88 / 2) / v88;
        goto LABEL_191;
      }
    }
LABEL_147:
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  return 0LL;
}
