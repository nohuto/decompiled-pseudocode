/*
 * XREFs of sub_1401ADB1C @ 0x1401ADB1C
 * Callers:
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140333010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_1401ADA3C @ 0x1401ADA3C (sub_1401ADA3C.c)
 *     sub_1401ADA9C @ 0x1401ADA9C (sub_1401ADA9C.c)
 *     KeGuardDispatchICall @ 0x14034BB40 (KeGuardDispatchICall.c)
 */

void __fastcall sub_1401ADB1C(__int64 a1, int *a2)
{
  int *v2; // r14
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned int *v16; // rcx
  unsigned int *v17; // rsi
  char v18; // r13
  unsigned __int64 v19; // rbp
  __int64 v20; // rdx
  char *v21; // r8
  unsigned int *v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  bool v25; // zf
  char v26; // cl
  char v27; // al
  __int64 v28; // r9
  int *v29; // r15
  __int64 v30; // rcx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r10
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // r11
  unsigned int v36; // eax
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbp
  int *v41; // r13
  __int64 v42; // r9
  _QWORD *v43; // r8
  const char *v44; // rax
  unsigned __int64 v45; // rsi
  int v46; // r11d
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rcx
  unsigned __int64 i; // rax
  _DWORD *v52; // r15
  unsigned int v53; // esi
  unsigned __int8 v54; // al
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // r12
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  unsigned __int8 *v60; // r9
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int8 v65; // r12
  unsigned int *v66; // rcx
  unsigned int *v67; // rsi
  char v68; // r13
  unsigned __int64 v69; // rbp
  __int64 v70; // rdx
  char *v71; // r8
  unsigned int *v72; // r9
  __int64 v73; // rcx
  __int64 v74; // rax
  bool v75; // zf
  char v76; // cl
  char v77; // al
  int v78; // r12d
  unsigned __int8 v79; // r13
  unsigned __int64 v80; // rsi
  unsigned __int64 v81; // r15
  int v82; // eax
  __int64 v83; // rbp
  __int64 v84; // rax
  unsigned int v85; // ecx
  char **v86; // rsi
  int v87; // r15d
  unsigned int v88; // r11d
  _DWORD *v89; // r13
  char **v90; // r15
  char *v91; // r9
  char *v92; // r10
  unsigned __int64 v93; // rax
  int v94; // r12d
  const char *j; // rax
  unsigned __int64 v96; // r14
  unsigned __int64 v97; // r8
  __int64 v98; // rax
  __int64 v99; // r8
  unsigned __int64 v100; // rcx
  unsigned __int64 k; // rax
  int v102; // ebp
  unsigned int v103; // r15d
  __int64 v104; // r12
  __int64 v105; // r13
  unsigned int v106; // r11d
  unsigned int *v107; // rbp
  _DWORD *v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  unsigned __int8 v112; // r13
  unsigned __int64 v113; // r15
  unsigned __int64 v114; // r12
  int v115; // eax
  __int64 v116; // r8
  __int64 *v117; // r9
  __int64 *v118; // r10
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rcx
  unsigned __int8 v124; // r13
  unsigned __int64 v125; // r15
  int v126; // eax
  __int64 v127; // rax
  __int64 v128; // [rsp+20h] [rbp-D8h]
  __int64 v129; // [rsp+20h] [rbp-D8h]
  __int64 v130; // [rsp+28h] [rbp-D0h]
  int v131; // [rsp+30h] [rbp-C8h]
  int v132; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v133; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v134; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v135; // [rsp+40h] [rbp-B8h]
  __int64 v136; // [rsp+40h] [rbp-B8h]
  int v137; // [rsp+48h] [rbp-B0h]
  __int64 v138; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v139; // [rsp+58h] [rbp-A0h]
  unsigned int v140; // [rsp+58h] [rbp-A0h]
  __int64 v141; // [rsp+60h] [rbp-98h]
  __int64 v142; // [rsp+60h] [rbp-98h]
  __int64 v143; // [rsp+68h] [rbp-90h]
  __int64 v144; // [rsp+68h] [rbp-90h]
  __int64 v145; // [rsp+70h] [rbp-88h]
  __int64 v146; // [rsp+78h] [rbp-80h]
  int *v147; // [rsp+80h] [rbp-78h]
  _BYTE v148[16]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v149[96]; // [rsp+98h] [rbp-60h] BYREF
  unsigned int v151; // [rsp+108h] [rbp+10h]
  unsigned int v152; // [rsp+110h] [rbp+18h]
  unsigned __int64 v153; // [rsp+110h] [rbp+18h]
  unsigned int v154; // [rsp+110h] [rbp+18h]
  unsigned __int8 v155; // [rsp+118h] [rbp+20h]
  unsigned __int64 v156; // [rsp+118h] [rbp+20h]
  int v157; // [rsp+118h] [rbp+20h]
  unsigned int v158; // [rsp+118h] [rbp+20h]

  v2 = a2;
  if ( *a2 == 12 )
  {
    if ( *(_QWORD *)(a1 + 2400) )
    {
      v4 = *(unsigned int *)(a1 + 2060);
      v5 = *(unsigned int *)(a1 + 2420);
      v6 = *(_DWORD *)(a1 + 2420);
      if ( !(_DWORD)v4 )
      {
        v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * v6)) & 0x20;
        *(_DWORD *)(a1 + 2420) = v6;
        goto LABEL_6;
      }
      if ( (((unsigned __int8)v5 ^ (unsigned __int8)((unsigned int)v5 >> 3)) & 4) == 0 )
      {
LABEL_6:
        if ( (v6 & 4) != 0 )
        {
          v7 = *((_QWORD *)v2 + 4);
          if ( v7 )
          {
            v8 = v7 + v4;
            v9 = ((_WORD)v4 + (_WORD)v7) & 0xFFF;
            v10 = (unsigned int)(v2[10] - v4) + 4095LL;
          }
          else
          {
            v8 = *((_QWORD *)v2 + 1);
            v10 = v8 & 0xFFF;
            v9 = (unsigned int)v2[4] + 4095LL;
          }
          v11 = v8 & 0xFFFFFFFFFFFFF000uLL;
          v12 = (unsigned __int64)(v10 + v9) >> 12;
          while ( v12 )
          {
            --v12;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64, __int64, _QWORD))(a1 + 680))(
                   v11,
                   v5,
                   v4,
                   0LL)
              && !*(_DWORD *)(a1 + 2264) )
            {
              *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(a1 + 2280) = (char *)v2 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(a1 + 2288) = *v2;
              *(_QWORD *)(a1 + 2296) = v11;
              *(_DWORD *)(a1 + 2264) = 1;
            }
            *(_DWORD *)(a1 + 2064) += 256;
            v11 += 4096LL;
            v13 = *(_DWORD *)(a1 + 2064);
            if ( v7 )
            {
              *(_DWORD *)(a1 + 2060) += 4096;
              if ( v13 >= *(_DWORD *)(a1 + 2068) )
                break;
            }
          }
          if ( v7 && !v12 )
            *(_DWORD *)(a1 + 2060) = 0;
          if ( !*(_DWORD *)(a1 + 2060) )
          {
            v14 = *(_QWORD *)(a1 + 1328);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 328))(v14, v5, v4, 0LL);
            v16 = **(unsigned int ***)(a1 + 1536);
            v17 = v16 + 4;
            v18 = *((_BYTE *)v16 + 12);
            v19 = (unsigned __int64)&v16[6 * *v16 + 4];
            while ( 2 )
            {
              v20 = 24LL;
              v21 = (char *)(v2 + 6);
              v22 = v17;
              while ( 1 )
              {
                v23 = *(_QWORD *)v22;
                v22 += 2;
                v24 = *(_QWORD *)v21;
                v21 += 8;
                if ( v23 != v24 )
                  break;
                v20 = (unsigned int)(v20 - 8);
                if ( (unsigned int)v20 < 8 )
                {
                  v25 = (_DWORD)v20 == 0;
                  while ( !v25 )
                  {
                    v26 = *(_BYTE *)v22;
                    v22 = (unsigned int *)((char *)v22 + 1);
                    v27 = *v21++;
                    if ( v26 != v27 )
                      goto LABEL_29;
                    v25 = (_DWORD)v20 == 1;
                    v20 = (unsigned int)(v20 - 1);
                  }
                  goto LABEL_30;
                }
              }
LABEL_29:
              v17 += 6;
              if ( (unsigned __int64)v17 < v19 )
                continue;
              break;
            }
