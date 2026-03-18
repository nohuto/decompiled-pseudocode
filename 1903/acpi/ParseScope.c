/*
 * XREFs of ParseScope @ 0x1C000DDB0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     ParseIntObj @ 0x1C001162C (ParseIntObj.c)
 *     ParseNameObj @ 0x1C0011FCC (ParseNameObj.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     ParseString @ 0x1C001ABC0 (ParseString.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     CopyObjData @ 0x1C002A298 (CopyObjData.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 *     PrintIndent @ 0x1C00663D8 (PrintIndent.c)
 *     PrintObject @ 0x1C006641C (PrintObject.c)
 */

__int64 __fastcall ParseScope(__int64 a1, __int64 a2, __int64 a3, PVOID *a4)
{
  unsigned int v4; // edi
  int v7; // eax
  int v8; // eax
  unsigned __int8 **v9; // r14
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // rcx
  PVOID *v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r8
  __int64 v17; // rsi
  unsigned __int8 v18; // al
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  void *v25; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rsi
  _QWORD *v32; // rbx
  __int64 v33; // r8
  _QWORD *v34; // rax
  _QWORD *i; // rdx
  _QWORD *v36; // rcx
  _QWORD *v37; // r9
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // r9
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // r10
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // r9
  int v58; // ebx
  __int64 v59; // r9
  __int64 v60; // rcx
  _QWORD *v61; // rax

  v4 = a3;
  if ( !(_DWORD)a3 || (_DWORD)a3 == 32769 || (_DWORD)a3 == 32774 )
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
  else
    v7 = 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return v4;
      goto LABEL_48;
    }
  }
  else
  {
    if ( (gDebugger & 0xD0) != 0 )
    {
      ((void (*)(void))PrintIndent)();
      ConPrintf("{");
      ++dword_1C0082754;
      v27 = *(_DWORD *)(a2 + 16) | 0x10000;
    }
    else
    {
      v27 = *(_DWORD *)(a2 + 16);
    }
    *(_DWORD *)(a2 + 16) = v27 + 1;
  }
  v9 = (unsigned __int8 **)(a1 + 120);
  a4 = &qword_1C0082830;
  while ( 1 )
  {
    if ( v4 == 32769 )
    {
LABEL_89:
      *v9 = *(unsigned __int8 **)(a2 + 32);
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
LABEL_90:
      v50 = 0;
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) == 0 )
        v50 = v4;
      v4 = v50;
LABEL_64:
      ++*(_DWORD *)(a2 + 16);
LABEL_48:
      if ( (gDebugger & 0xD0) != 0 )
      {
        --dword_1C0082754;
        PrintIndent(a1, -1LL, a3, a4);
        ConPrintf("}");
      }
      v28 = *(_QWORD *)(a1 + 80);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v28 + 64) |= 4u;
        if ( (*(_WORD *)(v28 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v28);
      }
      *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 48);
      v29 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(a2 + 48) = 0LL;
      *(_QWORD *)(a1 + 88) = v29;
      *(_QWORD *)(a1 + 320) = *(_QWORD *)(a2 + 64);
      v30 = *(_QWORD *)(a2 + 40);
      if ( v30 )
        *(_QWORD *)(a1 + 120) = v30;
      v31 = *(_QWORD **)(a1 + 416);
      v32 = v31 - 2;
      *(_QWORD *)(a1 + 416) = v31[1];
      *((_DWORD *)v31 - 4) = 0;
      byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v33 = *(v31 - 1);
      v34 = *(_QWORD **)(v33 + 40);
      for ( i = (_QWORD *)(v33 + 40); v34 != i; v34 = (_QWORD *)*v34 )
      {
        if ( v31 < v34 )
          break;
      }
      v36 = (_QWORD *)v34[1];
      if ( (_QWORD *)*v36 == v34 )
      {
        v31[1] = v36;
        *v31 = v34;
        *v36 = v31;
        v34[1] = v31;
        v37 = (_QWORD *)*v31;
        v38 = *v31 - 16LL;
        if ( (_QWORD *)*v31 != i )
        {
          v45 = *((unsigned int *)v32 + 1);
          if ( (_QWORD *)v38 == (_QWORD *)((char *)v32 + v45) )
          {
            *((_DWORD *)v32 + 1) = v45 + *(_DWORD *)(v38 + 4);
            v46 = *v37;
            if ( *(_QWORD **)(*v37 + 8LL) != v37 )
              goto LABEL_124;
            v47 = (_QWORD *)v37[1];
            if ( (_QWORD *)*v47 != v37 )
              goto LABEL_124;
            *v47 = v46;
            *(_QWORD *)(v46 + 8) = v47;
          }
        }
        v39 = (_QWORD *)v32[3];
        v40 = v39 - 2;
        if ( v39 != i )
        {
          v48 = *((unsigned int *)v40 + 1);
          if ( v32 == (_QWORD *)((char *)v40 + v48) )
          {
            *((_DWORD *)v40 + 1) = *((_DWORD *)v32 + 1) + v48;
            v60 = *v31;
            if ( *(_QWORD **)(*v31 + 8LL) != v31 )
              goto LABEL_124;
            v61 = (_QWORD *)v31[1];
            if ( (_QWORD *)*v61 != v31 )
              goto LABEL_124;
            *v61 = v60;
            v32 = v40;
            *(_QWORD *)(v60 + 8) = v61;
          }
        }
        if ( *(_QWORD *)(v33 + 32) > (unsigned __int64)v32 + *((unsigned int *)v32 + 1) )
        {
LABEL_61:
          KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
          return v4;
        }
        *(_QWORD *)(v33 + 32) = v32;
        v41 = v32 + 2;
        v42 = *v41;
        if ( *(_QWORD **)(*v41 + 8LL) == v41 )
        {
          v43 = (_QWORD *)v41[1];
          if ( (_QWORD *)*v43 == v41 )
          {
            *v43 = v42;
            *(_QWORD *)(v42 + 8) = v43;
            goto LABEL_61;
          }
        }
      }
