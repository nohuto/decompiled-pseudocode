/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016FC40
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1405E5450 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpRequestShareableOplock @ 0x1400102C0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140010BD0 (FsRtlpComputeShareableOplockState.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockKeysEqual @ 0x1401034F0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x140103E2C (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140103E9C (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x140104020 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1401040E4 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140283498 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14028377C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140283B1C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1405E5404 (FsRtlpOplockUpperLowerCompatible.c)
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
  struct _KTHREAD *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // eax
  char v41; // cl
  __int64 v42; // r8
  void *v43; // rcx
  char v45; // [rsp+50h] [rbp-88h]
  char v46; // [rsp+51h] [rbp-87h]
  char v47; // [rsp+59h] [rbp-7Fh]
  char v48; // [rsp+5Ah] [rbp-7Eh] BYREF
  char v49; // [rsp+5Bh] [rbp-7Dh] BYREF
  char v50; // [rsp+5Ch] [rbp-7Ch]
  int v51; // [rsp+60h] [rbp-78h]
  _QWORD *v52; // [rsp+68h] [rbp-70h] BYREF
  char v53; // [rsp+70h] [rbp-68h]
  char v54; // [rsp+71h] [rbp-67h]
  _QWORD *v55; // [rsp+78h] [rbp-60h]
  __int64 v56; // [rsp+80h] [rbp-58h]
  __int64 v57; // [rsp+88h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *v59; // [rsp+98h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF
  __int64 v61; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v62; // [rsp+E8h] [rbp+10h]
  unsigned int v63; // [rsp+F8h] [rbp+20h]

  v6 = &retaddr;
  v63 = a4;
  v62 = a2;
  v61 = a1;
  v9 = a1;
  v10 = 0;
  PoolWithTag = 0LL;
  v52 = 0LL;
  v45 = 0;
  v12 = 0;
  v50 = 0;
  v53 = 0;
  v47 = 0;
  LOBYTE(v6) = 0;
  LODWORD(v55) = (_DWORD)v6;
  v54 = 0;
  v49 = 0;
  v48 = 0;
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
    goto LABEL_32;
  }
  v56 = *(_QWORD *)(a3 + 24);
  v14 = (*(_DWORD *)(v56 + 8) & 4) == 0;
  v15 = *(_DWORD *)(v56 + 8) & 4;
  v51 = v15;
  v46 = !v14;
  if ( v15 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x18uLL, 0x6F725346u);
    v52 = PoolWithTag;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    v13 = *(_DWORD *)(v9 + 144);
    v15 = v51;
  }
  v16 = v13 & 0x1F0FFDF;
  if ( v16 <= 0x307040 )
  {
    if ( v16 != 3174464 )
    {
      if ( v16 == 12288 || v16 == 45056 || v16 == 1060864 )
        goto LABEL_8;
      if ( v16 != 1069120 && v16 != 1077312 )
        goto LABEL_32;
    }
LABEL_39:
    v23 = v62;
    if ( !v15 )
      goto LABEL_44;
    v24 = *(_QWORD *)(v9 + 8);
    v25 = *(_QWORD *)(v62 + 48);
    if ( v24 == v25 || !FsRtlpOplockKeysEqual(v25, v24, 0) )
      goto LABEL_32;
    v15 = v51;
    if ( !v51 )
    {
LABEL_44:
      if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v23 + 48) )
        goto LABEL_32;
      if ( !v15 )
        goto LABEL_83;
    }
    if ( !a4 )
    {
      FsRtlpModifyThreadPriorities(v9, 0LL, 0);
      FsRtlpClearOwner(v9, 0LL);
      *(_BYTE *)(v9 + 32) = 0;
      *(_DWORD *)(v9 + 144) = *(_DWORD *)(v9 + 144) & 0x20 | 1;
      PoolWithTag[2] = *(_QWORD *)(v9 + 8);
      v26 = (_QWORD *)(v9 + 104);
      v27 = *(_QWORD *)(v9 + 104);
      if ( *(_QWORD *)(v27 + 8) != v9 + 104 )
        __fastfail(3u);
      *PoolWithTag = v27;
      PoolWithTag[1] = v26;
      *(_QWORD *)(v27 + 8) = PoolWithTag;
      *v26 = PoolWithTag;
      PoolWithTag = 0LL;
      v52 = 0LL;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_DWORD *)(v9 + 144) |= 0x1000000u;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
    }
    else
    {
LABEL_83:
      v40 = *(_DWORD *)(v9 + 144) & 0x1F0FFDF;
      if ( (v40 == 1069120 || v40 == 1077312 || v40 == 3174464 || v40 == 5271616 || v40 == 8409152 || v40 == 8417344)
        && (a4 & 0x7000) > (*(_DWORD *)(v9 + 144) & 0x200000 | ((*(_DWORD *)(v9 + 144) & 0x100000 | (*(_DWORD *)(v9 + 144) >> 1) & 0x200000u) >> 1)) >> 7 )
      {
        v41 = (char)v55;
        if ( *(_QWORD *)(v9 + 88) != v9 + 88 )
          v41 = 1;
      }
      else
      {
        v41 = (char)v55;
      }
      if ( v41 )
      {
        v42 = *(_QWORD *)(a3 + 24);
        *(_QWORD *)v42 = 0LL;
        *(_QWORD *)(v42 + 8) = 0LL;
        *(_QWORD *)(v42 + 16) = 0LL;
        *(_DWORD *)(v42 + 4) = (*(_DWORD *)(v9 + 144) >> 12) & 7;
        *(_DWORD *)(v42 + 8) = (*(_DWORD *)(v9 + 144) & 0x200000 | ((*(_DWORD *)(v9 + 144) & 0x100000 | (*(_DWORD *)(v9 + 144) >> 1) & 0x200000u) >> 1)) >> 19;
        *(_DWORD *)(v42 + 12) |= 1u;
        *(_QWORD *)(a3 + 56) = 24LL;
        v10 = -2147483602;
        *(_DWORD *)(a3 + 48) = -2147483602;
        IofCompleteRequest((PIRP)a3, 1);
        goto LABEL_102;
      }
      FsRtlpModifyThreadPriorities(v9, 0LL, 0);
      FsRtlpClearOwner(v9, 0LL);
      *(_BYTE *)(v9 + 32) = 0;
      v10 = FsRtlpGrantAnyOplockFromExclusive(v9, a3, v23, a4, a5, v46, &v52, &v48, &v49, a6);
      PoolWithTag = v52;
    }
