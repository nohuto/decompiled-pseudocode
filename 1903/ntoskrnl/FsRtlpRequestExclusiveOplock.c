/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x140174194
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1405E4C80 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400109A0 (FsRtlpComputeShareableOplockState.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockKeysEqual @ 0x1400B6A10 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400B6DE8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x1400B734C (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x1400B73BC (FsRtlpClearOwner.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1401230B8 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140283738 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140283CBC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140283DBC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1405E4C34 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x1406CB0F8 (FsRtlpAllocateOplock.c)
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
  __int64 v9; // rbx
  unsigned int v11; // edi
  __int64 Oplock; // r14
  CCHAR v13; // r10
  int v14; // edx
  int v15; // eax
  struct _KTHREAD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // ebx
  CCHAR v20; // dl
  int v21; // r11d
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *i; // rbx
  void *v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  bool v30; // zf
  __int64 v31; // r8
  int v32; // edx
  PIRP v33; // rbx
  PIRP v34; // r8
  struct _IRP *MasterIrp; // rcx
  _QWORD *v36; // r12
  _QWORD *m; // rbx
  _QWORD *n; // rax
  PVOID *v39; // rbx
  _QWORD *v40; // r12
  _QWORD *j; // rbx
  _QWORD *k; // rax
  _QWORD *v43; // rbx
  PVOID P; // [rsp+40h] [rbp-88h] BYREF
  _QWORD *v46; // [rsp+48h] [rbp-80h]
  __int64 v47; // [rsp+50h] [rbp-78h]
  int v48; // [rsp+58h] [rbp-70h]
  PIRP Irp; // [rsp+60h] [rbp-68h]
  struct _IRP *v50; // [rsp+68h] [rbp-60h]
  __int64 v51; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-50h]
  struct _KTHREAD *v53; // [rsp+80h] [rbp-48h]
  __int64 v54; // [rsp+88h] [rbp-40h]

  v9 = a2;
  v11 = 0;
  v48 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v47 = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)v9 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(v9 + 48), &P) )
  {
    if ( (v21 & 0x20000) != 0 )
    {
      v22 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v23 = v22[7];
      v24 = (_QWORD *)v22[8];
      if ( *(_QWORD **)(v23 + 8) != v22 + 7 || (_QWORD *)*v24 != v22 + 7 )
        __fastfail(3u);
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v22[5] )
        FsRtlpClearOwner(Oplock, (__int64)v22);
      ExFreePoolWithTag(v22, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
LABEL_32:
      v19 = -1073741598;
LABEL_34:
      v20 = 1;
      goto LABEL_20;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v26 = i;
      if ( !*((_BYTE *)i + 53) )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v26);
      }
    }
    v27 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v28 = v27[7];
    v29 = (_QWORD *)v27[8];
    if ( *(_QWORD **)(v28 + 8) != v27 + 7 || (_QWORD *)*v29 != v27 + 7 )
      __fastfail(3u);
    *v29 = v28;
    *(_QWORD *)(v28 + 8) = v29;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v27[5] )
      FsRtlpClearOwner(Oplock, (__int64)v27);
    ExFreePoolWithTag(v27, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v9 = a2;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, v13);
    goto LABEL_106;
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    *(_QWORD *)(Oplock + 8) = *(_QWORD *)(v9 + 48);
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x20 | 0xC8;
    goto LABEL_106;
  }
  v14 = *(_DWORD *)(Oplock + 144);
  if ( (v14 & 0x91) == 0 )
  {
    if ( (*(_DWORD *)(Oplock + 144) & 0x1F00F00) == 0 && (*(_DWORD *)(Oplock + 144) & 0x7000) != 0 )
    {
      v31 = *(_QWORD *)(Oplock + 72);
      if ( v31 == Oplock + 72 )
      {
        if ( (a6 & 0x10000) != 0 )
          goto LABEL_55;
        if ( (a6 & 0x7000) != 0 && (!*(_BYTE *)(*(_QWORD *)(v9 + 48) + 73LL) || (a6 & 0x2000) == 0) )
        {
          v32 = v14 & 0x1F0FFDF;
          if ( v32 == 4096 )
          {
            if ( ((a6 - 20544) & 0xFFFFDFFF) == 0 )
            {
              v40 = (_QWORD *)(Oplock + 40);
              for ( j = *(_QWORD **)(Oplock + 40); j != v40; j = (_QWORD *)*j )
              {
                v51 = j[2];
                if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v51 + 48), 0) )
                  goto LABEL_32;
              }
              v13 = 1;
              if ( a4 <= 1 || (a5 & 1) != 0 )
              {
                for ( k = (_QWORD *)*v40; ; k = (_QWORD *)*v43 )
                {
                  v46 = k;
                  if ( k == v40 )
                    break;
                  v43 = (_QWORD *)k[1];
                  FsRtlpRemoveAndCompleteReadOnlyIrp(*v43, 533LL, a6 & 0x7000);
                }
                goto LABEL_15;
              }
            }
          }
          else if ( v32 == 12288 )
          {
            if ( a6 == 28736 && v31 == Oplock + 72 )
            {
              v36 = (_QWORD *)(Oplock + 56);
              for ( m = *(_QWORD **)(Oplock + 56); m != v36; m = (_QWORD *)*m )
              {
                if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], 0) )
                  goto LABEL_32;
                if ( m[7] )
                {
                  v19 = -1073741597;
                  goto LABEL_34;
                }
              }
              v13 = 1;
              if ( a4 <= 1 || (a5 & 1) != 0 )
              {
                for ( n = (_QWORD *)*v36; ; n = *v39 )
                {
                  v46 = n;
                  if ( n == v36 )
                    break;
                  v39 = (PVOID *)n[1];
                  FsRtlpRemoveAndBreakRHIrp(*v39, Oplock, 1, 533, 0x7000u, 0, 0, 0);
                }
                goto LABEL_15;
              }
            }
          }
          else if ( (v32 == 20544 || v32 == 28736 && a6 == 28736) && ((a6 - 20544) & 0xFFFFDFFF) == 0 )
          {
            if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), *(_QWORD *)(Oplock + 8), 0) )
              goto LABEL_32;
            Irp = *(PIRP *)Oplock;
            v33 = Irp;
            v33->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v33->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v33->CancelIrql);
            v34 = Irp;
            if ( Irp->Cancel )
            {
              Irp->IoStatus.Information = 0LL;
              v34->IoStatus.Status = -1073741536;
            }
            else
            {
              MasterIrp = Irp->AssociatedIrp.MasterIrp;
              v50 = MasterIrp;
              *(_QWORD *)&MasterIrp->Type = 0LL;
              MasterIrp->MdlAddress = 0LL;
              *(_QWORD *)&MasterIrp->Flags = 0LL;
              *(_DWORD *)&MasterIrp->Type = 1572865;
              *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(Oplock + 144) >> 12) & 7;
              LODWORD(MasterIrp->MdlAddress) = (a6 >> 12) & 7;
              v34->IoStatus.Information = 24LL;
              v34->IoStatus.Status = 533;
            }
            IofCompleteRequest(v34, 1);
            *(_QWORD *)Oplock = 0LL;
            ObfDereferenceObjectWithTag(*(PVOID *)(Oplock + 8), 0x746C6644u);
            *(_QWORD *)(Oplock + 8) = 0LL;
            goto LABEL_15;
          }
        }
