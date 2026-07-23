/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x14015E20C
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1405DD640 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockDequeueRH @ 0x140017D48 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x140018750 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockKeysEqual @ 0x1400199A0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140019C40 (FsRtlpCallerIsAtomicRequestor.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     FsRtlpClearOwner @ 0x14012180C (FsRtlpClearOwner.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14013F81C (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B37D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1402701BC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402702C0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1405DDC54 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x1405DDDA0 (FsRtlpAllocateOplock.c)
 */

__int64 __fastcall FsRtlpRequestExclusiveOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r15d
  __int64 v9; // r13
  unsigned int v11; // edi
  __int64 Oplock; // r14
  CCHAR v13; // r10
  int v14; // edx
  int v15; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v17; // ebx
  CCHAR v18; // dl
  int v19; // r11d
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *i; // rbx
  void *v24; // rcx
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  bool v28; // zf
  __int64 v29; // rcx
  int v30; // edx
  __int64 v31; // r15
  __int64 v32; // rdx
  _QWORD *v33; // r13
  _QWORD *m; // r15
  _QWORD *n; // rax
  PVOID *v36; // r15
  _QWORD *v37; // r13
  _QWORD *j; // r15
  _QWORD *k; // rax
  _QWORD *v40; // r15
  PVOID P; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v43; // [rsp+50h] [rbp-68h]
  __int64 v44; // [rsp+58h] [rbp-60h]
  __int64 v45; // [rsp+60h] [rbp-58h]
  __int64 v46; // [rsp+68h] [rbp-50h]
  __int64 v47; // [rsp+70h] [rbp-48h]
  __int64 v48; // [rsp+78h] [rbp-40h]

  v7 = a4;
  v9 = a2;
  v11 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v44 = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)v9 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(v9 + 48), &P) )
  {
    if ( (v19 & 0x20000) != 0 )
    {
      v20 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v21 = v20[7];
      v22 = (_QWORD *)v20[8];
      if ( *(_QWORD **)(v21 + 8) == v20 + 7 && (_QWORD *)*v22 == v20 + 7 )
      {
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
          *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
        if ( v20[5] )
          FsRtlpClearOwner(Oplock, (__int64)v20);
        ExFreePoolWithTag(v20, 0);
        P = 0LL;
        FsRtlpComputeShareableOplockState(Oplock);
LABEL_32:
        v17 = -1073741598;
LABEL_34:
        v18 = 1;
        goto LABEL_20;
      }
LABEL_48:
      __fastfail(3u);
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v24 = i;
      if ( !*((_BYTE *)i + 53) )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v24);
      }
    }
    v25 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v26 = v25[7];
    v27 = (_QWORD *)v25[8];
    if ( *(_QWORD **)(v26 + 8) != v25 + 7 || (_QWORD *)*v27 != v25 + 7 )
      goto LABEL_48;
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v25[5] )
      FsRtlpClearOwner(Oplock, (__int64)v25);
    ExFreePoolWithTag(v25, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v7 = a4;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, v13);
    goto LABEL_105;
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    *(_QWORD *)(Oplock + 8) = *(_QWORD *)(v9 + 48);
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x20 | 0xC8;
    goto LABEL_105;
  }
  v14 = *(_DWORD *)(Oplock + 144);
  if ( (v14 & 0x91) == 0 )
  {
    if ( (*(_DWORD *)(Oplock + 144) & 0x1F00F00) != 0
      || (*(_DWORD *)(Oplock + 144) & 0x7000) == 0
      || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
    {
      if ( (a6 & 0x10000) != 0 )
        goto LABEL_54;
      goto LABEL_18;
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_54;
    if ( (a6 & 0x7000) != 0 )
    {
      v29 = *(_QWORD *)(v9 + 48);
      if ( !*(_BYTE *)(v29 + 73) || (a6 & 0x2000) == 0 )
      {
        v30 = v14 & 0x1F0FFDF;
        if ( v30 == 4096 )
        {
          if ( ((a6 - 20544) & 0xFFFFDFFF) != 0 )
            goto LABEL_55;
          v37 = (_QWORD *)(Oplock + 40);
          for ( j = *(_QWORD **)(Oplock + 40); j != v37; j = (_QWORD *)*j )
          {
            v47 = j[2];
            if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v47 + 48), 0) )
              goto LABEL_32;
          }
          v13 = 1;
          if ( a4 > 1 && (a5 & 1) == 0 )
            goto LABEL_55;
          for ( k = (_QWORD *)*v37; ; k = (_QWORD *)*v40 )
          {
            v43 = k;
            if ( k == v37 )
              break;
            v40 = (_QWORD *)k[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp(*v40, 533LL, a6 & 0x7000);
          }
        }
        else
        {
          if ( v30 != 12288 )
          {
            if ( (v30 == 20544 || v30 == 28736 && a6 == 28736) && ((a6 - 20544) & 0xFFFFDFFF) == 0 )
            {
              if ( !FsRtlpOplockKeysEqual(v29, *(_QWORD *)(Oplock + 8), 0) )
                goto LABEL_32;
              v45 = *(_QWORD *)Oplock;
              v31 = v45;
              *(_BYTE *)(v31 + 69) = KeAcquireQueuedSpinLock(7uLL);
              _InterlockedExchange64((volatile __int64 *)(v31 + 104), 0LL);
              KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v31 + 69));
              if ( *(_BYTE *)(v45 + 68) )
              {
                *(_QWORD *)(v31 + 56) = 0LL;
                *(_DWORD *)(v31 + 48) = -1073741536;
              }
              else
              {
                v32 = *(_QWORD *)(v45 + 24);
                v46 = v32;
                *(_QWORD *)v32 = 0LL;
                *(_QWORD *)(v32 + 8) = 0LL;
                *(_QWORD *)(v32 + 16) = 0LL;
                *(_DWORD *)v32 = 1572865;
                *(_DWORD *)(v32 + 4) = (*(_DWORD *)(Oplock + 144) >> 12) & 7;
                *(_DWORD *)(v32 + 8) = (a6 >> 12) & 7;
                *(_QWORD *)(v31 + 56) = 24LL;
                *(_DWORD *)(v31 + 48) = 533;
              }
              IofCompleteRequest((PIRP)v31, 1);
              *(_QWORD *)Oplock = 0LL;
              ObfDereferenceObjectWithTag(*(PVOID *)(Oplock + 8), 0x746C6644u);
              *(_QWORD *)(Oplock + 8) = 0LL;
              goto LABEL_15;
            }
            goto LABEL_55;
          }
          if ( a6 != 28736 )
            goto LABEL_55;
          v33 = (_QWORD *)(Oplock + 56);
          for ( m = *(_QWORD **)(Oplock + 56); m != v33; m = (_QWORD *)*m )
          {
            if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], 0) )
              goto LABEL_32;
            if ( m[7] )
            {
              v17 = -1073741597;
              goto LABEL_34;
            }
          }
          v13 = 1;
          if ( a4 > 1 && (a5 & 1) == 0 )
            goto LABEL_55;
          for ( n = (_QWORD *)*v33; ; n = *v36 )
          {
            v43 = n;
            if ( n == v33 )
              break;
            v36 = (PVOID *)n[1];
            FsRtlpRemoveAndCompleteRHIrp(*v36, 0, 0, 0);
          }
        }
        v9 = a2;
        goto LABEL_15;
      }
    }
