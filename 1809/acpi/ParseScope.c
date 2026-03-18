/*
 * XREFs of ParseScope @ 0x1C0008310
 * Callers:
 *     <none>
 * Callees:
 *     ParseString @ 0x1C00022CC (ParseString.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     CopyObjData @ 0x1C000B268 (CopyObjData.c)
 *     ParseNameObj @ 0x1C0021368 (ParseNameObj.c)
 *     ParseIntObj @ 0x1C00221F4 (ParseIntObj.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 *     PrintIndent @ 0x1C00643FC (PrintIndent.c)
 *     PrintObject @ 0x1C0064440 (PrintObject.c)
 */

__int64 __fastcall ParseScope(_QWORD *a1, __int64 a2, __int64 a3, PVOID *a4)
{
  unsigned int v4; // edi
  int v7; // eax
  int v8; // eax
  const void **v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID *v14; // rax
  __int64 v15; // r15
  __int64 v16; // r12
  PVOID v17; // r8
  char *v18; // rsi
  unsigned __int8 v19; // al
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int v33; // eax
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rsi
  _QWORD *v38; // rbx
  __int64 v39; // r8
  _QWORD *v40; // rax
  _QWORD *i; // rdx
  _QWORD *v42; // rcx
  _QWORD *v43; // r9
  __int64 v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // r9
  _QWORD *v47; // rbx
  __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // r10
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rbx
  __int64 v64; // r9
  __int64 v65; // rcx
  _QWORD *v66; // rax

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
      PrintIndent(a1, a2, a3, a4);
      ConPrintf("{");
      ++dword_1C0080764;
      *(_DWORD *)(a2 + 16) |= 0x10000u;
      v33 = *(_DWORD *)(a2 + 16);
    }
    else
    {
      v33 = *(_DWORD *)(a2 + 16);
    }
    *(_DWORD *)(a2 + 16) = v33 + 1;
  }
  v9 = (const void **)(a1 + 15);
  v10 = -1LL;
  a4 = &qword_1C0080840;
  while ( 1 )
  {
    if ( v4 == 32769 )
    {
LABEL_89:
      *v9 = *(const void **)(a2 + 32);
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
LABEL_90:
      v56 = 0;
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) == 0 )
        v56 = v4;
      v4 = v56;
LABEL_67:
      ++*(_DWORD *)(a2 + 16);
