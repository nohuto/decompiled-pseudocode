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

void *__fastcall sub_18003C350(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
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
  ULONG_PTR v37; // rcx
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
  __int64 *k; // r12
  int v95; // edi
  unsigned __int64 v96; // rcx
  ULONG_PTR v97; // rdi
  SIZE_T v98; // rsi
  SIZE_T v99; // r12
  char *v100; // r14
  _QWORD *v101; // rdi
  __int64 v102; // rdi
  ULONG v103; // esi
  __int64 v104; // rdi
  __int64 UserModeGlobalLogger; // rcx
  __int64 v106; // rcx
  __int64 v107; // rdi
  __int64 v108; // rcx
  _DWORD *v109; // rcx
  unsigned __int64 *v110; // rax
  _QWORD *v111; // rdi
  _QWORD *v112; // r8
  int v113; // eax
  _QWORD *v114; // rdi
  __int64 *v115; // rax
  unsigned __int64 v116; // rcx
  int v117; // eax
  int v118; // ecx
  unsigned int v119; // eax
  int v120; // edx
  char *v121; // r8
  __int64 v122; // r13
  __int64 *v123; // rcx
  __int64 v124; // rax
  __int64 v125; // r9
  __int64 **v126; // rdx
  unsigned __int64 v127; // r9
  unsigned __int64 v128; // rcx
  __int64 v129; // rax
  unsigned __int64 v130; // r8
  unsigned __int64 v131; // r14
  _QWORD *v132; // rdi
  _QWORD *v133; // r8
  _QWORD *v134; // rdi
  __int64 *v135; // rax
  unsigned __int64 v136; // rcx
  int v137; // eax
  int v138; // ecx
  struct _TEB *v139; // rdi
  struct _TEB *v140; // rdi
  _DWORD *v141; // r8
  unsigned __int64 v142; // rdx
  char v143; // al
  SIZE_T v144; // r13
  _DWORD *v145; // r8
  unsigned __int64 v146; // rdx
  _QWORD *v147; // rdi
  _QWORD *v148; // r8
  int v149; // ecx
  int v150; // eax
  __int64 *v151; // rax
  struct _TEB *v152; // rdi
  char *v153; // rax
  __int16 v154; // ax
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v156; // rcx
  void *v157; // rdi
  __int64 v159; // rax
  ULONG_PTR v160; // r13
  int AllocationType; // [rsp+20h] [rbp-1B8h]
  __int64 Protect; // [rsp+28h] [rbp-1B0h]
  char v163; // [rsp+30h] [rbp-1A8h]
  int v164; // [rsp+34h] [rbp-1A4h]
  PVOID v165; // [rsp+38h] [rbp-1A0h] BYREF
  char v166; // [rsp+40h] [rbp-198h]
  int v167; // [rsp+44h] [rbp-194h]
  void *v168; // [rsp+48h] [rbp-190h]
  ULONG_PTR v169; // [rsp+50h] [rbp-188h]
  unsigned __int64 v170; // [rsp+58h] [rbp-180h]
  unsigned int v171; // [rsp+60h] [rbp-178h]
  int v172; // [rsp+64h] [rbp-174h]
  char *v173; // [rsp+68h] [rbp-170h]
  unsigned __int64 v174; // [rsp+70h] [rbp-168h]
  unsigned __int64 v175; // [rsp+78h] [rbp-160h]
  char *v176; // [rsp+80h] [rbp-158h]
  int v177; // [rsp+88h] [rbp-150h]
  unsigned __int64 v178; // [rsp+90h] [rbp-148h]
  unsigned __int64 v179; // [rsp+98h] [rbp-140h]
  unsigned __int64 v180; // [rsp+A0h] [rbp-138h]
  unsigned __int64 j; // [rsp+A8h] [rbp-130h]
  PVOID BaseAddress; // [rsp+B0h] [rbp-128h] BYREF
  ULONG_PTR RegionSize; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v184; // [rsp+C0h] [rbp-118h]
  __int64 v185; // [rsp+C8h] [rbp-110h]
  __int64 v186; // [rsp+D0h] [rbp-108h]
  SIZE_T v187; // [rsp+D8h] [rbp-100h]
  __int64 v188; // [rsp+E0h] [rbp-F8h]
  char *v189; // [rsp+E8h] [rbp-F0h]
  __int64 v190; // [rsp+F0h] [rbp-E8h]
  __int64 v191; // [rsp+F8h] [rbp-E0h]
  SIZE_T v192; // [rsp+100h] [rbp-D8h]
  __int64 v193; // [rsp+108h] [rbp-D0h]
  char *v194; // [rsp+110h] [rbp-C8h]
  __int64 v195; // [rsp+118h] [rbp-C0h]
  __int64 v196; // [rsp+120h] [rbp-B8h]
  __int64 v197; // [rsp+128h] [rbp-B0h]
  _QWORD *v198; // [rsp+130h] [rbp-A8h]
  int v199; // [rsp+138h] [rbp-A0h]
  unsigned __int64 v200; // [rsp+140h] [rbp-98h]
  unsigned __int16 *v201; // [rsp+148h] [rbp-90h]
  int v202; // [rsp+150h] [rbp-88h]
  int v203; // [rsp+160h] [rbp-78h]
  int v204; // [rsp+170h] [rbp-68h]
  int v205; // [rsp+180h] [rbp-58h]
  int v206; // [rsp+190h] [rbp-48h]
  unsigned int v207; // [rsp+1E8h] [rbp+10h]
  ULONG_PTR v209; // [rsp+1F8h] [rbp+20h] BYREF

  v209 = a4;
  v207 = a2;
  v8 = a2;
  v164 = 1;
  v163 = 0;
  v10 = 0LL;
  v168 = 0LL;
  v165 = 0LL;
  v167 = 0;
  v11 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v164 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return (void *)sub_1801045B8((void *)a1);
    if ( a3 )
      v159 = a3;
    else
      v159 = 1LL;
    v160 = *(_QWORD *)(a1 + 264) & (v159 + *(_QWORD *)(a1 + 256));
    if ( v160 < 0x20 )
      v160 = 32LL;
    v209 = v160;
    v6 = (unsigned int)a2 >> 4;
    LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    LODWORD(v169) = v6;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      LODWORD(v169) = v6;
      v160 += 16LL;
      v209 = v160;
    }
    v12 = v160 >> 4;
    v170 = v12;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v169) = v6;
    v12 = a4 >> 4;
    v170 = a4 >> 4;
    if ( v11 < 2 )
    {
      v209 += 16LL;
      v12 = 2LL;
      v170 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v169) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_180165408 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v139 = NtCurrentTeb();
        v139->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_398;
      }
      v167 = 1;
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      sub_18007A0D4(a1, 1LL);
    }
    v163 = 1;
    if ( (*(_DWORD *)(a1 + 120) & 0x30000000) != 0 )
      sub_18004B760(a1);
    v10 = 0LL;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v209 += 56LL;
      v102 = (sub_18004A7A0(a1, a2, 0LL) & 0xF) << 12;
      BaseAddress = 0LL;
      RegionSize = v102 + v209 + 4096;
      v103 = sub_18004733C(a1, 1LL);
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, v103) < 0 )
        goto LABEL_398;
      v165 = (char *)BaseAddress + v102;
      if ( (unsigned int)sub_180047C74(
                           (v209 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           a1 + 376)
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v165, 0LL, &v209, 0x1000u, v103) >= 0 )
      {
        *((_WORD *)v165 + 28) = v209 - a3;
        *((_BYTE *)v165 + 58) = v6 | 2;
        *((_QWORD *)v165 + 4) = v209;
        *((_QWORD *)v165 + 5) = RegionSize;
        *((_BYTE *)v165 + 63) = 4;
        *(_QWORD *)(a1 + 592) += v209;
        v104 = 2147353472LL;
        if ( RtlGetCurrentServiceSessionId() )
          UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          UserModeGlobalLogger = 2147353472LL;
        if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_18010313C(a1, v165, v209, 9LL);
        if ( RtlGetCurrentServiceSessionId() )
          v106 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          v106 = 2147353472LL;
        if ( *(_BYTE *)v106 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v104 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          sub_1801033C4(a1, (int)v165, v209, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v104);
        }
        v107 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v108 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        else
          v108 = 2147353482LL;
        if ( *(_BYTE *)v108 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v107 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
          sub_1801033C4(a1, (int)v165, v209, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v107);
        }
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
          *((_WORD *)v165 + 8) = sub_180033C9C(1u);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v154 = sub_1800F12BC(a1, (unsigned __int8)(v8 >> 18), 0, *((_QWORD *)v165 + 4) >> 4, 1);
          *((_WORD *)v165 + 9) = v154;
        }
        v109 = v165;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v165 + 59) = *((_BYTE *)v165 + 56) ^ *((_BYTE *)v165 + 57) ^ *((_BYTE *)v165 + 58);
          v109[14] ^= *(_DWORD *)(a1 + 136);
          v109 = v165;
        }
        v10 = a1 + 272;
        v110 = *(unsigned __int64 **)(a1 + 280);
        a2 = *v110;
        if ( *v110 == a1 + 272 )
        {
          *(_QWORD *)v109 = v10;
          *((_QWORD *)v109 + 1) = v110;
          *v110 = (unsigned __int64)v109;
          *(_QWORD *)(a1 + 280) = v109;
        }
        else
        {
          sub_18010A694(13, 0, v10, 0, a2, 0LL);
        }
        v168 = (char *)v165 + 64;
        goto LABEL_398;
      }
      v165 = 0LL;
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
        v201 = v79;
        v80 = *v79 + 33;
        *v79 = v80;
        if ( v167 || (v80 & 0x1Fu) > 0x10 || v80 > 0xFF00u )
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
      v176 = (char *)(v84 - 2);
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
            v184 = *((unsigned __int16 *)v21 + 4);
            goto LABEL_157;
          }
          if ( !*v90 )
            break;
          v90 = (__int64 **)*v90;
        }
        v93 = v92 - 1;
        v184 = (unsigned int)(v92 - 1);
