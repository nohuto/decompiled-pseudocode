/*
 * XREFs of ParseAcquire @ 0x1C000A350
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     PerformMutexDriverCallbacks @ 0x1C000FF18 (PerformMutexDriverCallbacks.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     ReleaseASLMutex @ 0x1C002E80C (ReleaseASLMutex.c)
 *     AcquireGL @ 0x1C0062C38 (AcquireGL.c)
 *     ReleaseGL @ 0x1C006371C (ReleaseGL.c)
 *     QueueContext @ 0x1C00661BC (QueueContext.c)
 */

__int64 __fastcall ParseAcquire(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // edx
  unsigned int v5; // esi
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdi
  int v10; // eax
  unsigned __int16 v11; // r12
  KSPIN_LOCK *v12; // rdi
  KIRQL v13; // al
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  KIRQL v17; // r15
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  _QWORD *v27; // rbx
  _QWORD *v28; // rdi
  __int64 v29; // r9
  _QWORD *v30; // rax
  _QWORD *i; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // r8
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // r8
  __int64 v38; // r10
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rdi
  __int64 v43; // rdx
  _QWORD *v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // rdx
  int v51; // edi
  __int64 v52; // r8
  __int64 v53; // r9
  bool v54; // al
  __int64 v55; // rcx
  __int64 v56; // rcx
  _QWORD *v57; // rax

  v4 = *(_DWORD *)(a2 + 16);
  v5 = a3;
  v7 = v4 & 0xF;
  if ( v7 == 3 )
  {
    v7 = 3;
    goto LABEL_53;
  }
  if ( a3 )
  {
    v7 = 5;
    goto LABEL_53;
  }
  if ( (v4 & 0xF) != 0 )
  {
LABEL_53:
    switch ( v7 )
    {
      case 1:
        goto LABEL_6;
      case 2:
        goto LABEL_8;
      case 3:
        goto LABEL_20;
      case 4:
        goto LABEL_23;
      case 5:
        goto LABEL_25;
      case 6:
        goto LABEL_27;
      default:
        return v5;
    }
  }
  v8 = *(_QWORD *)(a2 + 56);
  v9 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 16) = v4 + 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 32), 0, 0) == 2
    && (int)PerformMutexDriverCallbacks(4, v9, a1, v8, 0) >= 0 )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 32), 3, 2);
  }
  v4 = *(_DWORD *)(a2 + 16);
