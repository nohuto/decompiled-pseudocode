/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x140010090
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016F550 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x140283A1C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405E4C80 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400109A0 (FsRtlpComputeShareableOplockState.c)
 *     IoSetOplockPrivateFoExt @ 0x140010A70 (IoSetOplockPrivateFoExt.c)
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockKeysEqual @ 0x1400B6A10 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400B6CDC (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400B6DE8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x1400B734C (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x1400B73BC (FsRtlpClearOwner.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1401230B8 (FsRtlpCallerIsAtomicRequestor.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140283850 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140283CBC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140283DBC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1405E4C34 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x1406CB0F8 (FsRtlpAllocateOplock.c)
 */

__int64 __fastcall FsRtlpRequestShareableOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        char a7,
        unsigned int a8)
{
  __int64 v9; // r15
  int v11; // edi
  char v12; // r13
  __int64 Oplock; // rbx
  int v14; // r11d
  _QWORD *i; // r15
  _QWORD *v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  int v20; // eax
  _QWORD *v21; // r14
  _QWORD *v22; // r15
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 *n; // rdi
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  IRP *v34; // r14
  _QWORD *v35; // rdi
  __int64 v36; // rcx
  _QWORD *v37; // rax
  void *v38; // rcx
  int v39; // ecx
  int v40; // eax
  _QWORD *v41; // rdi
  int v42; // eax
  __int64 *k; // rdi
  __int64 v44; // rdx
  _QWORD *v45; // rax
  _QWORD *v46; // rcx
  __int64 v47; // rdx
  _QWORD *j; // rdi
  __int64 v49; // rdx
  __int64 *m; // rdi
  PVOID P; // [rsp+48h] [rbp-A0h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+50h] [rbp-98h]
  __int64 v54; // [rsp+58h] [rbp-90h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-88h]
  struct _KTHREAD *v56; // [rsp+68h] [rbp-80h]
  __int64 v57; // [rsp+70h] [rbp-78h]
  _QWORD v58[14]; // [rsp+78h] [rbp-70h] BYREF
  char v59; // [rsp+F0h] [rbp+8h]

  v9 = a2;
  v11 = 0;
  FastMutex = 0LL;
  v59 = 0;
  v12 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock();
    *a1 = Oplock;
  }
  if ( !a7 && a4 != 0x10000 )
  {
    FastMutex = *(PFAST_MUTEX *)(Oplock + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v59 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)v9 == 13
    && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(v9 + 48), &P) )
  {
    if ( (v14 & 0x20000) != 0 )
    {
      v35 = P;
      FsRtlpOplockDequeueRH(P);
      v36 = v35[7];
      v37 = (_QWORD *)v35[8];
      if ( *(_QWORD **)(v36 + 8) != v35 + 7 || (_QWORD *)*v37 != v35 + 7 )
        __fastfail(3u);
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v35[5] )
        FsRtlpClearOwner(Oplock, v35);
      ExFreePoolWithTag(v35, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_61;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v38 = i;
      if ( !*((_BYTE *)i + 53) || a4 != 12288 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v38);
      }
    }
    v16 = P;
    FsRtlpOplockDequeueRH(P);
    v17 = v16[7];
    v18 = (_QWORD *)v16[8];
    if ( *(_QWORD **)(v17 + 8) != v16 + 7 || (_QWORD *)*v18 != v16 + 7 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v16[5] )
      FsRtlpClearOwner(Oplock, v16);
    ExFreePoolWithTag(v16, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v9 = a2;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_147;
  }
  if ( !a7 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
  {
    if ( a4 == 0x10000 )
    {
      v11 = -1073739511;
      goto LABEL_147;
    }
    goto LABEL_61;
  }
  if ( a4 != 12288 && a4 != 0x10000 )
  {
    if ( a4 == 16 )
    {
      v32 = *(_DWORD *)(Oplock + 144);
      if ( (v32 & 1) == 0 )
      {
        v33 = v32 & 0x1F0FFDF;
        if ( v33 != 16 && v33 != 4096 && v33 != 4112 )
          goto LABEL_61;
      }
    }
    else if ( a4 != 4096 )
    {
      v34 = (IRP *)a3;
      goto LABEL_120;
    }
    if ( !a7 )
    {
      v39 = *(_DWORD *)(Oplock + 144);
      if ( (v39 & 1) == 0 )
      {
        v40 = v39 & 0x1F0FFDF;
        if ( (v39 & 0x1F0FFDF) != 0x10
          && v40 != 4096
          && v40 != 4112
          && v40 != 12288
          && v40 != 45056
          && v40 != 1060864
          && v40 != 8400896
          && (v39 & 0x10000) == 0 )
        {
LABEL_61:
          v34 = (IRP *)a3;
LABEL_62:
          v34->IoStatus.Status = -1073741598;
          IofCompleteRequest(v34, 1);
LABEL_63:
          v11 = -1073741598;
          goto LABEL_147;
        }
      }
      v41 = *(_QWORD **)(Oplock + 56);
      if ( v41 != (_QWORD *)(Oplock + 56) )
        goto LABEL_111;
      if ( *(_QWORD *)(Oplock + 72) != Oplock + 72 )
      {
        while ( v41 != (_QWORD *)(Oplock + 56) )
        {
LABEL_111:
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), v41[3], 0LL) )
            goto LABEL_61;
          v41 = (_QWORD *)*v41;
        }
        for ( j = *(_QWORD **)(Oplock + 72); j != (_QWORD *)(Oplock + 72); j = (_QWORD *)*j )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), j[3], 0LL) )
            goto LABEL_61;
        }
      }
      v42 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v42 == 16 || v42 == 4096 || v42 == 4112 || v42 == 45056 )
      {
        for ( k = *(__int64 **)(Oplock + 40); k != (__int64 *)(Oplock + 40); k = (__int64 *)*k )
        {
          v44 = k[2];
          if ( (*(_DWORD *)(v44 + 24) == 590400 || *(_QWORD *)(v44 + 48) != *(_QWORD *)(v9 + 48))
            && (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), *(_QWORD *)(v44 + 48), 0LL) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)k[1], 533LL, a4 & 0x7000);
            break;
          }
        }
      }
    }
    v34 = (IRP *)a3;
    v54 = *(_QWORD *)(a3 + 184);
    *(_BYTE *)(v54 + 3) |= 1u;
    *(_DWORD *)(a3 + 48) = 0;
    v45 = (_QWORD *)(a3 + 168);
    v46 = (_QWORD *)(Oplock + 40);
    v47 = *(_QWORD *)(Oplock + 40);
    if ( *(_QWORD *)(v47 + 8) != Oplock + 40 )
      __fastfail(3u);
    *v45 = v47;
    *(_QWORD *)(a3 + 176) = v46;
    *(_QWORD *)(v47 + 8) = v45;
    *v46 = v45;
    *(_QWORD *)(a3 + 56) = Oplock;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a6 )
      ObfReferenceObjectWithTag(*(PVOID *)(v9 + 48), 0x746C6644u);
    *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v49) = 1;
      FsRtlpCancelReadOnlyOplockIrp(a3, v49);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
    v12 = 1;
    v11 = 259;