LABEL_48:
      if ( (gDebugger & 0xD0) != 0 )
      {
        --dword_1C0080764;
        PrintIndent(a1, -1LL, a3, a4);
        ConPrintf("}");
      }
      v34 = a1[10];
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v34 + 64) |= 4u;
        if ( (*(_WORD *)(v34 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v34);
      }
      a1[10] = *(_QWORD *)(a2 + 48);
      v35 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(a2 + 48) = 0LL;
      a1[11] = v35;
      a1[40] = *(_QWORD *)(a2 + 64);
      v36 = *(_QWORD *)(a2 + 40);
      if ( v36 )
        a1[15] = v36;
      v37 = (_QWORD *)a1[52];
      v38 = v37 - 2;
      a1[52] = v37[1];
      *((_DWORD *)v37 - 4) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v39 = *(v37 - 1);
      v40 = *(_QWORD **)(v39 + 40);
      for ( i = (_QWORD *)(v39 + 40); v40 != i; v40 = (_QWORD *)*v40 )
      {
        if ( v37 < v40 )
          break;
      }
      v42 = (_QWORD *)v40[1];
      if ( (_QWORD *)*v42 == v40 )
      {
        v37[1] = v42;
        *v37 = v40;
        *v42 = v37;
        v40[1] = v37;
        v43 = (_QWORD *)*v37;
        v44 = *v37 - 16LL;
        if ( (_QWORD *)*v37 != i )
        {
          v50 = *((unsigned int *)v38 + 1);
          if ( (_QWORD *)v44 == (_QWORD *)((char *)v38 + v50) )
          {
            *((_DWORD *)v38 + 1) = v50 + *(_DWORD *)(v44 + 4);
            v51 = *v43;
            if ( *(_QWORD **)(*v43 + 8LL) != v43 )
              goto LABEL_125;
            v52 = (_QWORD *)v43[1];
            if ( (_QWORD *)*v52 != v43 )
              goto LABEL_125;
            *v52 = v51;
            *(_QWORD *)(v51 + 8) = v52;
          }
        }
        v45 = (_QWORD *)v38[3];
        v46 = v45 - 2;
        if ( v45 != i )
        {
          v54 = *((unsigned int *)v46 + 1);
          if ( v38 == (_QWORD *)((char *)v46 + v54) )
          {
            *((_DWORD *)v46 + 1) = *((_DWORD *)v38 + 1) + v54;
            v65 = *v37;
            if ( *(_QWORD **)(*v37 + 8LL) != v37 )
              goto LABEL_125;
            v66 = (_QWORD *)v37[1];
            if ( (_QWORD *)*v66 != v37 )
              goto LABEL_125;
            *v66 = v65;
            v38 = v46;
            *(_QWORD *)(v65 + 8) = v66;
          }
        }
        if ( *(_QWORD *)(v39 + 32) > (unsigned __int64)v38 + *((unsigned int *)v38 + 1) )
        {
LABEL_61:
          KeReleaseSpinLock(&gmutHeap, NewIrql);
          return v4;
        }
        *(_QWORD *)(v39 + 32) = v38;
        v47 = v38 + 2;
        v48 = *v47;
        if ( *(_QWORD **)(*v47 + 8LL) == v47 )
        {
          v49 = (_QWORD *)v47[1];
          if ( (_QWORD *)*v49 == v47 )
          {
            *v49 = v48;
            *(_QWORD *)(v48 + 8) = v49;
            goto LABEL_61;
          }
        }
      }
LABEL_125:
      __fastfail(3u);
    }
    if ( v4 == 32774 )
      goto LABEL_118;
    while ( (unsigned __int64)*v9 < *(_QWORD *)(a2 + 32) )
    {
      qword_1C0080770 = (__int64)*v9;
      if ( (gDebugger & 0xD0) != 0 )
      {
        v57 = *(unsigned int *)(a2 + 16);
        if ( (v57 & 0x10000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v57 & 0xFFFEFFFF;
        }
        else if ( (gDebugger & 0x80u) != 0 )
        {
          _InterlockedAnd(&gDebugger, 0xFFFFFF7F);
          AMLIDebugger(v57, -1LL, a3, &qword_1C0080840);
          v10 = -1LL;
          a4 = &qword_1C0080840;
        }
      }
      if ( (gDebugger & 0xD0) != 0 && (unsigned __int8)(*(_BYTE *)*v9 - 18) > 1u )
      {
        PrintIndent(a1, -1LL, a3, &qword_1C0080840);
        v10 = -1LL;
        a4 = &qword_1C0080840;
      }
      v11 = *(_QWORD *)(a2 + 72);
      if ( (*(_BYTE *)v11 & 1) != 0 )
      {
        v55 = *(_QWORD *)(v11 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 8), 0xFFFFFFFF) != 1 || (*(_BYTE *)v55 & 8) == 0 )
          goto LABEL_13;
        FreeData(v55, -1LL, a3, (__int64)&qword_1C0080840);
LABEL_88:
        a4 = &qword_1C0080840;
        goto LABEL_13;
      }
      if ( *(_QWORD *)(v11 + 32) )
      {
        if ( *(int *)(v11 + 8) > 0 )
        {
          *(_WORD *)v11 |= 8u;
          goto LABEL_13;
        }
        if ( *(_WORD *)(v11 + 2) == 4 )
          FreeDataBuffs(*(_QWORD *)(v11 + 32) + 8LL, **(_DWORD **)(v11 + 32));
        FreeObjData(v11, v10, a3, (__int64)a4);
        goto LABEL_88;
      }
LABEL_13:
      v12 = 0LL;
      *(_QWORD *)v11 = 0LL;
      v13 = 0LL;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
      v14 = (PVOID *)&unk_1C00807A0;
      v15 = *(_QWORD *)(a2 + 72);
      v16 = *(_QWORD *)(a2 + 32);
      v17 = (PVOID)*v9;
      do
      {
        if ( v17 == *v14 )
          break;
        v12 = (unsigned int)(v12 + 1);
        ++v13;
        v14 += 2;
      }
      while ( (__int64)v14 < (__int64)&qword_1C0080840 );
      if ( (_DWORD)v12 != 10 && (dword_1C0080798[4 * v13] & 1) != 0 && (_DWORD)v12 != -1 )
      {
        ConPrintf("\nHit Breakpoint %d.\n");
        AMLIDebugger(v59, v58, v60, v61);
      }
      v18 = (char *)*v9;
      v19 = *(_BYTE *)*v9;
      if ( v19 == 91 )
      {
        v20 = 0LL;
        *v9 = v18 + 1;
        v53 = &ExOpcodeTable;
        if ( &atMutex )
        {
          while ( (unsigned __int8)v18[1] != *(_DWORD *)v53 )
          {
            v53 += 2;
            if ( !v53[1] )
              goto LABEL_19;
          }
          v20 = v53[1];
        }
      }
      else
      {
        v20 = (__int64)*(&OpcodeTable + v19);
      }
