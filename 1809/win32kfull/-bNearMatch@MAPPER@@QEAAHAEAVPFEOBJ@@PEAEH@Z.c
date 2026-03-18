/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0028020
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0027A80 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C014CEFC (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0278528 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C00245F8 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z @ 0x1C0025304 (-bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0025BAC (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00C5138 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00CB8CC (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C00FCFF4 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C010B1E8 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C011C23C (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C011C274 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x1C011C848 (-lfOutPrecision@IFIOBJ@@QEBAEXZ.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C0121520 (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014CED8 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0156F04 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     memcmp @ 0x1C015AFC0 (memcmp.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C029D850 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
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
  __int64 v15; // rdi
  __int64 v16; // r11
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
  int v37; // edi
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
  __int64 v71; // rax
  char *v72; // r9
  int *v73; // rax
  _BYTE *v74; // r9
  unsigned __int64 v75; // rcx
  unsigned int v76; // eax
  unsigned int v77; // r9d
  unsigned int v78; // r8d
  char v79; // al
  int v80; // eax
  int v81; // r15d
  unsigned int v82; // ebp
  __int64 v83; // r11
  unsigned int v84; // r12d
  int v85; // r13d
  unsigned int v86; // r10d
  int v87; // r11d
  int v88; // r8d
  int v89; // r8d
  int v90; // r10d
  int v91; // r9d
  unsigned int v92; // eax
  int v93; // r11d
  int v94; // ecx
  int v95; // r9d
  int v96; // eax
  int v97; // ecx
  struct tagPvtData *v98; // rax
  struct _LIST_ENTRY *LinkedFontList; // r10
  struct _LIST_ENTRY *i; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 Blink_low; // rcx
  _BYTE *v103; // rax
  unsigned __int64 v104; // r8
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
    goto LABEL_289;
  v116[0] = *(_QWORD *)v13;
  if ( *(struct PFT **const *)(v116[0] + 128LL) == gpPFTPrivate )
  {
    if ( !PFFOBJ::pPvtDataMatch((PFFOBJ *)v116) )
      goto LABEL_289;
    v5 = v115;
  }
  if ( (*((_DWORD *)*a2 + 3) & 0x20) != 0 )
    goto LABEL_289;
  if ( *(struct PFT **const *)(*(_QWORD *)*a2 + 128LL) != gpPFTPrivate )
    goto LABEL_7;
  v116[0] = *(_QWORD *)*a2;
  v98 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v116);
  if ( v98 )
  {
    if ( (*((_DWORD *)v98 + 2) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
    {
LABEL_289:
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
    goto LABEL_150;
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
    goto LABEL_179;
  }
  if ( v21 > 0x30u )
LABEL_179:
    v23 = 50;
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
      v74 = (_BYTE *)(v29 + v30);
      v75 = v29 + v30 + 16;
      if ( (unsigned __int64)v74 >= v75 )
      {
LABEL_131:
        if ( *((_QWORD *)*a2 + 15) )
        {
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)a2);
          for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
          {
            Flink = i[2].Flink[2].Flink;
            Blink_low = SLODWORD(Flink[2].Blink);
            if ( (_DWORD)Blink_low )
            {
              v103 = (char *)Flink + Blink_low;
              v104 = (unsigned __int64)&Flink[1] + Blink_low;
              if ( (unsigned __int64)v103 < v104 )
              {
                while ( *v103 != v27 )
                {
                  if ( *v103 != 1 && (unsigned __int64)++v103 < v104 )
                    continue;
                  goto LABEL_236;
                }
LABEL_230:
                v31 = v27;
                break;
              }
            }
            else if ( BYTE4(Flink[2].Blink) == v27 )
            {
              goto LABEL_230;
            }
LABEL_236:
            ;
          }
          v5 = v115;
        }
      }
      else
      {
        while ( *v74 != v27 )
        {
          if ( *v74 != 1 && (unsigned __int64)++v74 < v75 )
            continue;
          goto LABEL_131;
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
        goto LABEL_150;
      *((_DWORD *)this + 46) += 65000;
      if ( (unsigned int)MAPPER::bNoMatch(this, v5) )
        return 0LL;
    }
    goto LABEL_30;
  }
  v79 = jMapCharset(v27, (struct PFEOBJ *)a2);
  *a3 = v79;
  if ( v27 != 1 || v28 )
  {
LABEL_30:
    v32 = v115;
    goto LABEL_31;
  }
  v32 = v115;
  if ( MAPPER::DefaultCharset != v79 )
  {
    *((_DWORD *)this + 46) += 2;
    if ( (unsigned int)MAPPER::bNoMatch(this, v32) )
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
      *((_DWORD *)this + 46) += Str2
                             && !_wcsicmp(
                                   (const wchar_t *)(*((_QWORD *)*a2 + 4) + *(int *)(*((_QWORD *)*a2 + 4) + 8LL)),
                                   Str2)
                              ? 9000
                              : 10000;
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
      goto LABEL_150;
  }
  else if ( *(_WORD *)(v35 + v33) == 64 )
  {
    goto LABEL_150;
  }
  if ( (*(_DWORD *)(v33 + 48) & 0x3000010) == 0 )
  {
    if ( (v34 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_150;
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
      if ( !(unsigned int)MAPPER::bWin31BitmapHeightScaling((MAPPER *)v36, v38, v37, &v117) )
        return 0LL;
      v39 = v117;
      if ( (unsigned int)v117 > 8 )
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
  v48 = *(_QWORD *)(**(_QWORD **)this + 976LL);
  if ( (*(_DWORD *)(v48 + 236) & 1) != 0
    && IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 256)) == 6
    && (*((_DWORD *)this + 63) & 0x4000) == 0
    && *(_QWORD *)((char *)this + 244) != *(_QWORD *)(*(_QWORD *)v12 + 128LL) )
  {
    v48 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v12 + 128LL) * *((_DWORD *)this + 62));
    if ( *((_DWORD *)this + 61) * *(_DWORD *)(*(_QWORD *)v12 + 132LL) != (_DWORD)v48 )
      goto LABEL_150;
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
        v80 = 1;
      }
      else
      {
        v80 = 4;
      }
      *((_DWORD *)this + 46) += v80;
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
      goto LABEL_150;
    }
    v56 = *(_BYTE *)(v50 + 24);
    if ( v56 == 7 && IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 256)) != 8 )
      goto LABEL_150;
    if ( v56 == 10 && v55 >= 0 )
      goto LABEL_150;
  }
  v57 = *(_BYTE *)(v50 + 24);
  if ( v57 == 9
    || (v48 = gpGdiSharedMemory, *(_DWORD *)(gpGdiSharedMemory + 1573012LL)) && ((v57 - 5) & 0xFA) != 0
    || (*(_DWORD *)(*(_QWORD *)v47 + 72LL) & 0x20000000) != 0 )
  {
    if ( v54 || (v58 = *(_DWORD *)(v49 + 48), (v58 & 1) == 0) && ((v58 & 2) != 0 || (v58 & 4) != 0 || (v58 & 8) == 0) )
    {
      *((_DWORD *)this + 46) += 2;
      v76 = *((_DWORD *)this + 46);
      v48 = *((unsigned int *)this + 45);
      if ( v76 >= (unsigned int)v48
        && (v76 != (_DWORD)v48 || (v53 & 0x1000080) != 0 || *((_DWORD *)v32 + 20) >= *((_DWORD *)this + 52)) )
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
      v68 = v115;
      goto LABEL_77;
    }
    v81 = *((_DWORD *)this + 62);
    v82 = *((_DWORD *)this + 61);
    if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>((unsigned int)(100 * v81), v82, &v117) )
      return 0LL;
    v84 = *(_DWORD *)(v83 + 132);
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * *(_DWORD *)(v83 + 128)), v84, &Str2) )
      return 0LL;
    v85 = (int)Str2;
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)Str2, *((unsigned int *)this + 49), &v114) )
      return 0LL;
    v88 = 0;
    if ( v87 == v84 && v82 == v81 )
    {
      v88 = 1;
      if ( v86 == 1 )
      {
        v12 = (char *)this + 256;
        goto LABEL_76;
      }
      v91 = v117;
      v92 = v86;
    }
    else
    {
      v93 = 1;
      v91 = v117;
      if ( v117 <= (3 * v114) >> 1 )
      {
        v94 = 0;
        goto LABEL_210;
      }
      if ( !v114 )
        goto LABEL_150;
      v92 = v117 / v114;
    }
    if ( v92 > 5 )
      v92 = 5;
    *((_DWORD *)this + 48) = v92;
    v93 = v92;
    v94 = 20 * v92;
    if ( v88 && v92 == v86 )
    {
LABEL_191:
      v68 = v115;
      if ( v94 )
      {
        *((_DWORD *)this + 46) += v94;
        if ( (unsigned int)MAPPER::bNoMatch(this, v68) )
          return 0LL;
      }
      v12 = (char *)this + 256;
      goto LABEL_77;
    }