LABEL_157:
        LOBYTE(v92) = 1;
        sub_180047014(a1, (_DWORD)v90, v92, (_DWORD)v84, v93, v91);
      }
      *v87 = v86;
      *(_QWORD *)(v86 + 8) = v87;
      v32 = v21 + 10;
      if ( (v21[10] & 8) != 0 && !(unsigned __int8)sub_180047214(a1) )
      {
        sub_180045188(a1);
LABEL_321:
        NtCurrentTeb()->LastStatusValue = -1073741801;
        v140 = NtCurrentTeb();
        v140->LastErrorValue = RtlNtStatusToDosError(-1073741801);
        goto LABEL_398;
      }
LABEL_49:
      v33 = *v32;
      v166 = *v32;
      v34 = v164;
      if ( !v164 && (v33 & 4) != 0 )
      {
        v98 = 16LL * *((unsigned __int16 *)v21 + 4) - 32;
        v187 = v98;
        if ( (v33 & 2) != 0 && v98 > 4 )
        {
          v98 -= 4LL;
          v187 = v98;
        }
        v99 = RtlCompareMemoryUlong(v21 + 32, v98, 0xFEEEFEEE);
        if ( v99 != v98 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          v21 = v176;
          DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v176, &v176[v99 + 32]);
          sub_180106190();
          v33 = v166;
        }
        v34 = 0;
        LOBYTE(v6) = v169;
      }
      v173 = v21;
      if ( (*v32 & 1) != 0 )
      {
        sub_18010A694(3, a1, (_DWORD)v21, 0, 0LL, 0LL);
        goto LABEL_398;
      }
      *v32 = v6;
      v35 = *((unsigned __int16 *)v21 + 4) - v12;
      v200 = v35;
      *((_WORD *)v21 + 4) = v12;
      v36 = a3;
      v37 = v209 - a3;
      v170 = v209 - a3;
      v38 = v21 + 15;
      if ( v209 - a3 >= 0x3F )
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
            v172 = 0;
          }
          else
          {
            v39 = 1;
            v172 = 1;
          }
          v40 = v21[14];
          if ( v40 )
            v41 = ((unsigned __int64)v21 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v40 << 16) + 0x10000;
          else
            v41 = a1;
          v175 = v35;
          v42 = &v21[16 * v12];
          v167 = 0;
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
            v200 = v44;
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
              v120 = *((_DWORD *)v45 + 2) ^ *(_DWORD *)(a1 + 136);
              *((_DWORD *)v45 + 2) = v120;
              if ( HIBYTE(v120) != ((unsigned __int8)v120 ^ (unsigned __int8)(BYTE1(v120) ^ BYTE2(v120))) )
                sub_180101024(a1, &v42[16 * v35]);
            }
            v121 = v45 + 16;
            v122 = *((_QWORD *)v45 + 2);
            v123 = (__int64 *)*((_QWORD *)v45 + 3);
            v174 = (unsigned __int64)v123;
            v124 = *v123;
            v125 = *(_QWORD *)(v122 + 8);
            if ( *v123 == v125 && (char *)v124 == v121 )
            {
              *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v45 + 4);
              v126 = *(__int64 ***)(a1 + 312);
              if ( v126 )
              {
                v127 = *((unsigned __int16 *)v45 + 4);
                while ( 1 )
                {
                  v128 = *((unsigned int *)v126 + 2);
                  if ( v127 < v128 )
                  {
                    v129 = *((unsigned __int16 *)v45 + 4);
                    goto LABEL_277;
                  }
                  if ( !*v126 )
                    break;
                  v126 = (__int64 **)*v126;
                }
                v129 = (unsigned int)(v128 - 1);
LABEL_277:
                v191 = v129;
                LOBYTE(v121) = 1;
                sub_180047014(a1, (_DWORD)v126, (_DWORD)v121, (_DWORD)v45 + 16, v129, v127);
                v123 = (__int64 *)v174;
              }
              *v123 = v122;
              *(_QWORD *)(v122 + 8) = v123;
              if ( (v45[10] & 8) == 0 || (unsigned __int8)sub_180047214(a1) )
              {
                if ( v39 )
                {
                  v143 = v45[10];
                  if ( (v143 & 4) != 0 )
                  {
                    v144 = 16LL * *((unsigned __int16 *)v45 + 4) - 32;
                    v192 = v144;
                    if ( (v143 & 2) != 0 && v144 > 4 )
                    {
                      v144 -= 4LL;
                      v192 = v144;
                    }
                    v170 = RtlCompareMemoryUlong(v45 + 32, v144, 0xFEEEFEEE);
                    if ( v170 != v144 )
                    {
                      if ( NtCurrentPeb()->Ldr )
                        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                      else
                        DbgPrint("HEAP: ");
                      DbgPrint(
                        "HEAP: Free Heap block %p modified at %p after it was freed\n",
                        &v42[16 * v35],
                        &v45[v170 + 32]);
                      sub_180106190();
                      v39 = v172;
                    }
                  }
                }
                v42[10] = v45[10];
                v130 = v35 + *((unsigned __int16 *)v45 + 4);
                v175 = v130;
                if ( v130 > 0xFF00 )
                {
                  sub_18004580C(a1, v42);
                  v34 = v164;
                  goto LABEL_82;
                }
                *((_WORD *)v42 + 4) = v130;
                *(_WORD *)&v42[16 * v130 + 12] = v130 ^ *(_WORD *)(a1 + 140);
                v131 = (unsigned __int16)v130;
                if ( !v39 )
                {
                  v42[10] = 0;
                  v42[15] = 0;
                  v132 = (_QWORD *)(a1 + 336);
                  if ( *(_QWORD *)(a1 + 312) )
                    v133 = (_QWORD *)sub_1800466AC(a1, (unsigned __int16)v130);
                  else
                    v133 = (_QWORD *)*v132;
                  while ( v132 != v133 )
                  {
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v138 = *((_DWORD *)v133 - 2);
                      v177 = v138;
                      if ( (v138 & *(_DWORD *)(a1 + 124)) != 0 )
                      {
                        v137 = v138 ^ *(_DWORD *)(a1 + 136);
                        v177 = v137;
                      }
                      else
                      {
                        LOWORD(v137) = v138;
                      }
                    }
                    else
                    {
                      LOWORD(v137) = *((_WORD *)v133 - 4);
                    }
                    if ( v131 <= (unsigned __int16)v137 )
                      break;
                    v133 = (_QWORD *)*v133;
                  }
                  v134 = v42 + 16;
                  v135 = (__int64 *)v133[1];
                  if ( (_QWORD *)*v135 == v133 )
                  {
                    *v134 = v133;
                    *((_QWORD *)v42 + 3) = v135;
                    *v135 = (__int64)v134;
                    v133[1] = v134;
                  }
                  else
                  {
                    sub_18010A694(13, 0, (_DWORD)v133, 0, *v135, 0LL);
                  }
                  *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v42 + 4);
                  v51 = *(__int64 ***)(a1 + 312);
                  if ( v51 )
                  {
                    v136 = *((unsigned __int16 *)v42 + 4);
                    while ( 1 )
                    {
                      v48 = *((unsigned int *)v51 + 2);
                      if ( v136 < v48 )
                      {
                        v193 = *((unsigned __int16 *)v42 + 4);
                        Protect = v136;
                        AllocationType = v136;
                        v55 = (_DWORD)v42 + 16;
                        goto LABEL_79;
                      }
                      if ( !*v51 )
                        break;
                      v51 = (__int64 **)*v51;
                    }
                    v193 = (unsigned int)(v48 - 1);
                    Protect = v136;
                    AllocationType = v48 - 1;
                    v55 = (_DWORD)v42 + 16;
LABEL_79:
                    LOBYTE(v48) = 1;
                    sub_180046B74(a1, (_DWORD)v51, v48, v55, AllocationType, Protect);
                  }
