/*
 * XREFs of ParseTerm @ 0x1C0006EE0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     ParseString @ 0x1C00022CC (ParseString.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0008BF0 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0008DE0 (ParseSuperName.c)
 *     CopyObjData @ 0x1C000B268 (CopyObjData.c)
 *     PerformMutexDriverCallbacks @ 0x1C000FF18 (PerformMutexDriverCallbacks.c)
 *     ParseNameTail @ 0x1C0021070 (ParseNameTail.c)
 *     PushCall @ 0x1C0021414 (PushCall.c)
 *     FindOpcodeTerm @ 0x1C0022330 (FindOpcodeTerm.c)
 *     RtlStringCchCopyA @ 0x1C002292C (RtlStringCchCopyA.c)
 *     ReadField @ 0x1C0023DF0 (ReadField.c)
 *     PushTerm @ 0x1C0028534 (PushTerm.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     ParseInteger @ 0x1C002C338 (ParseInteger.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 *     PrintIndent @ 0x1C00643FC (PrintIndent.c)
 *     PrintObject @ 0x1C0064440 (PrintObject.c)
 */

__int64 __fastcall ParseTerm(__int64 a1, __int64 a2, unsigned int NameSpaceObjectNoLock)
{
  __int64 v3; // rdi
  _QWORD *v4; // r12
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r11d
  int v8; // eax
  unsigned int v9; // eax
  const void **v10; // r10
  unsigned int v11; // ebx
  int v12; // esi
  __int64 v13; // r15
  __int64 v14; // r13
  int v15; // ebx
  const void **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *v19; // r14
  unsigned __int8 v20; // al
  __int64 OpcodeTerm; // rbx
  unsigned __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rsi
  void *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 (__fastcall *v33)(_QWORD *, __int64, __int64, __int64); // rax
  unsigned int v34; // eax
  __int64 v35; // r10
  __int64 (__fastcall *v36)(__int64, __int64, _QWORD, __int64, _DWORD, _QWORD *); // r11
  __int64 v37; // r14
  unsigned int v38; // r15d
  unsigned int v39; // esi
  __int64 v40; // rbx
  _QWORD *v41; // rsi
  _QWORD *v42; // rbx
  __int64 v43; // r8
  _QWORD *v44; // rax
  _QWORD *j; // rdx
  _QWORD *v46; // rcx
  _QWORD *v47; // r9
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // r9
  _QWORD *v51; // rbx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  unsigned __int64 v54; // rcx
  _QWORD *v55; // rdi
  _QWORD *v56; // rbx
  __int64 v57; // r8
  _QWORD *v58; // rax
  _QWORD *k; // rdx
  _QWORD *v60; // rcx
  _QWORD *v61; // r9
  __int64 v62; // rcx
  _QWORD *v63; // rax
  _QWORD *v64; // r9
  _QWORD *v65; // rbx
  __int64 v66; // rdx
  _QWORD *v67; // rax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  unsigned int v74; // eax
  __int64 v75; // rdx
  unsigned __int64 *v76; // rbx
  unsigned __int8 *v77; // rax
  __int64 v78; // r8
  unsigned __int8 *v79; // r9
  unsigned int v80; // edx
  __int64 v81; // rdx
  unsigned __int64 v82; // rax
  char v83; // al
  __int64 *v84; // r15
  int v85; // esi
  char *v86; // rdx
  __int64 v87; // r10
  char v88; // al
  size_t v89; // rbx
  _BYTE *PoolWithTag; // rsi
  KIRQL v91; // bl
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  unsigned __int64 v95; // rsi
  __int64 n; // rbx
  __int16 v97; // ax
  __int64 v98; // r10
  __int64 v99; // rcx
  _QWORD *v100; // rax
  __int64 v101; // rcx
  __int16 v102; // ax
  _QWORD *v103; // r12
  _QWORD *v104; // r13
  __int64 v105; // r9
  _QWORD *v106; // rax
  _QWORD *i; // rdx
  _QWORD *v108; // rcx
  _QWORD *v109; // r8
  __int64 v110; // rcx
  __int64 v111; // r10
  _QWORD *v112; // rax
  _QWORD *v113; // r8
  __int64 v114; // r10
  __int64 v115; // rcx
  _QWORD *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // r10
  char v120; // al
  int v121; // ebx
  char v122; // al
  __int64 v123; // rax
  void *v125; // rax
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rcx
  unsigned int v134; // eax
  __int64 v135; // rcx
  unsigned __int8 v136; // r10
  int v137; // eax
  int v138; // ecx
  __int64 v139; // rdx
  __int64 v140; // rbx
  __int64 v141; // rdx
  _QWORD *v142; // r13
  __int64 v143; // rcx
  _QWORD *v144; // rax
  __int64 v145; // rcx
  _QWORD *v146; // rax
  unsigned int *v147; // rax
  __int64 v148; // r9
  char *v149; // r8
  _BYTE *v150; // rax
  unsigned int m; // ecx
  _BYTE *v152; // rdx
  int v153; // esi
  __int64 v154; // rcx
  __int64 v155; // rcx
  _QWORD *v156; // rax
  __int64 v157; // rax
  __int64 *v158; // rax
  __int64 v159; // r9
  char *v160; // r8
  _BYTE *v161; // rdx
  __int64 v162; // rax
  _BYTE *v163; // rcx
  __int64 v164; // rdx
  int v165; // eax
  bool v166; // al
  int v167; // ebx
  __int64 (__fastcall *v168)(__int64, __int64, _QWORD, __int64, _DWORD, _QWORD *); // rax
  unsigned __int64 *v169; // rcx
  unsigned __int64 v170; // rax
  int ObjectTypeName; // eax
  __int64 v172; // rcx
  _QWORD *v173; // rax
  __int64 v174; // rcx
  _QWORD *v175; // rax
  _QWORD *v177; // [rsp+50h] [rbp-B0h]
  char pszDest; // [rsp+60h] [rbp-A0h] BYREF
  char v179; // [rsp+61h] [rbp-9Fh] BYREF
  char Src; // [rsp+160h] [rbp+60h] BYREF
  char v181; // [rsp+161h] [rbp+61h] BYREF
  _BYTE P[128]; // [rsp+260h] [rbp+160h] BYREF

  v177 = (_QWORD *)a1;
  v3 = a2;
  v4 = (_QWORD *)a1;
  v5 = 1LL;
  v6 = -1LL;
  v7 = 2;
  if ( NameSpaceObjectNoLock )
  {
    v8 = 5;
  }
  else
  {
    a1 = *(unsigned int *)(a2 + 16);
    v8 = *(_DWORD *)(a2 + 16) & 0xF;
    if ( !v8 )
    {
      *(_DWORD *)(a2 + 16) = a1 + 1;
      if ( (gDebugger & 0xD0) != 0 )
      {
        v164 = *(_QWORD *)(a2 + 56);
        v165 = *(_DWORD *)(v164 + 8);
        if ( v165 == 18 || v165 == 19 )
        {
          ++dword_1C0080764;
          PrintIndent(v4, v164, 1LL, -1LL);
        }
        ConPrintf("%s");
        if ( *(_DWORD *)(v3 + 76) )
          ConPrintf("(");
        v5 = 1LL;
        v6 = -1LL;
        v7 = 2;
      }
      a1 = *(unsigned int *)(*(_QWORD *)(v3 + 56) + 28LL);
      if ( (a1 & 1) != 0 )
      {
        v76 = (unsigned __int64 *)(v3 + 40);
        if ( v3 != -40 )
          *v76 = v4[15];
        v77 = (unsigned __int8 *)v4[15];
        v78 = *v77;
        v79 = v77 + 1;
        v80 = *v77;
        v4[15] = v77 + 1;
        v81 = v80 >> 6;
        if ( (_BYTE)v81 )
        {
          LODWORD(v78) = v78 & 0xF;
          v136 = 0;
          do
          {
            v137 = *v79++;
            v138 = v136++;
            v4[15] = v79;
            a1 = (unsigned int)(8 * v138 + 4);
            v78 = (v137 << a1) | (unsigned int)v78;
          }
          while ( v136 < (unsigned __int8)v81 );
        }
        if ( v3 != -40 )
          *v76 += (unsigned int)v78;
        if ( (gOverrideFlags & 4) == 0 )
        {
          v82 = *(_QWORD *)(v3 + 48);
          if ( v82 )
          {
            if ( *v76 > v82 )
            {
              LogError(3222536207LL, v81, v78, v79);
              AcpiDiagTraceAmlError(v4, 3222536207LL);
              PrintDebugMessage(143, *v76, *(_QWORD *)(v3 + 48), 0, 0LL);
              return (unsigned int)-1072431089;
            }
          }
        }
        v6 = -1LL;
        v5 = 1LL;
      }
      goto LABEL_5;
    }
  }
  v70 = v8 - 1;
  if ( v70 )
  {
    v71 = v70 - 1;
    if ( !v71 )
      goto LABEL_38;
    v72 = v71 - 1;
    if ( v72 )
    {
      v73 = v72 - 1;
      if ( v73 )
      {
        if ( v73 != 1 )
          return NameSpaceObjectNoLock;
LABEL_47:
        if ( (gDebugger & 0xD0) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v3 + 56) + 8LL) - 18) <= 1 )
          --dword_1C0080764;
        v37 = *(_QWORD *)(v3 + 80);
        if ( v37 )
        {
          v38 = *(_DWORD *)(v3 + 76);
          v39 = 0;
          if ( v38 )
          {
            do
            {
              v40 = 5LL * v39;
              if ( (*(_BYTE *)(v37 + 40LL * v39) & 1) != 0 )
              {
                v135 = *(_QWORD *)(v37 + 40LL * v39 + 8);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v135 + 8), 0xFFFFFFFF) == 1
                  && (*(_BYTE *)v135 & 8) != 0 )
                {
                  FreeData(v135, a2, v5, -1LL);
                }
              }
              else if ( *(_QWORD *)(v37 + 40LL * v39 + 32) )
              {
                if ( *(int *)(v37 + 40LL * v39 + 8) > 0 )
                {
                  *(_WORD *)(v37 + 40LL * v39) |= 8u;
                }
                else
                {
                  v102 = *(_WORD *)(v37 + 40LL * v39 + 2);
                  if ( v102 == 4 )
                  {
                    v147 = *(unsigned int **)(v37 + 40LL * v39 + 32);
                    FreeDataBuffs((__int64)(v147 + 2), *v147);
                    v102 = *(_WORD *)(v37 + 40LL * v39 + 2);
                  }
                  if ( v102 == 2 )
                  {
                    v103 = *(_QWORD **)(v37 + 40LL * v39 + 32);
                    *((_DWORD *)v103 - 4) = 0;
                    v104 = v103 - 2;
                    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
                    v105 = *(v103 - 1);
                    v106 = *(_QWORD **)(v105 + 40);
                    for ( i = (_QWORD *)(v105 + 40); v106 != i; v106 = (_QWORD *)*v106 )
                    {
                      if ( v103 < v106 )
                        break;
                    }
                    v108 = (_QWORD *)v106[1];
                    if ( (_QWORD *)*v108 != v106 )
                      goto LABEL_312;
                    v103[1] = v108;
                    *v103 = v106;
                    *v108 = v103;
                    v106[1] = v103;
                    v109 = (_QWORD *)*v103;
                    v110 = *v103 - 16LL;
                    if ( (_QWORD *)*v103 != i )
                    {
                      v111 = *((unsigned int *)v104 + 1);
                      if ( (_QWORD *)v110 == (_QWORD *)((char *)v104 + v111) )
                      {
                        *((_DWORD *)v104 + 1) = v111 + *(_DWORD *)(v110 + 4);
                        v145 = *v109;
                        if ( *(_QWORD **)(*v109 + 8LL) != v109 )
                          goto LABEL_312;
                        v146 = (_QWORD *)v109[1];
                        if ( (_QWORD *)*v146 != v109 )
                          goto LABEL_312;
                        *v146 = v145;
                        *(_QWORD *)(v145 + 8) = v146;
                      }
                    }
                    v112 = (_QWORD *)v104[3];
                    v113 = v112 - 2;
                    if ( v112 != i )
                    {
                      v154 = *((unsigned int *)v113 + 1);
                      if ( v104 == (_QWORD *)((char *)v113 + v154) )
                      {
                        *((_DWORD *)v113 + 1) = *((_DWORD *)v104 + 1) + v154;
                        v155 = *v103;
                        if ( *(_QWORD **)(*v103 + 8LL) != v103 )
                          goto LABEL_312;
                        v156 = (_QWORD *)v103[1];
                        if ( (_QWORD *)*v156 != v103 )
                          goto LABEL_312;
                        *v156 = v155;
                        v104 = v113;
                        *(_QWORD *)(v155 + 8) = v156;
                      }
                    }
                    if ( *(_QWORD *)(v105 + 32) <= (unsigned __int64)v104 + *((unsigned int *)v104 + 1) )
                    {
                      *(_QWORD *)(v105 + 32) = v104;
                      v142 = v104 + 2;
                      v143 = *v142;
                      if ( *(_QWORD **)(*v142 + 8LL) != v142 )
                        goto LABEL_312;
                      v144 = (_QWORD *)v142[1];
                      if ( (_QWORD *)*v144 != v142 )
                        goto LABEL_312;
                      *v144 = v143;
                      *(_QWORD *)(v143 + 8) = v144;
                    }
                    KeReleaseSpinLock(&gmutHeap, NewIrql);
                  }
                  else
                  {
                    switch ( v102 )
                    {
                      case 3:
                      case 4:
                      case 7:
                      case 8:
                      case 10:
                      case 11:
                      case 12:
                      case 14:
                        HeapFree(*(_QWORD **)(v37 + 40LL * v39 + 32));
                        break;
                      case 5:
                        v169 = *(unsigned __int64 **)(v37 + 40LL * v39 + 32);
                        v170 = *v169;
                        if ( !*v169 )
                          goto LABEL_402;
                        goto LABEL_401;
                      case 9:
                        PerformMutexDriverCallbacks(1, *(_QWORD *)(v37 + 40LL * v39 + 32), 0, 0, 0);
                        HeapFree(*(_QWORD **)(v37 + 40LL * v39 + 32));
                        break;
                      case 130:
                        v169 = *(unsigned __int64 **)(v37 + 40LL * v39 + 32);
                        if ( *v169 )
                        {
                          DereferenceObjectEx(*v169);
                          v169 = *(unsigned __int64 **)(v37 + 40LL * v39 + 32);
                        }
                        v170 = v169[1];
                        if ( v170 )
                          goto LABEL_401;
                        goto LABEL_402;
                      case 131:
                        v169 = *(unsigned __int64 **)(v37 + 40LL * v39 + 32);
                        v170 = *v169;
                        if ( *v169 )
                          goto LABEL_401;
                        goto LABEL_402;
                      case 132:
                        v169 = *(unsigned __int64 **)(v37 + 40LL * v39 + 32);
                        if ( *v169 )
                        {
                          DereferenceObjectEx(*v169);
                          v169 = *(unsigned __int64 **)(v37 + 40LL * v39 + 32);
                        }
                        v170 = v169[1];
                        if ( v170 )
                        {
LABEL_401:
                          DereferenceObjectEx(v170);
                          v169 = *(unsigned __int64 **)(v37 + 40LL * v39 + 32);
                        }
LABEL_402:
                        HeapFree(v169);
                        break;
                      default:
                        LogError(3222536195LL, 0x1C0000000uLL, v5, v6);
                        AcpiDiagTraceAmlError(0LL, 3222536195LL);
                        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v37 + 40LL * v39 + 2));
                        PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
                        break;
                    }
                  }
                }
              }
              ++v39;
              *(_QWORD *)(v37 + 8 * v40) = 0LL;
              *(_QWORD *)(v37 + 8 * v40 + 8) = 0LL;
              *(_QWORD *)(v37 + 8 * v40 + 16) = 0LL;
              *(_QWORD *)(v37 + 8 * v40 + 24) = 0LL;
              v6 = -1LL;
              *(_QWORD *)(v37 + 8 * v40 + 32) = 0LL;
            }
            while ( v39 < v38 );
            v4 = v177;
          }
          v41 = *(_QWORD **)(v3 + 80);
          *((_DWORD *)v41 - 4) = 0;
          v42 = v41 - 2;
          NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          v43 = *(v41 - 1);
          v44 = *(_QWORD **)(v43 + 40);
          for ( j = (_QWORD *)(v43 + 40); v44 != j; v44 = (_QWORD *)*v44 )
          {
            if ( v41 < v44 )
              break;
          }
          v46 = (_QWORD *)v44[1];
          if ( (_QWORD *)*v46 != v44 )
            goto LABEL_312;
          v41[1] = v46;
          *v41 = v44;
          *v46 = v41;
          v44[1] = v41;
          v47 = (_QWORD *)*v41;
          v48 = *v41 - 16LL;
          if ( (_QWORD *)*v41 != j )
          {
            v114 = *((unsigned int *)v42 + 1);
            if ( (_QWORD *)v48 == (_QWORD *)((char *)v42 + v114) )
            {
              *((_DWORD *)v42 + 1) = v114 + *(_DWORD *)(v48 + 4);
              v115 = *v47;
              if ( *(_QWORD **)(*v47 + 8LL) != v47 )
                goto LABEL_312;
              v116 = (_QWORD *)v47[1];
              if ( (_QWORD *)*v116 != v47 )
                goto LABEL_312;
              *v116 = v115;
              *(_QWORD *)(v115 + 8) = v116;
            }
          }
          v49 = (_QWORD *)v42[3];
          v50 = v49 - 2;
          if ( v49 != j )
          {
            v101 = *((unsigned int *)v50 + 1);
            if ( v42 == (_QWORD *)((char *)v50 + v101) )
            {
              *((_DWORD *)v50 + 1) = *((_DWORD *)v42 + 1) + v101;
              v172 = *v41;
              if ( *(_QWORD **)(*v41 + 8LL) != v41 )
                goto LABEL_312;
              v173 = (_QWORD *)v41[1];
              if ( (_QWORD *)*v173 != v41 )
                goto LABEL_312;
              *v173 = v172;
              v42 = v50;
              *(_QWORD *)(v172 + 8) = v173;
            }
          }
          if ( *(_QWORD *)(v43 + 32) <= (unsigned __int64)v42 + *((unsigned int *)v42 + 1) )
          {
            *(_QWORD *)(v43 + 32) = v42;
            v51 = v42 + 2;
            v52 = *v51;
            if ( *(_QWORD **)(*v51 + 8LL) != v51 )
              goto LABEL_312;
            v53 = (_QWORD *)v51[1];
            if ( (_QWORD *)*v53 != v51 )
              goto LABEL_312;
            *v53 = v52;
            *(_QWORD *)(v52 + 8) = v53;
          }
          KeReleaseSpinLock(&gmutHeap, NewIrql);
        }
        v54 = *(_QWORD *)(v3 + 64);
        if ( v54 )
        {
          if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v54 + 112), 0xFFFFFFFF) == 1 )
          {
            *(_WORD *)(v54 + 64) |= 4u;
            if ( (*(_WORD *)(v54 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects(v54);
          }
          *(_QWORD *)(v3 + 64) = 0LL;
        }
        v55 = (_QWORD *)v4[52];
        v56 = v55 - 2;
        v4[52] = v55[1];
        *((_DWORD *)v55 - 4) = 0;
        NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v57 = *(v55 - 1);
        v58 = *(_QWORD **)(v57 + 40);
        for ( k = (_QWORD *)(v57 + 40); v58 != k; v58 = (_QWORD *)*v58 )
        {
          if ( v55 < v58 )
            break;
        }
        v60 = (_QWORD *)v58[1];
        if ( (_QWORD *)*v60 == v58 )
        {
          v55[1] = v60;
          *v55 = v58;
          *v60 = v55;
          v58[1] = v55;
          v61 = (_QWORD *)*v55;
          v62 = *v55 - 16LL;
          if ( (_QWORD *)*v55 != k )
          {
            v98 = *((unsigned int *)v56 + 1);
            if ( (_QWORD *)v62 == (_QWORD *)((char *)v56 + v98) )
            {
              *((_DWORD *)v56 + 1) = v98 + *(_DWORD *)(v62 + 4);
              v99 = *v61;
              if ( *(_QWORD **)(*v61 + 8LL) != v61 )
                goto LABEL_312;
              v100 = (_QWORD *)v61[1];
              if ( (_QWORD *)*v100 != v61 )
                goto LABEL_312;
              *v100 = v99;
              *(_QWORD *)(v99 + 8) = v100;
            }
          }
          v63 = (_QWORD *)v56[3];
          v64 = v63 - 2;
          if ( v63 != k )
          {
            v133 = *((unsigned int *)v64 + 1);
            if ( v56 == (_QWORD *)((char *)v64 + v133) )
            {
              *((_DWORD *)v64 + 1) = *((_DWORD *)v56 + 1) + v133;
              v174 = *v55;
              if ( *(_QWORD **)(*v55 + 8LL) != v55 )
                goto LABEL_312;
              v175 = (_QWORD *)v55[1];
              if ( (_QWORD *)*v175 != v55 )
                goto LABEL_312;
              *v175 = v174;
              v56 = v64;
              *(_QWORD *)(v174 + 8) = v175;
            }
          }
          if ( *(_QWORD *)(v57 + 32) > (unsigned __int64)v56 + *((unsigned int *)v56 + 1) )
          {
LABEL_72:
            KeReleaseSpinLock(&gmutHeap, NewIrql);
            return NameSpaceObjectNoLock;
          }
          *(_QWORD *)(v57 + 32) = v56;
          v65 = v56 + 2;
          v66 = *v65;
          if ( *(_QWORD **)(*v65 + 8LL) == v65 )
          {
            v67 = (_QWORD *)v65[1];
            if ( (_QWORD *)*v67 == v65 )
            {
              *v67 = v66;
              *(_QWORD *)(v66 + 8) = v67;
              goto LABEL_72;
            }
          }
        }
LABEL_312:
        __fastfail(3u);
      }
    }
    else
    {
LABEL_39:
      ++*(_DWORD *)(v3 + 16);
      if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(v3 + 76) )
        ConPrintf(")");
      v33 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*(_QWORD *)(v3 + 56) + 48LL);
      if ( v33 )
      {
        v34 = v33(v4, v3, v5, v6);
        NameSpaceObjectNoLock = v34;
        if ( v34 || v3 != v4[52] )
          return v34;
      }
    }
    ++*(_DWORD *)(v3 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      a2 = *(_QWORD *)(v3 + 56);
      if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 17) > 2 && *(_DWORD *)(a2 + 24) == 4 )
      {
        ConPrintf("=");
        PrintObject(*(_QWORD *)(v3 + 88));
      }
    }
    if ( (gDebugger & 0x40) != 0 )
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFBF);
      AMLIDebugger(a1, a2, v5, v6);
    }
    else
    {
      v35 = *(_QWORD *)(v3 + 56);
      v36 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, _QWORD *))(v35 + 32);
      if ( v36 )
      {
        if ( *(int *)(v35 + 28) >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(v35 + 32))(
            1LL,
            *(unsigned int *)(v35 + 8),
            *(_QWORD *)(v3 + 64) + 120LL,
            *(unsigned int *)(v35 + 40));
        }
        else
        {
          NameSpaceObjectNoLock = v36(
                                    12LL,
                                    2LL,
                                    *(unsigned int *)(v35 + 8),
                                    *(_QWORD *)(v3 + 64) + 120LL,
                                    *(_DWORD *)(v35 + 40),
                                    v4);
          if ( NameSpaceObjectNoLock == 259 )
            return 32772;
        }
      }
    }
    v6 = -1LL;
    goto LABEL_47;
  }
