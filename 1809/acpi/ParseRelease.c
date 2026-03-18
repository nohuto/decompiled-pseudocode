/*
 * XREFs of ParseRelease @ 0x1C0003260
 * Callers:
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 *     ReleaseASLMutex @ 0x1C002E80C (ReleaseASLMutex.c)
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     InsertReadyQueue @ 0x1C0004270 (InsertReadyQueue.c)
 *     PerformMutexDriverCallbacks @ 0x1C000FF18 (PerformMutexDriverCallbacks.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     ReleaseGL @ 0x1C006371C (ReleaseGL.c)
 */

__int64 __fastcall ParseRelease(__int64 a1, __int64 a2, unsigned int a3)
{
  int *v3; // rdi
  int v5; // edx
  KSPIN_LOCK *v8; // rbp
  __int64 v9; // rdx
  KIRQL v10; // si
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // edx
  KIRQL v15; // al
  KIRQL v16; // r13
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *i; // r8
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // r14
  __int64 v33; // rdx
  _QWORD *v34; // rax
  struct _SLIST_ENTRY **v35; // rdi
  struct _SLIST_ENTRY *v36; // rcx
  _QWORD *v38; // rcx
  int v39; // ecx
  int v40; // edx
  int v41; // r8d
  int v42; // r8d
  __int64 v43; // r10
  __int64 v44; // rcx
  _QWORD *v45; // rax
  struct _SLIST_ENTRY *Next; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9

  v3 = *(int **)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 16);
  if ( (v5 & 0xF) == 0 )
  {
    a3 = 0;
    v8 = (KSPIN_LOCK *)(v3 + 46);
    *(_DWORD *)(a2 + 16) = v5 + 1;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 23);
    if ( v3[1] )
    {
      v13 = *((_QWORD *)v3 + 1);
      if ( v13 && *(_QWORD *)(v13 + 8) == a1 )
      {
        if ( (unsigned int)*v3 <= *(_DWORD *)(a1 + 112) )
        {
          *(_DWORD *)(a1 + 112) = *v3;
          if ( v3[1] == 1 )
            *(_DWORD *)(a2 + 16) |= 0x80000u;
LABEL_8:
          KeReleaseSpinLock((PKSPIN_LOCK)v3 + 23, v10);
          v5 = *(_DWORD *)(a2 + 16);
          if ( (*(_BYTE *)(a2 + 16) & 0xF) == 3 )
            goto LABEL_33;
          if ( (v5 & 0x80000) == 0 )
          {
            *(_DWORD *)(a2 + 16) = ++v5;
LABEL_13:
            *(_DWORD *)(a2 + 16) = v5 + 1;
            v15 = KeAcquireSpinLockRaiseToDpc(v8);
            --v3[1];
            v16 = v15;
            if ( (*(_DWORD *)(a2 + 16) & 0x80000) == 0 )
            {
LABEL_32:
              KeReleaseSpinLock(v8, v16);
              goto LABEL_33;
            }
            v17 = (_QWORD *)*((_QWORD *)v3 + 1);
            v18 = v17[3];
            if ( *(_QWORD **)(v18 + 8) == v17 + 3 )
            {
              v19 = (_QWORD *)v17[4];
              if ( (_QWORD *)*v19 == v17 + 3 )
              {
                *v19 = v18;
                v20 = v17 - 2;
                *(_QWORD *)(v18 + 8) = v19;
                *((_DWORD *)v17 - 4) = 0;
                NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
                v21 = *(v17 - 1);
                v22 = *(_QWORD **)(v21 + 40);
                for ( i = (_QWORD *)(v21 + 40); v22 != i; v22 = (_QWORD *)*v22 )
                {
                  if ( v17 < v22 )
                    break;
                }
                v24 = (_QWORD *)v22[1];
                if ( (_QWORD *)*v24 == v22 )
                {
                  v17[1] = v24;
                  *v17 = v22;
                  *v24 = v17;
                  v22[1] = v17;
                  v25 = (_QWORD *)*v17;
                  v26 = *v17 - 16LL;
                  if ( (_QWORD *)*v17 != i )
                  {
                    v43 = *((unsigned int *)v20 + 1);
                    if ( (_QWORD *)v26 == (_QWORD *)((char *)v20 + v43) )
                    {
                      *((_DWORD *)v20 + 1) = v43 + *(_DWORD *)(v26 + 4);
                      v44 = *v25;
                      if ( *(_QWORD **)(*v25 + 8LL) != v25 )
                        goto LABEL_60;
                      v45 = (_QWORD *)v25[1];
                      if ( (_QWORD *)*v45 != v25 )
                        goto LABEL_60;
                      *v45 = v44;
                      *(_QWORD *)(v44 + 8) = v45;
                    }
                  }
                  v27 = (_QWORD *)v20[3];
                  v28 = v27 - 2;
                  if ( v27 != i )
                  {
                    v29 = *((unsigned int *)v28 + 1);
                    if ( v20 == (_QWORD *)((char *)v28 + v29) )
                    {
                      *((_DWORD *)v28 + 1) = *((_DWORD *)v20 + 1) + v29;
                      v30 = *v17;
                      if ( *(_QWORD **)(*v17 + 8LL) != v17 )
                        goto LABEL_60;
                      v31 = (_QWORD *)v17[1];
                      if ( (_QWORD *)*v31 != v17 )
                        goto LABEL_60;
                      *v31 = v30;
                      v20 = v28;
                      *(_QWORD *)(v30 + 8) = v31;
                    }
                  }
                  if ( *(_QWORD *)(v21 + 32) <= (unsigned __int64)v20 + *((unsigned int *)v20 + 1) )
                  {
                    *(_QWORD *)(v21 + 32) = v20;
                    v32 = v20 + 2;
                    v33 = *v32;
                    if ( *(_QWORD **)(*v32 + 8LL) != v32 )
                      goto LABEL_60;
                    v34 = (_QWORD *)v32[1];
                    if ( (_QWORD *)*v34 != v32 )
                      goto LABEL_60;
                    *v34 = v33;
                    *(_QWORD *)(v33 + 8) = v34;
                  }
                  KeReleaseSpinLock(&gmutHeap, NewIrql);
                  *((_QWORD *)v3 + 1) = 0LL;
                  v35 = (struct _SLIST_ENTRY **)(v3 + 4);
                  byte_1C0080710 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
                  v36 = *v35;
                  if ( *v35 == (struct _SLIST_ENTRY *)v35 )
                  {
LABEL_31:
                    KeReleaseSpinLock(&SpinLock, byte_1C0080710);
                    goto LABEL_32;
                  }
                  if ( *((struct _SLIST_ENTRY ***)&v36->Next + 1) == v35 )
                  {
                    Next = v36->Next;
                    if ( *(&v36->Next->Next + 1) == v36 )
                    {
                      *v35 = Next;
                      *((_QWORD *)&Next->Next + 1) = v35;
                      *((_QWORD *)&v36->Next + 1) = v36;
                      v36->Next = v36;
                      InsertReadyQueue(v36 - 2);
                      goto LABEL_31;
                    }
                  }
                }
              }
            }
LABEL_60:
            __fastfail(3u);
          }
          goto LABEL_10;
        }
        a3 = -1072431083;
        LogError(3222536213LL, v9, v11, v12);
        AcpiDiagTraceAmlError(a1, 3222536213LL);
        v40 = *v3;
        v39 = 136;
        v41 = *(_DWORD *)(a1 + 112);
LABEL_47:
        PrintDebugMessage(v39, v40, v41, 0, 0LL);
        *(_DWORD *)(a2 + 16) += 2;
        goto LABEL_8;
      }
      a3 = -1072431081;
      LogError(3222536215LL, v9, v11, v12);
      AcpiDiagTraceAmlError(a1, 3222536215LL);
      v39 = 138;
    }
    else
    {
      a3 = -1072431082;
      LogError(3222536214LL, v9, v11, v12);
      AcpiDiagTraceAmlError(a1, 3222536214LL);
      v39 = 137;
    }
    v41 = 0;
    v40 = 0;
    goto LABEL_47;
  }
  if ( (v5 & 0xF) != 1 )
  {
    if ( (v5 & 0xF) != 2 )
    {
      if ( (v5 & 0xF) != 3 )
      {
        if ( (v5 & 0xF) != 4 )
          return a3;
        goto LABEL_35;
      }
LABEL_33:
      if ( (++*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
      {
        a3 = ReleaseGL(a1);
        if ( a3 )
        {
          LogError(3222536195LL, v47, v48, v49);
          AcpiDiagTraceAmlError(a1, 3222536195LL);
          PrintDebugMessage(172, a3, 0, 0, 0LL);
          a3 = -1072431101;
        }
      }
      v5 = *(_DWORD *)(a2 + 16);
LABEL_35:
      if ( (v5 & 0x40000) == 0 )
      {
        v38 = *(_QWORD **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v38[1];
        HeapFree(v38);
      }
      return a3;
    }
    goto LABEL_12;
  }
LABEL_10:
  v14 = v5 & 0x20000;
  if ( v3[8] != 3 )
    goto LABEL_11;
  v42 = a1;
  if ( !v14 )
    v42 = 0;
  a3 = PerformMutexDriverCallbacks(3, (_DWORD)v3, v42, 0, 0);
  if ( a3 != 32772 )
  {
LABEL_11:
    v5 = ++*(_DWORD *)(a2 + 16);
LABEL_12:
    v8 = (KSPIN_LOCK *)(v3 + 46);
    goto LABEL_13;
  }
  return a3;
}