LABEL_97:
    if ( v48 )
    {
      while ( 1 )
      {
        v43 = *(void **)(v9 + 88);
        if ( v43 == (void *)(v9 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v43);
      }
    }
    if ( v49 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v9 + 8), 0x746C6644u);
      *(_QWORD *)(v9 + 8) = 0LL;
    }
    goto LABEL_102;
  }
  if ( v16 != 8400896 )
  {
    if ( v16 != 5271616 && v16 != 8409152 && v16 != 8417344 )
      goto LABEL_32;
    goto LABEL_39;
  }
LABEL_8:
  v17 = (_QWORD *)(v9 + 72);
  v18 = *(_QWORD **)(v9 + 72);
  while ( 1 )
  {
    v55 = v18;
    if ( v18 == v17 )
      break;
    if ( v15 )
    {
      v19 = (__int64 *)(v62 + 48);
    }
    else
    {
      v19 = (__int64 *)(v62 + 48);
      if ( v18[3] == *(_QWORD *)(v62 + 48) )
        goto LABEL_12;
    }
    if ( v15 )
    {
      v28 = v18[3];
      if ( v28 != *v19 )
      {
        v29 = FsRtlpOplockKeysEqual(*v19, v28, 0);
        v15 = v51;
        if ( v29 )
        {
LABEL_12:
          v45 = 1;
          v20 = v18[6] & 0xF00000;
          v10 = v63;
          if ( v20 == 0x800000 )
          {
            if ( v63 )
            {
              v30 = (_QWORD *)(v9 + 88);
              if ( (_QWORD *)*v30 != v30 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(v63, a6) )
              {
                v31 = *(_QWORD *)(a3 + 24);
                *(_QWORD *)v31 = 0LL;
                *(_QWORD *)(v31 + 8) = 0LL;
                *(_QWORD *)(v31 + 16) = 0LL;
                *(_DWORD *)(v31 + 4) = 3;
                v32 = a6;
                if ( (_QWORD *)*v30 != v30 )
                  v32 = 0;
                goto LABEL_64;
              }
            }
LABEL_14:
            FsRtlpOplockDequeueRH((__int64)v18);
            if ( !v22 )
            {
              v47 = 1;
              if ( !v10 )
              {
                ObfDereferenceObjectWithTag((PVOID)v18[3], 0x746C6644u);
                goto LABEL_17;
              }
              goto LABEL_73;
            }
            PoolWithTag[2] = v18[3];
            v34 = (_QWORD *)(v9 + 104);
            v35 = *(_QWORD *)(v9 + 104);
            if ( *(_QWORD *)(v35 + 8) != v9 + 104 )
              __fastfail(3u);
            *PoolWithTag = v35;
            PoolWithTag[1] = v34;
            *(_QWORD *)(v35 + 8) = PoolWithTag;
            *v34 = PoolWithTag;
            PoolWithTag = v21;
            v52 = v21;
LABEL_17:
            if ( !v10 )
            {
              FsRtlpComputeShareableOplockState(v9);
              *(_DWORD *)(a3 + 48) = 0;
              IofCompleteRequest((PIRP)a3, 1);
              goto LABEL_19;
            }
LABEL_73:
            if ( (v10 & 0x4040) == 0 && (v10 & 0x3010) != 0 )
            {
              v10 = FsRtlpRequestShareableOplock(&v61, v62, a3, v10, a5, v46, 1, a6);
              goto LABEL_81;
            }
            *(_QWORD *)v9 = a3;
            v57 = *(_QWORD *)(a3 + 184);
            *(_BYTE *)(v57 + 3) |= 1u;
            *(_QWORD *)(a3 + 56) = v9;
            CurrentThread = KeGetCurrentThread();
            *(_QWORD *)(v61 + 16) = CurrentThread->ApcState.Process;
            v36 = KeGetCurrentThread();
            v59 = v36;
            v9 = v61;
            *(_QWORD *)(v61 + 24) = v36;
            ObfReferenceObjectWithTag(v36, 0x746C6644u);
            *(_BYTE *)(v9 + 32) = 0;
            if ( v51 )
            {
              ObfReferenceObjectWithTag((PVOID)*v19, 0x746C6644u);
              v37 = *v19;
            }
            else
            {
              v37 = v18[3];
            }
            *(_QWORD *)(v9 + 8) = v37;
            *(_DWORD *)(v9 + 144) = v10 | *(_DWORD *)(v9 + 144) & 0x20 | 0x40;
            *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
            if ( *(_BYTE *)(a3 + 68) )
            {
              LOBYTE(v39) = v46 ^ 1;
              LOBYTE(v38) = 1;
              FsRtlpCancelExclusiveIrp(a3, v38, v39);
              v10 = 259;
              PoolWithTag = v52;
              v45 = 1;
              v18 = v55;
            }
            else
            {
              _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
              KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
              v10 = 259;
              PoolWithTag = v52;
              v45 = 1;
              v18 = v55;
LABEL_81:
              v9 = v61;
            }
LABEL_19:
            FsRtlpModifyThreadPriorities(v9, (__int64)v18, 0);
            FsRtlpClearOwner(v9, (__int64)v18);
            if ( *(_QWORD *)(v9 + 72) == v9 + 72 )
              *(_BYTE *)(v9 + 32) = 0;
            ExFreePoolWithTag(v18, 0);
            if ( v51 )
              *(_DWORD *)(v9 + 144) |= 0x1000000u;
          }
          else
          {
            if ( v20 != 0x100000 )
              goto LABEL_14;
            if ( (v63 & 0x7000) <= 0x3000 )
              goto LABEL_14;
            v33 = (_QWORD *)(v9 + 88);
            if ( (_QWORD *)*v33 == v33 )
            {
              if ( (unsigned __int8)FsRtlpOplockUpperLowerCompatible(v63, a6) )
                goto LABEL_14;
            }
            v31 = *(_QWORD *)(a3 + 24);
            *(_QWORD *)v31 = 0LL;
            *(_QWORD *)(v31 + 8) = 0LL;
            *(_QWORD *)(v31 + 16) = 0LL;
            *(_DWORD *)(v31 + 4) = 3;
            v32 = a6;
            if ( (_QWORD *)*v33 != v33 )
              v32 = 1;
LABEL_64:
            *(_DWORD *)(v31 + 8) = v32;
            *(_DWORD *)(v31 + 12) |= 1u;
            *(_QWORD *)(a3 + 56) = 24LL;
            v10 = -2147483602;
            *(_DWORD *)(a3 + 48) = -2147483602;
            IofCompleteRequest((PIRP)a3, 1);
          }
          v12 = 1;
          break;
        }
      }
    }
    v18 = (_QWORD *)*v18;
    v12 = v50;
    v17 = (_QWORD *)(v9 + 72);
  }
  if ( v45 )
  {
    if ( v47 )
      FsRtlpReleaseIrpsWaitingForRH(v9);
    if ( v12 )
      goto LABEL_102;
    goto LABEL_97;
  }
LABEL_32:
  v10 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_102:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v9 + 152));
  return v10;
}
