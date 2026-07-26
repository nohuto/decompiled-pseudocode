/*
 * XREFs of ndisQueuedCheckForHang @ 0x1C0009E80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ndisMResetMiniportInternal @ 0x1C009BE9C (ndisMResetMiniportInternal.c)
 *     ??1AutoAcquireMiniportSpinLock@@QEAA@XZ @ 0x1C00A03B4 (--1AutoAcquireMiniportSpinLock@@QEAA@XZ.c)
 *     ndisClearBusy @ 0x1C00B82B0 (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C00B9AB0 (ndisSetBusyAsync.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C79C8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7B48 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMInvokeCheckForHang @ 0x1C00FBBB4 (ndisMInvokeCheckForHang.c)
 */

void __fastcall ndisQueuedCheckForHang(_NDIS_MINIPORT_BLOCK *a1)
{
  char v1; // si
  char v3; // bp
  unsigned __int8 v4; // bl
  int v5; // esi
  unsigned int WSyncFlags; // eax
  unsigned __int16 CFHangXTicks; // cx
  KIRQL m_oldIrql; // dl
  int v9; // edx
  KIRQL v10; // r15
  unsigned int PnPFlags; // r8d
  int v12; // r9d
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  ULONG v14; // esi
  unsigned __int8 MajorNdisVersion; // al
  __int64 v16; // rbx
  char v17; // si
  KIRQL v18; // al
  _BYTE *v19; // rdx
  ULONG_PTR RefCountTracker; // r8
  KIRQL v21; // bp
  int v22; // ecx
  __int64 v23; // r10
  unsigned __int8 v24; // r9
  int v26; // edx
  KIRQL v27; // r14
  int v28; // edx
  ULONG_PTR v29; // r14
  unsigned int v30; // edx
  int v31; // ecx
  char v32; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  AutoAcquireMiniportSpinLock v34; // [rsp+40h] [rbp-38h] BYREF
  LARGE_INTEGER Interval; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 1;
  if ( a1->SelectiveSuspend && !(unsigned __int8)ndisSetBusyAsync((_DWORD)a1, 1, 49, 0, 0) )
  {
    v3 = 0;
    goto LABEL_21;
  }
  if ( a1->MajorNdisVersion < 6u )
  {
    v27 = KfRaiseIrql(2u);
    v4 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(a1->MiniportAdapterContext);
    if ( v27 != 2 )
      KeLowerIrql(v27);
  }
  else
  {
    v4 = ndisMInvokeCheckForHang((char)a1);
  }
  if ( v4 )
    v1 = 2;
  if ( a1->SelectiveSuspend )
    ndisClearBusy(a1, 1LL, 49LL);
  if ( !v4 )
  {
    if ( (a1->Flags & 0x1000) != 0 )
      goto LABEL_21;
    v5 = 0;
    while ( 1 )
    {
      if ( v5 )
      {
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v34.m_miniport = a1;
      v34.m_oldIrql = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->LockThread = KeGetCurrentThread();
      WSyncFlags = a1->WSyncFlags;
      if ( (WSyncFlags & 1) == 0 )
      {
        AutoAcquireMiniportSpinLock::~AutoAcquireMiniportSpinLock(&v34);
        goto LABEL_21;
      }
      if ( (WSyncFlags & 2) == 0 )
      {
        CFHangXTicks = a1->CFHangXTicks;
        if ( CFHangXTicks )
          a1->CFHangXTicks = CFHangXTicks - 1;
        else
          a1->WSyncFlags = WSyncFlags | 2;
        if ( v34.m_oldIrql == 254 )
        {
          a1->LockThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        }
        else if ( v34.m_oldIrql != 255 )
        {
          m_oldIrql = v34.m_oldIrql;
          a1->LockThread = 0LL;
          KeReleaseSpinLock(&a1->Lock, m_oldIrql);
        }
        goto LABEL_21;
      }
      v28 = v34.m_oldIrql;
      if ( v34.m_oldIrql == 254 )
        break;
      if ( v34.m_oldIrql != 255 )
      {
        a1->LockThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v28);
LABEL_61:
        v34.m_oldIrql = -1;
      }
      if ( ++v5 >= 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 3;
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v28,
            17,
            23,
            (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
            (char)a1,
            (char)a1->PendingOidRequest);
        }
        v1 = 1;
        goto LABEL_66;
      }
    }
    a1->LockThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    goto LABEL_61;
  }