LABEL_210:
    if ( !v86 )
      goto LABEL_150;
    v94 += 30 * abs32(v91 - v85 * v93 / v86);
    goto LABEL_191;
  }
  if ( (v53 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_150;
  v61 = *(_DWORD *)(*(_QWORD *)v12 + 48LL);
  v59 = (_DWORD *)(*(_QWORD *)v12 + 48LL);
  v53 = *((_DWORD *)this + 63);
  LOBYTE(v48) = (v61 & 0x100000) != 0;
  if ( ((unsigned __int8)v48 & ((v53 & 0x8000) == 0)) != 0 && (v62 = *((_DWORD *)this + 42), v62 > v60) )
  {
    if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v48, v62, v60, &v117) )
      return 0LL;
    v97 = v117;
    if ( (unsigned int)v117 > 5 )
      v97 = 5;
    *((_DWORD *)this + 48) = v97;
  }
  else if ( (v61 & 0x1000000) != 0 )
  {
    v105 = (unsigned int)(*(__int16 *)(*(_QWORD *)v12 + 60LL) + *(__int16 *)(*(_QWORD *)v12 + 62LL));
    v117 = v60 * *((_DWORD *)this + 41);
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)v117, v105, &v117) )
      return 0LL;
    v60 = v117;
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
  if ( v66 != v67 )
    return 0LL;
  if ( (v53 & 0x1000080) != 0 )
    return 0LL;
  v68 = v115;
  if ( *((_DWORD *)v115 + 20) >= *((_DWORD *)this + 52) )
    return 0LL;
