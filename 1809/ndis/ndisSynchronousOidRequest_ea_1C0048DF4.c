/*
 * XREFs of ndisSynchronousOidRequest @ 0x1C0048DF4
 * Callers:
 *     NdisFSynchronousOidRequest @ 0x1C0043700 (NdisFSynchronousOidRequest.c)
 *     NdisSynchronousOidRequest @ 0x1C0043A90 (NdisSynchronousOidRequest.c)
 *     ?ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C007F830 (-ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_R.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C007F91C (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?Pop@?$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRAME@@XZ @ 0x1C0043064 (-Pop@-$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRAM.c)
 *     ?Push@?$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRAME@@XZ @ 0x1C00430E0 (-Push@-$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRA.c)
 *     ?ndisVerifySynchronousOidAfterCompletion@@YAXPEAU_NDIS_OID_REQUEST@@HPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1C004339C (-ndisVerifySynchronousOidAfterCompletion@@YAXPEAU_NDIS_OID_REQUEST@@HPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1C005B994 (ndisFInvokeSynchronousOidRequest.c)
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C005BA30 (ndisFInvokeSynchronousOidRequestComplete.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C006321C (ndisMInvokeSynchronousOidRequest.c)
 *     ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0080914 (-ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisSynchronousOidRequest(
        ULONG_PTR BugCheckParameter2,
        struct _NDIS_MINIPORT_BLOCK *a2,
        _NDIS_FILTER_BLOCK *HighestFilter,
        ULONG_PTR a4)
{
  bool v4; // zf
  int v8; // eax
  KIRQL v9; // r14
  _LIST_ENTRY *Flink; // rdx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  __int64 v12; // rax
  _QWORD *v13; // r14
  unsigned int v14; // eax
  KIRQL v15; // al
  KIRQL v16; // bl
  ULONG_PTR *v17; // rax
  ULONG_PTR v18; // rbx
  KIRQL v19; // al
  struct _KTHREAD *v20; // rcx
  KIRQL v21; // bl
  struct _KEVENT *AllDirectRequestsCompletedEvent; // rcx
  _LIST_ENTRY *v23; // rdx
  _LIST_ENTRY *v24; // rax
  PVOID v25; // rcx
  int v27; // [rsp+20h] [rbp-B9h]
  unsigned int v28; // [rsp+20h] [rbp-B9h]
  _LIST_ENTRY *v29; // [rsp+28h] [rbp-B1h] BYREF
  _LIST_ENTRY *p_SynchronousOidCalls; // [rsp+30h] [rbp-A9h]
  ULONG_PTR v31; // [rsp+38h] [rbp-A1h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-99h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-91h]
  _DWORD v34[4]; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v35[15]; // [rsp+60h] [rbp-79h] BYREF
  PVOID P; // [rsp+D8h] [rbp-1h]
  __int64 v37; // [rsp+E0h] [rbp+7h]

  v4 = *(_BYTE *)a4 == 0x96;
  v35[0] = 0LL;
  P = v35;
  v37 = 0LL;
  if ( !v4
    || *(_BYTE *)(a4 + 1) < 2u
    || *(_WORD *)(a4 + 2) < 0xF8u
    || *(_DWORD *)(a4 + 12)
    || *(_QWORD *)(a4 + 16)
    || (v8 = *(_DWORD *)(a4 + 4), v8 < 0)
    || v8 > 1 && v8 != 12 )
  {
    ndisBugCheckEx(0x21uLL, BugCheckParameter2, a4, 0LL);
  }
  v31 = a4;
  CurrentThread = KeGetCurrentThread();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  a2->LockDbg = 2296284;
  Flink = a2->SynchronousOidCalls.Flink;
  if ( Flink->Blink != &a2->SynchronousOidCalls )
    goto LABEL_50;
  v29 = a2->SynchronousOidCalls.Flink;
  p_SynchronousOidCalls = &a2->SynchronousOidCalls;
  Flink->Blink = (_LIST_ENTRY *)&v29;
  a2->SynchronousOidCalls.Flink = (_LIST_ENTRY *)&v29;
  ++a2->DirectOidRequestCount;
  while ( 1 )
  {
    if ( !HighestFilter )
    {
      HighestFilter = a2->HighestFilter;
      goto LABEL_17;
    }
    do
    {
      HighestFilter = HighestFilter->LowerFilter;
LABEL_17:
      if ( !HighestFilter )
        break;
      FilterDriver = HighestFilter->FilterDriver;
    }
    while ( !FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestHandler
         && !FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestCompleteHandler
         || !ndisReferenceRefEx(&HighestFilter->PnPRef.SpinLock, 0x17u, v34) );
    a2->MiniportThread = 0LL;
    a2->LockDbg = 0;
    KeReleaseSpinLock(&a2->Lock, v9);
    if ( !HighestFilter )
      break;
    v12 = KStackStorage<NDIS_SYNCHRONOUS_OID_CALLFRAME,7>::Push((__int64)v35);
    v13 = (_QWORD *)v12;
    if ( !v12 )
    {
      v28 = -1073741670;
LABEL_29:
      KStackStorage<NDIS_SYNCHRONOUS_OID_CALLFRAME,7>::Pop((__int64)v35);
      goto LABEL_37;
    }
    if ( HighestFilter->FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestHandler )
    {
      *(_QWORD *)(v12 + 8) = 0LL;
      v27 = ndisFInvokeSynchronousOidRequest(HighestFilter, a4);
      ndisVerifySynchronousOidAfterCompletion(a4, v27, &HighestFilter->Header);
      v14 = v27;
    }
    else
    {
      v14 = 0;
    }
    if ( v14 )
    {
      if ( v14 == 255 )
        v14 = 0;
      v28 = v14;
      goto LABEL_29;
    }
    *v13 = HighestFilter;
    v9 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    a2->MiniportThread = KeGetCurrentThread();
    a2->LockDbg = 2296331;
  }
  if ( a2->DriverHandle->MiniportDriverCharacteristics.SynchronousOidRequestHandler )
  {
    v28 = ndisMInvokeSynchronousOidRequest((ULONG_PTR)a2, a4);
    ndisVerifySynchronousOidAfterCompletion(a4, v28, &a2->Header);
    if ( *(_DWORD *)(a4 + 4) == 12 && *(_DWORD *)(a4 + 32) == 66240 && (*(_DWORD *)(a4 + 88) & 0x1000000) == 0 && !v28 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
      a2->MiniportThread = KeGetCurrentThread();
      v16 = v15;
      a2->LockDbg = 2296360;
      ndisRssV2UpdateIndirectionTable(a2, (struct _NDIS_OID_REQUEST *)a4);
      a2->MiniportThread = 0LL;
      a2->LockDbg = 0;
      KeReleaseSpinLock(&a2->Lock, v16);
    }
  }
  else
  {
    v28 = -1073741637;
  }
LABEL_37:
  while ( 1 )
  {
    v17 = (ULONG_PTR *)KStackStorage<NDIS_SYNCHRONOUS_OID_CALLFRAME,7>::Pop((__int64)v35);
    if ( !v17 )
      break;
    v18 = *v17;
    if ( *(_QWORD *)(*(_QWORD *)(*v17 + 16) + 328LL) )
    {
      ndisFInvokeSynchronousOidRequestComplete(*v17, a4);
      ndisVerifySynchronousOidAfterCompletion(a4, v28, (struct _NDIS_OBJECT_HEADER *)v18);
    }
    ndisDereferenceRef((PKSPIN_LOCK)(v18 + 320), 0x17u);
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  v20 = KeGetCurrentThread();
  v21 = v19;
  v4 = a2->DirectOidRequestCount-- == 1;
  a2->MiniportThread = v20;
  a2->LockDbg = 2296381;
  if ( v4 )
  {
    AllDirectRequestsCompletedEvent = a2->AllDirectRequestsCompletedEvent;
    if ( AllDirectRequestsCompletedEvent )
    {
      KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
      a2->AllDirectRequestsCompletedEvent = 0LL;
    }
  }
  v23 = v29;
  v24 = p_SynchronousOidCalls;
  if ( (_LIST_ENTRY **)v29->Blink != &v29 || (_LIST_ENTRY **)p_SynchronousOidCalls->Flink != &v29 )
LABEL_50:
    __fastfail(3u);
  p_SynchronousOidCalls->Flink = v29;
  v23->Blink = v24;
  a2->MiniportThread = 0LL;
  a2->LockDbg = 0;
  KeReleaseSpinLock(&a2->Lock, v21);
  while ( 1 )
  {
    v25 = P;
    if ( !*(_QWORD *)P )
      break;
    P = *(PVOID *)P;
    ExFreePoolWithTag(v25, 0x4253444Eu);
  }
  return v28;
}
