/*
 * XREFs of ParseCall @ 0x1C00065E0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     HeapInsertFreeList @ 0x1C0002D28 (HeapInsertFreeList.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     ParseRelease @ 0x1C0003260 (ParseRelease.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ParseArg @ 0x1C0021B5C (ParseArg.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     PerformNativeMethodCall @ 0x1C00622F8 (PerformNativeMethodCall.c)
 *     MoveObjData @ 0x1C00630E8 (MoveObjData.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

__int64 __fastcall ParseCall(_QWORD *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned int v4; // r14d
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r15
  int v10; // eax
  int v11; // eax
  int v12; // eax
  bool v13; // zf
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rdx
  char v29; // al
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // ecx
  __int64 v35; // rbx
  __int64 v36; // rsi
  _QWORD *v37; // rbx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  KIRQL v40; // al
  unsigned __int64 v41; // rbx
  struct _EX_RUNDOWN_REF *v42; // rsi
  struct _EX_RUNDOWN_REF *v43; // rbx
  unsigned __int64 Count; // r8
  struct _EX_RUNDOWN_REF *v45; // rax
  struct _EX_RUNDOWN_REF *j; // rdx
  struct _EX_RUNDOWN_REF **v47; // rcx
  _QWORD *v48; // r9
  __int64 v49; // rcx
  struct _EX_RUNDOWN_REF *v50; // rax
  struct _EX_RUNDOWN_REF *v51; // r9
  unsigned __int64 v52; // rcx
  __int64 v53; // rbx
  _QWORD *v54; // rdi
  _QWORD *v55; // rbx
  __int64 v56; // r8
  _QWORD *v57; // rax
  _QWORD *i; // rdx
  _QWORD *v59; // rcx
  _QWORD *v60; // r9
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // r9
  _QWORD *v64; // rbx
  __int64 v65; // rdx
  _QWORD *v66; // rax
  unsigned int v68; // ecx
  __int64 v69; // rdx
  __int64 v70; // r8
  int v71; // eax
  __int64 v72; // rax
  struct _EX_RUNDOWN_REF *v73; // rbx
  unsigned __int64 v74; // rcx
  struct _EX_RUNDOWN_REF **v75; // rax
  unsigned int v76; // eax
  __int64 v77; // rsi
  unsigned __int64 v78; // rsi
  __int64 Ptr_high; // r10
  __int64 v80; // rcx
  _QWORD *v81; // rax
  __int64 v82; // r10
  __int64 v83; // rcx
  _QWORD *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  unsigned __int64 v88; // rcx
  struct _EX_RUNDOWN_REF **v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rax
  _DWORD v92[8]; // [rsp+30h] [rbp-148h] BYREF
  __int64 v93; // [rsp+50h] [rbp-128h]
  __int128 v94; // [rsp+58h] [rbp-120h]
  _BYTE v95[40]; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v96[48]; // [rsp+90h] [rbp-E8h] BYREF
  struct _KTIMER Timer; // [rsp+C0h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+100h] [rbp-78h] BYREF
  __int64 v99; // [rsp+188h] [rbp+10h]

  v4 = (unsigned int)a3;
  if ( (_DWORD)a3 )
    v7 = 5;
  else
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 96);
  else
    v9 = 0LL;
  if ( v7 == 5 )
    goto LABEL_24;
  if ( v7 == 2 )
    goto LABEL_74;
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v31 = v11 - 1;
        if ( v31 )
        {
          if ( v31 != 2 )
            return v4;
LABEL_52:
          v54 = (_QWORD *)a1[52];
          v55 = v54 - 2;
          a1[52] = v54[1];
          *((_DWORD *)v54 - 4) = 0;
          NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          v56 = *(v54 - 1);
          v57 = *(_QWORD **)(v56 + 40);
          for ( i = (_QWORD *)(v56 + 40); v57 != i; v57 = (_QWORD *)*v57 )
          {
            if ( v54 < v57 )
              break;
          }
          v59 = (_QWORD *)v57[1];
          if ( (_QWORD *)*v59 == v57 )
          {
            v54[1] = v59;
            *v54 = v57;
            *v59 = v54;
            v57[1] = v54;
            v60 = (_QWORD *)*v54;
            v61 = *v54 - 16LL;
            if ( (_QWORD *)*v54 != i )
            {
              v82 = *((unsigned int *)v55 + 1);
              if ( (_QWORD *)v61 == (_QWORD *)((char *)v55 + v82) )
              {
                *((_DWORD *)v55 + 1) = v82 + *(_DWORD *)(v61 + 4);
                v83 = *v60;
                if ( *(_QWORD **)(*v60 + 8LL) != v60 )
                  goto LABEL_145;
                v84 = (_QWORD *)v60[1];
                if ( (_QWORD *)*v84 != v60 )
                  goto LABEL_145;
                *v84 = v83;
                *(_QWORD *)(v83 + 8) = v84;
              }
            }
            v62 = (_QWORD *)v55[3];
            v63 = v62 - 2;
            if ( v62 != i )
            {
              v85 = *((unsigned int *)v63 + 1);
              if ( v55 == (_QWORD *)((char *)v63 + v85) )
              {
                *((_DWORD *)v63 + 1) = *((_DWORD *)v55 + 1) + v85;
                v90 = *v54;
                if ( *(_QWORD **)(*v54 + 8LL) != v54 )
                  goto LABEL_145;
                v91 = (_QWORD *)v54[1];
                if ( (_QWORD *)*v91 != v54 )
                  goto LABEL_145;
                *v91 = v90;
                v55 = v63;
                *(_QWORD *)(v90 + 8) = v91;
              }
            }
            if ( *(_QWORD *)(v56 + 32) <= (unsigned __int64)v55 + *((unsigned int *)v55 + 1) )
            {
              *(_QWORD *)(v56 + 32) = v55;
              v64 = v55 + 2;
              v65 = *v64;
              if ( *(_QWORD **)(*v64 + 8LL) != v64 )
                goto LABEL_145;
              v66 = (_QWORD *)v64[1];
              if ( (_QWORD *)*v66 != v64 )
                goto LABEL_145;
              *v66 = v65;
              *(_QWORD *)(v65 + 8) = v66;
            }
            KeReleaseSpinLock(&gmutHeap, NewIrql);
            return v4;
          }
LABEL_145:
          __fastfail(3u);
        }
        goto LABEL_21;
      }
LABEL_10:
      v12 = *(_DWORD *)(a2 + 16) + 1;
      v13 = *(_DWORD *)a2 == 1280065859;
      *(_DWORD *)(a2 + 16) = v12;
      if ( v13 && (v12 & 0x80000) != 0 )
      {
        *(_QWORD *)(a2 + 32) = a1[12];
        a1[12] = a2;
        *(_DWORD *)(a2 + 16) |= 0x40000u;
        v4 = PerformNativeMethodCall(0LL, a1, a2);
        if ( v4 == 32772 )
          return v4;
      }
      else
      {
        if ( (v12 & 0x10000) != 0 )
          *(_DWORD *)(a2 + 16) = v12 | 0x20000;
        v14 = (void *)HeapAlloc(a1[40], 1314344776LL);
        v18 = v14;
        if ( v14 )
        {
          memset(v14, 0, 0x40uLL);
          *((_DWORD *)v18 + 4) = 1380865871;
          ExInitializeRundownProtection((PEX_RUNDOWN_REF)v18 + 4);
          KeInitializeSpinLock((PKSPIN_LOCK)v18 + 5);
          byte_1C0080B38 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
          v19 = off_1C007D398;
          if ( *(_UNKNOWN ***)off_1C007D398 == &glistObjOwners )
          {
            *(_QWORD *)v18 = &glistObjOwners;
            *((_QWORD *)v18 + 1) = v19;
            *v19 = v18;
            off_1C007D398 = v18;
            KeReleaseSpinLock(&gmutOwnerList, byte_1C0080B38);
            *(_QWORD *)(a2 + 40) = a1[11];
            v4 = 0;
            v20 = a1[12];
            a1[11] = v18;
            *(_QWORD *)(a2 + 32) = v20;
            a1[12] = a2;
            *(_DWORD *)(a2 + 16) |= 0x40000u;
            v21 = *(_QWORD *)(a2 + 392);
            v22 = *(_QWORD *)(a2 + 48);
            v23 = a1[40];
            v99 = a1[15];
            v24 = *(_QWORD *)(v22 + 96) + *(unsigned int *)(v22 + 88);
            v25 = HeapAlloc(a1 + 60, 1297237576LL);
            v28 = (_QWORD *)v25;
            if ( v25 )
            {
              *(_QWORD *)(v25 + 8) = a1[52];
              a1[52] = v25;
              *(_DWORD *)v25 = 1347371859;
              *(_QWORD *)(v25 + 24) = ParseScope;
              a1[15] = v9 + 194;
              *(_QWORD *)(v25 + 32) = v24;
              *(_QWORD *)(v25 + 40) = v99;
              *(_QWORD *)(v25 + 48) = a1[10];
              v29 = gdwfAMLI;
              a1[10] = v22;
              if ( (v29 & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(v22 + 112));
              v28[7] = a1[11];
              v30 = a1[40];
              a1[11] = v18;
              v28[8] = v30;
              a1[40] = v23;
              v28[9] = v21;
              return v4;
            }
LABEL_123:
            v4 = -1072431102;
            LogError(3222536194LL, 0LL, v26, v27);
            AcpiDiagTraceAmlError(a1, 3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, 0LL);
            return v4;
          }
          goto LABEL_145;
        }
        v4 = -1073741670;
        LogError(3221225626LL, v15, v16, v17);
        AcpiDiagTraceAmlError(0LL, 3221225626LL);
        PrintDebugMessage(113, 0, 0, 0, 0LL);
      }
LABEL_21:
      v32 = *(_DWORD *)(a2 + 16) + 1;
      v13 = *(_DWORD *)a2 == 1280065859;
      *(_DWORD *)(a2 + 16) = v32;
      if ( v13 && (v32 & 0x80000) != 0 )
        v4 = PerformNativeMethodCall(1LL, a1, a2);
LABEL_24:
      v33 = 0;
      v34 = *(_DWORD *)(a2 + 16) + 1;
      *(_DWORD *)(a2 + 16) = v34;
      if ( v4 != 32770 )
        v33 = v4;
      v4 = v33;
      if ( *(_DWORD *)a2 == 1280065859 && (v34 & 0x80000) != 0 )
      {
        if ( (v34 & 0x40000) == 0 )
          goto LABEL_46;
        DupObjData(a1[40], v95, *(_QWORD *)(a2 + 392));
        PerformNativeMethodCall(2LL, a1, a2);
        MoveObjData(*(_QWORD *)(a2 + 392), v95);
      }
      else
      {
        a3 = *(_BYTE **)(a2 + 392);
        if ( (*a3 & 1) != 0 )
        {
          DupObjData(a1[40], v96, a3);
          FreeDataBuffs(*(_QWORD *)(a2 + 392), 1u);
          MoveObjData(*(_QWORD *)(a2 + 392), v96);
        }
        v35 = a2 + 72;
        v36 = 8LL;
        do
        {
          if ( (*(_BYTE *)v35 & 1) != 0 )
          {
            v87 = *(_QWORD *)(v35 + 8);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v87 + 8), 0xFFFFFFFF) == 1
              && (*(_BYTE *)v87 & 8) != 0 )
            {
              FreeData(v87, a2, (__int64)a3, a4);
            }
          }
          else if ( *(_QWORD *)(v35 + 32) )
          {
            if ( *(int *)(v35 + 8) > 0 )
            {
              *(_WORD *)v35 |= 8u;
            }
            else
            {
              if ( *(_WORD *)(v35 + 2) == 4 )
                FreeDataBuffs(*(_QWORD *)(v35 + 32) + 8LL, **(_DWORD **)(v35 + 32));
              FreeObjData(v35, a2, (__int64)a3, a4);
            }
          }
          *(_QWORD *)v35 = 0LL;
          *(_QWORD *)(v35 + 8) = 0LL;
          *(_QWORD *)(v35 + 16) = 0LL;
          *(_QWORD *)(v35 + 24) = 0LL;
          *(_QWORD *)(v35 + 32) = 0LL;
          v35 += 40LL;
          --v36;
        }
        while ( v36 );
        if ( (*(_DWORD *)(a2 + 16) & 0x40000) != 0 )
        {
          v37 = (_QWORD *)a1[11];
          byte_1C0080B38 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
          v38 = *v37;
          if ( *(_QWORD **)(*v37 + 8LL) != v37 )
            goto LABEL_145;
          v39 = (_QWORD *)v37[1];
          if ( (_QWORD *)*v39 != v37 )
            goto LABEL_145;
          *v39 = v38;
          *(_QWORD *)(v38 + 8) = v39;
          KeReleaseSpinLock(&gmutOwnerList, byte_1C0080B38);
          v40 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
          v41 = v37[3];
          if ( v41 )
          {
            do
            {
              ExReleaseSpinLockExclusive(&ACPINamespaceLock, v40);
              v78 = *(_QWORD *)(v41 + 56);
              if ( (gdwfAMLI & 4) != 0 )
                AMLIDereferenceHandleEx(v41 + 120);
              else
                FreeNameSpaceObjects(v41);
              v40 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
              v41 = v78;
            }
            while ( v78 );
          }
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v40);
          v42 = (struct _EX_RUNDOWN_REF *)a1[11];
          if ( (gdwfAMLI & 4) != 0 )
          {
            KeInitializeTimer(&Timer);
            KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, v42);
            KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
            ExWaitForRundownProtectionRelease(v42 + 4);
            KeCancelTimer(&Timer);
            HeapFree(v42);
          }
          else
          {
            v43 = v42 - 2;
            LODWORD(v42[-2].Count) = 0;
            NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
            Count = v42[-1].Count;
            v45 = *(struct _EX_RUNDOWN_REF **)(Count + 40);
            for ( j = (struct _EX_RUNDOWN_REF *)(Count + 40); v45 != j; v45 = (struct _EX_RUNDOWN_REF *)v45->Count )
            {
              if ( v42 < v45 )
                break;
            }
            v47 = (struct _EX_RUNDOWN_REF **)v45[1].Count;
            if ( *v47 != v45 )
              goto LABEL_145;
            v42[1].Count = (unsigned __int64)v47;
            v42->Count = (unsigned __int64)v45;
            *v47 = v42;
            v45[1].Count = (unsigned __int64)v42;
            v48 = (_QWORD *)v42->Count;
            v49 = v42->Count - 16;
            if ( (struct _EX_RUNDOWN_REF *)v42->Count != j )
            {
              Ptr_high = HIDWORD(v43->Ptr);
              if ( (struct _EX_RUNDOWN_REF *)v49 == (struct _EX_RUNDOWN_REF *)((char *)v43 + Ptr_high) )
              {
                HIDWORD(v43->Ptr) = Ptr_high + *(_DWORD *)(v49 + 4);
                v80 = *v48;
                if ( *(_QWORD **)(*v48 + 8LL) != v48 )
                  goto LABEL_145;
                v81 = (_QWORD *)v48[1];
                if ( (_QWORD *)*v81 != v48 )
                  goto LABEL_145;
                *v81 = v80;
                *(_QWORD *)(v80 + 8) = v81;
              }
            }
            v50 = (struct _EX_RUNDOWN_REF *)v43[3].Count;
            v51 = v50 - 2;
            if ( v50 != j )
            {
              v86 = HIDWORD(v51->Ptr);
              if ( v43 == (struct _EX_RUNDOWN_REF *)((char *)v51 + v86) )
              {
                HIDWORD(v51->Ptr) = HIDWORD(v43->Ptr) + v86;
                v88 = v42->Count;
                if ( *(struct _EX_RUNDOWN_REF **)(v42->Count + 8) != v42 )
                  goto LABEL_145;
                v89 = (struct _EX_RUNDOWN_REF **)v42[1].Count;
                if ( *v89 != v42 )
                  goto LABEL_145;
                *v89 = (struct _EX_RUNDOWN_REF *)v88;
                v43 = v51;
                *(_QWORD *)(v88 + 8) = v89;
              }
            }
            if ( *(_QWORD *)(Count + 32) <= (unsigned __int64)v43 + HIDWORD(v43->Ptr) )
            {
              *(_QWORD *)(Count + 32) = v43;
              v73 = v43 + 2;
              v74 = v73->Count;
              if ( *(struct _EX_RUNDOWN_REF **)(v73->Count + 8) != v73 )
                goto LABEL_145;
              v75 = (struct _EX_RUNDOWN_REF **)v73[1].Count;
              if ( *v75 != v73 )
                goto LABEL_145;
              *v75 = (struct _EX_RUNDOWN_REF *)v74;
              *(_QWORD *)(v74 + 8) = v75;
            }
            KeReleaseSpinLock(&gmutHeap, NewIrql);
          }
        }
        else if ( *(_QWORD *)(a2 + 48) )
        {
          goto LABEL_46;
        }
      }
      a1[11] = *(_QWORD *)(a2 + 40);
      a1[12] = *(_QWORD *)(a2 + 32);
LABEL_46:
      v52 = *(_QWORD *)(a2 + 48);
      if ( v52 )
      {
        if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 112), 0xFFFFFFFF) == 1 )
        {
          *(_WORD *)(v52 + 64) |= 4u;
          if ( (*(_WORD *)(v52 + 64) & 0x40) == 0 )
            FreeNameSpaceObjects(v52);
        }
        *(_QWORD *)(a2 + 48) = 0LL;
      }
      v53 = *(_QWORD *)(a2 + 64);
      if ( v53 )
      {
        v76 = *(_DWORD *)(a2 + 60);
        if ( v76 )
        {
          v77 = v76;
          do
          {
            FreeData(v53, a2, (__int64)a3, a4);
            v53 += 40LL;
            --v77;
          }
          while ( v77 );
          v53 = *(_QWORD *)(a2 + 64);
        }
        *(_DWORD *)(v53 - 16) = 0;
        NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        HeapInsertFreeList(*(_QWORD *)(v53 - 8), (unsigned int *)(v53 - 16));
        KeReleaseSpinLock(&gmutHeap, NewIrql);
      }
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
      {
        v93 = v9;
        v92[0] = 1179403602;
        v92[4] = 393216;
        v94 = 0LL;
        ParseRelease((__int64)a1, (__int64)v92, 0);
      }
      goto LABEL_52;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("(");
  }
  v68 = *(_DWORD *)(a2 + 56);
  if ( v68 < *(_DWORD *)(a2 + 60) )
  {
    do
    {
      do
      {
        v69 = v68;
        if ( (gDebugger & 0xD0) != 0 && v68 )
        {
          ConPrintf(",");
          v69 = *(unsigned int *)(a2 + 56);
        }
        v70 = *(_QWORD *)(a2 + 64) + 40LL * (unsigned int)v69;
        v71 = v69 + 1;
        LOBYTE(v69) = 67;
        *(_DWORD *)(a2 + 56) = v71;
        v4 = ParseArg(a1, v69, v70, 0LL);
        if ( v4 || a2 != a1[52] )
          return v4;
        v68 = *(_DWORD *)(a2 + 56);
      }
      while ( v68 < *(_DWORD *)(a2 + 60) );
LABEL_69:
      if ( a2 != a1[52] )
        return v4;
      v68 = *(_DWORD *)(a2 + 56);
    }
    while ( v68 < *(_DWORD *)(a2 + 60) );
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf(")");
    ++*(_DWORD *)(a2 + 16);
LABEL_74:
    ++*(_DWORD *)(a2 + 16);
    if ( !v9 )
    {
      v4 = -1072431101;
      LogError(3222536195LL, a2, a3, a4);
      AcpiDiagTraceAmlError(a1, 3222536195LL);
      PrintDebugMessage(123, 0, 0, 0, 0LL);
      return v4;
    }
    if ( (*(_BYTE *)(v9 + 193) & 8) != 0 )
    {
      v72 = HeapAlloc(a1 + 60, 1297237576LL);
      if ( v72 )
      {
        v4 = 0;
        *(_QWORD *)(v72 + 8) = a1[52];
        a1[52] = v72;
        *(_DWORD *)v72 = 1179730753;
        *(_QWORD *)(v72 + 24) = ParseAcquire;
        *(_QWORD *)(v72 + 32) = v9;
        *(_WORD *)(v72 + 40) = -1;
        *(_QWORD *)(v72 + 48) = *(_QWORD *)(a2 + 392);
        return v4;
      }
      goto LABEL_123;
    }
    goto LABEL_10;
  }
  if ( !v4 )
    goto LABEL_69;
  return v4;
}