LABEL_124:
      __fastfail(3u);
    }
    if ( v4 == 32774 )
      goto LABEL_117;
    while ( (unsigned __int64)*v9 < *(_QWORD *)(a2 + 32) )
    {
      qword_1C0082760 = (__int64)*v9;
      if ( (gDebugger & 0xD0) != 0 )
      {
        v51 = *(unsigned int *)(a2 + 16);
        if ( (v51 & 0x10000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v51 & 0xFFFEFFFF;
        }
        else if ( (gDebugger & 0x80u) != 0 )
        {
          _InterlockedAnd(&gDebugger, 0xFFFFFF7F);
          AMLIDebugger(v51, -1LL, a3, &qword_1C0082830);
          a4 = &qword_1C0082830;
        }
      }
      if ( (gDebugger & 0xD0) != 0 && (unsigned __int8)(**v9 - 18) > 1u )
      {
        PrintIndent(a1, -1LL, a3, &qword_1C0082830);
        a4 = &qword_1C0082830;
      }
      v10 = *(_QWORD *)(a2 + 72);
      if ( (*(_BYTE *)v10 & 1) != 0 )
      {
        v49 = *(_QWORD *)(v10 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 8), 0xFFFFFFFF) != 1 || (*(_BYTE *)v49 & 8) == 0 )
          goto LABEL_13;
        FreeData((_QWORD *)v49);
      }
      else
      {
        if ( !*(_QWORD *)(v10 + 32) || *(int *)(v10 + 8) > 0 )
          goto LABEL_13;
        if ( *(_WORD *)(v10 + 2) == 4 )
          FreeDataBuffs(*(_QWORD *)(v10 + 32) + 8LL, **(unsigned int **)(v10 + 32));
        FreeObjData(v10);
      }
      a4 = &qword_1C0082830;
LABEL_13:
      v11 = 0;
      *(_QWORD *)v10 = 0LL;
      v12 = 0LL;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_QWORD *)(v10 + 24) = 0LL;
      *(_QWORD *)(v10 + 32) = 0LL;
      v13 = (PVOID *)&unk_1C0082790;
      v14 = *(_QWORD *)(a2 + 72);
      v15 = *(_QWORD *)(a2 + 32);
      v16 = (__int64)*v9;
      do
      {
        if ( (PVOID)v16 == *v13 )
          break;
        ++v11;
        ++v12;
        v13 += 2;
      }
      while ( (__int64)v13 < (__int64)&qword_1C0082830 );
      if ( v11 != 10 && (dword_1C0082788[4 * v12] & 1) != 0 && v11 != -1 )
      {
        ConPrintf("\nHit Breakpoint %d.\n");
        AMLIDebugger(v53, v52, v54, v55);
      }
      v17 = (__int64)*v9;
      v18 = **v9;
      if ( v18 == 91 )
      {
        v19 = 0LL;
        *v9 = (unsigned __int8 *)(v17 + 1);
        v44 = &ExOpcodeTable;
        if ( &atMutex )
        {
          while ( *(unsigned __int8 *)(v17 + 1) != *(_DWORD *)v44 )
          {
            v44 += 2;
            if ( !v44[1] )
              goto LABEL_19;
          }
          v19 = v44[1];
        }
      }
      else
      {
        v19 = (__int64)*(&OpcodeTable + v18);
      }