LABEL_80:
                  v34 = v164;
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
                  v145 = v42 + 32;
                  v194 = v42 + 32;
                  v146 = (16 * v131 - 32) >> 2;
                  v179 = v146;
                  if ( v146 )
                  {
                    if ( ((unsigned __int8)v145 & 4) != 0 )
                    {
                      *v145 = -17891602;
                      v179 = --v146;
                      if ( v146 )
                      {
                        v145 = v42 + 36;
                        v194 = v42 + 36;
                        goto LABEL_356;
                      }
                    }
                    else
                    {
LABEL_356:
                      memset64(v145, 0xFEEEFEEEFEEEFEEEuLL, v146 >> 1);
                      if ( (v146 & 1) != 0 )
                        v145[v146 - 1] = -17891602;
                    }
                  }
                  v42[10] |= 4u;
                }
                v147 = (_QWORD *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  v148 = (_QWORD *)sub_1800466AC(a1, v131);
                else
                  v148 = (_QWORD *)*v147;
                while ( v147 != v148 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v149 = *((_DWORD *)v148 - 2);
                    v206 = v149;
                    if ( (v149 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v150 = v149 ^ *(_DWORD *)(a1 + 136);
                      v206 = v150;
                    }
                    else
                    {
                      LOWORD(v150) = v149;
                    }
                  }
                  else
                  {
                    LOWORD(v150) = *((_WORD *)v148 - 4);
                  }
                  if ( v131 <= (unsigned __int16)v150 )
                    break;
                  v148 = (_QWORD *)*v148;
                }
                v114 = v42 + 16;
                v151 = (__int64 *)v148[1];
                if ( (_QWORD *)*v151 == v148 )
                {
                  *v114 = v148;
                  *((_QWORD *)v42 + 3) = v151;
                  *v151 = (__int64)v114;
                  v148[1] = v114;
                }
                else
                {
                  sub_18010A694(13, 0, (_DWORD)v148, 0, *v151, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v42 + 4);
                v51 = *(__int64 ***)(a1 + 312);
                if ( !v51 )
                  goto LABEL_80;
                v116 = *((unsigned __int16 *)v42 + 4);
                while ( 1 )
                {
                  v48 = *((unsigned int *)v51 + 2);
                  if ( v116 < v48 )
                  {
                    v117 = *((unsigned __int16 *)v42 + 4);
                    v195 = *((unsigned __int16 *)v42 + 4);
                    goto LABEL_255;
                  }
                  if ( !*v51 )
                    break;
                  v51 = (__int64 **)*v51;
                }
                v117 = v48 - 1;
                v195 = (unsigned int)(v48 - 1);
LABEL_255:
                Protect = v116;
                AllocationType = v117;
                v55 = (int)v114;
                goto LABEL_79;
              }
              sub_180045188(a1);
            }
            else
            {
              sub_18010A694(13, a1, (_DWORD)v121, v125, v124, 0LL);
            }
            if ( v167 )
            {
              NtCurrentTeb()->LastStatusValue = -1073741764;
              v152 = NtCurrentTeb();
              v152->LastErrorValue = RtlNtStatusToDosError(-1073741764);
              goto LABEL_398;
            }
            v167 = 1;
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
                v202 = v75;
                if ( (v75 & *(_DWORD *)(a1 + 124)) != 0 )
                {
                  v63 = v75 ^ *(_DWORD *)(a1 + 136);
                  v202 = v63;
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
                  v188 = *((unsigned __int16 *)v42 + 4);
                  goto LABEL_78;
                }
                if ( !*v51 )
                  break;
                v51 = (__int64 **)*v51;
              }
              v54 = v53 - 1;
              v188 = (unsigned int)(v53 - 1);
