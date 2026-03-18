/*
 * XREFs of ParseCall @ 0x1C0012EB0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     ParseArg @ 0x1C0012808 (ParseArg.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     ParseRelease @ 0x1C0013B40 (ParseRelease.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 *     HeapInsertFreeList @ 0x1C0014540 (HeapInsertFreeList.c)
 *     DupObjData @ 0x1C001B9B0 (DupObjData.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     PerformNativeMethodCall @ 0x1C0064284 (PerformNativeMethodCall.c)
 *     MoveObjData @ 0x1C0065098 (MoveObjData.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

__int64 __fastcall ParseCall(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r14d
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r15
  int v9; // eax
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  void *v13; // rax
  void *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rdx
  char v23; // al
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  int v28; // ecx
  _BYTE *v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rsi
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  KIRQL v35; // al
  __int64 v36; // rbx
  struct _EX_RUNDOWN_REF *v37; // rsi
  struct _EX_RUNDOWN_REF *v38; // rbx
  unsigned __int64 Count; // r8
  struct _EX_RUNDOWN_REF *v40; // rax
  struct _EX_RUNDOWN_REF *j; // rdx
  struct _EX_RUNDOWN_REF **v42; // rcx
  _QWORD *v43; // r9
  __int64 v44; // rcx
  struct _EX_RUNDOWN_REF *v45; // rax
  struct _EX_RUNDOWN_REF *v46; // r9
  __int64 v47; // rcx
  _QWORD *v48; // rbx
  _QWORD *v49; // rdi
  _QWORD *v50; // rbx
  __int64 v51; // r8
  _QWORD *v52; // rax
  _QWORD *i; // rdx
  _QWORD *v54; // rcx
  _QWORD *v55; // r9
  __int64 v56; // rcx
  _QWORD *v57; // rax
  _QWORD *v58; // r9
  _QWORD *v59; // rbx
  __int64 v60; // rdx
  _QWORD *v61; // rax
  unsigned int v63; // ecx
  unsigned int v64; // edx
  __int64 v65; // r8
  __int64 v66; // rax
  struct _EX_RUNDOWN_REF *v67; // rbx
  unsigned __int64 v68; // rcx
  struct _EX_RUNDOWN_REF **v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rsi
  __int64 v72; // rsi
  __int64 Ptr_high; // r10
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // r10
  __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  unsigned __int64 v82; // rcx
  struct _EX_RUNDOWN_REF **v83; // rax
  __int64 v84; // rcx
  _QWORD *v85; // rax
  int v86; // [rsp+30h] [rbp-148h] BYREF
  __int64 v87; // [rsp+34h] [rbp-144h]
  int v88; // [rsp+3Ch] [rbp-13Ch]
  int v89; // [rsp+40h] [rbp-138h]
  __int64 v90; // [rsp+44h] [rbp-134h]
  int v91; // [rsp+4Ch] [rbp-12Ch]
  __int64 v92; // [rsp+50h] [rbp-128h]
  __int128 v93; // [rsp+58h] [rbp-120h]
  _BYTE v94[40]; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v95[48]; // [rsp+90h] [rbp-E8h] BYREF
  struct _KTIMER Timer; // [rsp+C0h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+100h] [rbp-78h] BYREF
  __int64 v98; // [rsp+188h] [rbp+10h]

  v3 = a3;
  if ( a3 )
    v6 = 5;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(a2 + 48);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 96);
  else
    v8 = 0LL;
  if ( v6 == 5 )
    goto LABEL_24;
  if ( v6 == 2 )
    goto LABEL_74;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      v10 = v9 - 2;
      if ( v10 )
      {
        v25 = v10 - 1;
        if ( v25 )
        {
          if ( v25 != 2 )
            return v3;
LABEL_52:
          v49 = *(_QWORD **)(a1 + 416);
          v50 = v49 - 2;
          *(_QWORD *)(a1 + 416) = v49[1];
          *((_DWORD *)v49 - 4) = 0;
          byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          v51 = *(v49 - 1);
          v52 = *(_QWORD **)(v51 + 40);
          for ( i = (_QWORD *)(v51 + 40); v52 != i; v52 = (_QWORD *)*v52 )
          {
            if ( v49 < v52 )
              break;
          }
          v54 = (_QWORD *)v52[1];
          if ( (_QWORD *)*v54 == v52 )
          {
            v49[1] = v54;
            *v49 = v52;
            *v54 = v49;
            v52[1] = v49;
            v55 = (_QWORD *)*v49;
            v56 = *v49 - 16LL;
            if ( (_QWORD *)*v49 != i )
            {
              v76 = *((unsigned int *)v50 + 1);
              if ( (_QWORD *)v56 == (_QWORD *)((char *)v50 + v76) )
              {
                *((_DWORD *)v50 + 1) = v76 + *(_DWORD *)(v56 + 4);
                v77 = *v55;
                if ( *(_QWORD **)(*v55 + 8LL) != v55 )
                  goto LABEL_144;
                v78 = (_QWORD *)v55[1];
                if ( (_QWORD *)*v78 != v55 )
                  goto LABEL_144;
                *v78 = v77;
                *(_QWORD *)(v77 + 8) = v78;
              }
            }
            v57 = (_QWORD *)v50[3];
            v58 = v57 - 2;
            if ( v57 != i )
            {
              v79 = *((unsigned int *)v58 + 1);
              if ( v50 == (_QWORD *)((char *)v58 + v79) )
              {
                *((_DWORD *)v58 + 1) = *((_DWORD *)v50 + 1) + v79;
                v84 = *v49;
                if ( *(_QWORD **)(*v49 + 8LL) != v49 )
                  goto LABEL_144;
                v85 = (_QWORD *)v49[1];
                if ( (_QWORD *)*v85 != v49 )
                  goto LABEL_144;
                *v85 = v84;
                v50 = v58;
                *(_QWORD *)(v84 + 8) = v85;
              }
            }
            if ( *(_QWORD *)(v51 + 32) <= (unsigned __int64)v50 + *((unsigned int *)v50 + 1) )
            {
              *(_QWORD *)(v51 + 32) = v50;
              v59 = v50 + 2;
              v60 = *v59;
              if ( *(_QWORD **)(*v59 + 8LL) != v59 )
                goto LABEL_144;
              v61 = (_QWORD *)v59[1];
              if ( (_QWORD *)*v61 != v59 )
                goto LABEL_144;
              *v61 = v60;
              *(_QWORD *)(v60 + 8) = v61;
            }
            KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
            return v3;
          }
LABEL_144:
          __fastfail(3u);
        }
        goto LABEL_21;
      }
LABEL_10:
      v11 = *(_DWORD *)(a2 + 16) + 1;
      v12 = *(_DWORD *)a2 == 1280065859;
      *(_DWORD *)(a2 + 16) = v11;
      if ( v12 && (v11 & 0x80000) != 0 )
      {
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 96);
        *(_QWORD *)(a1 + 96) = a2;
        *(_DWORD *)(a2 + 16) |= 0x40000u;
        v3 = PerformNativeMethodCall(0LL, a1, a2);
        if ( v3 == 32772 )
          return v3;
      }
      else
      {
        if ( (v11 & 0x10000) != 0 )
          *(_DWORD *)(a2 + 16) = v11 | 0x20000;
        v13 = (void *)HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1314344776, 0x40u);
        v14 = v13;
        if ( v13 )
        {
          memset(v13, 0, 0x40uLL);
          *((_DWORD *)v14 + 4) = 1380865871;
          ExInitializeRundownProtection((PEX_RUNDOWN_REF)v14 + 4);
          KeInitializeSpinLock((PKSPIN_LOCK)v14 + 5);
          NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
          v15 = off_1C007F398;
          if ( *off_1C007F398 == (_UNKNOWN *)&glistObjOwners )
          {
            *(_QWORD *)v14 = &glistObjOwners;
            *((_QWORD *)v14 + 1) = v15;
            *v15 = v14;
            off_1C007F398 = (_UNKNOWN **)v14;
            KeReleaseSpinLock(&gmutOwnerList, NewIrql);
            *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 88);
            v3 = 0;
            v16 = *(_QWORD *)(a1 + 96);
            *(_QWORD *)(a1 + 88) = v14;
            *(_QWORD *)(a2 + 32) = v16;
            *(_QWORD *)(a1 + 96) = a2;
            *(_DWORD *)(a2 + 16) |= 0x40000u;
            v17 = *(_QWORD *)(a2 + 392);
            v18 = *(_QWORD *)(a2 + 48);
            v19 = *(_QWORD *)(a1 + 320);
            v98 = *(_QWORD *)(a1 + 120);
            v20 = *(_QWORD *)(v18 + 96) + *(unsigned int *)(v18 + 88);
            v21 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x50u);
            v22 = (_QWORD *)v21;
            if ( v21 )
            {
              *(_QWORD *)(v21 + 8) = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = v21;
              *(_DWORD *)v21 = 1347371859;
              *(_QWORD *)(v21 + 24) = ParseScope;
              *(_QWORD *)(a1 + 120) = v8 + 194;
              *(_QWORD *)(v21 + 32) = v20;
              *(_QWORD *)(v21 + 40) = v98;
              *(_QWORD *)(v21 + 48) = *(_QWORD *)(a1 + 80);
              v23 = gdwfAMLI;
              *(_QWORD *)(a1 + 80) = v18;
              if ( (v23 & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(v18 + 112));
              v22[7] = *(_QWORD *)(a1 + 88);
              v24 = *(_QWORD *)(a1 + 320);
              *(_QWORD *)(a1 + 88) = v14;
              v22[8] = v24;
              *(_QWORD *)(a1 + 320) = v19;
              v22[9] = v17;
              return v3;
            }
LABEL_126:
            v3 = -1072431102;
            LogError(3222536194LL);
            AcpiDiagTraceAmlError(a1, 3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, 0LL);
            return v3;
          }
          goto LABEL_144;
        }
        v3 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(0LL, 3221225626LL);
        PrintDebugMessage(113, 0, 0, 0, 0LL);
      }
LABEL_21:
      v26 = *(_DWORD *)(a2 + 16) + 1;
      v12 = *(_DWORD *)a2 == 1280065859;
      *(_DWORD *)(a2 + 16) = v26;
      if ( v12 && (v26 & 0x80000) != 0 )
        v3 = PerformNativeMethodCall(1LL, a1, a2);
LABEL_24:
      v27 = 0;
      v28 = *(_DWORD *)(a2 + 16) + 1;
      *(_DWORD *)(a2 + 16) = v28;
      if ( v3 != 32770 )
        v27 = v3;
      v3 = v27;
      if ( *(_DWORD *)a2 == 1280065859 && (v28 & 0x80000) != 0 )
      {
        if ( (v28 & 0x40000) == 0 )
          goto LABEL_46;
        memset(v94, 0, sizeof(v94));
        DupObjData(*(_QWORD *)(a1 + 320), v94, *(_QWORD *)(a2 + 392));
        PerformNativeMethodCall(2LL, a1, a2);
        MoveObjData(*(_QWORD *)(a2 + 392), v94);
      }
      else
      {
        v29 = *(_BYTE **)(a2 + 392);
        if ( (*v29 & 1) != 0 )
        {
          memset(v95, 0, 0x28uLL);
          DupObjData(*(_QWORD *)(a1 + 320), v95, v29);
          FreeDataBuffs(*(_QWORD *)(a2 + 392), 1LL);
          MoveObjData(*(_QWORD *)(a2 + 392), v95);
        }
        v30 = a2 + 72;
        v31 = 8LL;
        do
        {
          if ( (*(_BYTE *)v30 & 1) != 0 )
          {
            v81 = *(_QWORD *)(v30 + 8);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v81 + 8), 0xFFFFFFFF) == 1
              && (*(_BYTE *)v81 & 8) != 0 )
            {
              FreeData((_QWORD *)v81);
            }
          }
          else if ( *(_QWORD *)(v30 + 32) && *(int *)(v30 + 8) <= 0 )
          {
            if ( *(_WORD *)(v30 + 2) == 4 )
              FreeDataBuffs(*(_QWORD *)(v30 + 32) + 8LL, **(unsigned int **)(v30 + 32));
            FreeObjData(v30);
          }
          *(_QWORD *)v30 = 0LL;
          *(_QWORD *)(v30 + 8) = 0LL;
          *(_QWORD *)(v30 + 16) = 0LL;
          *(_QWORD *)(v30 + 24) = 0LL;
          *(_QWORD *)(v30 + 32) = 0LL;
          v30 += 40LL;
          --v31;
        }
        while ( v31 );
        if ( (*(_DWORD *)(a2 + 16) & 0x40000) != 0 )
        {
          v32 = *(_QWORD **)(a1 + 88);
          NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
          v33 = *v32;
          if ( *(_QWORD **)(*v32 + 8LL) != v32 )
            goto LABEL_144;
          v34 = (_QWORD *)v32[1];
          if ( (_QWORD *)*v34 != v32 )
            goto LABEL_144;
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
          KeReleaseSpinLock(&gmutOwnerList, NewIrql);
          v35 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
          v36 = v32[3];
          if ( v36 )
          {
            do
            {
              ExReleaseSpinLockExclusive(&ACPINamespaceLock, v35);
              v72 = *(_QWORD *)(v36 + 56);
              if ( (gdwfAMLI & 4) != 0 )
                AMLIDereferenceHandleEx((volatile signed __int32 *)(v36 + 120));
              else
                FreeNameSpaceObjects(v36);
              v35 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
              v36 = v72;
            }
            while ( v72 );
          }
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v35);
          v37 = *(struct _EX_RUNDOWN_REF **)(a1 + 88);
          memset(&Dpc, 0, sizeof(Dpc));
          memset(&Timer, 0, sizeof(Timer));
          if ( (gdwfAMLI & 4) != 0 )
          {
            KeInitializeTimer(&Timer);
            KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, v37);
            KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
            ExWaitForRundownProtectionRelease(v37 + 4);
            KeCancelTimer(&Timer);
            HeapFree(v37);
          }
          else
          {
            v38 = v37 - 2;
            LODWORD(v37[-2].Count) = 0;
            byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
            Count = v37[-1].Count;
            v40 = *(struct _EX_RUNDOWN_REF **)(Count + 40);
            for ( j = (struct _EX_RUNDOWN_REF *)(Count + 40); v40 != j; v40 = (struct _EX_RUNDOWN_REF *)v40->Count )
            {
              if ( v37 < v40 )
                break;
            }
            v42 = (struct _EX_RUNDOWN_REF **)v40[1].Count;
            if ( *v42 != v40 )
              goto LABEL_144;
            v37[1].Count = (unsigned __int64)v42;
            v37->Count = (unsigned __int64)v40;
            *v42 = v37;
            v40[1].Count = (unsigned __int64)v37;
            v43 = (_QWORD *)v37->Count;
            v44 = v37->Count - 16;
            if ( (struct _EX_RUNDOWN_REF *)v37->Count != j )
            {
              Ptr_high = HIDWORD(v38->Ptr);
              if ( (struct _EX_RUNDOWN_REF *)v44 == (struct _EX_RUNDOWN_REF *)((char *)v38 + Ptr_high) )
              {
                HIDWORD(v38->Ptr) = Ptr_high + *(_DWORD *)(v44 + 4);
                v74 = *v43;
                if ( *(_QWORD **)(*v43 + 8LL) != v43 )
                  goto LABEL_144;
                v75 = (_QWORD *)v43[1];
                if ( (_QWORD *)*v75 != v43 )
                  goto LABEL_144;
                *v75 = v74;
                *(_QWORD *)(v74 + 8) = v75;
              }
            }
            v45 = (struct _EX_RUNDOWN_REF *)v38[3].Count;
            v46 = v45 - 2;
            if ( v45 != j )
            {
              v80 = HIDWORD(v46->Ptr);
              if ( v38 == (struct _EX_RUNDOWN_REF *)((char *)v46 + v80) )
              {
                HIDWORD(v46->Ptr) = HIDWORD(v38->Ptr) + v80;
                v82 = v37->Count;
                if ( *(struct _EX_RUNDOWN_REF **)(v37->Count + 8) != v37 )
                  goto LABEL_144;
                v83 = (struct _EX_RUNDOWN_REF **)v37[1].Count;
                if ( *v83 != v37 )
                  goto LABEL_144;
                *v83 = (struct _EX_RUNDOWN_REF *)v82;
                v38 = v46;
                *(_QWORD *)(v82 + 8) = v83;
              }
            }
            if ( *(_QWORD *)(Count + 32) <= (unsigned __int64)v38 + HIDWORD(v38->Ptr) )
            {
              *(_QWORD *)(Count + 32) = v38;
              v67 = v38 + 2;
              v68 = v67->Count;
              if ( *(struct _EX_RUNDOWN_REF **)(v67->Count + 8) != v67 )
                goto LABEL_144;
              v69 = (struct _EX_RUNDOWN_REF **)v67[1].Count;
              if ( *v69 != v67 )
                goto LABEL_144;
              *v69 = (struct _EX_RUNDOWN_REF *)v68;
              *(_QWORD *)(v68 + 8) = v69;
            }
            KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
          }
        }
        else if ( *(_QWORD *)(a2 + 48) )
        {
          goto LABEL_46;
        }
      }
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 32);
LABEL_46:
      v47 = *(_QWORD *)(a2 + 48);
      if ( v47 )
      {
        if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 112), 0xFFFFFFFF) == 1 )
        {
          *(_WORD *)(v47 + 64) |= 4u;
          if ( (*(_WORD *)(v47 + 64) & 0x40) == 0 )
            FreeNameSpaceObjects(v47);
        }
        *(_QWORD *)(a2 + 48) = 0LL;
      }
      v48 = *(_QWORD **)(a2 + 64);
      if ( v48 )
      {
        v70 = *(_DWORD *)(a2 + 60);
        if ( v70 )
        {
          v71 = v70;
          do
          {
            FreeData(v48);
            v48 += 5;
            --v71;
          }
          while ( v71 );
          v48 = *(_QWORD **)(a2 + 64);
        }
        *((_DWORD *)v48 - 4) = 0;
        byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        HeapInsertFreeList(*(v48 - 1), v48 - 2);
        KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
      }
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
      {
        v87 = 0LL;
        v88 = 0;
        v90 = 0LL;
        v91 = 0;
        v93 = 0LL;
        v92 = v8;
        v86 = 1179403602;
        v89 = 393216;
        ParseRelease(a1, &v86, 0LL);
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
  v63 = *(_DWORD *)(a2 + 56);
  if ( v63 < *(_DWORD *)(a2 + 60) )
  {
    do
    {
      do
      {
        v64 = v63;
        if ( (gDebugger & 0xD0) != 0 && v63 )
        {
          ConPrintf(",");
          v64 = *(_DWORD *)(a2 + 56);
        }
        v65 = *(_QWORD *)(a2 + 64) + 40LL * v64;
        *(_DWORD *)(a2 + 56) = v64 + 1;
        v3 = ParseArg(a1, 67, v65, 0LL);
        if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
          return v3;
        v63 = *(_DWORD *)(a2 + 56);
      }
      while ( v63 < *(_DWORD *)(a2 + 60) );
LABEL_69:
      if ( a2 != *(_QWORD *)(a1 + 416) )
        return v3;
      v63 = *(_DWORD *)(a2 + 56);
    }
    while ( v63 < *(_DWORD *)(a2 + 60) );
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf(")");
    ++*(_DWORD *)(a2 + 16);
LABEL_74:
    ++*(_DWORD *)(a2 + 16);
    if ( !v8 )
    {
      v3 = -1072431101;
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(a1, 3222536195LL);
      PrintDebugMessage(123, 0, 0, 0, 0LL);
      return v3;
    }
    if ( (*(_BYTE *)(v8 + 193) & 8) != 0 )
    {
      v66 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x40u);
      if ( v66 )
      {
        v3 = 0;
        *(_QWORD *)(v66 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v66;
        *(_DWORD *)v66 = 1179730753;
        *(_QWORD *)(v66 + 24) = ParseAcquire;
        *(_QWORD *)(v66 + 32) = v8;
        *(_WORD *)(v66 + 40) = -1;
        *(_QWORD *)(v66 + 48) = *(_QWORD *)(a2 + 392);
        return v3;
      }
      goto LABEL_126;
    }
    goto LABEL_10;
  }
  if ( !v3 )
    goto LABEL_69;
  return v3;
}