LABEL_19:
      if ( !v20 )
      {
        LogError(3222536193LL, v12, v17, a4);
        AcpiDiagTraceAmlError(a1, 3222536193LL);
        PrintDebugMessage(134, *(unsigned __int8 *)*v9, (unsigned int)*v9, 0, 0LL);
        v4 = -1072431103;
        goto LABEL_117;
      }
      v21 = *(_DWORD *)(v20 + 28);
      if ( (v21 & 8) != 0 )
      {
        v4 = ParseIntObj(a1, v9, v15, 0LL);
      }
      else if ( (v21 & 0x10) != 0 )
      {
        v4 = ParseString((__int64)a1, v9, v15, 0LL);
      }
      else if ( (v21 & 2) != 0 )
      {
        v4 = 0;
        v62 = a1[12];
        v63 = (unsigned int)*(unsigned __int8 *)*v9 - 104;
        if ( (unsigned int)v63 < *(_DWORD *)(v62 + 60) )
        {
          CopyObjData(v15, *(_QWORD *)(v62 + 64) + 40 * v63);
          *v9 = (char *)*v9 + 1;
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Arg%d=");
            PrintObject(v15);
          }
        }
        else
        {
          LogError(3222536197LL, v62, v17, a4);
          AcpiDiagTraceAmlError(a1, 3222536197LL);
          PrintDebugMessage(122, v63, 0, 0, 0LL);
          v4 = -1072431099;
        }
      }
      else
      {
        if ( (v21 & 4) != 0 )
        {
          v64 = (unsigned int)*(unsigned __int8 *)*v9 - 96;
          CopyObjData(v15, a1[12] + 8 * (v64 + 4 * v64 + 9));
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Local%d=");
            PrintObject(v15);
          }
          *v9 = (char *)*v9 + 1;
          v4 = 0;
          goto LABEL_35;
        }
        if ( (v21 & 0x20) != 0 )
        {
          v4 = ParseNameObj(a1, v15, v17, a4);
        }
        else
        {
          if ( (v21 & 0x40) != 0 )
          {
            LogError(3222536198LL, v12, v17, a4);
            AcpiDiagTraceAmlError(a1, 3222536198LL);
            PrintDebugMessage(133, 0, 0, 0, 0LL);
            v4 = -1072431098;
LABEL_117:
            v10 = -1LL;
            a4 = &qword_1C0080840;
            break;
          }
          *v9 = (char *)*v9 + 1;
          v22 = HeapAlloc(a1 + 60, 1297237576LL);
          v25 = v22;
          if ( v22 )
          {
            v4 = 0;
            *(_QWORD *)(v22 + 8) = a1[52];
            a1[52] = v22;
            *(_DWORD *)v22 = 1297237332;
            *(_QWORD *)(v22 + 24) = ParseTerm;
            *(_QWORD *)(v22 + 32) = v18;
            *(_QWORD *)(v22 + 48) = v16;
            *(_QWORD *)(v22 + 56) = v20;
            *(_QWORD *)(v22 + 88) = v15;
            v26 = *(_QWORD *)(v20 + 16);
            if ( v26 )
            {
              v27 = -1LL;
              do
                ++v27;
              while ( *(_BYTE *)(v26 + v27) );
            }
            else
            {
              LODWORD(v27) = 0;
            }
            *(_DWORD *)(v25 + 76) = v27;
            if ( (_DWORD)v27 )
            {
              v28 = (void *)HeapAlloc(a1[40], 1413563464LL);
              *(_QWORD *)(v25 + 80) = v28;
              if ( v28 )
              {
                memset(v28, 0, 40LL * *(unsigned int *)(v25 + 76));
              }
              else
              {
                LogError(3221225626LL, v29, v30, v31);
                AcpiDiagTraceAmlError(a1, 3221225626LL);
                PrintDebugMessage(154, 0, 0, 0, 0LL);
                v4 = -1073741670;
              }
            }
          }
          else
          {
            LogError(3222536194LL, v23, a3, v24);
            AcpiDiagTraceAmlError(a1, 3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, 0LL);
            v4 = -1072431102;
          }
          v9 = (const void **)(a1 + 15);
        }
      }
      if ( v4 )
        goto LABEL_117;
LABEL_35:
      a4 = &qword_1C0080840;
      v10 = -1LL;
      if ( a2 != a1[52] )
        break;
    }
    if ( v4 == 32769 )
      goto LABEL_89;
    if ( v4 == 32774 )
    {
LABEL_118:
      *v9 = *(const void **)(a2 + 32);
      goto LABEL_90;
    }
    if ( v4 == 32772 || a2 != a1[52] )
      return v4;
    if ( v4 || (unsigned __int64)*v9 >= *(_QWORD *)(a2 + 32) )
      goto LABEL_67;
  }
}