LABEL_77:
  v69 = *((_DWORD *)this + 48);
  if ( v69 > 1 || *((int *)this + 49) > 1 )
  {
    v89 = *((_DWORD *)this + 49);
    v90 = *((_DWORD *)this + 46) + 50;
    *((_DWORD *)this + 46) = v90;
    if ( v69 < v89 )
    {
      if ( v69 )
      {
        v95 = 100 * v89;
        if ( v69 == 1 )
        {
LABEL_202:
          *((_DWORD *)this + 46) = v90 + 4 * v95;
LABEL_184:
          if ( (unsigned int)MAPPER::bNoMatch(this, v68) )
            return 0LL;
          goto LABEL_79;
        }
        v96 = (v95 + v69 / 2) / v69;
LABEL_201:
        v95 = v96;
        goto LABEL_202;
      }
    }
    else
    {
      if ( v69 <= v89 )
        goto LABEL_184;
      if ( v89 )
      {
        v95 = 100 * v69;
        if ( v89 == 1 )
          goto LABEL_202;
        v96 = (v95 + v89 / 2) / v89;
        goto LABEL_201;
      }
    }
LABEL_150:
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
LABEL_79:
  if ( (*v59 & 0x10) == 0 && (v53 & 0x41000) != 0x41000 )
  {
    if ( (v53 & 0x80000) == 0 && !(unsigned int)MAPPER::bCalcOrientation(this) )
      goto LABEL_150;
    v77 = *((_DWORD *)this + 44);
    v78 = v77 - *((_DWORD *)*a2 + 17);
    if ( v78 && (*((_DWORD *)this + 63) & 0x480) == 0x480 )
    {
      v106 = *((_DWORD *)*a2 + 17) - *((_DWORD *)this + 44);
      if ( v78 <= v77 )
        v106 = *((_DWORD *)this + 44) - *((_DWORD *)*a2 + 17);
      v78 = v106 % 0x384;
    }
    if ( v78 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v12 + 48LL) & 0x200000) != 0 )
      {
        v107 = -v78;
        if ( v78 <= v77 )
          v107 = v78;
        v78 = v107 % 0x384;
      }
      if ( v78 )
        goto LABEL_150;
    }
  }
  v70 = *((_DWORD *)this + 63);
  if ( (v70 & 0x400000) != 0 )
  {
    ++*((_DWORD *)this + 46);
    if ( (unsigned int)MAPPER::bNoMatch(this, v68) )
      return 0LL;
  }
  if ( v70 < 0 )
  {
    v72 = (char *)this + 100;
    v73 = (int *)((char *)this + 96);
  }
  else
  {
    v71 = *((_QWORD *)this + 1);
    v72 = (char *)(v71 + 356);
    v73 = (int *)(v71 + 352);
  }
  if ( *v73 )
  {
    v108 = *(_QWORD *)v12;
    if ( *(_DWORD *)(*(_QWORD *)v12 + 4LL) < 0x10u )
      goto LABEL_150;
    v109 = *(int *)(v108 + 204);
    if ( !(_DWORD)v109 )
      goto LABEL_150;
    v110 = v108 + v109;
    if ( !(v108 + v109) )
      goto LABEL_150;
    v111 = *(_DWORD *)(v110 + 4);
    v112 = *v73;
    v113 = v111;
    if ( v111 && *v73 == v111 && *((_DWORD *)this + 46) <= 0x88B8u )
    {
      *((_QWORD *)this + 36) = v68;
      v112 = *v73;
      v113 = *(_DWORD *)(v110 + 4);
    }
    if ( v112 != v113 || memcmp(v72, (const void *)(v110 + 8), 4LL * v113) )
      goto LABEL_150;
  }
  return 1LL;
}