LABEL_5:
  v9 = *(_DWORD *)(v3 + 76);
  v10 = (const void **)(v4 + 15);
  v11 = *(_DWORD *)(v3 + 72);
  v12 = NameSpaceObjectNoLock;
  while ( 1 )
  {
    if ( v11 < v9 )
    {
      while ( 2 )
      {
        *(_DWORD *)(v3 + 72) = v11 + 1;
        if ( (gDebugger & 0xD0) != 0 && v11 )
        {
          ConPrintf(",");
          v7 = 2;
          v10 = (const void **)(v4 + 15);
          v6 = -1LL;
          v5 = 1LL;
        }
        v13 = *(_QWORD *)(v3 + 48);
        v14 = *(_QWORD *)(v3 + 80) + 40LL * v11;
        a1 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 16LL);
        v15 = *(char *)(v11 + a1);
        if ( v15 == 67 )
        {
          v16 = (const void **)&unk_1C00807A0;
          v17 = 0LL;
          v18 = 0LL;
          do
          {
            if ( *v10 == *v16 )
              break;
            v17 = (unsigned int)(v17 + 1);
            ++v18;
            v16 += 2;
          }
          while ( (__int64)v16 < (__int64)&qword_1C0080840 );
          if ( (_DWORD)v17 != 10 && (dword_1C0080798[4 * v18] & 1) != 0 && (_DWORD)v17 != -1 )
          {
            ConPrintf("\nHit Breakpoint %d.\n");
            ((void (*)(void))AMLIDebugger)();
            v10 = (const void **)(v4 + 15);
            v7 = 2;
            v6 = -1LL;
          }
          v19 = (char *)*v10;
          v20 = *(_BYTE *)*v10;
          if ( v20 == 91 )
          {
            *v10 = v19 + 1;
            OpcodeTerm = FindOpcodeTerm((unsigned __int8)v19[1]);
          }
          else
          {
            OpcodeTerm = (__int64)*(&OpcodeTable + v20);
            v22 = (unsigned __int64)*v10;
          }
          if ( !OpcodeTerm )
          {
            LogError(3222536193LL, v17, v22, v6);
            AcpiDiagTraceAmlError(v4, 3222536193LL);
            PrintDebugMessage(134, *(unsigned __int8 *)v4[15], v4[15], 0, 0LL);
            v12 = -1072431103;
            NameSpaceObjectNoLock = -1072431103;
            goto LABEL_30;
          }
          v23 = *(_DWORD *)(OpcodeTerm + 28);
          if ( (v23 & 8) != 0 )
          {
            a1 = *(unsigned __int8 *)v22;
            v4[15] = v22 + 1;
            *(_QWORD *)(v14 + 16) = 0LL;
            *(_WORD *)(v14 + 2) = 1;
            v75 = (unsigned int)a1;
            NameSpaceObjectNoLock = 0;
            if ( (_DWORD)a1 == 10 )
            {
              a1 = *(unsigned __int8 *)v4[15];
              *(_BYTE *)(v14 + 16) = a1;
              ++v4[15];
              if ( (gDebugger & 0xD0) == 0 )
                goto LABEL_159;
            }
            else
            {
              if ( (_DWORD)a1 == 12 )
              {
                a1 = *(unsigned int *)v4[15];
                *(_DWORD *)(v14 + 16) = a1;
                v4[15] += 4LL;
              }
              else
              {
                if ( (unsigned int)a1 <= 0xC )
                {
                  if ( (_BYTE)a1 )
                  {
                    v75 = (unsigned int)(a1 - 1);
                    if ( (_DWORD)a1 != 1 )
                    {
                      if ( (_DWORD)a1 == 11 )
                      {
                        a1 = *(unsigned __int16 *)v4[15];
                        *(_WORD *)(v14 + 16) = a1;
                        v4[15] += 2LL;
                        goto LABEL_92;
                      }
LABEL_348:
                      --v4[15];
                      LogError(3222536193LL, v75, 1LL, v6);
                      AcpiDiagTraceAmlError(v4, 3222536193LL);
                      PrintDebugMessage(128, *(unsigned __int8 *)v4[15], v4[15], 0, 0LL);
                      v12 = -1072431103;
                      NameSpaceObjectNoLock = -1072431103;
                      goto LABEL_30;
                    }
                    *(_QWORD *)(v14 + 16) = 1LL;
                    if ( (gDebugger & 0xD0) != 0 )
                      ConPrintf("One");
                  }
                  else
                  {
                    *(_QWORD *)(v14 + 16) = 0LL;
                    if ( (gDebugger & 0xD0) != 0 )
                      ConPrintf("Zero");
                  }
LABEL_159:
                  v12 = 0;
                  goto LABEL_30;
                }
                if ( (_DWORD)a1 == 255 )
                {
                  if ( IsCompatableDSDTRevision() )
                    v157 = -1LL;
                  else
                    v157 = 0xFFFFFFFFLL;
                  *(_QWORD *)(v14 + 16) = v157;
                  if ( (gDebugger & 0xD0) != 0 )
                    ConPrintf("Ones");
                  goto LABEL_159;
                }
                if ( (_DWORD)a1 != 14 )
                  goto LABEL_348;
                v158 = (__int64 *)v4[15];
                a1 = *v158;
                *(_QWORD *)(v14 + 16) = *v158;
                v4[15] += 8LL;
              }
LABEL_92:
              if ( (gDebugger & 0xD0) == 0 )
                goto LABEL_159;
            }
            ConPrintf("0x%I64x");
            goto LABEL_159;
          }
          if ( (v23 & 0x10) != 0 )
          {
            v12 = ParseString((__int64)v4, v10, v14, 0LL);
            NameSpaceObjectNoLock = v12;
            goto LABEL_30;
          }
          if ( (v23 & 2) != 0 )
          {
            v139 = v4[12];
            v140 = (unsigned int)*(unsigned __int8 *)v22 - 104;
            NameSpaceObjectNoLock = 0;
            if ( (unsigned int)v140 >= *(_DWORD *)(v139 + 60) )
            {
              LogError(3222536197LL, v139, v22, v6);
              AcpiDiagTraceAmlError(v4, 3222536197LL);
              PrintDebugMessage(122, v140, 0, 0, 0LL);
              v12 = -1072431099;
              NameSpaceObjectNoLock = -1072431099;
              goto LABEL_30;
            }
            a1 = 5 * v140;
            v141 = *(_QWORD *)(v139 + 64) + 40 * v140;
            if ( v14 != v141 )
            {
              *(_OWORD *)v14 = *(_OWORD *)v141;
              *(_OWORD *)(v14 + 16) = *(_OWORD *)(v141 + 16);
              *(_QWORD *)(v14 + 32) = *(_QWORD *)(v141 + 32);
              if ( (*(_BYTE *)v141 & 1) != 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v141 + 8) + 8LL));
              }
              else if ( *(_QWORD *)(v141 + 32) )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v141 + 8));
                *(_WORD *)v14 |= 1u;
                *(_QWORD *)(v14 + 8) = v141;
              }
            }
            *v10 = (char *)*v10 + 1;
            if ( (gDebugger & 0xD0) != 0 )
            {
              ConPrintf("Arg%d=");
              PrintObject(v14);
              v12 = 0;
              goto LABEL_30;
            }
            v12 = 0;
            goto LABEL_31;
          }
          if ( (v23 & 4) != 0 )
          {
            CopyObjData(
              v14,
              v4[12]
            + 8 * ((unsigned int)*(unsigned __int8 *)v22 - 96 + 4LL * ((unsigned int)*(unsigned __int8 *)v22 - 96) + 9));
            a1 = (unsigned int)gDebugger;
            if ( (gDebugger & 0xD0) != 0 )
            {
              ConPrintf("Local%d=");
              PrintObject(v14);
              v10 = (const void **)(v4 + 15);
            }
            *v10 = (char *)*v10 + 1;
            v12 = 0;
            NameSpaceObjectNoLock = 0;
            goto LABEL_31;
          }
          if ( (v23 & 0x20) == 0 )
          {
            if ( (v23 & 0x40) != 0 )
            {
              LogError(3222536198LL, v17, v22, v6);
              AcpiDiagTraceAmlError(v4, 3222536198LL);
              PrintDebugMessage(133, 0, 0, 0, 0LL);
              v12 = -1072431098;
              NameSpaceObjectNoLock = -1072431098;
            }
            else
            {
              *v10 = (const void *)(v22 + 1);
              v24 = HeapAlloc(v4 + 60, 1297237576LL);
              v28 = v24;
              if ( v24 )
              {
                *(_QWORD *)(v24 + 8) = v4[52];
                v4[52] = v24;
                *(_DWORD *)v24 = 1297237332;
                *(_QWORD *)(v24 + 24) = ParseTerm;
                LODWORD(v24) = 0;
                *(_QWORD *)(v28 + 32) = v19;
                *(_QWORD *)(v28 + 48) = v13;
                *(_QWORD *)(v28 + 56) = OpcodeTerm;
                *(_QWORD *)(v28 + 88) = v14;
                a1 = *(_QWORD *)(OpcodeTerm + 16);
                NameSpaceObjectNoLock = 0;
                if ( a1 )
                {
                  v24 = -1LL;
                  do
                    ++v24;
                  while ( *(_BYTE *)(a1 + v24) );
                }
                *(_DWORD *)(v28 + 76) = v24;
                if ( !(_DWORD)v24 )
                  goto LABEL_29;
                v29 = (void *)HeapAlloc(v4[40], 1413563464LL);
                *(_QWORD *)(v28 + 80) = v29;
                if ( v29 )
                {
                  memset(v29, 0, 40LL * *(unsigned int *)(v28 + 76));
                  goto LABEL_29;
                }
                LogError(3221225626LL, v30, v31, v32);
                AcpiDiagTraceAmlError(v4, 3221225626LL);
                PrintDebugMessage(154, 0, 0, 0, 0LL);
                v12 = -1073741670;
                NameSpaceObjectNoLock = -1073741670;
              }
              else
              {
                LogError(3222536194LL, v25, v26, v27);
                AcpiDiagTraceAmlError(v4, 3222536194LL);
                PrintDebugMessage(153, 0, 0, 0, 0LL);
                v12 = -1072431102;
                NameSpaceObjectNoLock = -1072431102;
              }
            }
LABEL_30:
            v10 = (const void **)(v4 + 15);
            goto LABEL_31;
          }
          if ( *(_BYTE *)v22 == 92 )
          {
            RtlStringCchCopyA(&Src, 0x100uLL, "\\");
            ++v4[15];
            v12 = ParseNameTail(v4, v4 + 15, &Src);
            NameSpaceObjectNoLock = v12;
            goto LABEL_123;
          }
          if ( *(_BYTE *)v22 == 94 )
          {
            RtlStringCchCopyA(&Src, 0x100uLL, "^");
            ++v4[15];
            v149 = &v181;
            v150 = (_BYTE *)v4[15];
            for ( m = 1; m < 0xFF; ++m )
            {
              v152 = v150;
              if ( *v150 != 94 )
                break;
              ++v150;
              *v149++ = 94;
              v4[15] = v150;
              v152 = v150;
            }
            *(&Src + m) = 0;
            if ( *v152 != 94 )
            {
              v12 = ParseNameTail(v4, v4 + 15, &Src);
              NameSpaceObjectNoLock = v12;
              goto LABEL_123;
            }
            LogError(3221225734LL, v152, v149, v148);
            AcpiDiagTraceAmlError(v4, 3221225734LL);
            PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
            v12 = -1073741562;
            NameSpaceObjectNoLock = -1073741562;
            goto LABEL_134;
          }
          Src = 0;
          NameSpaceObjectNoLock = 0;
          a1 = v6;
          do
            ++a1;
          while ( *(&Src + a1) );
          v83 = *(_BYTE *)v22;
          if ( *(_BYTE *)v22 )
          {
            v84 = v4 + 15;
            if ( v83 != 47 )
            {
              if ( v83 == 46 )
              {
                v85 = v7;
                *v84 = v22 + 1;
              }
              else
              {
                v85 = 1;
              }
              while ( 1 )
              {
LABEL_112:
                if ( (unsigned __int64)(unsigned int)a1 + 4 >= 0x100 )
                {
                  LogError(3221225734LL, (unsigned int)a1, v22, v6);
                  AcpiDiagTraceAmlError(v4, 3221225734LL);
                  PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
                  v12 = -1073741562;
                  NameSpaceObjectNoLock = -1073741562;
LABEL_123:
                  if ( !v12 )
                  {
                    if ( (gDebugger & 0xD0) != 0 )
                      ConPrintf("%s");
                    v89 = -1LL;
                    do
                      ++v89;
                    while ( *(&Src + v89) );
                    if ( v89 + 1 < 0x80 )
                    {
                      PoolWithTag = P;
                      goto LABEL_130;
                    }
                    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v89 + 1, 0x69706341u);
                    if ( !PoolWithTag )
                    {
                      v12 = -1073741670;
                      NameSpaceObjectNoLock = -1073741670;
                      goto LABEL_30;
                    }
LABEL_130:
                    memmove(PoolWithTag, &Src, v89);
                    PoolWithTag[v89] = 0;
                    v91 = ExAcquireSpinLockShared(&ACPINamespaceLock);
                    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag);
                    ExReleaseSpinLockShared(&ACPINamespaceLock, v91);
                    if ( P != PoolWithTag )
                      ExFreePoolWithTag(PoolWithTag, 0);
                    v12 = NameSpaceObjectNoLock;
                    if ( NameSpaceObjectNoLock == -1073741772 )
                    {
                      LogError(3221225524LL, v92, v93, v94);
                      AcpiDiagTraceAmlError(v4, 3221225524LL);
                      PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
                    }
                  }
LABEL_134:
                  if ( v12 )
                    goto LABEL_30;
                  v95 = 0LL;
                  a1 = 128LL;
                  if ( MEMORY[0x42] == 128 )
                  {
                    do
                      v95 = *(_QWORD *)(v95 + 80);
                    while ( *(_WORD *)(v95 + 66) == 128 );
                  }
                  if ( (gdwfAMLI & 4) != 0 )
                    _InterlockedIncrement((volatile signed __int32 *)(v95 + 112));
                  if ( *(_WORD *)(v95 + 66) == 8 )
                  {
                    NameSpaceObjectNoLock = PushCall(v4, v95, v14);
                  }
                  else
                  {
                    NameSpaceObjectNoLock = 0;
                    for ( n = v95 + 64; ; n = *(_QWORD *)(n + 16) )
                    {
                      while ( 1 )
                      {
                        v97 = *(_WORD *)(n + 2);
                        if ( v97 != 128 )
                          break;
                        n = *(_QWORD *)(n + 16) + 64LL;
                      }
                      if ( v97 != 129 )
                        break;
                    }
                    if ( v97 == 5 )
                    {
                      v129 = HeapAlloc(v4 + 60, 1297237576LL);
                      if ( v129 )
                      {
                        *(_QWORD *)(v129 + 8) = v4[52];
                        a1 = (__int64)AccFieldUnit;
                        v4[52] = v129;
                        *(_QWORD *)(v129 + 24) = AccFieldUnit;
                        *(_DWORD *)v129 = 1430668097;
                        *(_QWORD *)(v129 + 32) = n;
                        *(_DWORD *)(v129 + 16) = 0x10000;
                        *(_QWORD *)(v129 + 40) = v14;
                        NameSpaceObjectNoLock = 0;
                      }
                      else
                      {
                        LogError(3222536194LL, v130, v131, v132);
                        AcpiDiagTraceAmlError(v4, 3222536194LL);
                        PrintDebugMessage(153, 0, 0, 0, 0LL);
                        NameSpaceObjectNoLock = -1072431102;
                      }
                    }
                    else if ( v97 == 14 )
                    {
                      NameSpaceObjectNoLock = ReadField(v4, n, *(_QWORD *)(n + 32) + 12LL, v14);
                    }
                    else
                    {
                      if ( v14 != n )
                      {
                        *(_OWORD *)v14 = *(_OWORD *)n;
                        *(_OWORD *)(v14 + 16) = *(_OWORD *)(n + 16);
                        *(_QWORD *)(v14 + 32) = *(_QWORD *)(n + 32);
                        if ( (*(_BYTE *)n & 1) != 0 )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(n + 8) + 8LL));
                        }
                        else if ( *(_QWORD *)(n + 32) )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(n + 8));
                          *(_WORD *)v14 |= 1u;
                          *(_QWORD *)(v14 + 8) = n;
                        }
                      }
                      if ( (gDebugger & 0xD0) != 0 )
                      {
                        ConPrintf("=");
                        PrintObject(v14);
                      }
                    }
                  }
                  if ( (gdwfAMLI & 4) != 0
                    && _InterlockedExchangeAdd((volatile signed __int32 *)(v95 + 112), 0xFFFFFFFF) == 1 )
                  {
                    *(_WORD *)(v95 + 64) |= 4u;
                    if ( (*(_WORD *)(v95 + 64) & 0x40) == 0 )
                      FreeNameSpaceObjects(v95);
                  }
                  if ( (gdwfAMLI & 4) != 0 )
                  {
                    a1 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)0x70, 0xFFFFFFFF);
                    if ( (_DWORD)a1 == 1 )
                    {
                      a1 = 0LL;
                      MEMORY[0x40] |= 4u;
                      if ( (MEMORY[0x40] & 0x40) == 0 )
                        FreeNameSpaceObjects(0LL);
                    }
                  }
