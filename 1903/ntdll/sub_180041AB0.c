/*
 * XREFs of sub_180041AB0 @ 0x180041AB0
 * Callers:
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 * Callees:
 *     sub_180006FCC @ 0x180006FCC (sub_180006FCC.c)
 *     sub_180007850 @ 0x180007850 (sub_180007850.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_180033C9C @ 0x180033C9C (sub_180033C9C.c)
 *     sub_1800365A0 @ 0x1800365A0 (sub_1800365A0.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180045188 @ 0x180045188 (sub_180045188.c)
 *     sub_18004580C @ 0x18004580C (sub_18004580C.c)
 *     sub_1800466AC @ 0x1800466AC (sub_1800466AC.c)
 *     sub_180046B74 @ 0x180046B74 (sub_180046B74.c)
 *     RtlTryEnterCriticalSection @ 0x180046C20 (RtlTryEnterCriticalSection.c)
 *     sub_180046FB0 @ 0x180046FB0 (sub_180046FB0.c)
 *     sub_180047014 @ 0x180047014 (sub_180047014.c)
 *     sub_180047214 @ 0x180047214 (sub_180047214.c)
 *     sub_180048120 @ 0x180048120 (sub_180048120.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_18007A0D4 @ 0x18007A0D4 (sub_18007A0D4.c)
 *     sub_180084954 @ 0x180084954 (sub_180084954.c)
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     RtlCompareMemoryUlong @ 0x1800A0F00 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E6B30 (RtlpNotOwnerCriticalSection.c)
 *     sub_1800F12BC @ 0x1800F12BC (sub_1800F12BC.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 *     sub_180101554 @ 0x180101554 (sub_180101554.c)
 *     sub_1801031E8 @ 0x1801031E8 (sub_1801031E8.c)
 *     sub_180103470 @ 0x180103470 (sub_180103470.c)
 *     sub_180104FB8 @ 0x180104FB8 (sub_180104FB8.c)
 *     sub_180106190 @ 0x180106190 (sub_180106190.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_180041AB0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v5; // r15
  int v7; // edi
  __int64 v8; // r8
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v11; // r14
  __int64 v12; // rsi
  int v13; // edx
  __int64 **v14; // rcx
  int v15; // edx
  _BYTE *v16; // r8
  char v17; // al
  unsigned __int16 *v18; // rdi
  unsigned __int16 v19; // ax
  _WORD *v20; // rdx
  bool v21; // zf
  int v22; // r8d
  int v23; // edx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // edx
  __int64 v28; // r10
  __int64 v29; // r14
  __int64 *v30; // r15
  __int64 v31; // rax
  __int64 **v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r14
  int v37; // edx
  char v38; // al
  SIZE_T v39; // rsi
  SIZE_T v40; // r14
  __int64 v41; // r8
  __int64 v42; // r15
  __int64 *v43; // r12
  __int64 v44; // rax
  __int64 **v45; // rdx
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  char v49; // al
  SIZE_T v50; // rdi
  SIZE_T v51; // r15
  unsigned int v52; // edi
  unsigned __int64 v53; // rdx
  _QWORD *v54; // rax
  __int64 *v55; // r12
  unsigned __int64 v56; // rcx
  unsigned int v57; // r15d
  unsigned int v58; // r15d
  _QWORD *v59; // r14
  _QWORD *v60; // r13
  _QWORD *v61; // rax
  int v62; // edi
  __int64 v63; // r8
  int v64; // edi
  __int64 v65; // rcx
  _QWORD *v66; // rdi
  __int64 v67; // rdi
  unsigned int *v68; // r8
  unsigned int v69; // edx
  int v70; // eax
  __int64 v71; // rdi
  int v72; // ecx
  _QWORD *v73; // rcx
  __int64 *v74; // rax
  __int64 *v75; // rdi
  unsigned __int64 v76; // r14
  unsigned __int64 v77; // rcx
  unsigned int v78; // ecx
  unsigned int v79; // r15d
  __int64 v80; // r12
  __int64 v81; // r13
  int v82; // esi
  int v83; // ecx
  int v84; // ecx
  unsigned __int64 v85; // r14
  _DWORD *v86; // r8
  unsigned __int64 v87; // rdx
  _QWORD *v88; // rdi
  _QWORD *v89; // r8
  int v90; // ecx
  int v91; // eax
  _QWORD *v92; // r14
  __int64 *v93; // rax
  __int64 **v94; // rdx
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rdi
  int v97; // eax
  int v98; // edx
  unsigned __int16 v99; // cx
  __int64 v100; // rdi
  unsigned __int64 v101; // rsi
  __int64 v102; // rax
  __int64 *v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // r9
  __int64 v106; // r8
  __int64 v107; // rdi
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rdi
  __int64 v111; // rcx
  unsigned int v112; // edx
  unsigned __int64 v113; // rcx
  __int64 v114; // rsi
  signed __int32 v115; // ebx
  HANDLE v116; // r9
  int v117; // eax
  signed __int32 v118[8]; // [rsp+0h] [rbp-1A8h] BYREF
  char v119[8]; // [rsp+20h] [rbp-188h]
  __int64 v120; // [rsp+28h] [rbp-180h]
  char v121; // [rsp+40h] [rbp-168h]
  char v122; // [rsp+41h] [rbp-167h]
  __int16 v123; // [rsp+44h] [rbp-164h]
  char v124; // [rsp+48h] [rbp-160h]
  unsigned __int64 v125; // [rsp+50h] [rbp-158h] BYREF
  int v126[2]; // [rsp+58h] [rbp-150h]
  unsigned __int64 v127; // [rsp+60h] [rbp-148h]
  unsigned __int8 v128; // [rsp+68h] [rbp-140h]
  __int16 v129; // [rsp+6Ah] [rbp-13Eh]
  __int16 v130; // [rsp+6Ch] [rbp-13Ch]
  unsigned int v131; // [rsp+70h] [rbp-138h]
  unsigned int v132; // [rsp+74h] [rbp-134h]
  unsigned int v133; // [rsp+78h] [rbp-130h] BYREF
  __int64 v134; // [rsp+80h] [rbp-128h]
  unsigned __int64 v135; // [rsp+88h] [rbp-120h] BYREF
  unsigned __int64 v136; // [rsp+90h] [rbp-118h]
  int v137[2]; // [rsp+98h] [rbp-110h]
  ULONG v138; // [rsp+A0h] [rbp-108h]
  ULONG NtGlobalFlag; // [rsp+A4h] [rbp-104h]
  __int64 v140; // [rsp+A8h] [rbp-100h]
  SIZE_T v141; // [rsp+B0h] [rbp-F8h]
  __int64 v142; // [rsp+B8h] [rbp-F0h]
  __int64 v143; // [rsp+D0h] [rbp-D8h]
  SIZE_T v144; // [rsp+D8h] [rbp-D0h]
  unsigned int *v145; // [rsp+E0h] [rbp-C8h]
  __int64 v146; // [rsp+E8h] [rbp-C0h]
  __int64 v147; // [rsp+F0h] [rbp-B8h]
  __int64 v148; // [rsp+F8h] [rbp-B0h]
  __int64 v149; // [rsp+100h] [rbp-A8h]
  struct _TEB *v150; // [rsp+108h] [rbp-A0h]
  struct _TEB *v151; // [rsp+110h] [rbp-98h]
  unsigned __int64 v152; // [rsp+118h] [rbp-90h]
  int v153; // [rsp+128h] [rbp-80h]
  int v154; // [rsp+138h] [rbp-70h]
  int v155; // [rsp+148h] [rbp-60h]
  int v156; // [rsp+158h] [rbp-50h]
  int v157; // [rsp+168h] [rbp-40h]
  int v158; // [rsp+178h] [rbp-30h]
  __int64 v159; // [rsp+1C0h] [rbp+18h]

  v159 = a3;
  v5 = 1;
  v122 = 1;
  v121 = 0;
  v132 = 1;
  v135 = 0LL;
  v123 = 0;
  if ( a1 == a3 )
  {
    sub_18010A694(9, a1, a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v7 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v7 & 0x7D010F60) != 0 )
  {
    v5 = 0;
    v122 = 0;
    v8 = 4LL;
    if ( (v7 & 0x61000000) != 0 && (v7 & 0x10000000) == 0 )
      return sub_180104FB8((void *)a1);
  }
  else
  {
    v8 = 3LL;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
  {
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    v11 = 2147353472LL;
  }
  else
  {
    v11 = 2147353472LL;
    UserModeGlobalLogger = 2147353472LL;
  }
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v12 = v159;
    if ( ((*(_BYTE *)(v159 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
      sub_180103470(a1, a4, v8);
  }
  else
  {
    v12 = v159;
  }
  if ( (v7 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v15 = *(_DWORD *)(v12 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v12 + 8) = v15;
      if ( HIBYTE(v15) != ((unsigned __int8)v15 ^ (unsigned __int8)(BYTE1(v15) ^ BYTE2(v15))) )
        sub_180101024(a1, v12);
    }
  }
  else
  {
    if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_180165408 )
      {
        v150 = NtCurrentTeb();
        v150->LastStatusValue = -1073741420;
        v151 = NtCurrentTeb();
        v151->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        v132 = 0;
LABEL_275:
        v52 = 256;
        goto LABEL_276;
      }
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      sub_18007A0D4(a1, 1LL);
    }
    v121 = 1;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v13 = *(_DWORD *)(v12 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v12 + 8) = v13;
      if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
        sub_180101024(a1, v12);
    }
    v14 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(v12 + 8) < (unsigned __int64)*((unsigned int *)v14 + 2) )
        break;
      v14 = (__int64 **)*v14;
    }
    while ( v14 );
  }
  v16 = (_BYTE *)(v12 + 10);
  v17 = *(_BYTE *)(v12 + 10);
  if ( (v17 & 8) != 0 )
    *v16 = v17 & 0xF7;
  if ( *(_BYTE *)(v12 + 15) == 4 )
  {
    v101 = v12 - 48;
    *(_QWORD *)v126 = v101;
    *(_QWORD *)v137 = *(_QWORD *)(v101 + 32);
    v135 = v101 & 0xFFFFFFFFFFFF0000uLL;
    *(_QWORD *)(a1 + 592) -= *(_QWORD *)v137;
    v102 = *(_QWORD *)v101;
    v103 = *(__int64 **)(v101 + 8);
    v104 = *v103;
    v105 = *(_QWORD *)(*(_QWORD *)v101 + 8LL);
    if ( *v103 == v105 && v104 == v101 )
    {
      *v103 = v102;
      *(_QWORD *)(v102 + 8) = v103;
    }
    else
    {
      sub_18010A694(13, 0, v101, v105, v104, 0LL);
    }
    if ( !v5 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v106 = *(_QWORD *)(v101 + 32) >> 4;
        v101 = *(_QWORD *)v126;
        sub_1800F12BC(a1, *(unsigned __int16 *)(*(_QWORD *)v126 + 18LL), v106, 0, 3);
      }
      else
      {
        v101 = *(_QWORD *)v126;
      }
    }
    if ( v121 )
    {
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v121 = 0;
    }
    v107 = *(_QWORD *)(v101 + 40);
    v149 = v107;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v108 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
      LODWORD(v101) = v126[0];
      v107 = v149;
    }
    else
    {
      v108 = 2147353480LL;
    }
    if ( *(_BYTE *)v108 )
      sub_180101554(a1, v135, v107);
    v125 = 0LL;
    sub_180048120(v108, &v135, &v125, 0x8000LL);
    if ( RtlGetCurrentServiceSessionId() )
    {
      v109 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      LODWORD(v101) = v126[0];
    }
    else
    {
      v109 = 2147353472LL;
    }
    if ( *(_BYTE *)v109 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v11 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        LODWORD(v101) = v126[0];
        sub_1801031E8(a1, v126[0], v137[0], 16 * *(_QWORD *)(a1 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v11);
      }
      else
      {
        LODWORD(v101) = v126[0];
      }
    }
    v110 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v111 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
      LODWORD(v101) = v126[0];
    }
    else
    {
      v111 = 2147353482LL;
    }
    if ( *(_BYTE *)v111 )
    {
      if ( RtlGetCurrentServiceSessionId() )
      {
        v110 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        LODWORD(v101) = v126[0];
      }
      sub_1801031E8(a1, v101, v137[0], 16 * *(_QWORD *)(a1 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v110);
    }
    goto LABEL_275;
  }
  v18 = (unsigned __int16 *)(v12 + 8);
  v19 = *(_WORD *)(v12 + 8);
  if ( v19 < *(_WORD *)(a1 + 432) )
  {
    if ( ((unsigned __int8)(1 << (v19 & 7)) & *(_BYTE *)(((unsigned __int64)v19 >> 3) + a1 + 434)) == 0 )
    {
      v20 = (_WORD *)(*(_QWORD *)(a1 + 424) + 2LL * *v18);
      if ( *v20 > 1u )
        --*v20;
    }
    v12 = v159;
  }
  if ( !v5 )
  {
    v138 = NtCurrentPeb()->NtGlobalFlag;
    v12 = v159;
    if ( (v138 & 0x800) != 0 )
    {
      *(_DWORD *)v119 = 2;
      v21 = (*v16 & 2) == 0;
      v22 = *v18;
      if ( v21 )
      {
        v128 = *(_BYTE *)(v159 + 11);
        v23 = v128;
      }
      else
      {
        v23 = *(unsigned __int16 *)(v159 + 16LL * *v18 - 14);
      }
      v123 = sub_1800F12BC(a1, v23, v22, 0, *(_DWORD *)v119);
    }
  }
  v24 = *v18;
  v125 = v24;
  if ( *(char *)(a1 + 112) >= 0 )
  {
    v124 = 0;
    v142 = v12;
    v25 = 16 * (*(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140));
    v26 = v12 - v25;
    if ( v12 - v25 != v12
      && ((*(_BYTE *)(v26 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v27 = *(_DWORD *)(v26 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v26 + 8) = v27;
        if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
          sub_180101024(a1, v26);
      }
      v28 = v26 + 16;
      v29 = *(_QWORD *)(v26 + 16);
      v30 = *(__int64 **)(v26 + 24);
      v31 = *v30;
      a4 = *(_QWORD *)(v29 + 8);
      if ( *v30 == a4 && v31 == v28 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v26 + 8);
        v32 = *(__int64 ***)(a1 + 312);
        if ( v32 )
        {
          v33 = *(unsigned __int16 *)(v26 + 8);
          while ( 1 )
          {
            v34 = *((unsigned int *)v32 + 2);
            if ( v33 < v34 )
            {
              v35 = *(unsigned __int16 *)(v26 + 8);
              goto LABEL_61;
            }
            if ( !*v32 )
              break;
            v32 = (__int64 **)*v32;
          }
          v35 = (unsigned int)(v34 - 1);
LABEL_61:
          v140 = v35;
          LODWORD(v120) = v33;
          LOBYTE(v33) = 1;
          sub_180047014(a1, (_DWORD)v32, v33, v26 + 16, v35, v120);
        }
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        if ( (*(_BYTE *)(v26 + 10) & 8) == 0 || (unsigned __int8)sub_180047214(a1) )
        {
          v38 = *(_BYTE *)(v26 + 10);
          if ( (v38 & 4) != 0 )
          {
            v39 = 16LL * *(unsigned __int16 *)(v26 + 8) - 32;
            v141 = v39;
            if ( (v38 & 2) != 0 && v39 > 4 )
            {
              v39 -= 4LL;
              v141 = v39;
            }
            v40 = RtlCompareMemoryUlong((PVOID)(v26 + 32), v39, 0xFEEEFEEE);
            if ( v40 != v39 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v26,
                (const void *)(v40 + v26 + 32));
              sub_180106190();
            }
          }
          *(_BYTE *)(v26 + 10) = 0;
          *(_BYTE *)(v26 + 15) = 0;
          v12 = v26;
          v142 = v26;
          v125 += *(unsigned __int16 *)(v26 + 8);
          *(_WORD *)(v26 + 8) = v125;
          *(_WORD *)(v26 + 16 * v125 + 12) = v125 ^ *(_WORD *)(a1 + 140);
        }
        else
        {
          sub_180045188(a1);
        }
        v24 = v125;
      }
      else
      {
        sub_18010A694(13, a1, v28, a4, v31, 0LL);
        v24 = v125;
      }
    }
    v36 = v12 + 16 * v24;
    if ( !*(_DWORD *)(a1 + 124) )
      goto LABEL_70;
    v153 = *(_DWORD *)(v36 + 8) ^ *(_DWORD *)(a1 + 136);
    if ( HIBYTE(v153) != ((unsigned __int8)v153 ^ (unsigned __int8)(BYTE1(v153) ^ BYTE2(v153))) )
      sub_18010A694(3, a1, v12 + 16 * v24, 0, 0LL, 0LL);
    while ( 1 )
    {
      v24 = v125;
LABEL_70:
      if ( ((*(_BYTE *)(v36 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
        break;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v37 = *(_DWORD *)(v36 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v36 + 8) = v37;
        if ( HIBYTE(v37) != ((unsigned __int8)v37 ^ (unsigned __int8)(BYTE1(v37) ^ BYTE2(v37))) )
          sub_180101024(a1, v36);
      }
      v41 = v36 + 16;
      v42 = *(_QWORD *)(v36 + 16);
      v43 = *(__int64 **)(v36 + 24);
      v44 = *v43;
      a4 = *(_QWORD *)(v42 + 8);
      if ( *v43 == a4 && v44 == v41 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v36 + 8);
        v45 = *(__int64 ***)(a1 + 312);
        if ( v45 )
        {
          v46 = *(unsigned __int16 *)(v36 + 8);
          while ( 1 )
          {
            v47 = *((unsigned int *)v45 + 2);
            if ( v46 < v47 )
            {
              v48 = *(unsigned __int16 *)(v36 + 8);
              goto LABEL_95;
            }
            if ( !*v45 )
              break;
            v45 = (__int64 **)*v45;
          }
          v48 = (unsigned int)(v47 - 1);
LABEL_95:
          v143 = v48;
          LOBYTE(v41) = 1;
          sub_180047014(a1, (_DWORD)v45, v41, v36 + 16, v48, v46);
        }
        *v43 = v42;
        *(_QWORD *)(v42 + 8) = v43;
        if ( (*(_BYTE *)(v36 + 10) & 8) == 0 || (unsigned __int8)sub_180047214(a1) )
        {
          v49 = *(_BYTE *)(v36 + 10);
          if ( (v49 & 4) != 0 )
          {
            v50 = 16LL * *(unsigned __int16 *)(v36 + 8) - 32;
            v144 = v50;
            if ( (v49 & 2) != 0 && v50 > 4 )
            {
              v50 -= 4LL;
              v144 = v50;
            }
            v51 = RtlCompareMemoryUlong((PVOID)(v36 + 32), v50, 0xFEEEFEEE);
            if ( v51 != v50 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v36,
                (const void *)(v51 + v36 + 32));
              sub_180106190();
            }
          }
          *(_BYTE *)(v12 + 10) = 0;
          *(_BYTE *)(v12 + 15) = 0;
          v125 += *(unsigned __int16 *)(v36 + 8);
          *(_WORD *)(v12 + 8) = v125;
          *(_WORD *)(v12 + 16 * v125 + 12) = v125 ^ *(_WORD *)(a1 + 140);
          v24 = v125;
          break;
        }
        sub_180045188(a1);
      }
      else
      {
        sub_18010A694(13, a1, v41, a4, v44, 0LL);
      }
    }
    v159 = v12;
    v5 = v122;
  }
  if ( v24 < *(_QWORD *)(a1 + 176) || v24 + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( v24 + *(_QWORD *)(a1 + 192) > *(_QWORD *)(a1 + 184) )
    {
      v52 = 256;
      if ( v24 >= 0x100 && *(_WORD *)(a1 + 140) == *(_WORD *)(v12 + 12) )
      {
        sub_180045188(a1);
        v123 = 0;
        goto LABEL_276;
      }
    }
    if ( v24 > 0xFF00 )
    {
      sub_18004580C(a1, v12);
      goto LABEL_235;
    }
    if ( v5 )
    {
      v53 = (unsigned __int16)v24;
      v127 = (unsigned __int16)v24;
      *(_BYTE *)(v12 + 10) = 0;
      *(_BYTE *)(v12 + 15) = 0;
      v54 = (_QWORD *)(a1 + 336);
      v55 = *(__int64 **)(a1 + 312);
      if ( v55 )
      {
        while ( 1 )
        {
          v56 = *((unsigned int *)v55 + 2);
          if ( (unsigned __int16)v24 < v56 )
          {
            v57 = (unsigned __int16)v24;
            v134 = (unsigned __int16)v24;
            goto LABEL_127;
          }
          if ( !*v55 )
            break;
          v55 = (__int64 *)*v55;
        }
        v57 = v56 - 1;
        v134 = (unsigned int)(v56 - 1);
        while ( 1 )
        {
LABEL_127:
          v58 = v57 - *((_DWORD *)v55 + 6);
          v59 = 0LL;
          v60 = (_QWORD *)v55[4];
          v61 = (_QWORD *)v60[1];
          if ( v60 == v61 )
          {
            v59 = (_QWORD *)v55[4];
          }
          else
          {
            v62 = *((_DWORD *)v61 - 2);
            v154 = v62;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v62 ^= *(_DWORD *)(a1 + 136);
              v154 = v62;
              if ( HIBYTE(v62) != ((unsigned __int8)v62 ^ (unsigned __int8)(BYTE1(v62) ^ BYTE2(v62))) )
              {
                sub_18010A694(3, a1, (_DWORD)v61 - 16, 0, 0LL, 0LL);
                v53 = v127;
              }
            }
            if ( (int)(v53 - (unsigned __int16)v62) <= 0 )
            {
              v63 = *v60 - 16LL;
              v64 = *(_DWORD *)(v63 + 8);
              v155 = v64;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v64 ^= *(_DWORD *)(a1 + 136);
                v155 = v64;
                if ( HIBYTE(v64) != ((unsigned __int8)v64 ^ (unsigned __int8)(BYTE1(v64) ^ BYTE2(v64))) )
                {
                  sub_18010A694(3, a1, v63, 0, 0LL, 0LL);
                  v53 = v127;
                }
              }
              if ( (int)(v53 - (unsigned __int16)v64) > 0 )
              {
                if ( *v55 || (_DWORD)v134 != *((_DWORD *)v55 + 2) - 1 )
                {
                  v67 = v58 >> 5;
                  v131 = v58 >> 5;
                  a4 = ((unsigned int)(*((_DWORD *)v55 + 2) - *((_DWORD *)v55 + 6)) >> 5) - 1;
                  v68 = (unsigned int *)(v55[5] + 4 * v67);
                  v145 = v68;
                  v69 = *v68 & (-1 << (v58 & 0x1F));
                  while ( !v69 )
                  {
                    if ( (unsigned int)v67 > (unsigned int)a4 )
                    {
                      v12 = v159;
                      goto LABEL_168;
                    }
                    v145 = ++v68;
                    v69 = *v68;
                    LODWORD(v67) = v67 + 1;
                    v131 = v67;
                  }
                  if ( (_WORD)v69 )
                  {
                    if ( (_BYTE)v69 )
                      v70 = (unsigned __int8)a0123456789abcd[(unsigned __int8)v69 + 16];
                    else
                      v70 = (unsigned __int8)a0123456789abcd[BYTE1(v69) + 16] + 8;
                  }
                  else if ( (v69 & 0xFF0000) != 0 )
                  {
                    v70 = (unsigned __int8)a0123456789abcd[BYTE2(v69) + 16] + 16;
                  }
                  else
                  {
                    v70 = (unsigned __int8)a0123456789abcd[((unsigned __int64)v69 >> 24) + 16] + 24;
                  }
                  v71 = (unsigned int)(v70 + 32 * v67);
                  v131 = v71;
                  if ( *((_DWORD *)v55 + 3) )
                    v71 = (unsigned int)(2 * v71);
                  v59 = *(_QWORD **)(v55[6] + 8 * v71);
LABEL_163:
                  v53 = v127;
                }
                else
                {
                  v65 = 2 * v58;
                  if ( !*((_DWORD *)v55 + 3) )
                    v65 = v58;
                  v66 = *(_QWORD **)(v55[6] + 8 * v65);
                  while ( v60 != v66 )
                  {
                    LOBYTE(a4) = 1;
                    if ( (int)sub_180046FB0(a1, v66, v53, a4) <= 0 )
                    {
                      v59 = v66;
                      goto LABEL_163;
                    }
                    v66 = (_QWORD *)*v66;
                    v53 = v127;
                  }
                }
              }
              else
              {
                v59 = (_QWORD *)*v60;
              }
            }
            else
            {
              v59 = v60;
            }
            v12 = v159;
          }
          if ( v59 )
            break;
LABEL_168:
          v55 = (__int64 *)*v55;
          v57 = *((_DWORD *)v55 + 6);
          v134 = v57;
          v53 = v127;
        }
        v54 = (_QWORD *)(a1 + 336);
      }
      else
      {
        v59 = (_QWORD *)*v54;
      }
      while ( v54 != v59 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v72 = *((_DWORD *)v59 - 2);
          v156 = v72;
          if ( (v72 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v156 = v72 ^ *(_DWORD *)(a1 + 136);
            LOWORD(v72) = v156;
          }
          v12 = v159;
        }
        else
        {
          LOWORD(v72) = *((_WORD *)v59 - 4);
        }
        v129 = v72;
        if ( v53 <= (unsigned __int16)v72 )
          break;
        v59 = (_QWORD *)*v59;
        v54 = (_QWORD *)(a1 + 336);
      }
      v73 = (_QWORD *)(v12 + 16);
      v127 = v12 + 16;
      v74 = (__int64 *)v59[1];
      if ( (_QWORD *)*v74 == v59 )
      {
        *v73 = v59;
        *(_QWORD *)(v12 + 24) = v74;
        *v74 = (__int64)v73;
        v59[1] = v73;
      }
      else
      {
        sub_18010A694(13, 0, (_DWORD)v59, 0, *v74, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v12 + 8);
      v75 = *(__int64 **)(a1 + 312);
      if ( v75 )
      {
        v76 = *(unsigned __int16 *)(v12 + 8);
        while ( 1 )
        {
          v77 = *((unsigned int *)v75 + 2);
          if ( v76 < v77 )
          {
            v146 = *(unsigned __int16 *)(v12 + 8);
            v78 = v76;
            goto LABEL_188;
          }
          if ( !*v75 )
            break;
          v75 = (__int64 *)*v75;
        }
        v78 = v77 - 1;
        v146 = v78;
LABEL_188:
        v152 = v76;
        v79 = v78 - *((_DWORD *)v75 + 6);
        ++*((_DWORD *)v75 + 4);
        v80 = 2 * v79;
        if ( !*((_DWORD *)v75 + 3) )
          v80 = v79;
        v81 = *(_QWORD *)(v75[6] + 8 * v80);
        if ( v78 == *((_DWORD *)v75 + 2) - 1 )
          ++*((_DWORD *)v75 + 5);
        if ( !v81 )
          goto LABEL_197;
        v82 = *(_DWORD *)(v81 - 16 + 8);
        v157 = v82;
        v83 = v76;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v82 ^= *(_DWORD *)(a1 + 136);
          v157 = v82;
          if ( HIBYTE(v82) != ((unsigned __int8)v82 ^ (unsigned __int8)(BYTE1(v82) ^ BYTE2(v82))) )
          {
            sub_18010A694(3, a1, v81 - 16, 0, 0LL, 0LL);
            v83 = v76;
          }
        }
        v84 = v83 - (unsigned __int16)v82;
        v12 = v159;
        if ( v84 <= 0 )
LABEL_197:
          *(_QWORD *)(v75[6] + 8 * v80) = v127;
        if ( !v81 )
          *(_DWORD *)(v75[5] + 4LL * (v79 >> 5)) |= 1 << (v79 & 0x1F);
      }
LABEL_200:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
        *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      }
LABEL_235:
      if ( !v123 )
      {
        v52 = 256;
        goto LABEL_276;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        v98 = *(_DWORD *)(v12 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v12 + 8) = v98;
        if ( HIBYTE(v98) != ((unsigned __int8)v98 ^ (unsigned __int8)(BYTE1(v98) ^ BYTE2(v98))) )
          sub_180101024(a1, v12);
      }
      *(_BYTE *)(v12 + 10) |= 2u;
      v99 = *(_WORD *)(v12 + 8);
      v100 = 16LL * v99 + v12;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v12 + 11) = HIBYTE(v99) ^ v99 ^ *(_BYTE *)(v12 + 10);
        *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      *(_WORD *)(v100 - 4) = v123;
      *(_WORD *)(v100 - 2) = 0;
      if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
      {
        *(_WORD *)(v100 - 2) = sub_180033C9C(1u);
        v52 = 256;
        goto LABEL_276;
      }
      goto LABEL_114;
    }
    v85 = (unsigned __int16)v24;
    *(_BYTE *)(v12 + 10) &= 0xF0u;
    *(_BYTE *)(v12 + 15) = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_211:
      v88 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v89 = (_QWORD *)sub_1800466AC(a1, v85);
      else
        v89 = (_QWORD *)*v88;
      while ( v88 != v89 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v90 = *((_DWORD *)v89 - 2);
          v158 = v90;
          if ( (v90 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v91 = v90 ^ *(_DWORD *)(a1 + 136);
            v158 = v91;
          }
          else
          {
            LOWORD(v91) = v90;
          }
          v12 = v159;
        }
        else
        {
          LOWORD(v91) = *((_WORD *)v89 - 4);
        }
        v130 = v91;
        if ( v85 <= (unsigned __int16)v91 )
          break;
        v89 = (_QWORD *)*v89;
      }
      v92 = (_QWORD *)(v12 + 16);
      v93 = (__int64 *)v89[1];
      if ( (_QWORD *)*v93 == v89 )
      {
        *v92 = v89;
        *(_QWORD *)(v12 + 24) = v93;
        *v93 = (__int64)v92;
        v89[1] = v92;
      }
      else
      {
        sub_18010A694(13, 0, (_DWORD)v89, 0, *v93, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v12 + 8);
      v94 = *(__int64 ***)(a1 + 312);
      if ( v94 )
      {
        v95 = *(unsigned __int16 *)(v12 + 8);
        while ( 1 )
        {
          v96 = *((unsigned int *)v94 + 2);
          if ( v95 < v96 )
          {
            v97 = *(unsigned __int16 *)(v12 + 8);
            v148 = *(unsigned __int16 *)(v12 + 8);
            goto LABEL_232;
          }
          if ( !*v94 )
            break;
          v94 = (__int64 **)*v94;
        }
        v97 = v96 - 1;
        v148 = (unsigned int)(v96 - 1);
LABEL_232:
        LOBYTE(v89) = 1;
        sub_180046B74(a1, (_DWORD)v94, (_DWORD)v89, v12 + 16, v97, v95);
      }
      goto LABEL_200;
    }
    v86 = (_DWORD *)(v12 + 32);
    v147 = v12 + 32;
    v87 = (16 * (unsigned __int64)(unsigned int)v85 - 32) >> 2;
    v136 = v87;
    if ( v87 )
    {
      if ( ((unsigned __int8)v86 & 4) == 0 )
        goto LABEL_208;
      *v86 = -17891602;
      v136 = --v87;
      if ( v87 )
      {
        v86 = (_DWORD *)(v12 + 36);
        v147 = v12 + 36;
LABEL_208:
        memset64(v86, 0xFEEEFEEEFEEEFEEEuLL, v87 >> 1);
        if ( (v87 & 1) != 0 )
          v86[v87 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v12 + 10) |= 4u;
    goto LABEL_211;
  }
  sub_180045188(a1);
LABEL_114:
  v52 = 256;
LABEL_276:
  if ( v121 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      ++*(_DWORD *)(a1 + 640);
      v112 = *(_DWORD *)(a1 + 648);
      if ( *(_DWORD *)(a1 + 640) > v112 )
      {
        *(_DWORD *)(a1 + 640) = 0;
        v113 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v113 > *(_QWORD *)(a1 + 672) )
          *(_QWORD *)(a1 + 672) = v113;
        *(_QWORD *)(a1 + 680) = v113;
      }
      if ( ++*(_DWORD *)(a1 + 652) >= 0x1000u )
      {
        if ( *(_BYTE *)(a1 + 418) != 2 || *(_DWORD *)(a1 + 656) <= 0x10u )
          v52 = 16;
        if ( *(_DWORD *)(a1 + 644) > v52 && v112 < 0x10000 )
          *(_DWORD *)(a1 + 648) = 2 * v112;
        *(_DWORD *)(a1 + 644) = 0;
        *(_DWORD *)(a1 + 652) = 0;
      }
    }
    v114 = *(_QWORD *)(a1 + 352);
    v21 = (*(_DWORD *)(v114 + 12))-- == 1;
    if ( v21 )
    {
      *(_QWORD *)(v114 + 16) = 0LL;
      v115 = _InterlockedCompareExchange((volatile signed __int32 *)(v114 + 8), -1, -2);
      if ( v115 != -2 )
      {
        if ( (*(_BYTE *)(v114 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v114);
        v116 = *(HANDLE *)(v114 + 24);
        if ( !v116 )
          v116 = sub_180007850(v114);
        v133 = 0;
        while ( v115 != _InterlockedCompareExchange((volatile signed __int32 *)(v114 + 8), v115 + (v115 & 2 | 1), v115) )
        {
          sub_1800365A0(&v133);
          _m_prefetchw((const void *)(v114 + 8));
          v115 = *(_DWORD *)(v114 + 8);
        }
        if ( (v115 & 2) != 0 )
        {
          if ( v116 == (HANDLE)-1LL )
          {
            _InterlockedOr(v118, 0);
            sub_180006FCC(v114 + 8, 0);
          }
          else
          {
            v117 = ZwSetEvent(v116, 0LL);
            if ( v117 < 0 )
              RtlRaiseStatus(v117);
          }
        }
      }
    }
  }
  return v132;
}
