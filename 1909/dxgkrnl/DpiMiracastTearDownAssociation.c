/*
 * XREFs of DpiMiracastTearDownAssociation @ 0x1C004DCB0
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1E0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C004D7C0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02A50B8 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C02A5540 (DpiMiracastHandleStopSessionDone.c)
 *     DpiMiracastStartSessionRequestCallback @ 0x1C02A5CD0 (DpiMiracastStartSessionRequestCallback.c)
 *     DpiMiracastStopSessionRequestCallback @ 0x1C02A5E10 (DpiMiracastStopSessionRequestCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpIndicateChildStatus @ 0x1C0049FB0 (DpIndicateChildStatus.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C004BD98 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C004C398 (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF90 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0qqz @ 0x1C004F9B4 (McTemplateK0qqz.c)
 *     TraceLoggingWriteMiracastSessionStop @ 0x1C0052EF8 (TraceLoggingWriteMiracastSessionStop.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C02A44E8 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C02A4994 (DpiMiracastDdiMiracastDestroyContext.c)
 */

void __fastcall DpiMiracastTearDownAssociation(char *P, int a2, int a3, unsigned int a4, char a5)
{
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rsi
  const GUID *v12; // r8
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v15; // rcx
  MIRACAST_CHUNK_LIST *v16; // rcx
  MIRACAST_CHUNK_LIST *v17; // rcx
  MIRACAST_CHUNK_LIST *v18; // rcx
  MIRACAST_CHUNK_LIST *v19; // rcx
  MIRACAST_CHUNK_LIST *v20; // rcx
  MIRACAST_CHUNK_LIST *v21; // rcx
  struct _KEVENT *v22; // rcx
  struct _KEVENT *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // r13d
  __int64 v27; // [rsp+30h] [rbp-51h] BYREF
  __int64 v28; // [rsp+38h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-41h] BYREF
  _DWORD v30[2]; // [rsp+60h] [rbp-21h] BYREF
  __int64 v31; // [rsp+68h] [rbp-19h]
  __int128 v32; // [rsp+70h] [rbp-11h]
  __int64 v33; // [rsp+80h] [rbp-1h]
  __int64 v34; // [rsp+88h] [rbp+7h]
  int v35; // [rsp+90h] [rbp+Fh]
  int v36; // [rsp+94h] [rbp+13h]
  int v37; // [rsp+98h] [rbp+17h]
  unsigned int v38; // [rsp+9Ch] [rbp+1Bh]

  if ( !a5 )
    AcquireMiniportListMutex();
  if ( *((_DWORD *)P + 110) != a2 && a2 != -2 )
    goto LABEL_43;
  v9 = *((_QWORD *)P + 54);
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 64);
    v27 = 0LL;
    v28 = 0LL;
    if ( !a5 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v11 + 484) )
        DpiCheckForOutstandingD3Requests(v11);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
      *((_QWORD *)P + 11) = KeGetCurrentThread();
    }
    *((_DWORD *)P + 104) = a3;
    if ( a4 <= 0x7F )
    {
      *((_DWORD *)P + 103) = *((_DWORD *)P + 102);
      *((_DWORD *)P + 102) = 0;
      DpiMiracastBroadcastDeviceStateChange(P);
    }
    DpiMiracastDdiMiracastDestroyContext(v11, *((_QWORD *)P + 56));
    DpiMiracastEtwLogStopMiracastSessionStage((__int64)P, 1, v12);
    if ( !P[590] && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
      McTemplateK0qqz(
        v13,
        &EventMiracastPerfTrackStartMiracastSessionNoSend,
        v14,
        *((unsigned int *)P + 110),
        *((_DWORD *)P + 50),
        *((_QWORD *)P + 44),
        v27,
        v28);
    v15 = *(_QWORD *)(v11 + 24);
    HIDWORD(v27) = *((_DWORD *)P + 114);
    LODWORD(v27) = 3;
    LOBYTE(v28) = 0;
    DpIndicateChildStatus(v15, (unsigned int *)&v27, v14);
    *((_QWORD *)P + 56) = 0LL;
    *((_DWORD *)P + 114) = -1;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    *((_QWORD *)P + 54) = 0LL;
    *(_QWORD *)(v11 + 3232) = 0LL;
    *(_QWORD *)(v11 + 3240) = 0LL;
    *((_QWORD *)P + 47) = 0LL;
    *((_QWORD *)P + 48) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeFlushQueuedDpcs();
    v16 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 61);
    if ( v16 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v16);
    *((_QWORD *)P + 61) = 0LL;
    v17 = *(MIRACAST_CHUNK_LIST **)(v11 + 3256);
    if ( v17 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v17);
    v18 = *(MIRACAST_CHUNK_LIST **)(v11 + 3264);
    *(_QWORD *)(v11 + 3256) = 0LL;
    if ( v18 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v18);
    v19 = *(MIRACAST_CHUNK_LIST **)(v11 + 3272);
    *(_QWORD *)(v11 + 3264) = 0LL;
    if ( v19 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v19);
    *(_QWORD *)(v11 + 3272) = 0LL;
    v20 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 63);
    if ( v20 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v20);
    v21 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 64);
    *((_QWORD *)P + 63) = 0LL;
    if ( v21 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v21);
    v22 = (struct _KEVENT *)*((_QWORD *)P + 59);
    *((_QWORD *)P + 64) = 0LL;
    if ( v22 )
    {
      KeSetEvent(v22, 0, 0);
      ObfDereferenceObject(*((PVOID *)P + 59));
      *((_QWORD *)P + 59) = 0LL;
    }
    v23 = (struct _KEVENT *)*((_QWORD *)P + 60);
    if ( v23 )
      KeSetEvent(v23, 0, 0);
    KeSetEvent(*((PRKEVENT *)P + 58), 0, 0);
    --dword_1C00A2B58;
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (__int64)P, v24);
    v25 = MEMORY[0xFFFFF78000000014];
    *((_QWORD *)P + 80) = MEMORY[0xFFFFF78000000014];
    TraceLoggingWriteMiracastSessionStop(P, a4, (v25 - *((_QWORD *)P + 79)) / 10000000);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v11 + 64), P, 0x20u);
    v26 = *((_DWORD *)P + 169);
    memset(P + 600, 0, 0x20uLL);
    if ( !a5 )
    {
      *((_QWORD *)P + 11) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
      if ( *(_BYTE *)(v11 + 484) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL) + 4096LL));
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
      KeLeaveCriticalRegion();
    }
    v34 = 0LL;
    v30[0] = 6;
    v32 = 0uLL;
    v30[1] = 64;
    v33 = 0LL;
    v31 = 0LL;
    v35 = 72;
    v36 = a3;
    v37 = v26;
    v38 = a4;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, 0x200000000uLL);
    goto LABEL_43;
  }
  if ( a4 > 0x7F )
  {
LABEL_43:
    if ( !a5 )
    {
      _InterlockedExchange64(&qword_1C00A2788, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
    return;
  }
  if ( !a5 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    *((_QWORD *)P + 11) = KeGetCurrentThread();
  }
  v10 = *((_DWORD *)P + 102);
  if ( v10 )
  {
    *((_DWORD *)P + 103) = v10;
    *((_DWORD *)P + 102) = 0;
    *((_DWORD *)P + 104) = a3;
    DpiMiracastBroadcastDeviceStateChange(P);
  }
  if ( !a5 )
  {
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
    goto LABEL_43;
  }
}