LABEL_78:
              Protect = v52;
              AllocationType = v54;
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
            v111 = (_QWORD *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              v112 = (_QWORD *)sub_1800466AC(a1, v46);
            else
              v112 = (_QWORD *)*v111;
            while ( v111 != v112 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v118 = *((_DWORD *)v112 - 2);
                v199 = v118;
                if ( (v118 & *(_DWORD *)(a1 + 124)) != 0 )
                {
                  v113 = v118 ^ *(_DWORD *)(a1 + 136);
                  v199 = v113;
                }
                else
                {
                  LOWORD(v113) = v118;
                }
              }
              else
              {
                LOWORD(v113) = *((_WORD *)v112 - 4);
              }
              if ( v46 <= (unsigned __int16)v113 )
                break;
              v112 = (_QWORD *)*v112;
            }
            v114 = v42 + 16;
            v115 = (__int64 *)v112[1];
            if ( (_QWORD *)*v115 == v112 )
            {
              *v114 = v112;
              *((_QWORD *)v42 + 3) = v115;
              *v115 = (__int64)v114;
              v112[1] = v114;
            }
            else
            {
              sub_18010A694(13, 0, (_DWORD)v112, 0, *v115, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v42 + 4);
            v51 = *(__int64 ***)(a1 + 312);
            if ( !v51 )
              goto LABEL_80;
            v116 = *((unsigned __int16 *)v42 + 4);
            while ( 1 )
            {
              v48 = *((unsigned int *)v51 + 2);
              if ( v116 < v48 )
              {
                v117 = *((unsigned __int16 *)v42 + 4);
                v174 = *((unsigned __int16 *)v42 + 4);
                goto LABEL_255;
              }
              if ( !*v51 )
                break;
              v51 = (__int64 **)*v51;
            }
            v117 = v48 - 1;
            v174 = (unsigned int)(v48 - 1);
            goto LABEL_255;
          }
          v141 = v42 + 32;
          v189 = v42 + 32;
          v142 = (16 * (unsigned __int64)(unsigned __int16)v35 - 32) >> 2;
          v178 = v142;
          if ( v142 )
          {
            if ( ((unsigned __int8)v141 & 4) == 0 )
              goto LABEL_336;
            *v141 = -17891602;
            v178 = --v142;
            if ( v142 )
            {
              v141 = v42 + 36;
              v189 = v42 + 36;
LABEL_336:
              memset64(v141, 0xFEEEFEEEFEEEFEEEuLL, v142 >> 1);
              if ( (v142 & 1) != 0 )
                v141[v142 - 1] = -17891602;
            }
          }
          v42[10] |= 4u;
          goto LABEL_243;
        }
        ++*((_WORD *)v21 + 4);
        v97 = v209 - a3 + 16;
        v169 = v97;
        if ( v97 >= 0x3F )
        {
          *(_QWORD *)&v21[16 * v12 + 16] = v97;
          *v38 = 63;
        }
        else
        {
          *v38 = v97;
        }
      }