LABEL_30:
            (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(a1 + 392))(
              *(_QWORD *)(a1 + 1328),
              v20,
              v21,
              v22);
            __writecr8(CurrentIrql);
            if ( !v18 )
              goto LABEL_35;
            if ( (*(_DWORD *)(a1 + 2420) & 0x10) != 0 && !*(_DWORD *)(a1 + 2264) )
            {
              *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(a1 + 2280) = (char *)v2 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(a1 + 2288) = *v2;
              *(_QWORD *)(a1 + 2296) = 1LL;
              *(_DWORD *)(a1 + 2264) = 1;
            }
            if ( *((_QWORD *)v2 + 3) != 1LL )
            {
LABEL_35:
              if ( v17 == (unsigned int *)v19 && !*(_DWORD *)(a1 + 2264) )
              {
                *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(a1 + 2280) = (char *)v2 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(a1 + 2288) = *v2;
                *(_QWORD *)(a1 + 2296) = v17;
                *(_DWORD *)(a1 + 2264) = 1;
              }
            }
          }
          return;
        }
        goto LABEL_39;
      }
    }
    *(_DWORD *)(a1 + 2060) = 0;
    return;
  }
LABEL_39:
  v28 = *((_QWORD *)v2 + 4);
  v29 = v2 + 12;
  v128 = v28;
  v147 = v2 + 12;
  v30 = *(unsigned int *)(a1 + 2060);
  v31 = ((v28 & 0xFFF) + (unsigned __int64)(unsigned int)v2[10] + 4095) >> 12;
  v32 = (unsigned int)v31;
  v132 = v31;
  v139 = (unsigned int)v31;
  v33 = (__int64)&v2[5 * (unsigned int)v31 + 12];
  v146 = v33;
  v34 = (__int64)&v2[5 * v30 + 12];
  v35 = v28 + (unsigned int)((_DWORD)v30 << 12);
  v145 = v34;
  v138 = v35;
  if ( (*(_DWORD *)(a1 + 2416) & 0x40000000) != 0 && (*(_DWORD *)(a1 + 2420) & 0x1000) == 0 || !*(_QWORD *)(a1 + 2648) )
  {
    v36 = 0;
    v151 = 0;
    do
    {
      if ( (unsigned int)v31 <= 0x10 )
      {
        v33 = v36;
        if ( v36 >= (unsigned int)v31 )
          goto LABEL_82;
      }
      else
      {
        v37 = __rdtsc();
        v38 = __ROR8__(v37, 3);
        v33 = ((((v38 ^ v37) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v38 ^ v37)))
            % v32;
      }
      v39 = (unsigned int)v33;
      v33 = (unsigned int)((_DWORD)v33 << 12);
      v40 = v28 + (unsigned int)v33;
      v41 = &v29[5 * v39];
      if ( *((char *)v41 + 15) >= 0 )
      {
        *(_DWORD *)(a1 + 2064) += 4096;
        LODWORD(v42) = *(_DWORD *)(a1 + 2044);
        v43 = (_QWORD *)v40;
        v44 = (const char *)v40;
        if ( v40 < (unsigned __int64)(v40 + 4096) )
        {
          do
          {
            _mm_prefetch(v44, 0);
            v44 += 64;
          }
          while ( (unsigned __int64)v44 < v40 + 4096 );
        }
        v45 = *(_QWORD *)(a1 + 2048);
        v46 = 32;
        do
        {
          v47 = 8LL;
          do
          {
            v48 = v45 ^ *v43;
            v49 = v43[1];
            v43 += 2;
            v45 = __ROL8__(__ROL8__(v48, v42) ^ v49, v42);
            --v47;
          }
          while ( v47 );
          v50 = __ROL8__(*(_QWORD *)(a1 + 2048) ^ ((unsigned __int64)v43 - v40), 17) ^ *(_QWORD *)(a1 + 2048) ^ ((unsigned __int64)v43 - v40);
          v42 = ((unsigned __int8)(((v50 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v50) ^ (unsigned __int8)v42) & 0x3F;
          if ( !(_DWORD)v42 )
            v42 = 1LL;
          --v46;
        }
        while ( v46 );
        for ( i = v45; ; LODWORD(v45) = i ^ v45 )
        {
          i >>= 31;
          if ( !i )
            break;
        }
        v52 = v41 + 4;
        v53 = v45 & 0x7FFFFFFF;
        if ( v53 != (v41[4] & 0x7FFFFFFF) )
        {
          v152 = (unsigned int)v41[4] >> 31;
          if ( (*(_DWORD *)(a1 + 2420) & 0x40) != 0 )
          {
            v54 = KeGetCurrentIrql();
            v155 = v54;
            __writecr8(2uLL);
            v55 = v40 & 0xFFFFFFFFFFFFF000uLL;
            v135 = (v40 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 2 )
            {
              v56 = v54;
              while ( 1 )
              {
                v57 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(a1 + 1120))(
                        v55,
                        0LL,
                        v43,
                        v42);
                if ( v57 != -1073741267 )
                  break;
                if ( !v152 )
                  goto LABEL_70;
                v54 = v155;
                if ( v155 > 1u )
                  goto LABEL_68;
                v56 = v155;
                __writecr8(v155);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v57 < 0 )
              {
LABEL_70:
                __writecr8(v56);
                v52 = v41 + 4;
                goto LABEL_71;
              }
              v54 = v155;
LABEL_68:
              v55 += 4096LL;
              v135 += 4096LL;
              if ( v135 != ((v40 + 4095) | 0xFFF) )
                continue;
              break;
            }
            __writecr8(v56);
            v52 = v41 + 4;
          }
          else
          {
LABEL_71:
            v58 = (unsigned int)*v52;
            LODWORD(v58) = v58 & 0x7FFFFFFF;
            if ( !*(_DWORD *)(a1 + 2264) )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 1408) + 24LL) = v58 ^ v53;
              if ( !*(_DWORD *)(a1 + 2264) )
              {
                *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(a1 + 2280) = (char *)v2 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(a1 + 2288) = *v2;
                *(_QWORD *)(a1 + 2296) = v40;
                *(_DWORD *)(a1 + 2264) = 1;
              }
            }
          }
        }
        sub_1401ADA3C(a1, v40, 0x1000u, (__int64)v148);
        v59 = 16LL;
        v60 = v148;
        while ( 1 )
        {
          v61 = *(_QWORD *)v60;
          v60 += 8;
          v62 = *(_QWORD *)v41;
          v41 += 2;
          if ( v61 != v62 )
            break;
          v59 = (unsigned int)(v59 - 8);
          if ( (unsigned int)v59 < 8 )
          {
            if ( !(_DWORD)v59 )
              goto LABEL_80;
            while ( 1 )
            {
              v33 = *v60++;
              v63 = *(unsigned __int8 *)v41;
              v41 = (int *)((char *)v41 + 1);
              if ( v33 != v63 )
                goto LABEL_90;
              v25 = (_DWORD)v59 == 1;
              v59 = (unsigned int)(v59 - 1);
              if ( v25 )
                goto LABEL_80;
            }
          }
        }
LABEL_90:
        v78 = *v52 >> 31;
        if ( (*(_DWORD *)(a1 + 2420) & 0x40) != 0 )
        {
          v79 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v80 = v40 & 0xFFFFFFFFFFFFF000uLL;
          v153 = (v40 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v81 = v79;
            while ( 1 )
            {
              v82 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int8 *))(a1 + 1120))(
                      v80,
                      0LL,
                      v59,
                      v60);
              if ( v82 != -1073741267 )
                break;
              if ( !v78 )
                goto LABEL_100;
              if ( v79 > 1u )
                goto LABEL_98;
              v81 = v79;
              __writecr8(v79);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v82 < 0 )
            {
LABEL_100:
              __writecr8(v81);
              goto LABEL_101;
            }