LABEL_6:
  *(_DWORD *)(a2 + 16) = v4 + 1;
  if ( ((v4 + 1) & 0x10000) == 0 || (v5 = AcquireGL(a1)) == 0 )
  {
    v4 = *(_DWORD *)(a2 + 16);
LABEL_8:
    if ( (v4 & 0x10000) != 0 )
      *(_DWORD *)(a2 + 16) = v4 | 0x20000;
    v10 = *(_DWORD *)(a1 + 64);
    v5 = 0;
    v11 = *(_WORD *)(a2 + 40);
    v12 = *(KSPIN_LOCK **)(a2 + 32);
    if ( (v10 & 4) != 0 )
    {
      v5 = 32773;
      *(_DWORD *)(a1 + 64) = v10 & 0xFFFFFFFB;
    }
    else
    {
      v13 = KeAcquireSpinLockRaiseToDpc(v12 + 23);
      v16 = *(unsigned int *)(a1 + 112);
      v17 = v13;
      if ( *(_DWORD *)v12 < (unsigned int)v16 )
      {
        v5 = -1072431083;
        LogError(3222536213LL, v16, v14, v15);
        AcpiDiagTraceAmlError(a1, 3222536213LL);
        PrintDebugMessage(5, 0, 0, 0, 0LL);
      }
      else
      {
        v18 = *((_DWORD *)v12 + 1);
        if ( v18 )
        {
          if ( *(_QWORD *)(v12[1] + 8) == a1 )
          {
            *((_DWORD *)v12 + 1) = v18 + 1;
          }
          else
          {
            QueueContext(a1, v11, v12 + 2);
            v5 = 32772;
          }
        }
        else
        {
          v19 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1380865871, 0x28u);
          if ( v19 )
          {
            v23 = (_QWORD *)(a1 + 48);
            *(_QWORD *)(v19 + 8) = a1;
            *(_QWORD *)(v19 + 16) = v12;
            v24 = (_QWORD *)(v19 + 24);
            *(_DWORD *)v19 = 1;
            v25 = *(_QWORD *)(a1 + 48);
            if ( *(_QWORD *)(v25 + 8) != a1 + 48 )
              goto LABEL_48;
            *v24 = v25;
            *(_QWORD *)(v19 + 32) = v23;
            *(_QWORD *)(v25 + 8) = v24;
            *v23 = v24;
            v12[1] = v19;
            v26 = *(_DWORD *)v12;
            *((_DWORD *)v12 + 1) = 1;
            *(_DWORD *)(a1 + 112) = v26;
          }
          else
          {
            v5 = -1073741670;
            LogError(3221225626LL, v20, v21, v22);
            AcpiDiagTraceAmlError(a1, 3221225626LL);
            PrintDebugMessage(4, 0, 0, 0, 0LL);
          }
        }
      }
      KeReleaseSpinLock(v12 + 23, v17);
      if ( v5 == 32772 )
      {
        v45 = *(_DWORD *)(a2 + 16);
        if ( (v45 & 0x20000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v45 & 0xFFFDFFFF;
          v5 = ReleaseGL(a1);
          v49 = *(_DWORD *)(a2 + 16);
          if ( v5 )
          {
            *(_DWORD *)(a2 + 16) = v49 + 3;
            LogError(3222536195LL, v46, v47, v48);
            AcpiDiagTraceAmlError(a1, 3222536195LL);
            PrintDebugMessage(119, v5, 0, 0, 0LL);
            return (unsigned int)-1072431101;
          }
          else
          {
            *(_DWORD *)(a2 + 16) = v49 - 1;
          }
        }
        return v5;
      }
      if ( !v5 )
        *(_DWORD *)(a2 + 16) |= 0x80000u;
    }
    ++*(_DWORD *)(a2 + 16);
LABEL_20:
    if ( v5 == 32773
      || *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) != 3
      || (v5 = PerformMutexDriverCallbacks(2, *(_QWORD *)(a2 + 32), a1, *(_QWORD *)(a1 + 80), *(_WORD *)(a2 + 40)),
          v5 != 32772) )
    {
      v4 = ++*(_DWORD *)(a2 + 16);
LABEL_23:
      if ( v5 )
      {
        if ( (v4 & 0x80000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v4 & 0xFFF7FFFF;
          ReleaseASLMutex(a1, *(_QWORD *)(a2 + 32), 0LL);
          v4 = *(_DWORD *)(a2 + 16);
        }
        if ( (v4 & 0x20000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v4 & 0xFFFDFFFF;
          v51 = ReleaseGL(a1);
          if ( v51 )
          {
            LogError(3222536195LL, v50, v52, v53);
            AcpiDiagTraceAmlError(a1, 3222536195LL);
            PrintDebugMessage(172, v51, 0, 0, 0LL);
            v5 = -1072431101;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) == 3 )
        {
          if ( *(_WORD *)(a2 + 40) == 0xFFFF )
          {
            *(_DWORD *)(a2 + 16) = 1;
            return v5;
          }
          v5 = 32773;
        }
      }
      v4 = ++*(_DWORD *)(a2 + 16);
LABEL_25:
      if ( (v4 & 0x40000) != 0 )
      {
        *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
        if ( v5 )
        {
          v54 = IsCompatableDSDTRevision();
          v55 = 0xFFFFFFFFLL;
          if ( v54 )
            v55 = -1LL;
          v5 = 0;
          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = v55;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
        }
      }
      ++*(_DWORD *)(a2 + 16);
LABEL_27:
      v27 = *(_QWORD **)(a1 + 416);
      v28 = v27 - 2;
      *(_QWORD *)(a1 + 416) = v27[1];
      *((_DWORD *)v27 - 4) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v29 = *(v27 - 1);
      v30 = *(_QWORD **)(v29 + 40);
      for ( i = (_QWORD *)(v29 + 40); v30 != i; v30 = (_QWORD *)*v30 )
      {
        if ( v27 < v30 )
          break;
      }
      v32 = (_QWORD *)v30[1];
      if ( (_QWORD *)*v32 == v30 )
      {
        v27[1] = v32;
        *v27 = v30;
        *v32 = v27;
        v30[1] = v27;
        v33 = (_QWORD *)*v27;
        v34 = *v27 - 16LL;
        if ( (_QWORD *)*v27 != i )
        {
          v38 = *((unsigned int *)v28 + 1);
          if ( (_QWORD *)v34 == (_QWORD *)((char *)v28 + v38) )
          {
            *((_DWORD *)v28 + 1) = v38 + *(_DWORD *)(v34 + 4);
            v39 = *v33;
            if ( *(_QWORD **)(*v33 + 8LL) != v33 )
              goto LABEL_48;
            v40 = (_QWORD *)v33[1];
            if ( (_QWORD *)*v40 != v33 )
              goto LABEL_48;
            *v40 = v39;
            *(_QWORD *)(v39 + 8) = v40;
          }
        }
        v35 = (_QWORD *)v28[3];
        v36 = v35 - 2;
        if ( v35 != i )
        {
          v41 = *((unsigned int *)v36 + 1);
          if ( v28 == (_QWORD *)((char *)v36 + v41) )
          {
            *((_DWORD *)v36 + 1) = *((_DWORD *)v28 + 1) + v41;
            v56 = *v27;
            if ( *(_QWORD **)(*v27 + 8LL) != v27 )
              goto LABEL_48;
            v57 = (_QWORD *)v27[1];
            if ( (_QWORD *)*v57 != v27 )
              goto LABEL_48;
            *v57 = v56;
            v28 = v36;
            *(_QWORD *)(v56 + 8) = v57;
          }
        }
        if ( *(_QWORD *)(v29 + 32) > (unsigned __int64)v28 + *((unsigned int *)v28 + 1) )
        {
LABEL_32:
          KeReleaseSpinLock(&gmutHeap, NewIrql);
          return v5;
        }
        *(_QWORD *)(v29 + 32) = v28;
        v42 = v28 + 2;
        v43 = *v42;
        if ( *(_QWORD **)(*v42 + 8LL) == v42 )
        {
          v44 = (_QWORD *)v42[1];
          if ( (_QWORD *)*v44 == v42 )
          {
            *v44 = v43;
            *(_QWORD *)(v43 + 8) = v44;
            goto LABEL_32;
          }
        }
      }
LABEL_48:
      __fastfail(3u);
    }
  }
  return v5;
}