LABEL_83:
      v168 = v173 + 16;
      v56 = (unsigned __int16 *)(v173 + 8);
      a2 = *((unsigned __int16 *)v173 + 4);
      v10 = (unsigned __int16)a2;
      LOWORD(v10) = BYTE1(a2);
      v57 = 16 * a2;
      v196 = 16 * a2;
      if ( (v173[15] & 0x3F) == 0x3F )
      {
        v57 -= 8LL;
        v196 = v57;
      }
      if ( v34 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v173[11] = BYTE1(a2) ^ a2 ^ v21[10];
          *(_DWORD *)v56 ^= *(_DWORD *)(a1 + 136);
        }
        if ( v163 )
        {
          if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
          {
            ++*(_DWORD *)(a1 + 640);
            v76 = *(_DWORD *)(a1 + 648);
            if ( *(_DWORD *)(a1 + 640) > v76 )
            {
              *(_DWORD *)(a1 + 640) = 0;
              v96 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
              if ( v96 > *(_QWORD *)(a1 + 672) )
                *(_QWORD *)(a1 + 672) = v96;
              *(_QWORD *)(a1 + 680) = v96;
            }
            if ( ++*(_DWORD *)(a1 + 652) >= 0x1000u )
            {
              if ( *(_BYTE *)(a1 + 418) == 2 && *(_DWORD *)(a1 + 656) > 0x10u )
                v119 = 256;
              else
                v119 = 16;
              if ( *(_DWORD *)(a1 + 644) > v119 && v76 < 0x10000 )
                *(_DWORD *)(a1 + 648) = 2 * v76;
              *(_DWORD *)(a1 + 644) = 0;
              *(_DWORD *)(a1 + 652) = 0;
            }
          }
          RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
          v163 = 0;
        }
        if ( (v207 & 8) != 0 )
          memset(v168, 0, v57 - 8);
        goto LABEL_398;
      }
      if ( (v207 & 8) != 0 )
      {
        memset(v168, 0, v57 - 8);
LABEL_200:
        if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
        {
          v153 = (char *)v168;
          *(_QWORD *)((char *)v168 + v36) = 0xABABABABABABABABuLL;
          *(_QWORD *)&v153[v36 + 8] = 0xABABABABABABABABuLL;
          v173[10] |= 4u;
        }
        v100 = v173;
        v173[11] = 0;
        if ( (v100[10] & 2) != 0 )
        {
          v101 = (_QWORD *)sub_18006E8DC(v100);
          v198 = v101;
          *v101 = 0LL;
          v101[1] = 0LL;
          if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
            *(_WORD *)v101 = sub_180033C9C(1u);
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            *((_WORD *)v198 + 1) = sub_1800F12BC(a1, (v207 >> 18) & 0xFFF, 0, *v56, 0);
        }
        else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v100[11] = sub_1800F12BC(a1, (unsigned __int8)(v207 >> 18), 0, *v56, 0);
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          v100[11] = *(_BYTE *)v56 ^ *((_BYTE *)v56 + 1) ^ *((_BYTE *)v56 + 2);
          *(_DWORD *)v56 ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_398;
      }
      if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
        goto LABEL_200;
      v10 = (__int64)v168;
      v197 = (__int64)v168;
      a2 = (v36 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v180 = a2;
      if ( !a2 )
        goto LABEL_200;
      if ( ((unsigned __int8)v168 & 4) != 0 )
      {
        *(_DWORD *)v168 = -1163005939;
        v180 = --a2;
        if ( !a2 )
          goto LABEL_200;
        v10 += 4LL;
        v197 = v10;
      }
      memset64((void *)v10, 0xBAADF00DBAADF00DuLL, a2 >> 1);
      if ( (a2 & 1) != 0 )
        *(_DWORD *)(v10 + 4 * a2 - 4) = -1163005939;
      goto LABEL_200;
    }
  }
  v175 = a1 + 336;
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
      v203 = v19;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v19 ^= *(_DWORD *)(a1 + 136);
        v203 = v19;
        if ( HIBYTE(v19) != ((unsigned __int8)v19 ^ (unsigned __int8)(BYTE1(v19) ^ BYTE2(v19))) )
          sub_18010A694(3, a1, v10, 0, 0LL, 0LL);
      }
      if ( (int)(v170 - (unsigned __int16)v19) > 0 )
      {
        v16 = v17;
      }
      else
      {
        v10 = *v17 - 16;
        v20 = *(_DWORD *)(v10 + 8);
        v204 = v20;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v20 ^= *(_DWORD *)(a1 + 136);
          v204 = v20;
          if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
            sub_18010A694(3, a1, v10, 0, 0LL, 0LL);
        }
        if ( (int)(v170 - (unsigned __int16)v20) > 0 )
        {
          if ( !*i && (_DWORD)v12 == *((_DWORD *)i + 2) - 1 )
          {
            if ( *((_DWORD *)i + 3) )
              v15 = (unsigned int)(2 * v15);
            for ( k = *(__int64 **)(i[6] + 8 * v15); v17 != k; k = (__int64 *)*k )
            {
              LODWORD(v10) = (_DWORD)k - 16;
              v95 = *((_DWORD *)k - 2);
              v205 = v95;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v95 ^= *(_DWORD *)(a1 + 136);
                v205 = v95;
                if ( HIBYTE(v95) != ((unsigned __int8)v95 ^ (unsigned __int8)(BYTE1(v95) ^ BYTE2(v95))) )
                  sub_18010A694(3, a1, v10, 0, 0LL, 0LL);
              }
              if ( (int)(v170 - (unsigned __int16)v95) <= 0 )
              {
                v16 = k;
                break;
              }
            }
          }
          else
          {
            v58 = (unsigned int)v15 >> 5;
            v171 = (unsigned int)v15 >> 5;
            v59 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
            v10 = i[5] + 4 * v58;
            v185 = v10;
            v60 = *(_DWORD *)v10 & (-1 << (v15 & 0x1F));
            while ( !v60 )
            {
              if ( (unsigned int)v58 > v59 )
                goto LABEL_182;
              v10 += 4LL;
              v185 = v10;
              v60 = *(_DWORD *)v10;
              LODWORD(v58) = v58 + 1;
              v171 = v58;
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
            v171 = v62;
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
  if ( (__int64 *)v175 == v16 )
  {
    v12 = v170;
  }
  else
  {
    v21 = (char *)(v16 - 2);
    v176 = (char *)(v16 - 2);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v22 = *((_DWORD *)v21 + 2) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)v21 + 2) = v22;
      if ( HIBYTE(v22) != ((unsigned __int8)v22 ^ (unsigned __int8)(BYTE1(v22) ^ BYTE2(v22))) )
        sub_180101024(a1, v16 - 2);
    }
    v23 = *((unsigned __int16 *)v21 + 4);
    v12 = v170;
    if ( v23 >= v170 )
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
        v190 = v31;
        LOBYTE(v10) = 1;
        sub_180047014(a1, (_DWORD)v28, v10, (_DWORD)v16, v31, v29);
      }
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
LABEL_47:
      v32 = v21 + 10;
      if ( (v21[10] & 8) != 0 && !(unsigned __int8)sub_180047214(a1) )
      {
        sub_180045188(a1);
        goto LABEL_398;
      }
      LOBYTE(v6) = v169;
      goto LABEL_49;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v21[11] = v23 ^ BYTE1(v23) ^ v21[10];
      *((_DWORD *)v21 + 2) ^= *(_DWORD *)(a1 + 136);
    }
  }
  v64 = (_QWORD *)sub_18003F020(a1);
  v21 = (char *)v64;
  v176 = (char *)v64;
  if ( !v64 )
  {
LABEL_190:
    v168 = 0LL;
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
          v186 = *((unsigned __int16 *)v21 + 4);
          goto LABEL_121;
        }
        if ( !*v70 )
          break;
        v70 = (__int64 **)*v70;
      }
      v73 = v72 - 1;
      v186 = (unsigned int)(v72 - 1);
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
  if ( v163 )
  {
    if ( !v165 && v168 )
      sub_180084954(a1, a2, v10);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    v156 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v156 = 2147353480LL;
  v157 = v168;
  if ( *(_BYTE *)v156 && v168 )
  {
    if ( v165 )
      sub_1801015F8(a1, (unsigned __int64)v165 & 0xFFFFFFFFFFFF0000uLL, *((_QWORD *)v165 + 5));
  }
  return v157;
}
