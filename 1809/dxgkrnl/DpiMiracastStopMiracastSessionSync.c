/*
 * XREFs of DpiMiracastStopMiracastSessionSync @ 0x1C00466D0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0001B70 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0046CD0 (DpiMiracastTargetDeviceChange.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C0048B74 (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0138FF0 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C01427A0 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C026A5A0 (DpiMiracastStopMiracastSessionWork.c)
 *     DxgkHandleMiracastEscape @ 0x1C026A648 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0046480 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C00471B8 (DpiMiracastTearDownAssociation.c)
 *     McTemplateK0pxzqq @ 0x1C0048D28 (McTemplateK0pxzqq.c)
 *     McTemplateK0qqqz @ 0x1C0048E08 (McTemplateK0qqqz.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0268CD0 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C0269E48 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionSync(
        char *P,
        char a2,
        union _LARGE_INTEGER *a3,
        struct _KEVENT *a4,
        unsigned int a5,
        size_t Size)
{
  char v6; // r12
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r15
  char *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r14d
  int v20; // eax
  struct _KEVENT *v21; // rcx
  struct _KEVENT *v22; // rcx
  struct _KEVENT *v23; // rcx
  int v24; // edx
  int v25; // edi
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r12
  __int64 v29; // rax
  NTSTATUS v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  char DeviceObject; // [rsp+60h] [rbp-69h] BYREF
  char v37; // [rsp+61h] [rbp-68h]
  char v38; // [rsp+62h] [rbp-67h]
  char v39; // [rsp+63h] [rbp-66h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-61h] BYREF
  PLARGE_INTEGER v41; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v43[8]; // [rsp+90h] [rbp-39h] BYREF

  v41 = a3;
  v6 = 0;
  DeviceObject = 0;
  v39 = a2;
  v38 = 1;
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
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopSessionRequestCallback);
    goto LABEL_50;
  }
  v12 = *(_QWORD *)(v9 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v12 + 483) )
  {
    DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v12 + 3816), 4023LL);
    DpiCheckForOutstandingD3Requests(v12);
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v12 + 168), 1u);
  v13 = P + 32;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
  *((_QWORD *)P + 11) = KeGetCurrentThread();
  v16 = *((_DWORD *)P + 102);
  if ( v16 != 2 )
  {
    if ( v16 != 1 )
    {
      if ( v16 == 3 )
      {
        v10 = 2;
        v17 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v17 + 24) = P;
        WdLogEvent5_WdEvent(v17);
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
        v18 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v18 + 24) = P;
        *(_QWORD *)(v18 + 32) = -2147483641LL;
        WdLogEvent5_WdError(v18);
      }
      goto LABEL_43;
    }
    v14 = *((_QWORD *)P + 53);
    if ( v14 )
      IoCancelIrp((PIRP)v14);
  }
  v19 = 8;
  if ( !P[591] )
    v19 = a5;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
  {
    Timeout = (PLARGE_INTEGER)*((_QWORD *)P + 12);
    McTemplateK0pxzqq(v14, &EventMiracastStopMiracastSession, v15, *(_QWORD *)(v12 + 48));
  }
  if ( v19 <= 8 && (v20 = 374, _bittest(&v20, v19))
    || v19 - 133 <= 0xB && (v14 = 2065LL, _bittest((const int *)&v14, v19 - 133)) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
      McTemplateK0qqqz(v14, &EventMiracastStopMiracastSessionAbnormal, v15, v19);
  }
  *((_DWORD *)P + 103) = *((_DWORD *)P + 102);
  *((_DWORD *)P + 102) = 3;
  *((_DWORD *)P + 164) = v19;
  *((_DWORD *)P + 166) = Size;
  v37 = 1;
  *((_DWORD *)P + 104) = 2;
  DpiMiracastBroadcastDeviceStateChange(P);
  v21 = (struct _KEVENT *)*((_QWORD *)P + 59);
  if ( v21 )
  {
    KeSetEvent(v21, 0, 0);
    ObfDereferenceObject(*((PVOID *)P + 59));
    *((_QWORD *)P + 59) = 0LL;
  }
  v22 = (struct _KEVENT *)*((_QWORD *)P + 58);
  *((_QWORD *)P + 59) = a4;
  KeClearEvent(v22);
  if ( a4 )
    KeClearEvent(a4);
  a4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_1C008EB30, &LockHandle);
  v23 = (struct _KEVENT *)*((_QWORD *)P + 62);
  if ( v23 )
  {
    KeSetEvent(v23, 0, 0);
    *((_QWORD *)P + 62) = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v25 = 3;
  while ( 1 )
  {
    if ( v25 != 3 )
    {
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    LODWORD(Timeout) = 0;
    v26 = DpiMiracastSendAsyncUserModeRequest(
            (int)P,
            v24,
            2295816,
            0,
            (size_t)Timeout,
            0LL,
            0,
            (__int64)DpiMiracastStopSessionRequestCallback,
            (__int64)P,
            (PDEVICE_OBJECT)&DeviceObject,
            0LL);
    v28 = v26;
    if ( DeviceObject )
      break;
    if ( !--v25 )
      goto LABEL_39;
  }
  v38 = 0;
LABEL_39:
  if ( v26 >= 0 )
  {
    v10 = 2;
    memset(v43, 0, sizeof(v43));
    memset(&v43[1], 0, 36);
    v43[0] = 0x4000000006LL;
    LODWORD(v43[6]) = 71;
    HIDWORD(v43[6]) = v19;
    LODWORD(v43[7]) = 2;
    HIDWORD(v43[7]) = Size;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v43);
  }
  else
  {
    v10 = -2147483647;
    v29 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v29 + 24) = v28;
    WdLogEvent5_WdError(v29);
  }
  v6 = v37;
  v13 = P + 32;
LABEL_43:
  if ( v10 < 0 && v6 )
    DpiMiracastTearDownAssociation(P, 1);
  *((_QWORD *)P + 11) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v13);
  if ( *(_BYTE *)(v12 + 483) )
  {
    DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v12 + 3816), 4023LL);
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 64LL) + 3992LL));
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v12 + 168));
  KeLeaveCriticalRegion();
  if ( v38 )
    goto LABEL_49;
LABEL_50:
  _InterlockedExchange64(&qword_1C008E788, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v39 )
  {
    if ( v10 == 2 )
    {
      v30 = KeWaitForSingleObject(*((PVOID *)P + 58), Executive, 0, 0, v41);
      v31 = v30;
      if ( v30 )
      {
        DpiMiracastTearDownAssociation(P, 0);
        v33 = WdLogNewEntry5_WdError(v32);
        *(_QWORD *)(v33 + 24) = v31;
        WdLogEvent5_WdError(v33);
      }
      v10 = *((_DWORD *)P + 104);
    }
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  if ( a4 )
  {
    KeSetEvent(a4, 0, 0);
    ObfDereferenceObject(a4);
  }
  return (unsigned int)v10;
}
