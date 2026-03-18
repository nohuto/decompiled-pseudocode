/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x1C0002D20
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0075CA0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0076B40 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 * Callees:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0002CD0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C000308C (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C001401C (VidSchiCheckConditionDeviceCommand.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r14
  char v6; // si
  __int64 v7; // r11
  int v8; // r9d
  int v9; // ebp
  _QWORD *m; // r8
  int v11; // edx
  bool v12; // cc
  _QWORD *n; // rdx
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v19; // rsi
  _QWORD *j; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebp
  char v24; // bl
  __int64 v25; // rbx
  KIRQL v26; // di
  _QWORD *v27; // r9
  _QWORD *v28; // rdx
  _QWORD *i; // r10
  unsigned int v30; // edx
  _QWORD *v31; // rdx
  _QWORD *v32; // r8
  __int64 v33; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  _QWORD *k; // r10
  bool v36; // di
  int v37; // eax
  __int64 *v38; // rcx
  __int64 v39; // rax
  __int64 **v40; // rdx
  _QWORD *ii; // r8
  bool v42; // r15
  int v43; // eax
  __int64 v44; // rax
  struct _KLOCK_QUEUE_HANDLE v45; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v47; // [rsp+60h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+78h] [rbp-30h] BYREF

  if ( !a1 || !a2 )
  {
    v44 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v44);
    return 3221225485LL;
  }
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD **)(a2 + 48);
  if ( !*(_DWORD *)(a2 + 40) )
  {
    v19 = v5[1];
    *(_BYTE *)v5 = 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1648), &v45);
    v21 = *(_QWORD *)(a1 + 1296);
    v22 = 0LL;
    v23 = 0;
    if ( *(_DWORD *)a2 && *(_QWORD *)(a1 + 1304) < v21 && (*(_DWORD *)(a1 + 1284) || *(_DWORD *)(a1 + 1272)) )
    {
      for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); v22 = v30 )
      {
        v30 = v22 + 1;
        v12 = i[19] <= i[17];
        i = (_QWORD *)*i;
        if ( v12 )
          v30 = v22;
      }
      v31 = *(_QWORD **)(a1 + 88);
      for ( j = (_QWORD *)(a1 + 88); v31 != j; v31 = (_QWORD *)*v31 )
      {
        for ( k = (_QWORD *)v31[4]; k != v31 + 4; v23 = v37 )
        {
          v36 = k[8] > k[7] || k[11] > k[10];
          k = (_QWORD *)*k;
          v37 = v23 + 1;
          if ( !v36 )
            v37 = v23;
        }
      }
      if ( (_DWORD)v22 || v23 )
      {
        v17 = VidSchiAddPendingCommandToSyncPointList(a1, v19);
        if ( v17 < 0 )
        {
          p_LockHandle = &v45;
          goto LABEL_71;
        }
        goto LABEL_38;
      }
      *(_QWORD *)(a1 + 1304) = v21;
    }
    if ( (unsigned int)VidSchiCheckConditionDeviceCommand(j, v19, v21, v22) )
    {
      v24 = 1;
LABEL_25:
      KeReleaseInStackQueuedSpinLock(&v45);
      if ( !v24 )
        return 0LL;
      v25 = **(_QWORD **)(v19 + 8);
      v26 = KfRaiseIrql(2u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v25 + 41128), &v48);
      v27 = *(_QWORD **)(v25 + 41144);
      v28 = (_QWORD *)(v19 + 200);
      if ( *v27 == v25 + 41136 )
      {
        *v28 = v25 + 41136;
        *(_QWORD *)(v19 + 208) = v27;
        *v27 = v28;
        *(_QWORD *)(v25 + 41144) = v28;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v48);
        KeSetEvent(*(PRKEVENT *)(v25 + 41120), 0, 0);
        KeLowerIrql(v26);
        return 0LL;
      }
      goto LABEL_47;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1680LL), &v47);
    v38 = (__int64 *)(v19 + 200);
    v39 = *(_QWORD *)(a1 + 32) + 1712LL;
    v40 = *(__int64 ***)(*(_QWORD *)(a1 + 32) + 1720LL);
    if ( *v40 != (__int64 *)v39 )
      goto LABEL_47;
    *v38 = v39;
    *(_QWORD *)(v19 + 208) = v40;
    *v40 = v38;
    *(_QWORD *)(v39 + 8) = v38;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v47);
LABEL_38:
    *(_BYTE *)v5 = 0;
    v24 = 0;
    goto LABEL_25;
  }
  v6 = 1;
  if ( *(_DWORD *)a2 != 1 )
  {
LABEL_28:
    VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v5);
    return 0LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1648), &LockHandle);
  v7 = *(_QWORD *)(a1 + 1296);
  v8 = 0;
  v9 = 0;
  if ( *(_QWORD *)(a1 + 1304) < v7 && (*(_DWORD *)(a1 + 1284) || *(_DWORD *)(a1 + 1272)) )
  {
    for ( m = *(_QWORD **)(a1 + 72); m != (_QWORD *)(a1 + 72); v8 = v11 )
    {
      v11 = v8 + 1;
      v12 = m[19] <= m[17];
      m = (_QWORD *)*m;
      if ( v12 )
        v11 = v8;
    }
    for ( n = *(_QWORD **)(a1 + 88); n != (_QWORD *)(a1 + 88); n = (_QWORD *)*n )
    {
      for ( ii = (_QWORD *)n[4]; ii != n + 4; v9 = v43 )
      {
        v42 = ii[8] > ii[7] || ii[11] > ii[10];
        ii = (_QWORD *)*ii;
        v43 = v9 + 1;
        if ( !v42 )
          v43 = v9;
      }
    }
    if ( !v8 && !v9 )
    {
      *(_QWORD *)(a1 + 1304) = v7;
      goto LABEL_16;
    }
    v6 = 0;
    if ( *(_DWORD *)(a2 + 40) != 3 )
      goto LABEL_15;
    v14 = *(_QWORD **)(a2 + 48);
    v15 = v14 + 27;
    v16 = v14[27];
    if ( !v16 )
      goto LABEL_15;
    if ( *(_QWORD **)(v16 + 8) == v15 )
    {
      v32 = (_QWORD *)v14[28];
      if ( (_QWORD *)*v32 == v15 )
      {
        *v32 = v16;
        *(_QWORD *)(v16 + 8) = v32;
        *v15 = 0LL;
        v33 = v14[12];
        v14[28] = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v33 + 8));
LABEL_15:
        v17 = VidSchiAddPendingCommandToSyncPointList(a1, v5);
        if ( v17 >= 0 )
          goto LABEL_16;
        p_LockHandle = &LockHandle;
LABEL_71:
        KeReleaseInStackQueuedSpinLock(p_LockHandle);
        return (unsigned int)v17;
      }
    }
LABEL_47:
    __fastfail(3u);
  }
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
    goto LABEL_28;
  return 0LL;
}