LABEL_55:
    v17 = -1073741598;
LABEL_19:
    v18 = v13;
LABEL_20:
    *(_DWORD *)(a3 + 48) = v17;
    IofCompleteRequest((PIRP)a3, v18);
    goto LABEL_21;
  }
  if ( (v14 & 0x10) != 0 && (a6 & 0x7000) != 0 )
  {
    v28 = (a6 & 0x10000) == 0;
    goto LABEL_53;
  }
  if ( (v14 & 0x80u) != 0 && !FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), *(_QWORD *)(Oplock + 8), 0) )
  {
    if ( (a6 & 0x10000) == 0 )
      goto LABEL_32;
LABEL_54:
    v11 = -1073739511;
    goto LABEL_105;
  }
  v15 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
  if ( v15 == 16 || v15 == 4096 || v15 == 4112 )
    FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)(Oplock + 40), 0LL, 0LL);
  v13 = 1;
  if ( v7 > 1 && (*(_BYTE *)(Oplock + 144) & 1) != 0 && (a5 & 1) == 0 )
  {
LABEL_18:
    v17 = -1073741598;
    if ( !a3 )
    {
LABEL_21:
      v11 = v17;
      goto LABEL_105;
    }
    goto LABEL_19;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 48) + 73LL) && (a6 & 0x2000) != 0 )
  {
    v28 = (a6 & 0x10000) == 0;
LABEL_53:
    if ( !v28 )
      goto LABEL_54;
    goto LABEL_55;
  }
LABEL_15:
  *(_QWORD *)Oplock = a3;
  *(_QWORD *)(Oplock + 8) = *(_QWORD *)(v9 + 48);
  FsRtlpClearOwner(Oplock, 0LL);
  *(_QWORD *)(Oplock + 16) = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(Oplock + 24) = CurrentThread;
  ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  *(_BYTE *)(Oplock + 32) = 0;
  *(_DWORD *)(Oplock + 144) = a6 | *(_DWORD *)(Oplock + 144) & 0x20;
  ObfReferenceObjectWithTag(*(PVOID *)(v9 + 48), 0x746C6644u);
  v48 = *(_QWORD *)(a3 + 184);
  *(_BYTE *)(v48 + 3) |= 1u;
  *(_QWORD *)(a3 + 56) = Oplock;
  *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( *(_BYTE *)(a3 + 68) )
  {
    FsRtlpCancelExclusiveIrp(a3, 1, 1);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
  }
  v11 = 259;
LABEL_105:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v11;
}