LABEL_29:
                  v12 = NameSpaceObjectNoLock;
                  goto LABEL_30;
                }
                v6 = *v84;
                v86 = &Src + (unsigned int)a1;
                v22 = (unsigned int)(256 - a1);
                if ( v22 - 1 <= 0x7FFFFFFE )
                  break;
                if ( 256 != (_DWORD)a1 )
                  goto LABEL_120;
LABEL_121:
                *v84 += 4LL;
                a1 = (unsigned int)(a1 + 4);
                if ( !--v85 )
                {
                  v12 = 0;
                  goto LABEL_123;
                }
                v167 = a1 + 1;
                if ( (unsigned int)(a1 + 1) < 0x100 )
                {
                  RtlStringCchCopyA(&Src + (unsigned int)a1, (unsigned int)(256 - a1), ".");
                  LODWORD(a1) = v167;
                }
              }
              v87 = 4 - v22;
              v6 -= (__int64)v86;
              while ( v87 + v22 )
              {
                v88 = v86[v6];
                if ( !v88 )
                  break;
                *v86++ = v88;
                if ( !--v22 )
                  goto LABEL_359;
              }
              if ( v22 )
                goto LABEL_120;
LABEL_359:
              --v86;
LABEL_120:
              *v86 = 0;
              goto LABEL_121;
            }
            *v84 = v22 + 1;
            v85 = *(unsigned __int8 *)(v22 + 1);
            *v84 = v22 + 2;
            if ( v85 )
              goto LABEL_112;
          }
          else
          {
            *v10 = (const void *)(v22 + 1);
          }
          v12 = 0;
          goto LABEL_123;
        }
        switch ( v15 )
        {
          case 'B':
            *(_WORD *)(v14 + 2) = 1;
            *(_QWORD *)(v14 + 16) = 0LL;
            *(_BYTE *)(v14 + 16) = *(_BYTE *)*v10;
            *v10 = (char *)*v10 + 1;
            if ( (gDebugger & 0xD0) == 0 )
              goto LABEL_218;
            ConPrintf("0x%I64x");
            goto LABEL_342;
          case 'D':
            v74 = ParseInteger(v10, v14, 4LL, -1LL);
            goto LABEL_84;
          case 'N':
            a1 = v4[15];
            v117 = *(unsigned __int8 *)a1;
            v118 = (__int64)*(&OpcodeTable + v117);
            if ( !v118 || (*(_DWORD *)(v118 + 28) & 0x20) == 0 )
            {
              LogError(3222536193LL, v117, 1LL, -1LL);
              AcpiDiagTraceAmlError(v4, 3222536193LL);
              PrintDebugMessage(132, *(unsigned __int8 *)v4[15], v4[15], 0, 0LL);
              v12 = -1072431103;
              goto LABEL_332;
            }
            if ( (_BYTE)v117 == 92 )
            {
              RtlStringCchCopyA(&pszDest, 0x100uLL, "\\");
              ++v4[15];
LABEL_279:
              v12 = ParseNameTail(v4, v4 + 15, &pszDest);
              NameSpaceObjectNoLock = v12;
              goto LABEL_208;
            }
            if ( (_BYTE)v117 == 94 )
            {
              RtlStringCchCopyA(&pszDest, 0x100uLL, "^");
              ++v4[15];
              v160 = &v179;
              v161 = (_BYTE *)v4[15];
              v162 = 1LL;
              do
              {
                v163 = v161;
                if ( *v161 != 94 )
                  break;
                ++v161;
                *v160++ = 94;
                v4[15] = v161;
                v162 = (unsigned int)(v162 + 1);
                v163 = v161;
              }
              while ( (unsigned int)v162 < 0xFF );
              *(&pszDest + v162) = 0;
              if ( *v163 == 94 )
              {
                LogError(3221225734LL, v161, v160, v159);
                AcpiDiagTraceAmlError(v4, 3221225734LL);
                PrintDebugMessage(129, (unsigned int)&pszDest, 0, 0, 0LL);
                v12 = -1073741562;
                goto LABEL_332;
              }
              goto LABEL_279;
            }
            pszDest = 0;
            NameSpaceObjectNoLock = 0;
            v119 = -1LL;
            do
              ++v119;
            while ( *(&pszDest + v119) );
            v120 = *(_BYTE *)a1;
            if ( *(_BYTE *)a1 )
            {
              if ( v120 != 47 )
              {
                if ( v120 == 46 )
                {
                  v121 = 2;
                  v4[15] = a1 + 1;
                }
                else
                {
                  v121 = 1;
                }
                while ( 1 )
                {
LABEL_197:
                  if ( (unsigned __int64)(unsigned int)v119 + 4 >= 0x100 )
                  {
                    LogError(3221225734LL, v117, v5, v6);
                    AcpiDiagTraceAmlError(v4, 3221225734LL);
                    PrintDebugMessage(130, (unsigned int)&pszDest, 0, 0, 0LL);
                    v12 = -1073741562;
                    NameSpaceObjectNoLock = -1073741562;
                    goto LABEL_208;
                  }
                  v5 = v4[15];
                  a1 = (__int64)(&pszDest + (unsigned int)v119);
                  v117 = (unsigned int)(256 - v119);
                  if ( (unsigned __int64)(v117 - 1) <= 0x7FFFFFFE )
                    break;
                  if ( 256 != (_DWORD)v119 )
                    goto LABEL_205;
LABEL_206:
                  v4[15] += 4LL;
                  LODWORD(v119) = v119 + 4;
                  if ( !--v121 )
                  {
                    v12 = 0;
                    goto LABEL_208;
                  }
                  v153 = v119 + 1;
                  if ( (unsigned int)(v119 + 1) < 0x100 )
                  {
                    RtlStringCchCopyA(&pszDest + (unsigned int)v119, (unsigned int)(256 - v119), ".");
                    LODWORD(v119) = v153;
                  }
                }
                v6 = 4 - v117;
                v5 -= a1;
                while ( v6 + v117 )
                {
                  v122 = *(_BYTE *)(v5 + a1);
                  if ( !v122 )
                    break;
                  *(_BYTE *)a1++ = v122;
                  if ( !--v117 )
                    goto LABEL_326;
                }
                if ( v117 )
                  goto LABEL_205;
LABEL_326:
                --a1;
LABEL_205:
                *(_BYTE *)a1 = 0;
                goto LABEL_206;
              }
              v4[15] = a1 + 1;
              v121 = *(unsigned __int8 *)(a1 + 1);
              v4[15] = a1 + 2;
              if ( v121 )
                goto LABEL_197;
            }
            else
            {
              v4[15] = a1 + 1;
            }
            v12 = 0;
LABEL_208:
            if ( v12 )
              goto LABEL_30;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("%s");
            *(_WORD *)(v14 + 2) = 2;
            v123 = -1LL;
            while ( *(&pszDest + ++v123) != 0 )
              ;
            *(_DWORD *)(v14 + 24) = v123 + 1;
            v125 = (void *)HeapAlloc(gpheapGlobal, 1381258056LL);
            *(_QWORD *)(v14 + 32) = v125;
            if ( v125 )
            {
              memmove(v125, &pszDest, *(unsigned int *)(v14 + 24));
              goto LABEL_30;
            }
            LogError(3221225626LL, v126, v127, v128);
            AcpiDiagTraceAmlError(v4, 3221225626LL);
            PrintDebugMessage(131, (unsigned int)&pszDest, 0, 0, 0LL);
            v12 = -1073741670;
LABEL_332:
            NameSpaceObjectNoLock = v12;
            goto LABEL_30;
          case 'O':
            a1 = *(unsigned __int8 *)*v10;
            *v10 = (char *)*v10 + 1;
            *(_WORD *)(v14 + 2) = 1;
            *(_QWORD *)(v14 + 16) = 0LL;
            if ( (_BYTE)a1 )
            {
              if ( (unsigned int)a1 >= 0xF && (unsigned int)a1 < 0xFF )
                goto LABEL_226;
              if ( (_DWORD)a1 == 12 )
              {
                a1 = *(unsigned int *)*v10;
                *(_DWORD *)(v14 + 16) = a1;
                *v10 = (char *)*v10 + 4;
                goto LABEL_259;
              }
              if ( (unsigned int)a1 <= 0xC )
              {
                switch ( (_DWORD)a1 )
                {
                  case 1:
                    *(_QWORD *)(v14 + 16) = 1LL;
                    if ( (gDebugger & 0xD0) == 0 )
                      goto LABEL_260;
                    ConPrintf("One");
                    goto LABEL_334;
                  case 0xA:
                    a1 = *(unsigned __int8 *)*v10;
                    *(_BYTE *)(v14 + 16) = a1;
                    *v10 = (char *)*v10 + 1;
                    goto LABEL_259;
                  case 0xB:
                    a1 = *(unsigned __int16 *)*v10;
                    *(_WORD *)(v14 + 16) = a1;
                    *v10 = (char *)*v10 + 2;
                    goto LABEL_259;
                }
                goto LABEL_226;
              }
              if ( (_DWORD)a1 == 14 )
              {
                a1 = *(_QWORD *)*v10;
                *(_QWORD *)(v14 + 16) = a1;
                *v10 = (char *)*v10 + 8;
LABEL_259:
                if ( (gDebugger & 0xD0) == 0 )
                {
LABEL_260:
                  v12 = 0;
                  NameSpaceObjectNoLock = 0;
                  goto LABEL_32;
                }
                ConPrintf("0x%I64x");
LABEL_334:
                v7 = 2;
                v10 = (const void **)(v4 + 15);
                v5 = 1LL;
                goto LABEL_260;
              }
              if ( (_DWORD)a1 == 255 )
              {
                v166 = IsCompatableDSDTRevision();
                a1 = 0xFFFFFFFFLL;
                if ( v166 )
                  a1 = -1LL;
                *(_QWORD *)(v14 + 16) = a1;
                if ( (gDebugger & 0xD0) != 0 )
                  ConPrintf("Ones");
                v12 = 0;
                NameSpaceObjectNoLock = 0;
                goto LABEL_30;
              }
LABEL_226:
              *v10 = (char *)*v10 - 1;
              LOBYTE(v6) = 1;
              NameSpaceObjectNoLock = ParseString((__int64)v4, v10, v14, v6);
              v12 = NameSpaceObjectNoLock;
              v10 = (const void **)(v4 + 15);
              if ( NameSpaceObjectNoLock == -1072431103 )
              {
                a1 = *(unsigned __int8 *)*v10;
                if ( (unsigned __int8)(a1 - 17) <= 2u )
                {
                  v134 = PushTerm(
                           (_DWORD)v4,
                           (unsigned int)*v10,
                           v13,
                           (unsigned int)*(&OpcodeTable + (unsigned __int8)a1),
                           v14);
                  ++v4[15];
                  v10 = (const void **)(v4 + 15);
                  v12 = v134;
                  NameSpaceObjectNoLock = v134;
                }
              }
LABEL_31:
              v7 = 2;
              v5 = 1LL;
LABEL_32:
              if ( v12 )
                return NameSpaceObjectNoLock;
              goto LABEL_33;
            }
            *(_QWORD *)(v14 + 16) = 0LL;
            if ( (gDebugger & 0xD0) != 0 )
            {
              ConPrintf("Zero");
LABEL_342:
              v7 = 2;
              v10 = (const void **)(v4 + 15);
              v5 = 1LL;
            }
LABEL_218:
            v12 = 0;
            NameSpaceObjectNoLock = 0;
LABEL_33:
            if ( v3 != v4[52] )
              return NameSpaceObjectNoLock;
            v11 = *(_DWORD *)(v3 + 72);
            v6 = -1LL;
            if ( v11 >= *(_DWORD *)(v3 + 76) )
              goto LABEL_35;
            continue;
          case 'S':
            v74 = ParseSuperName(v4, v14, 0LL, *(_QWORD *)(v3 + 48));
            goto LABEL_84;
          case 'W':
            v74 = ParseInteger(v10, v14, 2LL, -1LL);
LABEL_84:
            v12 = v74;
            NameSpaceObjectNoLock = v74;
            goto LABEL_30;
          case 's':
            LOBYTE(v5) = 1;
            v12 = ParseSuperName(v4, v14, v5, *(_QWORD *)(v3 + 48));
            NameSpaceObjectNoLock = v12;
            goto LABEL_30;
          default:
            LogError(3222536195LL, 0x1C0000000uLL, 1LL, -1LL);
            AcpiDiagTraceAmlError(v4, 3222536195LL);
            PrintDebugMessage(121, (char)v15, 0, 0, 0LL);
            v12 = -1072431101;
            NameSpaceObjectNoLock = -1072431101;
            goto LABEL_30;
        }
      }
    }
    if ( v12 )
      return NameSpaceObjectNoLock;
LABEL_35:
    if ( v3 != v4[52] )
      return NameSpaceObjectNoLock;
    v9 = *(_DWORD *)(v3 + 76);
    v11 = *(_DWORD *)(v3 + 72);
    if ( v11 >= v9 )
      break;
    v6 = -1LL;
  }
  ++*(_DWORD *)(v3 + 16);
LABEL_38:
  a2 = *(_QWORD *)(v3 + 56);
  ++*(_DWORD *)(v3 + 16);
  if ( *(int *)(a2 + 28) >= 0 )
    goto LABEL_39;
  v168 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, _QWORD *))(a2 + 32);
  if ( !v168 )
    goto LABEL_39;
  NameSpaceObjectNoLock = v168(
                            12LL,
                            1LL,
                            *(unsigned int *)(a2 + 8),
                            *(_QWORD *)(v3 + 64) + 120LL,
                            *(_DWORD *)(a2 + 40),
                            v4);
  if ( NameSpaceObjectNoLock != 259 )
    goto LABEL_39;
  return 32772;
}
