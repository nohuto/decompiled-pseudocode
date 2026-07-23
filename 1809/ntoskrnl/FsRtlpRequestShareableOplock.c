/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x140017E60
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168EA0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14026FF1C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DD640 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockDequeueRH @ 0x140017D48 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x140018750 (FsRtlpComputeShareableOplockState.c)
 *     IoSetOplockPrivateFoExt @ 0x140018830 (IoSetOplockPrivateFoExt.c)
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockKeysEqual @ 0x1400199A0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140019C40 (FsRtlpCallerIsAtomicRequestor.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     FsRtlpClearOwner @ 0x14012180C (FsRtlpClearOwner.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14013325C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B37D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14026FD78 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1402701BC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402702C0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1405DDC54 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x1405DDDA0 (FsRtlpAllocateOplock.c)
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
  int v30; // ecx
  __int64 *n; // rdi
  _QWORD *v32; // rdi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  IRP *v35; // r14
  void *v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  _QWORD *v41; // rdi
  int v42; // eax
  __int64 *k; // rdi
  __int64 v44; // rdx
  _QWORD *v45; // rax
  _QWORD *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  _QWORD *j; // rdi
  __int64 *m; // rdi
  PVOID P; // [rsp+48h] [rbp-90h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+50h] [rbp-88h]
  __int64 v54; // [rsp+58h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-78h]
  __int64 v56; // [rsp+68h] [rbp-70h]
  _QWORD v57[13]; // [rsp+70h] [rbp-68h] BYREF
  char v58; // [rsp+E0h] [rbp+8h]

  v9 = a2;
  v11 = 0;
  FastMutex = 0LL;
  v58 = 0;
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
    v58 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)v9 == 13
    && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(v9 + 48), &P) )
  {
    if ( (v14 & 0x20000) != 0 )
    {
      v32 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v33 = v32[7];
      v34 = (_QWORD *)v32[8];
      if ( *(_QWORD **)(v33 + 8) != v32 + 7 || (_QWORD *)*v34 != v32 + 7 )
        goto LABEL_143;
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v32[5] )
        FsRtlpClearOwner(Oplock, v32);
      ExFreePoolWithTag(v32, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_67;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v36 = i;
      if ( !*((_BYTE *)i + 53) || a4 != 12288 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v36);
      }
    }
    v16 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v17 = v16[7];
    v18 = (_QWORD *)v16[8];
    if ( *(_QWORD **)(v17 + 8) != v16 + 7 || (_QWORD *)*v18 != v16 + 7 )
      goto LABEL_143;
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
    goto LABEL_144;
  }
  if ( !a7 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
  {
    if ( a4 == 0x10000 )
    {
      v11 = -1073739511;
      goto LABEL_144;
    }
    goto LABEL_67;
  }
  if ( a4 != 12288 && a4 != 0x10000 )
  {
    if ( a4 == 16 )
    {
      v37 = *(_DWORD *)(Oplock + 144);
      if ( (v37 & 1) == 0 )
      {
        v38 = v37 & 0x1F0FFDF;
        if ( v38 != 16 && v38 != 4096 && v38 != 4112 )
          goto LABEL_67;
      }
    }
    else if ( a4 != 4096 )
    {
      v35 = (IRP *)a3;
LABEL_122:
      if ( v12 )
        goto LABEL_144;
      goto LABEL_68;
    }
    if ( a7 )
    {
LABEL_107:
      v35 = (IRP *)a3;
      v54 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v54 + 3) |= 1u;
      *(_DWORD *)(a3 + 48) = 0;
      v45 = (_QWORD *)(a3 + 168);
      v46 = (_QWORD *)(Oplock + 40);
      v47 = *(_QWORD *)(Oplock + 40);
      if ( *(_QWORD *)(v47 + 8) != Oplock + 40 )
        goto LABEL_143;
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
        LOBYTE(v48) = 1;
        FsRtlpCancelReadOnlyOplockIrp(a3, v48);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v12 = 1;
      v11 = 259;
      goto LABEL_122;
    }
    v39 = *(_DWORD *)(Oplock + 144);
    if ( (v39 & 1) != 0
      || (v40 = v39 & 0x1F0FFDF, (v39 & 0x1F0FFDF) == 0x10)
      || v40 == 4096
      || v40 == 4112
      || v40 == 12288
      || v40 == 45056
      || v40 == 1060864
      || v40 == 8400896
      || (v39 & 0x10000) != 0 )
    {
      v41 = *(_QWORD **)(Oplock + 56);
      if ( v41 != (_QWORD *)(Oplock + 56) )
        goto LABEL_117;
      if ( *(_QWORD *)(Oplock + 72) != Oplock + 72 )
      {
        while ( v41 != (_QWORD *)(Oplock + 56) )
        {
LABEL_117:
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), v41[3], 0LL) )
            goto LABEL_67;
          v41 = (_QWORD *)*v41;
        }
        for ( j = *(_QWORD **)(Oplock + 72); j != (_QWORD *)(Oplock + 72); j = (_QWORD *)*j )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), j[3], 0LL) )
            goto LABEL_67;
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
            goto LABEL_107;
          }
        }
      }
      goto LABEL_107;
    }