LABEL_98:
            v80 += 4096LL;
            v153 += 4096LL;
            if ( v153 != ((v40 + 4095) | 0xFFF) )
              continue;
            break;
          }
          __writecr8(v81);
        }
        else
        {
LABEL_101:
          if ( !*(_DWORD *)(a1 + 2264) )
          {
            *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 2280) = (char *)v2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 2288) = *v2;
            *(_QWORD *)(a1 + 2296) = v40;
            *(_DWORD *)(a1 + 2264) = 1;
          }
        }
LABEL_80:
        *(_DWORD *)(a1 + 2064) += 0x10000;
        v29 = v2 + 12;
        LODWORD(v31) = v132;
        v28 = v128;
        v32 = v139;
      }
      v36 = v151 + 1;
      v151 = v36;
    }
    while ( v36 < 0x10 );
    goto LABEL_82;
  }
  if ( v34 == v33 )
    goto LABEL_82;
  do
  {
    if ( *(_DWORD *)(a1 + 2064) >= *(_DWORD *)(a1 + 2068) )
      break;
    v83 = 0LL;
    if ( v34 == v33 )
      goto LABEL_169;
    v84 = v34;
    do
    {
      if ( *(char *)(v84 + 15) < 0 )
        break;
      v83 = (unsigned int)(v83 + 1);
      v84 = v34 + 20 * v83;
    }
    while ( v84 != v33 );
    if ( !(_DWORD)v83 )
      goto LABEL_169;
    v85 = v83;
    v130 = v34;
    v137 = v83;
    v86 = *(char ***)(a1 + 2648);
    v136 = (__int64)v86;
    v131 = 0;
    v129 = v35;
    do
    {
      v87 = 8;
      if ( v85 < 8 )
        v87 = v85;
      v88 = 0;
      v154 = v87;
      v89 = v149;
      v90 = v86;
      do
      {
        v90[1] = (char *)4096;
        v91 = (char *)(v129 + (v88 << 12));
        *v90 = v91;
        v92 = v91;
        v93 = *(_QWORD *)(a1 + 2048);
        *(_DWORD *)(a1 + 2064) += 4096;
        v94 = *(_DWORD *)(a1 + 2044);
        v156 = v93;
        for ( j = v91; j < v91 + 4096; j += 64 )
          _mm_prefetch(j, 0);
        v96 = v156;
        v97 = v156;
        v157 = 32;
        do
        {
          v98 = 8LL;
          do
          {
            v99 = *((_QWORD *)v92 + 1) ^ __ROL8__(*(_QWORD *)v92 ^ v97, v94);
            v92 += 16;
            v97 = __ROL8__(v99, v94);
            --v98;
          }
          while ( v98 );
          v100 = __ROL8__(v96 ^ (v92 - v91), 17) ^ v96 ^ (v92 - v91);
          v94 = ((unsigned __int8)(((v100 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v100) ^ (unsigned __int8)v94) & 0x3F;
          if ( !v94 )
            LOBYTE(v94) = 1;
          --v157;
        }
        while ( v157 );
        for ( k = v97; ; LODWORD(v97) = k ^ v97 )
        {
          k >>= 31;
          if ( !k )
            break;
        }
        ++v88;
        *v89 = v97 & 0x7FFFFFFF;
        v90 += 6;
        ++v89;
      }
      while ( v88 < v154 );
      v2 = a2;
      v102 = v131;
      v103 = v154;
      v104 = v129;
      v105 = v130;
      v86 = (char **)v136;
      sub_1401ADA9C(a1, v136, v154);
      v106 = 0;
      v158 = 0;
      if ( v154 )
      {
        v107 = (unsigned int *)v149;
        v108 = (_DWORD *)(v130 + 16);
        while ( 1 )
        {
          v109 = *v107;
          v110 = (unsigned int)*v108;
          v140 = v109;
          if ( (_DWORD)v109 != (*v108 & 0x7FFFFFFF) )
          {
            v111 = v104 + (v106 << 12);
            v143 = v111;
            if ( (*(_DWORD *)(a1 + 2420) & 0x40) != 0 )
            {
              v112 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v113 = v111 & 0xFFFFFFFFFFFFF000uLL;
              v141 = (v111 + 4095) | 0xFFF;
              v133 = (v111 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 2 )
              {
                v114 = v112;
                while ( 1 )
                {
                  v115 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 1120))(v113, 0LL);
                  if ( v115 != -1073741267 )
                    break;
                  if ( v112 > 1u )
                    goto LABEL_136;
                  v114 = v112;
                  __writecr8(v112);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v115 < 0 )
                {
                  __writecr8(v114);
                  v110 = (unsigned int)*v108;
                  v103 = v154;
                  v109 = v140;
                  v111 = v143;
                  v106 = v158;
                  v104 = v129;
                  v105 = v130;
                  break;
                }
LABEL_136:
                v113 += 4096LL;
                v133 += 4096LL;
                if ( v133 != v141 )
                  continue;
                goto LABEL_137;
              }
            }
            LODWORD(v110) = v110 & 0x7FFFFFFF;
            if ( !*(_DWORD *)(a1 + 2264) )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 1408) + 24LL) = v109 ^ v110;
              if ( !*(_DWORD *)(a1 + 2264) )
              {
                *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(a1 + 2280) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(a1 + 2288) = *a2;
                *(_QWORD *)(a1 + 2296) = v111;
                *(_DWORD *)(a1 + 2264) = 1;
              }
            }
          }
          v116 = 16LL;
          v117 = (__int64 *)(v105 + 20LL * v106);
          v118 = (__int64 *)(48LL * v106 + v136 + 16);
          while ( 1 )
          {
            v119 = *v118++;
            v120 = *v117++;
            if ( v119 != v120 )
              break;
            v116 = (unsigned int)(v116 - 8);
            if ( (unsigned int)v116 < 8 )
            {
              if ( !(_DWORD)v116 )
                goto LABEL_162;
              while ( 1 )
              {
                v121 = *(unsigned __int8 *)v118;
                v118 = (__int64 *)((char *)v118 + 1);
                v122 = *(unsigned __int8 *)v117;
                v117 = (__int64 *)((char *)v117 + 1);
                if ( v121 != v122 )
                  goto LABEL_149;
                v25 = (_DWORD)v116 == 1;
                v116 = (unsigned int)(v116 - 1);
                if ( v25 )
                  goto LABEL_162;
              }
            }
          }
LABEL_149:
          v123 = v104 + (v106 << 12);
          v142 = v123;
          if ( (*(_DWORD *)(a1 + 2420) & 0x40) != 0 )
          {
            v124 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v125 = v123 & 0xFFFFFFFFFFFFF000uLL;
            v144 = (v123 + 4095) | 0xFFF;
            v134 = (v123 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 2 )
            {
              v114 = v124;
              while ( 1 )
              {
                v126 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(a1 + 1120))(
                         v125,
                         0LL,
                         v116,
                         v117);
                if ( v126 != -1073741267 )
                  break;
                if ( v124 > 1u )
                  goto LABEL_156;
                v114 = v124;
                __writecr8(v124);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v126 < 0 )
              {
                __writecr8(v114);
                v123 = v142;
                v106 = v158;
                goto LABEL_159;
              }
LABEL_156:
              v125 += 4096LL;
              v134 += 4096LL;
              if ( v134 != v144 )
                continue;
              break;
            }
LABEL_137:
            __writecr8(v114);
            v106 = v158;
            goto LABEL_161;
          }
