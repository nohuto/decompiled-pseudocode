/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1C026A648
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C00458B4 (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0046480 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00466D0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x1C02691E0 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02698B0 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C0269D30 (DpiMiracastHandleStopSessionDone.c)
 */

__int64 __fastcall DxgkHandleMiracastEscape(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r12
  _DWORD *PoolWithQuotaTag; // r15
  char v6; // r13
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 DeviceContextFromLuid; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // eax
  char *v21; // rdx
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // r12
  __int64 v25; // r12
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // r12d
  int v29; // eax
  struct _KEVENT *v30; // r9
  void *v31; // rcx
  NTSTATUS v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rax
  void *v38; // r12
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-D0h]
  char v40; // [rsp+40h] [rbp-B8h]
  char v41; // [rsp+42h] [rbp-B6h]
  char v42; // [rsp+43h] [rbp-B5h]
  PVOID Src; // [rsp+48h] [rbp-B0h]
  __int64 v44; // [rsp+70h] [rbp-88h]
  PVOID Object; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v46[8]; // [rsp+80h] [rbp-78h] BYREF

  LODWORD(v3) = 0;
  v4 = 0LL;
  v44 = 0LL;
  PoolWithQuotaTag = 0LL;
  Src = 0LL;
  v6 = 0;
  v40 = 0;
  v42 = 0;
  v41 = 0;
  if ( (unsigned int)a1 < 0x38 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v7);
    return 3221225507LL;
  }
  *(_DWORD *)(a2 + 48) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*(_QWORD *)a2, 0);
  if ( !DeviceContextFromLuid )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  if ( PsGetCurrentProcess(v10, v9) != *(_QWORD *)(DeviceContextFromLuid + 104) )
  {
    v3 = -1073741790LL;
LABEL_7:
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v3;
LABEL_8:
    WdLogEvent5_WdError(v15);
    goto LABEL_63;
  }
  v17 = *(_DWORD *)(a2 + 16);
  if ( v17 && (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v17, 0x74727044u)) == 0LL
    || (v20 = *(_DWORD *)(a2 + 32)) != 0 && (Src = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v20, 0x74727044u)) == 0LL )
  {
    LODWORD(v3) = -1073741801;
    v19 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v19 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v19);
    goto LABEL_63;
  }
  v13 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v13 )
  {
    v21 = *(char **)(a2 + 24);
    if ( (unsigned __int64)&v21[v13] > MmUserProbeAddress || &v21[v13] < v21 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      LODWORD(v13) = *(_DWORD *)(a2 + 16);
      v21 = *(char **)(a2 + 24);
    }
    memmove(PoolWithQuotaTag, v21, (unsigned int)v13);
  }
  v22 = *(_DWORD *)(a2 + 32);
  if ( v22 )
    ProbeForWrite(*(volatile void **)(a2 + 40), v22, 1u);
  v23 = *(_DWORD *)(a2 + 8);
  if ( (v23 & 6) != 0 )
  {
    AcquireMiniportListMutex();
    v6 = 1;
    v24 = *(_QWORD *)(DeviceContextFromLuid + 432);
    if ( !v24 )
    {
      v25 = -1073741275LL;
LABEL_24:
      LODWORD(v3) = v25;
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = v25;
      goto LABEL_8;
    }
    v4 = *(_QWORD *)(v24 + 64);
    v44 = v4;
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
    {
      DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
      DpiCheckForOutstandingD3Requests(v4);
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
    v40 = 1;
    v13 = *(unsigned int *)(v4 + 236);
    if ( (_DWORD)v13 != 2 && (*(_DWORD *)(v4 + 240) != 2 || (((_DWORD)v13 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v13 == 4) )
    {
      v25 = -1073741130LL;
      goto LABEL_24;
    }
    v23 = *(_DWORD *)(a2 + 8);
    if ( (v23 & 4) != 0 )
    {
      v26 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
      v3 = v26;
      if ( v26 < 0 )
        goto LABEL_7;
      v42 = 1;
      v23 = *(_DWORD *)(a2 + 8);
    }
  }
  if ( (v23 & 1) != 0 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 32);
    *(_QWORD *)(DeviceContextFromLuid + 88) = KeGetCurrentThread();
    v41 = 1;
    v23 = *(_DWORD *)(a2 + 8);
  }
  if ( v23 == 4 )
  {
    LODWORD(v3) = DpiMiracastDdiMiracastIoControl(
                    v4,
                    *(_QWORD *)(DeviceContextFromLuid + 448),
                    (const GUID *)*(unsigned int *)(a2 + 16),
                    (__int64)PoolWithQuotaTag,
                    *(_DWORD *)(a2 + 32),
                    (__int64)Src,
                    (_DWORD *)(a2 + 48));
    goto LABEL_62;
  }
  if ( v23 == 8 )
  {
    if ( *(_DWORD *)(a2 + 16) >= 0x350u )
    {
      DpiMiracastHandleStartSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v14);
      goto LABEL_62;
    }
    LODWORD(v3) = -1073741811;
    v27 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v27 + 24) = 8LL;
    goto LABEL_58;
  }
  if ( v23 != 16 )
  {
    if ( v23 == 24 )
    {
      v30 = 0LL;
      if ( *(_DWORD *)(a2 + 16) >= 0x18u )
      {
        v31 = (void *)*((_QWORD *)PoolWithQuotaTag + 1);
        if ( v31 )
        {
          v32 = ObReferenceObjectByHandle(v31, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
          v34 = v32;
          v30 = (struct _KEVENT *)Object;
          LODWORD(v3) = v32;
          if ( v32 < 0 )
          {
            v35 = WdLogNewEntry5_WdError(v33);
            *(_QWORD *)(v35 + 24) = v34;
            WdLogEvent5_WdError(v35);
            v30 = 0LL;
          }
        }
        LODWORD(HandleInformation) = *PoolWithQuotaTag;
        DpiMiracastStopMiracastSessionSync(
          (char *)DeviceContextFromLuid,
          0,
          0LL,
          v30,
          PoolWithQuotaTag[4],
          (size_t)HandleInformation);
        goto LABEL_62;
      }
    }
    else
    {
      if ( v23 != 32 )
      {
        LODWORD(v3) = -1073741637;
        v27 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v27 + 24) = -1073741637LL;
LABEL_59:
        WdLogEvent5_WdError(v27);
        goto LABEL_62;
      }
      memset(v46, 0, sizeof(v46));
      *(_BYTE *)(DeviceContextFromLuid + 591) = 1;
      if ( *(_DWORD *)(a2 + 16) >= 0x404u )
      {
        *((_BYTE *)PoolWithQuotaTag + 1023) = 0;
        v28 = 0;
        LOBYTE(v13) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v13) )
        {
          DbgPrintEx(0x65u, 0, (PCSTR)PoolWithQuotaTag);
          __debugbreak();
          v28 = 1;
        }
        v29 = PoolWithQuotaTag[256];
        v46[0] = 0x4000000006LL;
        memset(&v46[1], 0, 36);
        LODWORD(v46[6]) = 74;
        HIDWORD(v46[6]) = v29;
        v46[7] = v28;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46);
        goto LABEL_62;
      }
    }
    LODWORD(v3) = -1073741811;
    v27 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    goto LABEL_59;
  }
  if ( *(_DWORD *)(a2 + 16) < 0x350u )
  {
    LODWORD(v3) = -1073741811;
    v27 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v27 + 24) = 16LL;
LABEL_58:
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    goto LABEL_59;
  }
  DpiMiracastHandleStopSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v14);
LABEL_62:
  v40 = v6;
LABEL_63:
  if ( (int)v3 < 0 )
  {
LABEL_68:
    v38 = Src;
    goto LABEL_69;
  }
  v36 = *(_DWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 32) < v36 )
  {
    LODWORD(v3) = -1073741811;
    v37 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    goto LABEL_68;
  }
  if ( !v36 )
    goto LABEL_68;
  v38 = Src;
  memmove(*(void **)(a2 + 40), Src, *(unsigned int *)(a2 + 48));
LABEL_69:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v38 )
    ExFreePoolWithTag(v38, 0);
  if ( v41 )
  {
    *(_QWORD *)(DeviceContextFromLuid + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 32);
  }
  if ( v42 )
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
  if ( v40 )
  {
    if ( *(_BYTE *)(v44 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v44 + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(v44 + 24));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v44 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    _InterlockedExchange64(&qword_1C008E788, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, DeviceContextFromLuid);
  return (unsigned int)v3;
}
