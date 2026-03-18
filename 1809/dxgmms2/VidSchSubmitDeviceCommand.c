/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x1C0001E6C
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0061CF0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0065DBC (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 * Callees:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00018C0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0014C04 (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0015098 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchIsDeviceBusy @ 0x1C0015314 (VidSchIsDeviceBusy.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(_QWORD *a1, __int64 a2)
{
  char v4; // di
  __int64 v5; // rcx
  _QWORD *v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // rbx
  KIRQL v15; // di
  _QWORD *v16; // r9
  _QWORD *v17; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r14
  int v22; // r9d
  int v23; // r11d
  _QWORD *v24; // r8
  int v25; // edx
  bool v26; // cc
  _QWORD *j; // rdx
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  int v31; // ebx
  _QWORD *v32; // r8
  int v33; // edx
  _QWORD *i; // rdx
  _QWORD *v35; // r8
  __int64 v36; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  bool v38; // si
  int v39; // eax
  __int64 *v40; // rcx
  __int64 v41; // rax
  __int64 **v42; // rdx
  _QWORD *v43; // rcx
  bool v44; // bp
  int v45; // eax
  __int64 v46; // rax
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+48h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+60h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v50; // [rsp+78h] [rbp-30h] BYREF

  if ( !a1 || !a2 )
  {
    v46 = WdLogNewEntry5_WdAssertion();
    v31 = -1073741811;
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v46);
    return (unsigned int)v31;
  }
  v4 = 1;
  v5 = a1[4];
  v6 = *(_QWORD **)(a2 + 48);
  if ( !*(_DWORD *)(a2 + 40) )
  {
    v7 = v6[1];
    *(_BYTE *)v6 = 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1648), &LockHandle);
    v11 = a1[161];
    if ( !*(_DWORD *)a2 || a1[162] >= v11 || !(unsigned __int8)VidSchIsDeviceBusy(a1, v8, v10, 0LL) )
      goto LABEL_7;
    v32 = (_QWORD *)a1[9];
    while ( v32 != a1 + 9 )
    {
      v9 = (_QWORD *)v32[19];
      v33 = v12 + 1;
      v26 = (unsigned __int64)v9 <= v32[17];
      v32 = (_QWORD *)*v32;
      if ( v26 )
        v33 = v12;
      v12 = v33;
    }
    for ( i = (_QWORD *)a1[11]; i != a1 + 11; i = (_QWORD *)*i )
    {
      v9 = (_QWORD *)i[4];
      while ( v9 != i + 4 )
      {
        v38 = v9[8] > v9[7] || v9[11] > v9[10];
        v9 = (_QWORD *)*v9;
        v39 = v13 + 1;
        if ( !v38 )
          v39 = v13;
        v13 = v39;
      }
    }
    if ( !v12 && !v13 )
    {
      a1[162] = v11;
LABEL_7:
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v9, v7) )
      {
LABEL_8:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( !v4 )
          return 0LL;
        v14 = **(_QWORD **)(v7 + 8);
        v15 = KfRaiseIrql(2u);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 41128), &v50);
        v16 = *(_QWORD **)(v14 + 41144);
        v17 = (_QWORD *)(v7 + 200);
        if ( *v16 == v14 + 41136 )
        {
          *v17 = v14 + 41136;
          *(_QWORD *)(v7 + 208) = v16;
          *v16 = v17;
          *(_QWORD *)(v14 + 41144) = v17;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v50);
          KeSetEvent(*(PRKEVENT *)(v14 + 41120), 0, 0);
          KeLowerIrql(v15);
          return 0LL;
        }
LABEL_46:
        __fastfail(3u);
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[4] + 1680LL), &v49);
      v40 = (__int64 *)(v7 + 200);
      v41 = a1[4] + 1712LL;
      v42 = *(__int64 ***)(a1[4] + 1720LL);
      if ( *v42 != (__int64 *)v41 )
        goto LABEL_46;
      *v40 = v41;
      *(_QWORD *)(v7 + 208) = v42;
      *v42 = v40;
      *(_QWORD *)(v41 + 8) = v40;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
LABEL_37:
      *(_BYTE *)v6 = 0;
      v4 = 0;
      goto LABEL_8;
    }
    v31 = VidSchiAddPendingCommandToSyncPointList(a1, v7, v11);
    if ( v31 >= 0 )
      goto LABEL_37;
    p_LockHandle = &LockHandle;
    goto LABEL_58;
  }
  if ( *(_DWORD *)a2 != 1 )
  {
LABEL_27:
    VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v6);
    return 0LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1648), &v48);
  v21 = a1[161];
  if ( a1[162] >= v21 || !(unsigned __int8)VidSchIsDeviceBusy(a1, v19, v20, 0LL) )
  {
LABEL_26:
    KeReleaseInStackQueuedSpinLock(&v48);
    if ( !v4 )
      return 0LL;
    goto LABEL_27;
  }
  v24 = (_QWORD *)a1[9];
  while ( v24 != a1 + 9 )
  {
    v25 = v22 + 1;
    v26 = v24[19] <= v24[17];
    v24 = (_QWORD *)*v24;
    if ( v26 )
      v25 = v22;
    v22 = v25;
  }
  for ( j = (_QWORD *)a1[11]; j != a1 + 11; j = (_QWORD *)*j )
  {
    v43 = (_QWORD *)j[4];
    while ( v43 != j + 4 )
    {
      v44 = v43[8] > v43[7] || v43[11] > v43[10];
      v43 = (_QWORD *)*v43;
      v45 = v23 + 1;
      if ( !v44 )
        v45 = v23;
      v23 = v45;
    }
  }
  if ( !v22 && !v23 )
  {
    a1[162] = v21;
    goto LABEL_26;
  }
  v4 = 0;
  if ( *(_DWORD *)(a2 + 40) == 3 )
  {
    v28 = *(_QWORD **)(a2 + 48);
    v29 = v28 + 27;
    v30 = v28[27];
    if ( v30 )
    {
      if ( *(_QWORD **)(v30 + 8) != v29 )
        goto LABEL_46;
      v35 = (_QWORD *)v28[28];
      if ( (_QWORD *)*v35 != v29 )
        goto LABEL_46;
      *v35 = v30;
      *(_QWORD *)(v30 + 8) = v35;
      *v29 = 0LL;
      v36 = v28[12];
      v28[28] = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)(v36 + 8));
    }
  }
  v31 = VidSchiAddPendingCommandToSyncPointList(a1, v6, v21);
  if ( v31 >= 0 )
    goto LABEL_26;
  p_LockHandle = &v48;
LABEL_58:
  KeReleaseInStackQueuedSpinLock(p_LockHandle);
  return (unsigned int)v31;
}