LABEL_19:
      if ( !v19 )
      {
        LogError(3222536193LL);
        AcpiDiagTraceAmlError(a1, 3222536193LL);
        PrintDebugMessage(134, **v9, (unsigned int)*v9, 0, 0LL);
        v4 = -1072431103;
        goto LABEL_116;
      }
      v20 = *(_DWORD *)(v19 + 28);
      if ( (v20 & 8) != 0 )
      {
        v4 = ParseIntObj(a1, v9, v14, 0LL);
      }
      else if ( (v20 & 0x10) != 0 )
      {
        v4 = ParseString(a1, v9, v14, 0LL);
      }
      else if ( (v20 & 2) != 0 )
      {
        v4 = 0;
        v56 = *(_QWORD *)(a1 + 96);
        v57 = (unsigned int)**v9 - 104;
        v58 = v57;
        if ( (unsigned int)v57 < *(_DWORD *)(v56 + 60) )
        {
          CopyObjData(v14, *(_QWORD *)(v56 + 64) + 40 * v57);
          ++*v9;
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Arg%d=");
            PrintObject(v14);
          }
        }
        else
        {
          LogError(3222536197LL);
          AcpiDiagTraceAmlError(a1, 3222536197LL);
          PrintDebugMessage(122, v58, 0, 0, 0LL);
          v4 = -1072431099;
        }
      }
      else
      {
        if ( (v20 & 4) != 0 )
        {
          v59 = (unsigned int)**v9 - 96;
          CopyObjData(v14, *(_QWORD *)(a1 + 96) + 8 * (v59 + 4 * v59 + 9));
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Local%d=");
            PrintObject(v14);
          }
          ++*v9;
          v4 = 0;
          goto LABEL_35;
        }
        if ( (v20 & 0x20) != 0 )
        {
          v4 = ParseNameObj(a1, v14, v16, a4);
        }
        else
        {
          if ( (v20 & 0x40) != 0 )
          {
            LogError(3222536198LL);
            AcpiDiagTraceAmlError(a1, 3222536198LL);
            PrintDebugMessage(133, 0, 0, 0, 0LL);
            v4 = -1072431098;
LABEL_116:
            a4 = &qword_1C0082830;
            break;
          }
          ++*v9;
          v21 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x60u);
          v22 = v21;
          if ( v21 )
          {
            v4 = 0;
            *(_QWORD *)(v21 + 8) = *(_QWORD *)(a1 + 416);
            *(_QWORD *)(a1 + 416) = v21;
            *(_DWORD *)v21 = 1297237332;
            *(_QWORD *)(v21 + 24) = ParseTerm;
            *(_QWORD *)(v21 + 32) = v17;
            *(_QWORD *)(v21 + 48) = v15;
            *(_QWORD *)(v21 + 56) = v19;
            *(_QWORD *)(v21 + 88) = v14;
            v23 = *(_QWORD *)(v19 + 16);
            if ( v23 )
            {
              v24 = -1LL;
              do
                ++v24;
              while ( *(_BYTE *)(v23 + v24) );
            }
            else
            {
              LODWORD(v24) = 0;
            }
            *(_DWORD *)(v22 + 76) = v24;
            if ( (_DWORD)v24 )
            {
              v25 = (void *)HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1413563464, 40 * (int)v24);
              *(_QWORD *)(v22 + 80) = v25;
              if ( v25 )
              {
                memset(v25, 0, 40LL * *(unsigned int *)(v22 + 76));
              }
              else
              {
                LogError(3221225626LL);
                AcpiDiagTraceAmlError(a1, 3221225626LL);
                PrintDebugMessage(154, 0, 0, 0, 0LL);
                v4 = -1073741670;
              }
            }
          }
          else
          {
            LogError(3222536194LL);
            AcpiDiagTraceAmlError(a1, 3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, 0LL);
            v4 = -1072431102;
          }
          v9 = (unsigned __int8 **)(a1 + 120);
        }
      }
      if ( v4 )
        goto LABEL_116;
LABEL_35:
      a4 = &qword_1C0082830;
      if ( a2 != *(_QWORD *)(a1 + 416) )
        break;
    }
    if ( v4 == 32769 )
      goto LABEL_89;
    if ( v4 == 32774 )
    {
LABEL_117:
      *v9 = *(unsigned __int8 **)(a2 + 32);
      goto LABEL_90;
    }
    if ( v4 == 32772 || a2 != *(_QWORD *)(a1 + 416) )
      return v4;
    if ( v4 || (unsigned __int64)*v9 >= *(_QWORD *)(a2 + 32) )
      goto LABEL_64;
  }
}
