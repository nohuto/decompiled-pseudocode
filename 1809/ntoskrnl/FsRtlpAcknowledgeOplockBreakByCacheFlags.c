/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168EA0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1405DD640 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockDequeueRH @ 0x140017D48 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpRequestShareableOplock @ 0x140017E60 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140018750 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockKeysEqual @ 0x1400199A0 (FsRtlpOplockKeysEqual.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x140107E20 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpClearOwner @ 0x14012180C (FsRtlpClearOwner.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140133360 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14013F81C (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14026FF1C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402702C0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1405DDC54 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  _UNKNOWN **v6; // rax
  __int64 v9; // rbx
  unsigned int v10; // r14d
  _QWORD *PoolWithTag; // r12
  char v12; // r13
  int v13; // ecx
  bool v14; // zf
  int v15; // r11d
  unsigned int v16; // ecx
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  __int64 *v19; // r13
  int v20; // eax
  _QWORD *v21; // r8
  int v22; // r11d
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v29; // al
  _QWORD *v30; // r10
  __int64 v31; // rax
  unsigned int v32; // ecx
  _QWORD *v33; // r10
  _QWORD *v34; // rax
  __int64 v35; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  int v37; // r12d
  __int64 v38; // rax
  int v39; // eax
  char v40; // cl
  __int64 v41; // r8
  void *v42; // rcx
  char v44; // [rsp+50h] [rbp-88h]
  char v45; // [rsp+59h] [rbp-7Fh]
  char v46; // [rsp+5Ah] [rbp-7Eh]
  char v47; // [rsp+5Bh] [rbp-7Dh] BYREF
  char v48; // [rsp+5Ch] [rbp-7Ch] BYREF
  char v49; // [rsp+5Dh] [rbp-7Bh]
  int v50; // [rsp+60h] [rbp-78h]
  _QWORD *v51; // [rsp+68h] [rbp-70h] BYREF
  char v52; // [rsp+70h] [rbp-68h]
  char v53; // [rsp+71h] [rbp-67h]
  _QWORD *v54; // [rsp+78h] [rbp-60h]
  __int64 v55; // [rsp+80h] [rbp-58h]
  __int64 v56; // [rsp+88h] [rbp-50h]
  struct _KTHREAD *v57; // [rsp+90h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF
  __int64 v59; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v60; // [rsp+E8h] [rbp+10h]
  unsigned int v61; // [rsp+F8h] [rbp+20h]

  v6 = &retaddr;
  v61 = a4;
  v60 = a2;
  v59 = a1;
  v9 = a1;
  v10 = 0;
  PoolWithTag = 0LL;
  v51 = 0LL;
  v44 = 0;
  v12 = 0;
  v49 = 0;
  v52 = 0;
  v45 = 0;
  LOBYTE(v6) = 0;
  LODWORD(v54) = (_DWORD)v6;
  v53 = 0;
  v48 = 0;
  v47 = 0;
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v13 = *(_DWORD *)(v9 + 144);
  if ( (v13 & 0xF00000) == 0 && (((v13 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v13 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && *(_QWORD *)(v9 + 72) == v9 + 72 )
  {
LABEL_31:
    v10 = -1073741597;
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_99;
  }
  v55 = *(_QWORD *)(a3 + 24);
  v14 = (*(_DWORD *)(v55 + 8) & 4) == 0;
  v15 = *(_DWORD *)(v55 + 8) & 4;
  v50 = v15;
  v46 = !v14;
  if ( v15 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x18uLL, 0x6F725346u);
    v51 = PoolWithTag;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    v13 = *(_DWORD *)(v9 + 144);
    v15 = v50;
  }
  v16 = v13 & 0x1F0FFDF;
  if ( v16 <= 0x307040 )
  {
    if ( v16 != 3174464 )
    {
      if ( v16 == 12288 || v16 == 45056 || v16 == 1060864 )
        goto LABEL_9;
      if ( v16 != 1069120 && v16 != 1077312 )
        goto LABEL_31;
    }
LABEL_38:
    v23 = v60;
    if ( !v15 )
      goto LABEL_43;
    v24 = *(_QWORD *)(v9 + 8);
    v25 = *(_QWORD *)(v60 + 48);
    if ( v24 == v25 || !FsRtlpOplockKeysEqual(v25, v24, 0) )
      goto LABEL_31;
    v15 = v50;
    if ( !v50 )
    {
LABEL_43:
      if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v23 + 48) )
        goto LABEL_31;
      if ( !v15 )
        goto LABEL_80;
    }
    if ( a4 )
    {
LABEL_80:
      v39 = *(_DWORD *)(v9 + 144) & 0x1F0FFDF;
      if ( (v39 == 1069120 || v39 == 1077312 || v39 == 3174464 || v39 == 5271616 || v39 == 8409152 || v39 == 8417344)
        && (a4 & 0x7000) > (*(_DWORD *)(v9 + 144) & 0x200000 | ((*(_DWORD *)(v9 + 144) & 0x100000 | (*(_DWORD *)(v9 + 144) >> 1) & 0x200000u) >> 1)) >> 7 )
      {
        v40 = (char)v54;
        if ( *(_QWORD *)(v9 + 88) != v9 + 88 )
          v40 = 1;
      }
      else
      {
        v40 = (char)v54;
      }
      if ( v40 )
      {
        v41 = *(_QWORD *)(a3 + 24);
        *(_QWORD *)v41 = 0LL;
        *(_QWORD *)(v41 + 8) = 0LL;
        *(_QWORD *)(v41 + 16) = 0LL;
        *(_DWORD *)(v41 + 4) = (*(_DWORD *)(v9 + 144) >> 12) & 7;
        *(_DWORD *)(v41 + 8) = (*(_DWORD *)(v9 + 144) & 0x200000 | ((*(_DWORD *)(v9 + 144) & 0x100000 | (*(_DWORD *)(v9 + 144) >> 1) & 0x200000u) >> 1)) >> 19;
        *(_DWORD *)(v41 + 12) |= 1u;
        *(_QWORD *)(a3 + 56) = 24LL;
        v10 = -2147483602;
        *(_DWORD *)(a3 + 48) = -2147483602;
        IofCompleteRequest((PIRP)a3, 1);
        goto LABEL_99;
      }
      FsRtlpModifyThreadPriorities(v9, 0LL, 0);
      FsRtlpClearOwner(v9, 0LL);
      *(_BYTE *)(v9 + 32) = 0;
      v10 = FsRtlpGrantAnyOplockFromExclusive(v9, a3, v23, a4, a5, v46, &v51, &v47, &v48, a6);
      PoolWithTag = v51;
      goto LABEL_94;
    }
    FsRtlpModifyThreadPriorities(v9, 0LL, 0);
    FsRtlpClearOwner(v9, 0LL);
    *(_BYTE *)(v9 + 32) = 0;
    *(_DWORD *)(v9 + 144) = *(_DWORD *)(v9 + 144) & 0x20 | 1;
    PoolWithTag[2] = *(_QWORD *)(v9 + 8);
    v26 = (_QWORD *)(v9 + 104);
    v27 = *(_QWORD *)(v9 + 104);
    if ( *(_QWORD *)(v27 + 8) == v9 + 104 )
    {
      *PoolWithTag = v27;
      PoolWithTag[1] = v26;
      *(_QWORD *)(v27 + 8) = PoolWithTag;
      *v26 = PoolWithTag;
      PoolWithTag = 0LL;
      v51 = 0LL;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_DWORD *)(v9 + 144) |= 0x1000000u;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
      goto LABEL_94;
    }
LABEL_79:
    __fastfail(3u);
  }
  if ( v16 != 8400896 )
  {
    if ( v16 != 5271616 && v16 != 8409152 && v16 != 8417344 )
      goto LABEL_31;
    goto LABEL_38;
  }
LABEL_9:
  v17 = (_QWORD *)(v9 + 72);
  v18 = *(_QWORD **)(v9 + 72);
  while ( 1 )
  {
    v54 = v18;
    if ( v18 == v17 )
      goto LABEL_25;
    v19 = (__int64 *)(v60 + 48);
    if ( v15 )
      break;
    if ( v18[3] == *v19 )
      goto LABEL_13;
LABEL_54:
    v18 = (_QWORD *)*v18;
    v12 = v49;
    v17 = (_QWORD *)(v9 + 72);
  }
  v28 = v18[3];
  if ( v28 == *v19 )
    goto LABEL_54;
  v29 = FsRtlpOplockKeysEqual(*v19, v28, 0);
  v15 = v50;
  if ( !v29 )
    goto LABEL_54;
LABEL_13:
  v44 = 1;
  v20 = v18[6] & 0xF00000;
  v10 = v61;
  if ( v20 != 0x800000 )
  {
    if ( v20 != 0x100000 )
      goto LABEL_15;
    if ( (v61 & 0x7000) <= 0x3000 )
      goto LABEL_15;
    v33 = (_QWORD *)(v9 + 88);
    if ( (_QWORD *)*v33 == v33 )
    {
      if ( (unsigned __int8)FsRtlpOplockUpperLowerCompatible(v61, a6) )
        goto LABEL_15;
    }
    v31 = *(_QWORD *)(a3 + 24);
    *(_QWORD *)v31 = 0LL;
    *(_QWORD *)(v31 + 8) = 0LL;
    *(_QWORD *)(v31 + 16) = 0LL;
    *(_DWORD *)(v31 + 4) = 3;
    v32 = a6;
    if ( (_QWORD *)*v33 != v33 )
      v32 = 1;
LABEL_62:
    *(_DWORD *)(v31 + 8) = v32;
    *(_DWORD *)(v31 + 12) |= 1u;
    *(_QWORD *)(a3 + 56) = 24LL;
    v10 = -2147483602;
    *(_DWORD *)(a3 + 48) = -2147483602;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_24;
  }
  if ( v61 )
  {
    v30 = (_QWORD *)(v9 + 88);
    if ( (_QWORD *)*v30 != v30 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(v61, a6) )
    {
      v31 = *(_QWORD *)(a3 + 24);
      *(_QWORD *)v31 = 0LL;
      *(_QWORD *)(v31 + 8) = 0LL;
      *(_QWORD *)(v31 + 16) = 0LL;
      *(_DWORD *)(v31 + 4) = 3;
      v32 = a6;
      if ( (_QWORD *)*v30 != v30 )
        v32 = 0;
      goto LABEL_62;
    }
  }
LABEL_15:
  FsRtlpOplockDequeueRH((__int64)v18);
  if ( !v22 )
  {
    v45 = 1;
    if ( !v10 )
    {
      ObfDereferenceObjectWithTag((PVOID)v18[3], 0x746C6644u);
      goto LABEL_18;
    }
    goto LABEL_70;
  }
  PoolWithTag[2] = v18[3];
  v34 = (_QWORD *)(v9 + 104);
  v35 = *(_QWORD *)(v9 + 104);
  if ( *(_QWORD *)(v35 + 8) != v9 + 104 )
    goto LABEL_79;
  *PoolWithTag = v35;
  PoolWithTag[1] = v34;
  *(_QWORD *)(v35 + 8) = PoolWithTag;
  *v34 = PoolWithTag;
  PoolWithTag = v21;
  v51 = v21;
LABEL_18:
  if ( !v10 )
  {
    FsRtlpComputeShareableOplockState(v9);
    *(_DWORD *)(a3 + 48) = 0;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_20;
  }
LABEL_70:
  if ( (v10 & 0x4040) == 0 && (v10 & 0x3010) != 0 )
  {
    v10 = FsRtlpRequestShareableOplock(&v59, v60, a3, v10, a5, v46, 1, a6);
    goto LABEL_78;
  }
  *(_QWORD *)v9 = a3;
  v56 = *(_QWORD *)(a3 + 184);
  *(_BYTE *)(v56 + 3) |= 1u;
  *(_QWORD *)(a3 + 56) = v9;
  *(_QWORD *)(v59 + 16) = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  v57 = CurrentThread;
  v9 = v59;
  *(_QWORD *)(v59 + 24) = CurrentThread;
  ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  *(_BYTE *)(v9 + 32) = 0;
  v37 = v50;
  if ( v50 )
  {
    ObfReferenceObjectWithTag((PVOID)*v19, 0x746C6644u);
    v38 = *v19;
  }
  else
  {
    v38 = v18[3];
  }
  *(_QWORD *)(v9 + 8) = v38;
  *(_DWORD *)(v9 + 144) = v10 | *(_DWORD *)(v9 + 144) & 0x20 | 0x40;
  *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( *(_BYTE *)(a3 + 68) )
  {
    FsRtlpCancelExclusiveIrp(a3, 1, v37 == 0);
    v10 = 259;
    PoolWithTag = v51;
    v44 = 1;
    v18 = v54;
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    v10 = 259;
    PoolWithTag = v51;
    v44 = 1;
    v18 = v54;
LABEL_78:
    v9 = v59;
  }
LABEL_20:
  FsRtlpModifyThreadPriorities(v9, (__int64)v18, 0);
  FsRtlpClearOwner(v9, (__int64)v18);
  if ( *(_QWORD *)(v9 + 72) == v9 + 72 )
    *(_BYTE *)(v9 + 32) = 0;
  ExFreePoolWithTag(v18, 0);
  if ( v50 )
    *(_DWORD *)(v9 + 144) |= 0x1000000u;
LABEL_24:
  v12 = 1;
LABEL_25:
  if ( !v44 )
    goto LABEL_31;
  if ( v45 )
    FsRtlpReleaseIrpsWaitingForRH(v9);
  if ( !v12 )
  {
LABEL_94:
    if ( v47 )
    {
      while ( 1 )
      {
        v42 = *(void **)(v9 + 88);
        if ( v42 == (void *)(v9 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v42);
      }
    }
    if ( v48 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v9 + 8), 0x746C6644u);
      *(_QWORD *)(v9 + 8) = 0LL;
    }
  }
LABEL_99:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v9 + 152));
  return v10;
}
