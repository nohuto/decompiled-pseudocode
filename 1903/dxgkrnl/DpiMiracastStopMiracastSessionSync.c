/*
 * XREFs of DpiMiracastStopMiracastSessionSync @ 0x1C004D1A0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0018E60 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C004D780 (DpiMiracastTargetDeviceChange.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C004F610 (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C013DD00 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C01546E0 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C02A59A0 (DpiMiracastStopMiracastSessionWork.c)
 *     DxgkHandleMiracastEscape @ 0x1C02A5A48 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018EF0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF50 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C004DC70 (DpiMiracastTearDownAssociation.c)
 *     McTemplateK0pxzqq @ 0x1C004F7C4 (McTemplateK0pxzqq.c)
 *     McTemplateK0qqqz @ 0x1C004F8A4 (McTemplateK0qqqz.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C02A40D8 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C02A5248 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionSync(
        char *P,
        char a2,
        union _LARGE_INTEGER *a3,
        struct _KEVENT *a4,
        unsigned int a5,
        int a6)
{
  char v6; // r12
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r15
  char *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r14d
  int v22; // eax
  struct _KEVENT *v23; // rcx
  struct _KEVENT *v24; // rcx
  struct _KEVENT *v25; // rcx
  __int64 v26; // rdx
  int v27; // edi
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // r8
  NTSTATUS v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  char DeviceObject; // [rsp+60h] [rbp-69h] BYREF
  char v42; // [rsp+61h] [rbp-68h]
  char v43; // [rsp+62h] [rbp-67h]
  char v44; // [rsp+63h] [rbp-66h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-61h] BYREF
  PLARGE_INTEGER v46; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-51h] BYREF
  _DWORD v48[2]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v49; // [rsp+98h] [rbp-31h]
  __int128 v50; // [rsp+A0h] [rbp-29h]
  __int64 v51; // [rsp+B0h] [rbp-19h]
  __int64 v52; // [rsp+B8h] [rbp-11h]
  int v53; // [rsp+C0h] [rbp-9h]
  unsigned int v54; // [rsp+C4h] [rbp-5h]
  int v55; // [rsp+C8h] [rbp-1h]
  int v56; // [rsp+CCh] [rbp+3h]

  v46 = a3;
  v6 = 0;
  DeviceObject = 0;
  v44 = a2;
  v43 = 1;
  _InterlockedIncrement((volatile signed __int32 *)P + 6);
  _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopSessionRequestCallback);
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)P + 6);
    _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  AcquireMiniportListMutex();
  v9 = *((_QWORD *)P + 54);
  if ( !v9 )
  {
    v10 = -2147483642;
    v11 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v11 + 24) = P;
    WdLogEvent5_WdEvent(v11);
LABEL_49:
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (__int64)DpiMiracastStopSessionRequestCallback, v12);
    goto LABEL_50;
  }
  v13 = *(_QWORD *)(v9 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v13 + 484) )
    DpiCheckForOutstandingD3Requests(v13);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v13 + 168), 1u);
  v14 = P + 32;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
  *((_QWORD *)P + 11) = KeGetCurrentThread();
  v18 = *((_DWORD *)P + 102);
  if ( v18 != 2 )
  {
    if ( v18 != 1 )
    {
      if ( v18 == 3 )
      {
        v10 = 2;
        v19 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v19 + 24) = P;
        WdLogEvent5_WdEvent(v19);
        if ( a4 && !*((_QWORD *)P + 59) )
        {
          KeClearEvent(a4);
          *((_QWORD *)P + 59) = a4;
          a4 = 0LL;
        }
      }
      else
      {
        v10 = -2147483641;
        v20 = WdLogNewEntry5_WdError(v16, v15, v17);
        *(_QWORD *)(v20 + 24) = P;
        *(_QWORD *)(v20 + 32) = -2147483641LL;
        WdLogEvent5_WdError(v20);
      }
      goto LABEL_43;
    }
    v16 = *((_QWORD *)P + 53);
    if ( v16 )
      IoCancelIrp((PIRP)v16);
  }
  v21 = 8;
  if ( !P[591] )
    v21 = a5;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    McTemplateK0pxzqq(
      v16,
      &EventMiracastStopMiracastSession,
      v17,
      *(_QWORD *)(v13 + 48),
      *((_QWORD *)P + 12),
      *((_QWORD *)P + 19),
      v21,
      a6);
  if ( v21 <= 8 && (v22 = 374, _bittest(&v22, v21))
    || v21 - 133 <= 0xB && (v16 = 2065LL, _bittest((const int *)&v16, v21 - 133)) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
      McTemplateK0qqqz(
        v16,
        &EventMiracastStopMiracastSessionAbnormal,
        v17,
        v21,
        a6,
        *((_DWORD *)P + 50),
        *((_QWORD *)P + 44));
  }
  *((_DWORD *)P + 103) = *((_DWORD *)P + 102);
  *((_DWORD *)P + 102) = 3;
  *((_DWORD *)P + 164) = v21;
  *((_DWORD *)P + 166) = a6;
  v42 = 1;
  *((_DWORD *)P + 104) = 2;
  DpiMiracastBroadcastDeviceStateChange(P);
  v23 = (struct _KEVENT *)*((_QWORD *)P + 59);
  if ( v23 )
  {
    KeSetEvent(v23, 0, 0);
    ObfDereferenceObject(*((PVOID *)P + 59));
  }
  v24 = (struct _KEVENT *)*((_QWORD *)P + 58);
  *((_QWORD *)P + 59) = a4;
  KeClearEvent(v24);
  if ( a4 )
    KeClearEvent(a4);
  a4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v25 = (struct _KEVENT *)*((_QWORD *)P + 62);
  if ( v25 )
  {
    KeSetEvent(v25, 0, 0);
    *((_QWORD *)P + 62) = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v27 = 3;
  while ( 1 )
  {
    if ( v27 != 3 )
    {
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    LODWORD(Timeout) = 0;
    v28 = DpiMiracastSendAsyncUserModeRequest(
            (int)P,
            v26,
            2295816,
            0,
            (size_t)Timeout,
            0LL,
            0,
            (__int64)DpiMiracastStopSessionRequestCallback,
            (__int64)P,
            (PDEVICE_OBJECT)&DeviceObject,
            0LL);
    v30 = v28;
    if ( DeviceObject )
      break;
    if ( !--v27 )
      goto LABEL_39;
  }
  v43 = 0;
LABEL_39:
  if ( v28 >= 0 )
  {
    v52 = 0LL;
    v51 = 0LL;
    v55 = 2;
    v10 = 2;
    v48[0] = 6;
    v48[1] = 64;
    v49 = 0LL;
    v50 = 0uLL;
    v53 = 71;
    v54 = v21;
    v56 = a6;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v48, 0x200000000uLL);
  }
  else
  {
    v10 = -2147483647;
    v31 = WdLogNewEntry5_WdError(0LL, v26, v29);
    *(_QWORD *)(v31 + 24) = v30;
    WdLogEvent5_WdError(v31);
  }
  v6 = v42;
  v14 = P + 32;
LABEL_43:
  if ( v10 < 0 && v6 )
    DpiMiracastTearDownAssociation(P, 1);
  *((_QWORD *)P + 11) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v14);
  if ( *(_BYTE *)(v13 + 484) )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v13 + 24) + 64LL) + 4096LL));
  ExReleaseResourceLite(*(PERESOURCE *)(v13 + 168));
  KeLeaveCriticalRegion();
  if ( v43 )
    goto LABEL_49;
LABEL_50:
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v44 )
  {
    if ( v10 == 2 )
    {
      v33 = KeWaitForSingleObject(*((PVOID *)P + 58), Executive, 0, 0, v46);
      v34 = v33;
      if ( v33 )
      {
        DpiMiracastTearDownAssociation(P, 0);
        v38 = WdLogNewEntry5_WdError(v36, v35, v37);
        *(_QWORD *)(v38 + 24) = v34;
        WdLogEvent5_WdError(v38);
      }
      v10 = *((_DWORD *)P + 104);
    }
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (__int64)DpiMiracastStopMiracastSessionSync, v32);
  }
  if ( a4 )
  {
    KeSetEvent(a4, 0, 0);
    ObfDereferenceObject(a4);
  }
  return (unsigned int)v10;
}
