/*
 * XREFs of ndisQueuedCheckForHang @ 0x1C0008570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ndisMResetMiniportInternal @ 0x1C0063F8C (ndisMResetMiniportInternal.c)
 *     ??1AutoAcquireMiniportSpinLock@@QEAA@XZ @ 0x1C0065BA4 (--1AutoAcquireMiniportSpinLock@@QEAA@XZ.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisClearBusy @ 0x1C00748D0 (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C0075F2C (ndisSetBusyAsync.c)
 *     ndisMInvokeCheckForHang @ 0x1C00B3B1C (ndisMInvokeCheckForHang.c)
 */

void __fastcall ndisQueuedCheckForHang(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // bp
  unsigned __int8 v3; // si
  int v4; // esi
  unsigned int WSyncFlags; // eax
  unsigned __int16 CFHangXTicks; // cx
  KIRQL m_oldIrql; // dl
  KIRQL v8; // r15
  unsigned int PnPFlags; // r8d
  signed int v10; // r9d
  unsigned __int8 MajorNdisVersion; // cl
  ULONG v12; // esi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  bool v14; // zf
  __int64 v15; // rbx
  KIRQL v16; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r8
  KIRQL v18; // bp
  __int64 v19; // rcx
  unsigned __int8 v20; // r10
  unsigned __int8 v21; // dl
  unsigned int v22; // ebx
  KIRQL v23; // bl
  KIRQL v24; // dl
  NDIS_REFCOUNT_HANDLE__ *v25; // rbx
  unsigned int v26; // edx
  int v27; // ecx
  char v28; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  AutoAcquireMiniportSpinLock v30; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v2 = 1;
  if ( a1->SelectiveSuspend && !(unsigned __int8)ndisSetBusyAsync((_DWORD)a1, 1, 49, 0, 0) )
  {
    v2 = 0;
    goto LABEL_19;
  }
  if ( a1->MajorNdisVersion < 6u )
  {
    v23 = KfRaiseIrql(2u);
    v3 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(a1->MiniportAdapterContext);
    if ( v23 != 2 )
      KeLowerIrql(v23);
  }
  else
  {
    v3 = ndisMInvokeCheckForHang(a1);
  }
  if ( a1->SelectiveSuspend )
    ndisClearBusy(a1, 1LL, 49LL);
  if ( !v3 )
  {
    if ( (a1->Flags & 0x1000) != 0 )
      goto LABEL_19;
    v4 = 0;
    while ( 1 )
    {
      if ( v4 )
      {
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v30.m_miniport = a1;
      v30.m_oldIrql = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->LockThread = KeGetCurrentThread();
      a1->LockDbg = 65278;
      WSyncFlags = a1->WSyncFlags;
      if ( (WSyncFlags & 1) == 0 )
      {
        AutoAcquireMiniportSpinLock::~AutoAcquireMiniportSpinLock(&v30);
        goto LABEL_19;
      }
      if ( (WSyncFlags & 2) == 0 )
      {
        CFHangXTicks = a1->CFHangXTicks;
        if ( CFHangXTicks )
          a1->CFHangXTicks = CFHangXTicks - 1;
        else
          a1->WSyncFlags = WSyncFlags | 2;
        if ( v30.m_oldIrql == 254 )
        {
          a1->LockThread = 0LL;
          a1->LockDbg = 0;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        }
        else if ( v30.m_oldIrql != 255 )
        {
          m_oldIrql = v30.m_oldIrql;
          a1->LockThread = 0LL;
          a1->LockDbg = 0;
          KeReleaseSpinLock(&a1->Lock, m_oldIrql);
        }
        goto LABEL_19;
      }
      v24 = v30.m_oldIrql;
      if ( v30.m_oldIrql == 254 )
        break;
      if ( v30.m_oldIrql != 255 )
      {
        a1->LockThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, v24);
LABEL_58:
        v30.m_oldIrql = -1;
      }
      if ( ++v4 >= 2 )
      {
        if ( (unsigned __int8)byte_1C00A0260 >= 3u )
          WPP_SF_qq(23LL, &WPP_a220dbba1db53d57c8c40116951fe210_Traceguids, a1, a1->PendingOidRequest);
        goto LABEL_62;
      }
    }
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    goto LABEL_58;
  }
LABEL_62:
  ndisMResetMiniportInternal(a1);
LABEL_19:
  KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
  _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
  if ( !v2 )
    goto LABEL_32;
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 658034;
  if ( (a1->Flags & 0x80000000) == 0 )
  {
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 0x20080000) == 0 )
    {
      v10 = 1000 * a1->CheckForHangSeconds;
      MajorNdisVersion = a1->MajorNdisVersion;
      v12 = v10 / 5;
      DriverHandle = a1->DriverHandle;
      if ( MajorNdisVersion < 6u )
      {
        if ( DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler )
        {
          v14 = DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler == 0LL;
LABEL_25:
          if ( !v14 )
          {
            if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x1Eu )
              v12 = 4000;
            a1->PnPFlags = PnPFlags & 0xDFFFFFFF;
            v15 = -10000LL * v10;
            KeClearEvent(&a1->CFHCompletedEvent);
            KeSetCoalescableTimer(&a1->WakeUpDpcTimer.Timer, (LARGE_INTEGER)v15, 0, v12, &a1->WakeUpDpcTimer.Dpc);
          }
        }
      }
      else if ( DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx )
      {
        v14 = DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx == 0LL;
        goto LABEL_25;
      }
    }
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v8);
LABEL_32:
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_q(25LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1);
  v16 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v18 = v16;
  if ( !RefCountTracker )
    goto LABEL_45;
  if ( (unsigned __int64)RefCountTracker - 2 <= 1 )
  {
    RefCountTracker = 0LL;
  }
  else if ( RefCountTracker == (NDIS_REFCOUNT_HANDLE__ *)1 )
  {
    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
  }
  if ( !RefCountTracker )
    goto LABEL_45;
  if ( *((_BYTE *)RefCountTracker + 2) <= 0x53u )
    ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)RefCountTracker, 0x53uLL);
  if ( *((_BYTE *)RefCountTracker + 1) )
  {
    if ( *((_BYTE *)RefCountTracker + 1) != 1 )
      goto LABEL_45;
    v25 = RefCountTracker + 1330;
    v26 = *((_DWORD *)RefCountTracker + 1344);
    v27 = (unsigned __int16)v26 >> 1;
    if ( v26 >> 17 < 0x3FFE && v27 == (v26 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)RefCountTracker + 95);
      *((_DWORD *)v25 + 14) &= 0x10001u;
      goto LABEL_45;
    }
    if ( v27 != 0 || (v26 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 1330), 0);
      goto LABEL_45;
    }
LABEL_78:
    ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0x53uLL);
  }
  v19 = *((_QWORD *)RefCountTracker + 1);
  if ( !v19 || (v20 = *((_BYTE *)RefCountTracker + 3), v21 = 0, !v20) )
  {
LABEL_44:
    if ( _bittestandreset((signed __int32 *)RefCountTracker + 6, 0x13u) )
      goto LABEL_45;
    goto LABEL_78;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(v19 + 2LL * v21) == 83 )
    {
      v28 = *(_BYTE *)(v19 + 2LL * v21 + 1);
      if ( v28 )
        break;
    }
    if ( ++v21 >= v20 )
      goto LABEL_44;
  }
  *(_BYTE *)(v19 + 2LL * v21 + 1) = v28 - 1;
LABEL_45:
  v22 = a1->Ref.ReferenceCount - 1;
  a1->Ref.ReferenceCount = v22;
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qD(14LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, a1->Ref.ReferenceCount);
  KeReleaseSpinLock(&a1->Ref.SpinLock, v18);
  if ( !v22 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_q(26LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1);
}
