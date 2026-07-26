/*
 * XREFs of ndisSynchronousOidRequestInternal @ 0x1C0070038
 * Callers:
 *     NdisFSynchronousOidRequest @ 0x1C0068E40 (NdisFSynchronousOidRequest.c)
 *     NdisSynchronousOidRequest @ 0x1C00692E0 (NdisSynchronousOidRequest.c)
 *     ?ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C00C47B0 (-ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_R.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C00C489C (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?Pop@?$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRAME@@XZ @ 0x1C006821C (-Pop@-$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRAM.c)
 *     ?Push@?$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRAME@@XZ @ 0x1C0068298 (-Push@-$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRA.c)
 *     ?ndisVerifySynchronousOidAfterCompletion@@YAXPEAU_NDIS_OID_REQUEST@@HPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00689F4 (-ndisVerifySynchronousOidAfterCompletion@@YAXPEAU_NDIS_OID_REQUEST@@HPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1C008ED3C (ndisFInvokeSynchronousOidRequest.c)
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C008EE10 (ndisFInvokeSynchronousOidRequestComplete.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C009AFF0 (ndisMInvokeSynchronousOidRequest.c)
 *     ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C5994 (-ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisSynchronousOidRequestInternal(
        ULONG_PTR BugCheckParameter2,
        struct _NDIS_MINIPORT_BLOCK *a2,
        _NDIS_FILTER_BLOCK *HighestFilter,
        ULONG_PTR a4)
{
  int v8; // eax
  KIRQL v9; // r15
  _LIST_ENTRY *Flink; // rdx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  __int64 v12; // rax
  _QWORD *v13; // r15
  unsigned int v14; // eax
  KIRQL v15; // al
  KIRQL v16; // bl
  __int64 v17; // rax
  __int64 v18; // rbx
  KIRQL v19; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v21; // bl
  bool v22; // zf
  struct _KEVENT *AllDirectRequestsCompletedEvent; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  PVOID v26; // rcx
  int v28; // [rsp+20h] [rbp-B9h]
  unsigned int v29; // [rsp+20h] [rbp-B9h]
  _QWORD v30[5]; // [rsp+28h] [rbp-B1h] BYREF
  _DWORD v31[4]; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v32[15]; // [rsp+60h] [rbp-79h] BYREF
  PVOID P; // [rsp+D8h] [rbp-1h]
  __int64 v34; // [rsp+E0h] [rbp+7h]

  v32[0] = 0LL;
  v34 = 0LL;
  P = v32;
  memset(v30, 0, sizeof(v30));
  if ( *(_BYTE *)a4 != 0x96
    || *(_BYTE *)(a4 + 1) < 2u
    || *(_WORD *)(a4 + 2) < 0xF8u
    || *(_DWORD *)(a4 + 12)
    || *(_QWORD *)(a4 + 16)
    || (v8 = *(_DWORD *)(a4 + 4), v8 < 0)
    || v8 > 1 && v8 != 12 )
  {
    ndisBugCheckEx(0x21uLL, BugCheckParameter2, a4, 0LL);
  }
  v30[2] = a4;
  v30[3] = KeGetCurrentThread();
  v30[4] = KeQueryPerformanceCounter(0LL).QuadPart;
  v9 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  Flink = a2->SynchronousOidCalls.Flink;
  if ( Flink->Blink != &a2->SynchronousOidCalls )
    goto LABEL_50;
  v30[0] = a2->SynchronousOidCalls.Flink;
  v30[1] = &a2->SynchronousOidCalls;
  Flink->Blink = (_LIST_ENTRY *)v30;
  a2->SynchronousOidCalls.Flink = (_LIST_ENTRY *)v30;
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
         || !ndisReferenceRefEx(&HighestFilter->PnPRef.SpinLock, 0x17u, v31) );
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v9);
    if ( !HighestFilter )
      break;
    v12 = KStackStorage<NDIS_SYNCHRONOUS_OID_CALLFRAME,7>::Push((__int64)v32);
    v13 = (_QWORD *)v12;
    if ( !v12 )
    {
      v29 = -1073741670;
LABEL_29:
      KStackStorage<NDIS_SYNCHRONOUS_OID_CALLFRAME,7>::Pop((__int64)v32);
      goto LABEL_37;
    }
    if ( HighestFilter->FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestHandler )
    {
      *(_QWORD *)(v12 + 8) = 0LL;
      v28 = ndisFInvokeSynchronousOidRequest((char)HighestFilter);
      ndisVerifySynchronousOidAfterCompletion(a4, v28, &HighestFilter->Header);
      v14 = v28;
    }
    else
    {
      v14 = 0;
    }
    if ( v14 )
    {
      if ( v14 == 255 )
        v14 = 0;
      v29 = v14;
      goto LABEL_29;
    }
    *v13 = HighestFilter;
    v9 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    a2->MiniportThread = KeGetCurrentThread();
  }
  if ( a2->DriverHandle->MiniportDriverCharacteristics.SynchronousOidRequestHandler )
  {
    v29 = ndisMInvokeSynchronousOidRequest((char)a2, a4);
    ndisVerifySynchronousOidAfterCompletion(a4, v29, &a2->Header);
    if ( *(_DWORD *)(a4 + 4) == 12 && *(_DWORD *)(a4 + 32) == 66240 && (*(_DWORD *)(a4 + 88) & 0x1000000) == 0 && !v29 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
      a2->MiniportThread = KeGetCurrentThread();
      v16 = v15;
      ndisRssV2UpdateIndirectionTable(a2, (struct _NDIS_OID_REQUEST *)a4);
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v16);
    }
  }
  else
  {
    v29 = -1073741637;
  }
LABEL_37:
  while ( 1 )
  {
    v17 = KStackStorage<NDIS_SYNCHRONOUS_OID_CALLFRAME,7>::Pop((__int64)v32);
    if ( !v17 )
      break;
    v18 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 16LL) + 328LL) )
    {
      ndisFInvokeSynchronousOidRequestComplete(*(_QWORD *)v17, a4);
      ndisVerifySynchronousOidAfterCompletion(a4, v29, (struct _NDIS_OBJECT_HEADER *)v18);
    }
    ndisDereferenceRef((PKSPIN_LOCK)(v18 + 312), 0x17u);
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  CurrentThread = KeGetCurrentThread();
  v21 = v19;
  v22 = a2->DirectOidRequestCount-- == 1;
  a2->MiniportThread = CurrentThread;
  if ( v22 )
  {
    AllDirectRequestsCompletedEvent = a2->AllDirectRequestsCompletedEvent;
    if ( AllDirectRequestsCompletedEvent )
    {
      KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
      a2->AllDirectRequestsCompletedEvent = 0LL;
    }
  }
  v24 = v30[0];
  v25 = v30[1];
  if ( *(_QWORD **)(v30[0] + 8LL) != v30 || *(_QWORD **)v30[1] != v30 )
LABEL_50:
    __fastfail(3u);
  *(_QWORD *)v30[1] = v30[0];
  *(_QWORD *)(v24 + 8) = v25;
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v21);
  while ( 1 )
  {
    v26 = P;
    if ( !*(_QWORD *)P )
      break;
    P = *(PVOID *)P;
    ExFreePoolWithTag(v26, 0x4253444Eu);
  }
  return v29;
}