LABEL_56:
        v19 = -1073741598;
LABEL_19:
        v20 = v13;
LABEL_20:
        *(_DWORD *)(a3 + 48) = v19;
        IofCompleteRequest((PIRP)a3, v20);
        goto LABEL_21;
      }
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_55;
LABEL_18:
    v19 = -1073741598;
    if ( !a3 )
    {
LABEL_21:
      v11 = v19;
      goto LABEL_106;
    }
    goto LABEL_19;
  }
  if ( (v14 & 0x10) != 0 && (a6 & 0x7000) != 0 )
  {
    v30 = (a6 & 0x10000) == 0;
    goto LABEL_54;
  }
  if ( (v14 & 0x80u) != 0 && !FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), *(_QWORD *)(Oplock + 8), 0) )
  {
    if ( (a6 & 0x10000) == 0 )
      goto LABEL_32;
LABEL_55:
    v11 = -1073739511;
    goto LABEL_106;
  }
  v15 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
  if ( v15 == 16 || v15 == 4096 || v15 == 4112 )
    FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)(Oplock + 40), 0LL, 0LL);
  v13 = 1;
  if ( a4 > 1 && (*(_BYTE *)(Oplock + 144) & 1) != 0 && (a5 & 1) == 0 )
    goto LABEL_18;
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 48) + 73LL) && (a6 & 0x2000) != 0 )
  {
    v30 = (a6 & 0x10000) == 0;
LABEL_54:
    if ( !v30 )
      goto LABEL_55;
    goto LABEL_56;
  }
LABEL_15:
  *(_QWORD *)Oplock = a3;
  *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
  FsRtlpClearOwner(Oplock, 0LL);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(Oplock + 16) = CurrentThread->ApcState.Process;
  v16 = KeGetCurrentThread();
  v53 = v16;
  *(_QWORD *)(Oplock + 24) = v16;
  ObfReferenceObjectWithTag(v16, 0x746C6644u);
  *(_BYTE *)(Oplock + 32) = 0;
  *(_DWORD *)(Oplock + 144) = a6 | *(_DWORD *)(Oplock + 144) & 0x20;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
  v54 = *(_QWORD *)(a3 + 184);
  *(_BYTE *)(v54 + 3) |= 1u;
  *(_QWORD *)(a3 + 56) = Oplock;
  *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( *(_BYTE *)(a3 + 68) )
  {
    LOBYTE(v18) = 1;
    LOBYTE(v17) = 1;
    FsRtlpCancelExclusiveIrp(a3, v17, v18);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
  }
  v11 = 259;
LABEL_106:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v11;
}