LABEL_159:
          if ( !*(_DWORD *)(a1 + 2264) )
          {
            *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 2280) = (char *)a2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 2288) = *a2;
            *(_QWORD *)(a1 + 2296) = v123;
            *(_DWORD *)(a1 + 2264) = 1;
          }
LABEL_161:
          v103 = v154;
LABEL_162:
          v104 = v129;
          ++v106;
          v105 = v130;
          ++v107;
          v108 += 5;
          v158 = v106;
          if ( v106 >= v103 )
          {
            v102 = v131;
            v86 = (char **)v136;
            break;
          }
        }
      }
      v83 = v103 + v102;
      v131 = v83;
      v129 = (v103 << 12) + v104;
      *(_DWORD *)(a1 + 2064) += v103 << 15;
      v85 = v137 - v103;
      v130 = v105 + 20LL * v103;
      v137 -= v103;
    }
    while ( *(_DWORD *)(a1 + 2064) < *(_DWORD *)(a1 + 2068) && v85 );
    v34 = v145;
    v33 = v146;
    v35 = v138;
LABEL_169:
    while ( 1 )
    {
      v127 = v34 + 20 * v83;
      if ( v127 == v33 || *(char *)(v127 + 15) >= 0 )
        break;
      v83 = (unsigned int)(v83 + 1);
    }
    v35 += (unsigned int)((_DWORD)v83 << 12);
    v138 = v35;
    v34 += 20 * v83;
    v145 = v34;
  }
  while ( v34 != v33 );
  if ( v34 != v33 )
  {
    *(_DWORD *)(a1 + 2060) = (v34 - (__int64)v147) / 20;
    return;
  }
