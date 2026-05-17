/*
 * XREFs of sub_18003C350 @ 0x18003C350
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_180033C9C @ 0x180033C9C (sub_180033C9C.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180045188 @ 0x180045188 (sub_180045188.c)
 *     sub_18004580C @ 0x18004580C (sub_18004580C.c)
 *     sub_1800466AC @ 0x1800466AC (sub_1800466AC.c)
 *     sub_180046B74 @ 0x180046B74 (sub_180046B74.c)
 *     RtlTryEnterCriticalSection @ 0x180046C20 (RtlTryEnterCriticalSection.c)
 *     sub_180047014 @ 0x180047014 (sub_180047014.c)
 *     sub_180047214 @ 0x180047214 (sub_180047214.c)
 *     sub_18004733C @ 0x18004733C (sub_18004733C.c)
 *     sub_180047C74 @ 0x180047C74 (sub_180047C74.c)
 *     sub_18004A7A0 @ 0x18004A7A0 (sub_18004A7A0.c)
 *     sub_18004B760 @ 0x18004B760 (sub_18004B760.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_18006E8DC @ 0x18006E8DC (sub_18006E8DC.c)
 *     sub_180070084 @ 0x180070084 (sub_180070084.c)
 *     sub_18007A0D4 @ 0x18007A0D4 (sub_18007A0D4.c)
 *     sub_180084954 @ 0x180084954 (sub_180084954.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1800A0F00 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800F12BC @ 0x1800F12BC (sub_1800F12BC.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 *     sub_1801015F8 @ 0x1801015F8 (sub_1801015F8.c)
 *     sub_18010313C @ 0x18010313C (sub_18010313C.c)
 *     sub_1801033C4 @ 0x1801033C4 (sub_1801033C4.c)
 *     sub_1801045B8 @ 0x1801045B8 (sub_1801045B8.c)
 *     sub_180106190 @ 0x180106190 (sub_180106190.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_18003C350(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 **a5,
        _DWORD *a6)
{
  unsigned int v6; // r12d
  unsigned int v8; // r14d
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r13
  __int64 *i; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  __int64 *v16; // rsi
  __int64 *v17; // r14
  __int64 *v18; // rax
  int v19; // edi
  int v20; // edi
  char *v21; // r15
  int v22; // edx
  unsigned __int64 v23; // rcx
  __int64 v24; // r14
  __int64 *v25; // r12
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 **v28; // rdx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  char *v32; // rdi
  char v33; // r14
  int v34; // r9d
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rcx
  _BYTE *v38; // rdx
  char v39; // r12
  unsigned __int8 v40; // al
  unsigned __int64 v41; // r9
  char *v42; // rsi
  __int64 v43; // rdx
  unsigned __int64 v44; // r14
  char *v45; // r14
  unsigned __int64 v46; // r14
  unsigned __int64 *v47; // rdi
  unsigned __int64 v48; // r8
  unsigned __int64 *v49; // r14
  __int64 *v50; // rax
  __int64 **v51; // rdx
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdi
  int v54; // eax
  int v55; // r9d
  unsigned __int16 *v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rdi
  unsigned int v59; // r9d
  unsigned int v60; // edx
  int v61; // eax
  __int64 v62; // rdi
  int v63; // ecx
  _QWORD *v64; // rax
  _QWORD *v65; // r8
  __int64 v66; // rsi
  __int64 *v67; // r14
  __int64 v68; // rax
  __int64 v69; // r9
  __int64 **v70; // rdx
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rdi
  int v73; // eax
  int v74; // r9d
  int v75; // eax
  unsigned int v76; // edx
  unsigned __int64 v77; // r14
  char v78; // si
  unsigned __int16 *v79; // rdi
  unsigned __int16 v80; // cx
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned __int16 v83; // ax
  __int64 *v84; // rdi
  int v85; // edx
  __int64 v86; // rsi
  __int64 *v87; // r14
  __int64 v88; // rax
  __int64 v89; // r9
  __int64 **v90; // rdx
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // r8
  int v93; // eax
  __int64 v94; // r9
  __int64 *k; // r12
  int v96; // edi
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rdi
  __int64 v99; // r9
  unsigned __int64 v100; // rsi
  __int64 v101; // r12
  char *v102; // r14
  _QWORD *v103; // rdi
  __int64 v104; // rdi
  int v105; // esi
  unsigned __int64 v106; // rcx
  __int64 v107; // rdi
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rdi
  __int64 v111; // rcx
  unsigned __int64 v112; // rcx
  unsigned __int64 *v113; // rax
  _QWORD *v114; // rdi
  _QWORD *v115; // r8
  int v116; // eax
  _QWORD *v117; // rdi
  __int64 *v118; // rax
  unsigned __int64 v119; // rcx
  int v120; // eax
  int v121; // ecx
  unsigned int v122; // eax
  int v123; // edx
  char *v124; // r8
  __int64 v125; // r13
  __int64 *v126; // rcx
  __int64 v127; // rax
  __int64 v128; // r9
  __int64 **v129; // rdx
  unsigned __int64 v130; // r9
  unsigned __int64 v131; // rcx
  __int64 v132; // rax
  unsigned __int64 v133; // r8
  unsigned __int64 v134; // r14
  _QWORD *v135; // rdi
  _QWORD *v136; // r8
  _QWORD *v137; // rdi
  __int64 *v138; // rax
  unsigned __int64 v139; // rcx
  int v140; // eax
  int v141; // ecx
  __int64 v142; // r9
  struct _TEB *v143; // rdi
  struct _TEB *v144; // rdi
  _DWORD *v145; // r8
  unsigned __int64 v146; // rdx
  char v147; // al
  unsigned __int64 v148; // r13
  _DWORD *v149; // r8
  unsigned __int64 v150; // rdx
  _QWORD *v151; // rdi
  _QWORD *v152; // r8
  int v153; // ecx
  int v154; // eax
  __int64 *v155; // rax
  struct _TEB *v156; // rdi
  char *v157; // rax
  __int16 v158; // ax
  _DWORD *HotpatchInformation; // rcx
  __int64 v160; // rcx
  void *v161; // rdi
  __int64 v163; // rax
  unsigned __int64 v164; // r13
  int v165; // [rsp+20h] [rbp-1B8h]
  __int64 v166; // [rsp+28h] [rbp-1B0h]
  char v167; // [rsp+30h] [rbp-1A8h]
  int v168; // [rsp+34h] [rbp-1A4h]
  unsigned __int64 v169; // [rsp+38h] [rbp-1A0h] BYREF
  char v170; // [rsp+40h] [rbp-198h]
  int v171; // [rsp+44h] [rbp-194h]
  void *v172; // [rsp+48h] [rbp-190h]
  unsigned __int64 v173; // [rsp+50h] [rbp-188h]
  unsigned __int64 v174; // [rsp+58h] [rbp-180h]
  unsigned int v175; // [rsp+60h] [rbp-178h]
  int v176; // [rsp+64h] [rbp-174h]
  char *v177; // [rsp+68h] [rbp-170h]
  unsigned __int64 v178; // [rsp+70h] [rbp-168h]
  unsigned __int64 v179; // [rsp+78h] [rbp-160h]
  char *v180; // [rsp+80h] [rbp-158h]
  int v181; // [rsp+88h] [rbp-150h]
  unsigned __int64 v182; // [rsp+90h] [rbp-148h]
  unsigned __int64 v183; // [rsp+98h] [rbp-140h]
  unsigned __int64 v184; // [rsp+A0h] [rbp-138h]
  unsigned __int64 j; // [rsp+A8h] [rbp-130h]
  __int64 v186; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v187; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v188; // [rsp+C0h] [rbp-118h]
  __int64 v189; // [rsp+C8h] [rbp-110h]
  __int64 v190; // [rsp+D0h] [rbp-108h]
  unsigned __int64 v191; // [rsp+D8h] [rbp-100h]
  __int64 v192; // [rsp+E0h] [rbp-F8h]
  char *v193; // [rsp+E8h] [rbp-F0h]
  __int64 v194; // [rsp+F0h] [rbp-E8h]
  __int64 v195; // [rsp+F8h] [rbp-E0h]
  unsigned __int64 v196; // [rsp+100h] [rbp-D8h]
  __int64 v197; // [rsp+108h] [rbp-D0h]
  char *v198; // [rsp+110h] [rbp-C8h]
  __int64 v199; // [rsp+118h] [rbp-C0h]
  __int64 v200; // [rsp+120h] [rbp-B8h]
  __int64 v201; // [rsp+128h] [rbp-B0h]
  _QWORD *v202; // [rsp+130h] [rbp-A8h]
  int v203; // [rsp+138h] [rbp-A0h]
  unsigned __int64 v204; // [rsp+140h] [rbp-98h]
  unsigned __int16 *v205; // [rsp+148h] [rbp-90h]
  int v206; // [rsp+150h] [rbp-88h]
  int v207; // [rsp+160h] [rbp-78h]
  int v208; // [rsp+170h] [rbp-68h]
  int v209; // [rsp+180h] [rbp-58h]
  int v210; // [rsp+190h] [rbp-48h]
  unsigned int v211; // [rsp+1E8h] [rbp+10h]
  unsigned __int64 v213; // [rsp+1F8h] [rbp+20h] BYREF

  v213 = a4;
  v211 = a2;
  v8 = a2;
  v168 = 1;
  v167 = 0;
  v10 = 0LL;
  v172 = 0LL;
  v169 = 0LL;
  v171 = 0;
  v11 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v168 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return sub_1801045B8((void *)a1);
    if ( a3 )
      v163 = a3;
    else
      v163 = 1LL;
    v164 = *(_QWORD *)(a1 + 264) & (v163 + *(_QWORD *)(a1 + 256));
    if ( v164 < 0x20 )
      v164 = 32LL;
    v213 = v164;
    v6 = (unsigned int)a2 >> 4;
    LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    LODWORD(v173) = v6;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      LODWORD(v173) = v6;
      v164 += 16LL;
      v213 = v164;
    }
    v12 = v164 >> 4;
    v174 = v12;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v173) = v6;
    v12 = a4 >> 4;
    v174 = a4 >> 4;
    if ( v11 < 2 )
    {
      v213 += 16LL;
      v12 = 2LL;
      v174 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v173) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(*(_QWORD *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_180165408 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v143 = NtCurrentTeb();
        v143->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_398;
      }
      v171 = 1;
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      sub_18007A0D4(a1, 1LL);
    }
    v167 = 1;
    if ( (*(_DWORD *)(a1 + 120) & 0x30000000) != 0 )
      sub_18004B760(a1);
    v10 = 0LL;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v213 += 56LL;
      v104 = (sub_18004A7A0(a1, a2, 0LL) & 0xF) << 12;
      v186 = 0LL;
      v187 = v104 + v213 + 4096;
      v105 = sub_18004733C(a1, 1LL);
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v186, 0LL, &v187, 0x2000, v105) < 0 )
        goto LABEL_398;
      v169 = v104 + v186;
      if ( (unsigned int)sub_180047C74(
                           (v213 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           a1 + 376)
        && (int)ZwAllocateVirtualMemory(-1LL, &v169, 0LL, &v213, 4096, v105) >= 0 )
      {
        *(_WORD *)(v169 + 56) = v213 - a3;
        *(_BYTE *)(v169 + 58) = v6 | 2;
        *(_QWORD *)(v169 + 32) = v213;
        v106 = v169;
        *(_QWORD *)(v169 + 40) = v187;
        *(_BYTE *)(v169 + 63) = 4;
        *(_QWORD *)(a1 + 592) += v213;
        v107 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v106) )
          v108 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v108 = 2147353472LL;
        if ( *(_BYTE *)v108 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_18010313C(a1, v169, v213, 9LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v108) )
          v109 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v109 = 2147353472LL;
        if ( *(_BYTE *)v109 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v109) )
            v107 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          sub_1801033C4(a1, v169, v213, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v107);
        }
        v110 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v109) )
          v111 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
        else
          v111 = 2147353482LL;
        if ( *(_BYTE *)v111 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v111) )
            v110 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
          sub_1801033C4(a1, v169, v213, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v110);
        }
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
          *(_WORD *)(v169 + 16) = sub_180033C9C(1u);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v158 = sub_1800F12BC(a1, (unsigned __int8)(v8 >> 18), 0, *(_QWORD *)(v169 + 32) >> 4, 1);
          *(_WORD *)(v169 + 18) = v158;
        }
        v112 = v169;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v169 + 59) = *(_BYTE *)(v169 + 56) ^ *(_BYTE *)(v169 + 57) ^ *(_BYTE *)(v169 + 58);
          *(_DWORD *)(v112 + 56) ^= *(_DWORD *)(a1 + 136);
          v112 = v169;
        }
        v10 = a1 + 272;
        v113 = *(unsigned __int64 **)(a1 + 280);
        a2 = *v113;
        if ( *v113 == a1 + 272 )
        {
          *(_QWORD *)v112 = v10;
          *(_QWORD *)(v112 + 8) = v113;
          *v113 = v112;
          *(_QWORD *)(a1 + 280) = v112;
        }
        else
        {
          sub_18010A694(13, 0, v10, 0, a2, 0LL);
        }
        v172 = (void *)(v169 + 64);
        goto LABEL_398;
      }
      v169 = 0LL;
      ++*(_DWORD *)(a1 + 632);
    }
    goto LABEL_190;
  }
  if ( (v8 & 0x800000) == 0 )
  {
    if ( v11 >= *(unsigned __int16 *)(a1 + 432) )
    {
      if ( a3 > qword_1801627A0 || *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) || *(_BYTE *)(a1 + 419) != 2 )
        goto LABEL_19;
LABEL_210:
      *(_DWORD *)(a1 + 120) |= 0x20000000u;
      goto LABEL_19;
    }
    if ( a3 <= qword_1801627A0 )
    {
      v77 = v11 >> 3;
      v78 = v11 & 7;
      if ( ((unsigned __int8)(1 << (v11 & 7)) & *(_BYTE *)((v11 >> 3) + a1 + 434)) == 0 )
      {
        v79 = (unsigned __int16 *)(*(_QWORD *)(a1 + 424) + 2 * v11);
        v205 = v79;
        v80 = *v79 + 33;
        *v79 = v80;
        if ( v171 || (v80 & 0x1Fu) > 0x10 || v80 > 0xFF00u )
        {
          if ( a3 )
            v81 = a3;
          else
            v81 = 1LL;
          if ( *(_BYTE *)(a1 + 418) == 2 )
            v82 = *(_QWORD *)(a1 + 408);
          else
            v82 = 0LL;
          v83 = sub_180070084(v82, v81);
          if ( v83 != 0xFFFF )
          {
            *v79 = v83;
            *(_BYTE *)(v77 + a1 + 434) |= 1 << v78;
            ++*(_DWORD *)(a1 + 656);
            goto LABEL_19;
          }
          if ( *(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408) )
            goto LABEL_210;
        }
      }
    }
  }
LABEL_19:
  if ( a5 )
  {
    v84 = *a5;
    if ( *a5 )
    {
      v21 = (char *)(v84 - 2);
      v180 = (char *)(v84 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v85 = *((_DWORD *)v21 + 2) ^ *(_DWORD *)(a1 + 136);
        *((_DWORD *)v21 + 2) = v85;
        if ( HIBYTE(v85) != ((unsigned __int8)v85 ^ (unsigned __int8)(BYTE1(v85) ^ BYTE2(v85))) )
          sub_180101024(a1, v84 - 2);
      }
      v86 = *v84;
      v87 = (__int64 *)*((_QWORD *)v21 + 3);
      v88 = *v87;
      v89 = *(_QWORD *)(*v84 + 8);
      if ( *v87 != v89 || (__int64 *)v88 != v84 )
      {
        sub_18010A694(13, a1, (_DWORD)v84, v89, v88, 0LL);
        goto LABEL_321;
      }
      *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v21 + 4);
      v90 = *(__int64 ***)(a1 + 312);
      if ( v90 )
      {
        v91 = *((unsigned __int16 *)v21 + 4);
        while ( 1 )
        {
          v92 = *((unsigned int *)v90 + 2);
          if ( v91 < v92 )
          {
            v93 = *((unsigned __int16 *)v21 + 4);
            v188 = *((unsigned __int16 *)v21 + 4);
            goto LABEL_157;
          }
          if ( !*v90 )
            break;
          v90 = (__int64 **)*v90;
        }
        v93 = v92 - 1;
        v188 = (unsigned int)(v92 - 1);
LABEL_157:
        LOBYTE(v92) = 1;
        sub_180047014(a1, (_DWORD)v90, v92, (_DWORD)v84, v93, v91);
      }
      *v87 = v86;
      *(_QWORD *)(v86 + 8) = v87;
      v32 = v21 + 10;
      if ( (v21[10] & 8) != 0 && !(unsigned __int8)sub_180047214(a1, v21) )
      {
        LOBYTE(v94) = 1;
        sub_180045188(a1, v21, *((unsigned __int16 *)v21 + 4), v94);
LABEL_321:
        NtCurrentTeb()->LastStatusValue = -1073741801;
        v144 = NtCurrentTeb();
        v144->LastErrorValue = RtlNtStatusToDosError(-1073741801);
        goto LABEL_398;
      }
LABEL_49:
      v33 = *v32;
      v170 = *v32;
      v34 = v168;
      if ( !v168 && (v33 & 4) != 0 )
      {
        v100 = 16LL * *((unsigned __int16 *)v21 + 4) - 32;
        v191 = v100;
        if ( (v33 & 2) != 0 && v100 > 4 )
        {
          v100 -= 4LL;
          v191 = v100;
        }
        v101 = RtlCompareMemoryUlong(v21 + 32, v100, 4277075694LL);
        if ( v101 != v100 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          v21 = v180;
          DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v180, &v180[v101 + 32]);
          sub_180106190();
          v33 = v170;
        }
        v34 = 0;
        LOBYTE(v6) = v173;
      }
      v177 = v21;
      if ( (*v32 & 1) != 0 )
      {
        sub_18010A694(3, a1, (_DWORD)v21, 0, 0LL, 0LL);
        goto LABEL_398;
      }
      *v32 = v6;
      v35 = *((unsigned __int16 *)v21 + 4) - v12;
      v204 = v35;
      *((_WORD *)v21 + 4) = v12;
      v36 = a3;
      v37 = v213 - a3;
      v174 = v213 - a3;
      v38 = v21 + 15;
      if ( v213 - a3 >= 0x3F )
      {
        *(_QWORD *)&v21[16 * v12] = v37;
        *v38 = 63;
      }
      else
      {
        *v38 = v37;
      }
      v21[11] = 0;
      if ( v35 )
      {
        if ( v35 != 1 )
        {
          if ( v34 )
          {
            v39 = 0;
            v176 = 0;
          }
          else
          {
            v39 = 1;
            v176 = 1;
          }
          v40 = v21[14];
          if ( v40 )
            v41 = ((unsigned __int64)v21 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v40 << 16) + 0x10000;
          else
            v41 = a1;
          v179 = v35;
          v42 = &v21[16 * v12];
          v171 = 0;
          v42[10] = v33;
          v42[15] = 0;
          *((_WORD *)v42 + 6) = v12 ^ *(_WORD *)(a1 + 140);
          v43 = *(_QWORD *)(v41 + 40);
          if ( v43 == v41 )
          {
            LOBYTE(v44) = 0;
          }
          else
          {
            v44 = ((unsigned __int64)&v42[-v41] >> 16) + 1;
            v204 = v44;
            if ( v44 >= 0xFE )
              sub_18010A694(3, v43, (_DWORD)v21 + 16 * v12, v41, 0LL, 0LL);
          }
          v42[14] = v44;
          v42[11] = 0;
          *((_WORD *)v42 + 4) = v35;
          while ( 1 )
          {
            v45 = &v42[16 * v35];
            if ( (((unsigned __int8)v45[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
              break;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v123 = *((_DWORD *)v45 + 2) ^ *(_DWORD *)(a1 + 136);
              *((_DWORD *)v45 + 2) = v123;
              if ( HIBYTE(v123) != ((unsigned __int8)v123 ^ (unsigned __int8)(BYTE1(v123) ^ BYTE2(v123))) )
                sub_180101024(a1, &v42[16 * v35]);
            }
            v124 = v45 + 16;
            v125 = *((_QWORD *)v45 + 2);
            v126 = (__int64 *)*((_QWORD *)v45 + 3);
            v178 = (unsigned __int64)v126;
            v127 = *v126;
            v128 = *(_QWORD *)(v125 + 8);
            if ( *v126 == v128 && (char *)v127 == v124 )
            {
              *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v45 + 4);
              v129 = *(__int64 ***)(a1 + 312);
              if ( v129 )
              {
                v130 = *((unsigned __int16 *)v45 + 4);
                while ( 1 )
                {
                  v131 = *((unsigned int *)v129 + 2);
                  if ( v130 < v131 )
                  {
                    v132 = *((unsigned __int16 *)v45 + 4);
                    goto LABEL_277;
                  }
                  if ( !*v129 )
                    break;
                  v129 = (__int64 **)*v129;
                }
                v132 = (unsigned int)(v131 - 1);
LABEL_277:
                v195 = v132;
                LOBYTE(v124) = 1;
                sub_180047014(a1, (_DWORD)v129, (_DWORD)v124, (_DWORD)v45 + 16, v132, v130);
                v126 = (__int64 *)v178;
              }
              *v126 = v125;
              *(_QWORD *)(v125 + 8) = v126;
              if ( (v45[10] & 8) == 0 || (unsigned __int8)sub_180047214(a1, &v42[16 * v35]) )
              {
                if ( v39 )
                {
                  v147 = v45[10];
                  if ( (v147 & 4) != 0 )
                  {
                    v148 = 16LL * *((unsigned __int16 *)v45 + 4) - 32;
                    v196 = v148;
                    if ( (v147 & 2) != 0 && v148 > 4 )
                    {
                      v148 -= 4LL;
                      v196 = v148;
                    }
                    v174 = RtlCompareMemoryUlong(v45 + 32, v148, 4277075694LL);
                    if ( v174 != v148 )
                    {
                      if ( NtCurrentPeb()->Ldr )
                        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                      else
                        DbgPrint("HEAP: ");
                      DbgPrint(
                        "HEAP: Free Heap block %p modified at %p after it was freed\n",
                        &v42[16 * v35],
                        &v45[v174 + 32]);
                      sub_180106190();
                      v39 = v176;
                    }
                  }
                }
                v42[10] = v45[10];
                v133 = v35 + *((unsigned __int16 *)v45 + 4);
                v179 = v133;
                if ( v133 > 0xFF00 )
                {
                  sub_18004580C(a1, v42);
                  v34 = v168;
                  goto LABEL_82;
                }
                *((_WORD *)v42 + 4) = v133;
                *(_WORD *)&v42[16 * v133 + 12] = v133 ^ *(_WORD *)(a1 + 140);
                v134 = (unsigned __int16)v133;
                if ( !v39 )
                {
                  v42[10] = 0;
                  v42[15] = 0;
                  v135 = (_QWORD *)(a1 + 336);
                  if ( *(_QWORD *)(a1 + 312) )
                    v136 = (_QWORD *)sub_1800466AC(a1, (unsigned __int16)v133);
                  else
                    v136 = (_QWORD *)*v135;
                  while ( v135 != v136 )
                  {
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v141 = *((_DWORD *)v136 - 2);
                      v181 = v141;
                      if ( (v141 & *(_DWORD *)(a1 + 124)) != 0 )
                      {
                        v140 = v141 ^ *(_DWORD *)(a1 + 136);
                        v181 = v140;
                      }
                      else
                      {
                        LOWORD(v140) = v141;
                      }
                    }
                    else
                    {
                      LOWORD(v140) = *((_WORD *)v136 - 4);
                    }
                    if ( v134 <= (unsigned __int16)v140 )
                      break;
                    v136 = (_QWORD *)*v136;
                  }
                  v137 = v42 + 16;
                  v138 = (__int64 *)v136[1];
                  if ( (_QWORD *)*v138 == v136 )
                  {
                    *v137 = v136;
                    *((_QWORD *)v42 + 3) = v138;
                    *v138 = (__int64)v137;
                    v136[1] = v137;
                  }
                  else
                  {
                    sub_18010A694(13, 0, (_DWORD)v136, 0, *v138, 0LL);
                  }
                  *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v42 + 4);
                  v51 = *(__int64 ***)(a1 + 312);
                  if ( v51 )
                  {
                    v139 = *((unsigned __int16 *)v42 + 4);
                    while ( 1 )
                    {
                      v48 = *((unsigned int *)v51 + 2);
                      if ( v139 < v48 )
                      {
                        v197 = *((unsigned __int16 *)v42 + 4);
                        v166 = v139;
                        v165 = v139;
                        v55 = (_DWORD)v42 + 16;
                        goto LABEL_79;
                      }
                      if ( !*v51 )
                        break;
                      v51 = (__int64 **)*v51;
                    }
                    v197 = (unsigned int)(v48 - 1);
                    v166 = v139;
                    v165 = v48 - 1;
                    v55 = (_DWORD)v42 + 16;
LABEL_79:
                    LOBYTE(v48) = 1;
                    sub_180046B74(a1, (_DWORD)v51, v48, v55, v165, v166);
                  }
LABEL_80:
                  v34 = v168;
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v42[11] = v42[8] ^ v42[9] ^ v42[10];
                    *((_DWORD *)v42 + 2) ^= *(_DWORD *)(a1 + 136);
                  }
LABEL_82:
                  v36 = a3;
                  goto LABEL_83;
                }
                v42[10] &= 0xF0u;
                v42[15] = 0;
                if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
                {
                  v149 = v42 + 32;
                  v198 = v42 + 32;
                  v150 = (16 * v134 - 32) >> 2;
                  v183 = v150;
                  if ( v150 )
                  {
                    if ( ((unsigned __int8)v149 & 4) != 0 )
                    {
                      *v149 = -17891602;
                      v183 = --v150;
                      if ( v150 )
                      {
                        v149 = v42 + 36;
                        v198 = v42 + 36;
                        goto LABEL_356;
                      }
                    }
                    else
                    {
LABEL_356:
                      memset64(v149, 0xFEEEFEEEFEEEFEEEuLL, v150 >> 1);
                      if ( (v150 & 1) != 0 )
                        v149[v150 - 1] = -17891602;
                    }
                  }
                  v42[10] |= 4u;
                }
                v151 = (_QWORD *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  v152 = (_QWORD *)sub_1800466AC(a1, v134);
                else
                  v152 = (_QWORD *)*v151;
                while ( v151 != v152 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v153 = *((_DWORD *)v152 - 2);
                    v210 = v153;
                    if ( (v153 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v154 = v153 ^ *(_DWORD *)(a1 + 136);
                      v210 = v154;
                    }
                    else
                    {
                      LOWORD(v154) = v153;
                    }
                  }
                  else
                  {
                    LOWORD(v154) = *((_WORD *)v152 - 4);
                  }
                  if ( v134 <= (unsigned __int16)v154 )
                    break;
                  v152 = (_QWORD *)*v152;
                }
                v117 = v42 + 16;
                v155 = (__int64 *)v152[1];
                if ( (_QWORD *)*v155 == v152 )
                {
                  *v117 = v152;
                  *((_QWORD *)v42 + 3) = v155;
                  *v155 = (__int64)v117;
                  v152[1] = v117;
                }
                else
                {
                  sub_18010A694(13, 0, (_DWORD)v152, 0, *v155, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v42 + 4);
                v51 = *(__int64 ***)(a1 + 312);
                if ( !v51 )
                  goto LABEL_80;
                v119 = *((unsigned __int16 *)v42 + 4);
                while ( 1 )
                {
                  v48 = *((unsigned int *)v51 + 2);
                  if ( v119 < v48 )
                  {
                    v120 = *((unsigned __int16 *)v42 + 4);
                    v199 = *((unsigned __int16 *)v42 + 4);
                    goto LABEL_255;
                  }
                  if ( !*v51 )
                    break;
                  v51 = (__int64 **)*v51;
                }
                v120 = v48 - 1;
                v199 = (unsigned int)(v48 - 1);
LABEL_255:
                v166 = v119;
                v165 = v120;
                v55 = (int)v117;
                goto LABEL_79;
              }
              LOBYTE(v142) = 1;
              sub_180045188(a1, &v42[16 * v35], *((unsigned __int16 *)v45 + 4), v142);
            }
            else
            {
              sub_18010A694(13, a1, (_DWORD)v124, v128, v127, 0LL);
            }
            if ( v171 )
            {
              NtCurrentTeb()->LastStatusValue = -1073741764;
              v156 = NtCurrentTeb();
              v156->LastErrorValue = RtlNtStatusToDosError(-1073741764);
              goto LABEL_398;
            }
            v171 = 1;
          }
          *((_WORD *)v45 + 6) = v35 ^ *(_WORD *)(a1 + 140);
          v46 = (unsigned __int16)v35;
          if ( !v39 )
          {
            v42[10] = 0;
            v42[15] = 0;
            v47 = (unsigned __int64 *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              v48 = sub_1800466AC(a1, (unsigned int)v46);
            else
              v48 = *v47;
            while ( v47 != (unsigned __int64 *)v48 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v75 = *(_DWORD *)(v48 - 8);
                v206 = v75;
                if ( (v75 & *(_DWORD *)(a1 + 124)) != 0 )
                {
                  v63 = v75 ^ *(_DWORD *)(a1 + 136);
                  v206 = v63;
                }
                else
                {
                  LOWORD(v63) = v75;
                }
              }
              else
              {
                LOWORD(v63) = *(_WORD *)(v48 - 8);
              }
              if ( v46 <= (unsigned __int16)v63 )
                break;
              v48 = *(_QWORD *)v48;
            }
            v49 = (unsigned __int64 *)(v42 + 16);
            v50 = *(__int64 **)(v48 + 8);
            if ( *v50 == v48 )
            {
              *v49 = v48;
              *((_QWORD *)v42 + 3) = v50;
              *v50 = (__int64)v49;
              *(_QWORD *)(v48 + 8) = v49;
            }
            else
            {
              sub_18010A694(13, 0, v48, 0, *v50, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v42 + 4);
            v51 = *(__int64 ***)(a1 + 312);
            if ( v51 )
            {
              v52 = *((unsigned __int16 *)v42 + 4);
              while ( 1 )
              {
                v53 = *((unsigned int *)v51 + 2);
                if ( v52 < v53 )
                {
                  v54 = *((unsigned __int16 *)v42 + 4);
                  v192 = *((unsigned __int16 *)v42 + 4);
                  goto LABEL_78;
                }
                if ( !*v51 )
                  break;
                v51 = (__int64 **)*v51;
              }
              v54 = v53 - 1;
              v192 = (unsigned int)(v53 - 1);
LABEL_78:
              v166 = v52;
              v165 = v54;
              v55 = (_DWORD)v42 + 16;
              goto LABEL_79;
            }
            goto LABEL_80;
          }
          v42[10] &= 0xF0u;
          v42[15] = 0;
          if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
          {
LABEL_243:
            v114 = (_QWORD *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              v115 = (_QWORD *)sub_1800466AC(a1, v46);
            else
              v115 = (_QWORD *)*v114;
            while ( v114 != v115 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v121 = *((_DWORD *)v115 - 2);
                v203 = v121;
                if ( (v121 & *(_DWORD *)(a1 + 124)) != 0 )
                {
                  v116 = v121 ^ *(_DWORD *)(a1 + 136);
                  v203 = v116;
                }
                else
                {
                  LOWORD(v116) = v121;
                }
              }
              else
              {
                LOWORD(v116) = *((_WORD *)v115 - 4);
              }
              if ( v46 <= (unsigned __int16)v116 )
                break;
              v115 = (_QWORD *)*v115;
            }
            v117 = v42 + 16;
            v118 = (__int64 *)v115[1];
            if ( (_QWORD *)*v118 == v115 )
            {
              *v117 = v115;
              *((_QWORD *)v42 + 3) = v118;
              *v118 = (__int64)v117;
              v115[1] = v117;
            }
            else
            {
              sub_18010A694(13, 0, (_DWORD)v115, 0, *v118, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v42 + 4);
            v51 = *(__int64 ***)(a1 + 312);
            if ( !v51 )
              goto LABEL_80;
            v119 = *((unsigned __int16 *)v42 + 4);
            while ( 1 )
            {
              v48 = *((unsigned int *)v51 + 2);
              if ( v119 < v48 )
              {
                v120 = *((unsigned __int16 *)v42 + 4);
                v178 = *((unsigned __int16 *)v42 + 4);
                goto LABEL_255;
              }
              if ( !*v51 )
                break;
              v51 = (__int64 **)*v51;
            }
            v120 = v48 - 1;
            v178 = (unsigned int)(v48 - 1);
            goto LABEL_255;
          }
          v145 = v42 + 32;
          v193 = v42 + 32;
          v146 = (16 * (unsigned __int64)(unsigned __int16)v35 - 32) >> 2;
          v182 = v146;
          if ( v146 )
          {
            if ( ((unsigned __int8)v145 & 4) == 0 )
              goto LABEL_336;
            *v145 = -17891602;
            v182 = --v146;
            if ( v146 )
            {
              v145 = v42 + 36;
              v193 = v42 + 36;
LABEL_336:
              memset64(v145, 0xFEEEFEEEFEEEFEEEuLL, v146 >> 1);
              if ( (v146 & 1) != 0 )
                v145[v146 - 1] = -17891602;
            }
          }
          v42[10] |= 4u;
          goto LABEL_243;
        }
        ++*((_WORD *)v21 + 4);
        v98 = v213 - a3 + 16;
        v173 = v98;
        if ( v98 >= 0x3F )
        {
          *(_QWORD *)&v21[16 * v12 + 16] = v98;
          *v38 = 63;
        }
        else
        {
          *v38 = v98;
        }
      }
LABEL_83:
      v172 = v177 + 16;
      v56 = (unsigned __int16 *)(v177 + 8);
      a2 = *((unsigned __int16 *)v177 + 4);
      v10 = (unsigned __int16)a2;
      LOWORD(v10) = BYTE1(a2);
      v57 = 16 * a2;
      v200 = 16 * a2;
      if ( (v177[15] & 0x3F) == 0x3F )
      {
        v57 -= 8LL;
        v200 = v57;
      }
      if ( v34 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v177[11] = BYTE1(a2) ^ a2 ^ v21[10];
          *(_DWORD *)v56 ^= *(_DWORD *)(a1 + 136);
        }
        if ( v167 )
        {
          if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
          {
            ++*(_DWORD *)(a1 + 640);
            v76 = *(_DWORD *)(a1 + 648);
            if ( *(_DWORD *)(a1 + 640) > v76 )
            {
              *(_DWORD *)(a1 + 640) = 0;
              v97 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
              if ( v97 > *(_QWORD *)(a1 + 672) )
                *(_QWORD *)(a1 + 672) = v97;
              *(_QWORD *)(a1 + 680) = v97;
            }
            if ( ++*(_DWORD *)(a1 + 652) >= 0x1000u )
            {
              if ( *(_BYTE *)(a1 + 418) == 2 && *(_DWORD *)(a1 + 656) > 0x10u )
                v122 = 256;
              else
                v122 = 16;
              if ( *(_DWORD *)(a1 + 644) > v122 && v76 < 0x10000 )
                *(_DWORD *)(a1 + 648) = 2 * v76;
              *(_DWORD *)(a1 + 644) = 0;
              *(_DWORD *)(a1 + 652) = 0;
            }
          }
          RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
          v167 = 0;
        }
        if ( (v211 & 8) != 0 )
          memset(v172, 0, v57 - 8);
        goto LABEL_398;
      }
      if ( (v211 & 8) != 0 )
      {
        memset(v172, 0, v57 - 8);
LABEL_200:
        if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
        {
          v157 = (char *)v172;
          *(_QWORD *)((char *)v172 + v36) = 0xABABABABABABABABuLL;
          *(_QWORD *)&v157[v36 + 8] = 0xABABABABABABABABuLL;
          v177[10] |= 4u;
        }
        v102 = v177;
        v177[11] = 0;
        if ( (v102[10] & 2) != 0 )
        {
          v103 = (_QWORD *)sub_18006E8DC(v102);
          v202 = v103;
          *v103 = 0LL;
          v103[1] = 0LL;
          if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
            *(_WORD *)v103 = sub_180033C9C(1u);
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            *((_WORD *)v202 + 1) = sub_1800F12BC(a1, (v211 >> 18) & 0xFFF, 0, *v56, 0);
        }
        else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v102[11] = sub_1800F12BC(a1, (unsigned __int8)(v211 >> 18), 0, *v56, 0);
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          v102[11] = *(_BYTE *)v56 ^ *((_BYTE *)v56 + 1) ^ *((_BYTE *)v56 + 2);
          *(_DWORD *)v56 ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_398;
      }
      if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
        goto LABEL_200;
      v10 = (__int64)v172;
      v201 = (__int64)v172;
      a2 = (v36 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v184 = a2;
      if ( !a2 )
        goto LABEL_200;
      if ( ((unsigned __int8)v172 & 4) != 0 )
      {
        *(_DWORD *)v172 = -1163005939;
        v184 = --a2;
        if ( !a2 )
          goto LABEL_200;
        v10 += 4LL;
        v201 = v10;
      }
      memset64((void *)v10, 0xBAADF00DBAADF00DuLL, a2 >> 1);
      if ( (a2 & 1) != 0 )
        *(_DWORD *)(v10 + 4 * a2 - 4) = -1163005939;
      goto LABEL_200;
    }
  }
  v179 = a1 + 336;
  for ( i = *(__int64 **)(a1 + 312); ; i = (__int64 *)*i )
  {
    v14 = *((unsigned int *)i + 2);
    if ( v12 < v14 )
    {
      j = v12;
      goto LABEL_23;
    }
    if ( !*i )
      break;
  }
  LODWORD(v12) = v14 - 1;
  for ( j = (unsigned int)(v14 - 1); ; j = (unsigned int)v12 )
  {
LABEL_23:
    v15 = (unsigned int)(v12 - *((_DWORD *)i + 6));
    v16 = 0LL;
    v17 = (__int64 *)i[4];
    v18 = (__int64 *)v17[1];
    if ( v17 == v18 )
    {
      v16 = (__int64 *)i[4];
    }
    else
    {
      LODWORD(v10) = (_DWORD)v18 - 16;
      v19 = *((_DWORD *)v18 - 2);
      v207 = v19;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v19 ^= *(_DWORD *)(a1 + 136);
        v207 = v19;
        if ( HIBYTE(v19) != ((unsigned __int8)v19 ^ (unsigned __int8)(BYTE1(v19) ^ BYTE2(v19))) )
          sub_18010A694(3, a1, v10, 0, 0LL, 0LL);
      }
      if ( (int)(v174 - (unsigned __int16)v19) > 0 )
      {
        v16 = v17;
      }
      else
      {
        v10 = *v17 - 16;
        v20 = *(_DWORD *)(v10 + 8);
        v208 = v20;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v20 ^= *(_DWORD *)(a1 + 136);
          v208 = v20;
          if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
            sub_18010A694(3, a1, v10, 0, 0LL, 0LL);
        }
        if ( (int)(v174 - (unsigned __int16)v20) > 0 )
        {
          if ( !*i && (_DWORD)v12 == *((_DWORD *)i + 2) - 1 )
          {
            if ( *((_DWORD *)i + 3) )
              v15 = (unsigned int)(2 * v15);
            for ( k = *(__int64 **)(i[6] + 8 * v15); v17 != k; k = (__int64 *)*k )
            {
              LODWORD(v10) = (_DWORD)k - 16;
              v96 = *((_DWORD *)k - 2);
              v209 = v96;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v96 ^= *(_DWORD *)(a1 + 136);
                v209 = v96;
                if ( HIBYTE(v96) != ((unsigned __int8)v96 ^ (unsigned __int8)(BYTE1(v96) ^ BYTE2(v96))) )
                  sub_18010A694(3, a1, v10, 0, 0LL, 0LL);
              }
              if ( (int)(v174 - (unsigned __int16)v96) <= 0 )
              {
                v16 = k;
                break;
              }
            }
          }
          else
          {
            v58 = (unsigned int)v15 >> 5;
            v175 = (unsigned int)v15 >> 5;
            v59 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
            v10 = i[5] + 4 * v58;
            v189 = v10;
            v60 = *(_DWORD *)v10 & (-1 << (v15 & 0x1F));
            while ( !v60 )
            {
              if ( (unsigned int)v58 > v59 )
                goto LABEL_182;
              v10 += 4LL;
              v189 = v10;
              v60 = *(_DWORD *)v10;
              LODWORD(v58) = v58 + 1;
              v175 = v58;
            }
            if ( (_WORD)v60 )
            {
              if ( (_BYTE)v60 )
                v61 = (unsigned __int8)a0123456789abcd[(unsigned __int8)v60 + 16];
              else
                v61 = (unsigned __int8)a0123456789abcd[BYTE1(v60) + 16] + 8;
            }
            else if ( (v60 & 0xFF0000) != 0 )
            {
              v61 = (unsigned __int8)a0123456789abcd[BYTE2(v60) + 16] + 16;
            }
            else
            {
              v61 = (unsigned __int8)a0123456789abcd[((unsigned __int64)v60 >> 24) + 16] + 24;
            }
            v62 = (unsigned int)(v61 + 32 * v58);
            v175 = v62;
            if ( *((_DWORD *)i + 3) )
              v62 = (unsigned int)(2 * v62);
            v16 = *(__int64 **)(i[6] + 8 * v62);
          }
        }
        else
        {
          v16 = (__int64 *)*v17;
        }
      }
    }
    if ( v16 )
      break;
LABEL_182:
    i = (__int64 *)*i;
    LODWORD(v12) = *((_DWORD *)i + 6);
  }
  if ( (__int64 *)v179 == v16 )
  {
    v12 = v174;
  }
  else
  {
    v21 = (char *)(v16 - 2);
    v180 = (char *)(v16 - 2);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v22 = *((_DWORD *)v21 + 2) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)v21 + 2) = v22;
      if ( HIBYTE(v22) != ((unsigned __int8)v22 ^ (unsigned __int8)(BYTE1(v22) ^ BYTE2(v22))) )
        sub_180101024(a1, v16 - 2);
    }
    v23 = *((unsigned __int16 *)v21 + 4);
    v12 = v174;
    if ( v23 >= v174 )
    {
      v24 = *v16;
      v25 = (__int64 *)*((_QWORD *)v21 + 3);
      v26 = *v25;
      v27 = *(_QWORD *)(*v16 + 8);
      if ( *v25 != v27 || (__int64 *)v26 != v16 )
      {
        sub_18010A694(13, a1, (_DWORD)v16, v27, v26, 0LL);
        goto LABEL_398;
      }
      *(_QWORD *)(a1 + 192) -= v23;
      v28 = *(__int64 ***)(a1 + 312);
      if ( v28 )
      {
        v29 = *((unsigned __int16 *)v21 + 4);
        while ( 1 )
        {
          v30 = *((unsigned int *)v28 + 2);
          if ( v29 < v30 )
          {
            v31 = *((unsigned __int16 *)v21 + 4);
            goto LABEL_45;
          }
          if ( !*v28 )
            break;
          v28 = (__int64 **)*v28;
        }
        v31 = (unsigned int)(v30 - 1);
LABEL_45:
        v194 = v31;
        LOBYTE(v10) = 1;
        sub_180047014(a1, (_DWORD)v28, v10, (_DWORD)v16, v31, v29);
      }
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
LABEL_47:
      v32 = v21 + 10;
      if ( (v21[10] & 8) != 0 && !(unsigned __int8)sub_180047214(a1, v21) )
      {
        LOBYTE(v99) = 1;
        sub_180045188(a1, v21, *((unsigned __int16 *)v21 + 4), v99);
        goto LABEL_398;
      }
      LOBYTE(v6) = v173;
      goto LABEL_49;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v21[11] = v23 ^ BYTE1(v23) ^ v21[10];
      *((_DWORD *)v21 + 2) ^= *(_DWORD *)(a1 + 136);
    }
  }
  v64 = (_QWORD *)sub_18003F020(a1, v213);
  v21 = (char *)v64;
  v180 = (char *)v64;
  if ( !v64 )
  {
LABEL_190:
    v172 = 0LL;
    goto LABEL_398;
  }
  v65 = v64 + 2;
  v66 = v64[2];
  v67 = (__int64 *)v64[3];
  v68 = *v67;
  v69 = *(_QWORD *)(v66 + 8);
  if ( *v67 == v69 && (_QWORD *)v68 == v65 )
  {
    *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v21 + 4);
    v70 = *(__int64 ***)(a1 + 312);
    if ( v70 )
    {
      v71 = *((unsigned __int16 *)v21 + 4);
      while ( 1 )
      {
        v72 = *((unsigned int *)v70 + 2);
        if ( v71 < v72 )
        {
          v73 = *((unsigned __int16 *)v21 + 4);
          v190 = *((unsigned __int16 *)v21 + 4);
          goto LABEL_121;
        }
        if ( !*v70 )
          break;
        v70 = (__int64 **)*v70;
      }
      v73 = v72 - 1;
      v190 = (unsigned int)(v72 - 1);
LABEL_121:
      v74 = (int)v65;
      LOBYTE(v65) = 1;
      sub_180047014(a1, (_DWORD)v70, (_DWORD)v65, v74, v73, v71);
    }
    *v67 = v66;
    *(_QWORD *)(v66 + 8) = v67;
    goto LABEL_47;
  }
  sub_18010A694(13, a1, (_DWORD)v65, v69, v68, 0LL);
LABEL_398:
  if ( v167 )
  {
    if ( !v169 && v172 )
      sub_180084954(a1, a2, v10);
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  }
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v160 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
  else
    v160 = 2147353480LL;
  v161 = v172;
  if ( *(_BYTE *)v160 && v172 )
  {
    if ( v169 )
      sub_1801015F8(a1, v169 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v169 + 40));
  }
  return (__int64)v161;
}