LABEL_120:
    if ( v12 )
      goto LABEL_147;
    goto LABEL_62;
  }
  if ( !a7
    && (v19 = *(_DWORD *)(Oplock + 144), (v19 & 1) == 0)
    && (v31 = v19 & 0x1F0FFDF, (v19 & 0x1F0FFDF) != 0x3000)
    && v31 != 4096
    && v31 != 45056
    && v31 != 1060864
    && v31 != 8400896
    && (v19 & 0x10000) == 0
    || *(_BYTE *)(*(_QWORD *)(v9 + 48) + 73LL) )
  {
    if ( a4 == 0x10000 )
    {
      v11 = -1073739511;
      goto LABEL_147;
    }
    goto LABEL_61;
  }
  if ( !a7 )
  {
    v20 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v20 == 4096 || v20 == 45056 )
    {
      for ( m = *(__int64 **)(Oplock + 40); m != (__int64 *)(Oplock + 40); m = (__int64 *)*m )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), *(_QWORD *)(m[2] + 48), 0LL) )
        {
          if ( a4 == 0x10000 )
          {
            v11 = -1073741597;
            goto LABEL_147;
          }
          FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)m[1], 533LL, 12288LL);
          break;
        }
      }
    }
    if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
    {
      for ( n = *(__int64 **)(Oplock + 56); n != (__int64 *)(Oplock + 56); n = (__int64 *)*n )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), n[3], 0LL) && !n[7] )
        {
          if ( a4 == 0x10000 )
          {
            v11 = -1073741597;
            goto LABEL_147;
          }
          FsRtlpRemoveAndBreakRHIrp(*(PVOID *)n[1], 12288, 0, 0, 0);
          break;
        }
      }
    }
    v21 = *(_QWORD **)(Oplock + 72);
    if ( v21 != (_QWORD *)(Oplock + 72) )
    {
      while ( v21 != (_QWORD *)(Oplock + 72) )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), v21[3], 0LL) )
        {
          if ( a4 != 0x10000 )
            goto LABEL_61;
          goto LABEL_63;
        }
        v21 = (_QWORD *)*v21;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(*(_QWORD *)a5 + 32LL) = CurrentThread->ApcState.Process;
  *(_QWORD *)(*(_QWORD *)a5 + 24LL) = *(_QWORD *)(v9 + 48);
  v22 = *(_QWORD **)a5;
  v23 = (_QWORD *)(Oplock + 56);
  v24 = *(_QWORD *)(Oplock + 56);
  if ( *(_QWORD *)(v24 + 8) != Oplock + 56 )
    __fastfail(3u);
  *v22 = v24;
  v22[1] = v23;
  *(_QWORD *)(v24 + 8) = v22;
  *v23 = v22;
  memset(v58, 0, 0x30uLL);
  v58[5] = v22;
  v11 = IoSetOplockPrivateFoExt(v22[3], v58);
  if ( v11 >= 0 )
  {
    if ( a4 == 0x10000 )
    {
      v27 = (_QWORD *)(*(_QWORD *)a5 + 56LL);
      v28 = (_QWORD *)(Oplock + 120);
      v29 = *(_QWORD *)(Oplock + 120);
      if ( *(_QWORD *)(v29 + 8) != Oplock + 120 )
        __fastfail(3u);
      *v27 = v29;
      v27[1] = v28;
      *(_QWORD *)(v29 + 8) = v27;
      *v28 = v27;
      v11 = 0;
    }
    else
    {
      v56 = KeGetCurrentThread();
      *(_QWORD *)(*(_QWORD *)a5 + 40LL) = v56;
      ObfReferenceObjectWithTag(*(PVOID *)(*(_QWORD *)a5 + 40LL), 0x746C6644u);
      *(_QWORD *)(*(_QWORD *)a5 + 16LL) = a3;
      v57 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v57 + 3) |= 1u;
      v11 = 259;
      *(_DWORD *)(a3 + 48) = 0;
      *(_QWORD *)(a3 + 56) = Oplock;
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(*(_QWORD *)a5 + 24LL), 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v26) = !a6 || !a7;
        LOBYTE(v25) = 1;
        FsRtlpCancelOplockRHIrp(a3, v25, v26);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v11 = 259;
      }
    }
    *(_QWORD *)a5 = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a4 == 0x10000 )
      *(_DWORD *)(Oplock + 144) |= 0x10000u;
  }
  else
  {
    FsRtlpOplockDequeueRH(v22);
    if ( a4 != 0x10000 )
    {
      *(_DWORD *)(a3 + 48) = v11;
      IofCompleteRequest((PIRP)a3, 1);
    }
  }
LABEL_147:
  if ( v59 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return (unsigned int)v11;
}