LABEL_82:
  v64 = *(_QWORD *)(a1 + 1328);
  v65 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64))(a1 + 328))(v64, v33);
  v66 = **(unsigned int ***)(a1 + 1536);
  v67 = v66 + 4;
  v68 = *((_BYTE *)v66 + 12);
  v69 = (unsigned __int64)&v66[6 * *v66 + 4];
  while ( 2 )
  {
    v70 = 24LL;
    v71 = (char *)(v2 + 6);
    v72 = v67;
    while ( 1 )
    {
      v73 = *(_QWORD *)v72;
      v72 += 2;
      v74 = *(_QWORD *)v71;
      v71 += 8;
      if ( v73 != v74 )
        break;
      v70 = (unsigned int)(v70 - 8);
      if ( (unsigned int)v70 < 8 )
      {
        v75 = (_DWORD)v70 == 0;
        while ( !v75 )
        {
          v76 = *(_BYTE *)v72;
          v72 = (unsigned int *)((char *)v72 + 1);
          v77 = *v71++;
          if ( v76 != v77 )
            goto LABEL_173;
          v75 = (_DWORD)v70 == 1;
          v70 = (unsigned int)(v70 - 1);
        }
        goto LABEL_174;
      }
    }
LABEL_173:
    v67 += 6;
    if ( (unsigned __int64)v67 < v69 )
      continue;
    break;
  }
LABEL_174:
  (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(a1 + 392))(*(_QWORD *)(a1 + 1328), v70, v71, v72);
  __writecr8(v65);
  if ( !v68 )
    goto LABEL_185;
  if ( (*(_DWORD *)(a1 + 2420) & 0x10) != 0 && !*(_DWORD *)(a1 + 2264) )
  {
    *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a1 + 2280) = (char *)v2 - 0x4C48B4211BBACBEBLL;
    *(_QWORD *)(a1 + 2288) = *v2;
    *(_QWORD *)(a1 + 2296) = 1LL;
    *(_DWORD *)(a1 + 2264) = 1;
  }
  if ( *((_QWORD *)v2 + 3) != 1LL )
  {
LABEL_185:
    if ( v67 == (unsigned int *)v69 && !*(_DWORD *)(a1 + 2264) )
    {
      *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(a1 + 2280) = (char *)v2 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(a1 + 2288) = *v2;
      *(_QWORD *)(a1 + 2296) = v67;
      *(_DWORD *)(a1 + 2264) = 1;
    }
  }
  *(_DWORD *)(a1 + 2060) = 0;
}