LABEL_67:
    v35 = (IRP *)a3;
LABEL_68:
    v35->IoStatus.Status = -1073741598;
    IofCompleteRequest(v35, 1);
LABEL_69:
    v11 = -1073741598;
    goto LABEL_144;
  }
  if ( !a7
    && (v19 = *(_DWORD *)(Oplock + 144), (v19 & 1) == 0)
    && (v30 = v19 & 0x1F0FFDF, (v19 & 0x1F0FFDF) != 0x3000)
    && v30 != 8400896
    && v30 != 4096
    && v30 != 45056
    && v30 != 1060864
    && (v19 & 0x10000) == 0
    || *(_BYTE *)(*(_QWORD *)(v9 + 48) + 73LL) )
  {
    if ( a4 == 0x10000 )
    {
      v11 = -1073739511;
      goto LABEL_144;
    }
    goto LABEL_67;
  }
  if ( !a7 )
  {
    v20 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v20 == 4096 || v20 == 45056 )
    {
      for ( m = *(__int64 **)(Oplock + 40); ; m = (__int64 *)*m )
      {
        if ( m == (__int64 *)(Oplock + 40) )
          goto LABEL_30;
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), *(_QWORD *)(m[2] + 48), 0LL) )
          break;
      }
      if ( a4 == 0x10000 )
      {
        v11 = -1073741597;
        goto LABEL_144;
      }
      FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)m[1], 533LL, 12288LL);
    }
LABEL_30:
    if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
    {
      for ( n = *(__int64 **)(Oplock + 56); ; n = (__int64 *)*n )
      {
        if ( n == (__int64 *)(Oplock + 56) )
          goto LABEL_31;
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), n[3], 0LL) && !n[7] )
          break;
      }
      if ( a4 == 0x10000 )
      {
        v11 = -1073741597;
        goto LABEL_144;
      }
      FsRtlpRemoveAndCompleteRHIrp(*(PVOID *)n[1], 0, 0, 0);
    }
LABEL_31:
    v21 = *(_QWORD **)(Oplock + 72);
    if ( v21 != (_QWORD *)(Oplock + 72) )
    {
      while ( 1 )
      {
        if ( v21 == (_QWORD *)(Oplock + 72) )
          goto LABEL_32;
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), v21[3], 0LL) )
          break;
        v21 = (_QWORD *)*v21;
      }
      if ( a4 == 0x10000 )
        goto LABEL_69;
      goto LABEL_67;
    }
  }
LABEL_32:
  *(_QWORD *)(*(_QWORD *)a5 + 32LL) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(*(_QWORD *)a5 + 24LL) = *(_QWORD *)(v9 + 48);
  v22 = *(_QWORD **)a5;
  v23 = (_QWORD *)(Oplock + 56);
  v24 = *(_QWORD *)(Oplock + 56);
  if ( *(_QWORD *)(v24 + 8) != Oplock + 56 )
    goto LABEL_143;
  *v22 = v24;
  v22[1] = v23;
  *(_QWORD *)(v24 + 8) = v22;
  *v23 = v22;
  memset(v57, 0, 0x30uLL);
  v57[5] = v22;
  v11 = IoSetOplockPrivateFoExt(v22[3], v57);
  if ( v11 < 0 )
  {
    FsRtlpOplockDequeueRH((__int64)v22);
    if ( a4 != 0x10000 )
    {
      *(_DWORD *)(a3 + 48) = v11;
      IofCompleteRequest((PIRP)a3, 1);
    }
    goto LABEL_144;
  }
  if ( a4 != 0x10000 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(*(_QWORD *)a5 + 40LL) = CurrentThread;
    ObfReferenceObjectWithTag(*(PVOID *)(*(_QWORD *)a5 + 40LL), 0x746C6644u);
    *(_QWORD *)(*(_QWORD *)a5 + 16LL) = a3;
    v56 = *(_QWORD *)(a3 + 184);
    *(_BYTE *)(v56 + 3) |= 1u;
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
    goto LABEL_40;
  }
  v27 = (_QWORD *)(*(_QWORD *)a5 + 56LL);
  v28 = (_QWORD *)(Oplock + 120);
  v29 = *(_QWORD *)(Oplock + 120);
  if ( *(_QWORD *)(v29 + 8) != Oplock + 120 )
LABEL_143:
    __fastfail(3u);
  *v27 = v29;
  v27[1] = v28;
  *(_QWORD *)(v29 + 8) = v27;
  *v28 = v27;
  v11 = 0;
LABEL_40:
  *(_QWORD *)a5 = 0LL;
  FsRtlpComputeShareableOplockState(Oplock);
  if ( a4 == 0x10000 )
    *(_DWORD *)(Oplock + 144) |= 0x10000u;
LABEL_144:
  if ( v58 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return (unsigned int)v11;
}