LABEL_66:
  ndisMResetMiniportInternal(a1, v1);
LABEL_21:
  KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
  _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
  if ( !v3 )
    goto LABEL_33;
  v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( (a1->Flags & 0x80000000) == 0 )
  {
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 0x20080000) == 0 )
    {
      v12 = 1000 * a1->CheckForHangSeconds;
      DriverHandle = a1->DriverHandle;
      v14 = v12 / 5;
      MajorNdisVersion = a1->MajorNdisVersion;
      if ( MajorNdisVersion < 6u )
      {
        if ( DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler
          && DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler )
        {
          goto LABEL_27;
        }
      }
      else if ( DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx
             && DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx )
      {
LABEL_27:
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x1Eu )
          v14 = 4000;
        v16 = -10000LL * v12;
        a1->PnPFlags = PnPFlags & 0xDFFFFFFF;
        KeClearEvent(&a1->CFHCompletedEvent);
        KeSetCoalescableTimer(&a1->WakeUpDpcTimer.Timer, (LARGE_INTEGER)v16, 0, v14, &a1->WakeUpDpcTimer.Dpc);
      }
    }
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v10);
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      20,
      25,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      (char)a1);
  }
  v17 = 0;
  v18 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = (ULONG_PTR)a1->RefCountTracker;
  v21 = v18;
  if ( !RefCountTracker || RefCountTracker - 2 <= 1 )
    goto LABEL_45;
  if ( RefCountTracker == 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
  if ( *(_BYTE *)(RefCountTracker + 2) <= 0x53u )
    ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0x53uLL);
  v22 = *(unsigned __int8 *)(RefCountTracker + 1);
  if ( *(_BYTE *)(RefCountTracker + 1) )
  {
    if ( v22 != 1 )
      goto LABEL_45;
    v29 = RefCountTracker + 5320;
    v30 = *(_DWORD *)(RefCountTracker + 5376);
    v31 = (unsigned __int16)v30 >> 1;
    if ( v30 >> 17 < 0x3FFE && v31 == (v30 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 5320));
      *(_DWORD *)(v29 + 56) &= 0x10001u;
      goto LABEL_45;
    }
    if ( v31 != 0 || (v30 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 5320), 0);
      goto LABEL_45;
    }
LABEL_82:
    ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 0x53uLL);
  }
  v23 = *(_QWORD *)(RefCountTracker + 8);
  if ( !v23 || (v24 = *(_BYTE *)(RefCountTracker + 3)) == 0 )
  {
LABEL_44:
    if ( _bittestandreset((signed __int32 *)(RefCountTracker + 24), 0x13u) )
      goto LABEL_45;
    goto LABEL_82;
  }
  while ( 1 )
  {
    v19 = (_BYTE *)(v23 + 2LL * (unsigned __int8)v22);
    if ( *v19 == 83 )
    {
      v32 = v19[1];
      if ( v32 )
        break;
    }
    LOBYTE(v22) = v22 + 1;
    if ( (unsigned __int8)v22 >= v24 )
      goto LABEL_44;
  }
  v19[1] = v32 - 1;
LABEL_45:
  if ( a1->Ref.ReferenceCount-- == 1 )
    v17 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v19,
      20,
      14,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      (char)a1,
      a1->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&a1->Ref.SpinLock, v21);
  if ( v17 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v26,
      20,
      26,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      (char)a1);
  }
}
