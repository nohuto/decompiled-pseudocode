/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1C02A5E58
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C004C3C4 (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF90 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1E0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00D0908 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00D192C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x1C02A4A08 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02A50B8 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C02A5540 (DpiMiracastHandleStopSessionDone.c)
 */

__int64 __fastcall DxgkHandleMiracastEscape(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  _DWORD *PoolWithQuotaTag; // r15
  char v7; // r12
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 DeviceContextFromLuid; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // eax
  char *v27; // rdx
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // r13
  __int64 v31; // r13
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // r13d
  __int64 v35; // r8
  int v36; // eax
  struct _KEVENT *v37; // r9
  void *v38; // rcx
  NTSTATUS v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r13
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rax
  void *v47; // r13
  __int64 v48; // rdx
  char v49; // [rsp+40h] [rbp-B8h]
  char v50; // [rsp+42h] [rbp-B6h]
  char v51; // [rsp+43h] [rbp-B5h]
  PVOID Src; // [rsp+48h] [rbp-B0h]
  __int64 v53; // [rsp+70h] [rbp-88h]
  PVOID Object; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v55[8]; // [rsp+80h] [rbp-78h] BYREF

  LODWORD(v4) = 0;
  v5 = 0LL;
  v53 = 0LL;
  PoolWithQuotaTag = 0LL;
  Src = 0LL;
  v7 = 0;
  v49 = 0;
  v51 = 0;
  v50 = 0;
  if ( (unsigned int)a1 < 0x38 )
  {
    v8 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v8 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v8);
    return 3221225507LL;
  }
  *(_DWORD *)(a2 + 48) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*(_QWORD *)a2, 0);
  if ( !DeviceContextFromLuid )
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  if ( PsGetCurrentProcess(v11, v10) != *(_QWORD *)(DeviceContextFromLuid + 104) )
  {
    v4 = -1073741790LL;
LABEL_7:
    v18 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = v4;
LABEL_8:
    WdLogEvent5_WdError(v18);
    goto LABEL_63;
  }
  v22 = *(_DWORD *)(a2 + 16);
  if ( v22 && (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v22, 0x74727044u)) == 0LL
    || (v26 = *(_DWORD *)(a2 + 32)) != 0 && (Src = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v26, 0x74727044u)) == 0LL )
  {
    LODWORD(v4) = -1073741801;
    v25 = WdLogNewEntry5_WdLowResource(v23, v15, v17, v24);
    *(_QWORD *)(v25 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v25);
    goto LABEL_63;
  }
  v16 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v16 )
  {
    v27 = *(char **)(a2 + 24);
    if ( (unsigned __int64)&v27[v16] > MmUserProbeAddress || &v27[v16] < v27 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      LODWORD(v16) = *(_DWORD *)(a2 + 16);
      v27 = *(char **)(a2 + 24);
    }
    memmove(PoolWithQuotaTag, v27, (unsigned int)v16);
  }
  v28 = *(_DWORD *)(a2 + 32);
  if ( v28 )
    ProbeForWrite(*(volatile void **)(a2 + 40), v28, 1u);
  v29 = *(_DWORD *)(a2 + 8);
  if ( (v29 & 6) != 0 )
  {
    AcquireMiniportListMutex();
    v7 = 1;
    v30 = *(_QWORD *)(DeviceContextFromLuid + 432);
    if ( !v30 )
    {
      v31 = -1073741275LL;
LABEL_24:
      LODWORD(v4) = v31;
      v18 = WdLogNewEntry5_WdError(v16, v15, v17);
      *(_QWORD *)(v18 + 24) = v31;
      goto LABEL_8;
    }
    v5 = *(_QWORD *)(v30 + 64);
    v53 = v5;
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      DpiCheckForOutstandingD3Requests(v5);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
    v49 = 1;
    v16 = *(unsigned int *)(v5 + 236);
    if ( (_DWORD)v16 != 2 && (*(_DWORD *)(v5 + 240) != 2 || (((_DWORD)v16 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v16 == 4) )
    {
      v31 = -1073741130LL;
      goto LABEL_24;
    }
    v29 = *(_DWORD *)(a2 + 8);
    if ( (v29 & 4) != 0 )
    {
      v32 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
      v4 = v32;
      if ( v32 < 0 )
        goto LABEL_7;
      v51 = 1;
      v29 = *(_DWORD *)(a2 + 8);
    }
  }
  if ( (v29 & 1) != 0 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 32);
    *(_QWORD *)(DeviceContextFromLuid + 88) = KeGetCurrentThread();
    v50 = 1;
    v29 = *(_DWORD *)(a2 + 8);
  }
  if ( v29 == 4 )
  {
    LODWORD(v4) = DpiMiracastDdiMiracastIoControl(
                    v5,
                    *(_QWORD *)(DeviceContextFromLuid + 448),
                    (const GUID *)*(unsigned int *)(a2 + 16),
                    (__int64)PoolWithQuotaTag,
                    *(_DWORD *)(a2 + 32),
                    (__int64)Src,
                    (_DWORD *)(a2 + 48));
    goto LABEL_62;
  }
  if ( v29 == 8 )
  {
    if ( *(_DWORD *)(a2 + 16) >= 0x350u )
    {
      DpiMiracastHandleStartSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v17);
      goto LABEL_62;
    }
    LODWORD(v4) = -1073741811;
    v33 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v33 + 24) = 8LL;
    goto LABEL_58;
  }
  if ( v29 != 16 )
  {
    if ( v29 == 24 )
    {
      v37 = 0LL;
      if ( *(_DWORD *)(a2 + 16) >= 0x18u )
      {
        v38 = (void *)*((_QWORD *)PoolWithQuotaTag + 1);
        if ( v38 )
        {
          v39 = ObReferenceObjectByHandle(v38, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
          v43 = v39;
          v37 = (struct _KEVENT *)Object;
          LODWORD(v4) = v39;
          if ( v39 < 0 )
          {
            v44 = WdLogNewEntry5_WdError(v41, v40, v42);
            *(_QWORD *)(v44 + 24) = v43;
            WdLogEvent5_WdError(v44);
            v37 = 0LL;
          }
        }
        DpiMiracastStopMiracastSessionSync(
          (char *)DeviceContextFromLuid,
          0,
          0LL,
          v37,
          PoolWithQuotaTag[4],
          *PoolWithQuotaTag);
        goto LABEL_62;
      }
    }
    else
    {
      if ( v29 != 32 )
      {
        LODWORD(v4) = -1073741637;
        v33 = WdLogNewEntry5_WdError(v16, v15, v17);
        *(_QWORD *)(v33 + 24) = -1073741637LL;
LABEL_59:
        WdLogEvent5_WdError(v33);
        goto LABEL_62;
      }
      memset(v55, 0, sizeof(v55));
      *(_BYTE *)(DeviceContextFromLuid + 591) = 1;
      if ( *(_DWORD *)(a2 + 16) >= 0x404u )
      {
        *((_BYTE *)PoolWithQuotaTag + 1023) = 0;
        v34 = 0;
        LOBYTE(v16) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v16) )
        {
          DbgPrintEx(0x65u, 0, (PCSTR)PoolWithQuotaTag);
          __debugbreak();
          v34 = 1;
        }
        v36 = PoolWithQuotaTag[256];
        v55[0] = 0x4000000006LL;
        memset(&v55[1], 0, 36);
        LODWORD(v55[6]) = 74;
        HIDWORD(v55[6]) = v36;
        v55[7] = v34;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v55, 0x200000000LL, v35);
        goto LABEL_62;
      }
    }
    LODWORD(v4) = -1073741811;
    v33 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    goto LABEL_59;
  }
  if ( *(_DWORD *)(a2 + 16) < 0x350u )
  {
    LODWORD(v4) = -1073741811;
    v33 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v33 + 24) = 16LL;
LABEL_58:
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    goto LABEL_59;
  }
  DpiMiracastHandleStopSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v17);
LABEL_62:
  v49 = v7;
LABEL_63:
  if ( (int)v4 < 0 )
  {
LABEL_68:
    v47 = Src;
    goto LABEL_69;
  }
  v45 = *(_DWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 32) < v45 )
  {
    LODWORD(v4) = -1073741811;
    v46 = WdLogNewEntry5_WdError(v20, v19, v21);
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v46);
    goto LABEL_68;
  }
  if ( !v45 )
    goto LABEL_68;
  v47 = Src;
  memmove(*(void **)(a2 + 40), Src, *(unsigned int *)(a2 + 48));
LABEL_69:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v47 )
    ExFreePoolWithTag(v47, 0);
  if ( v50 )
  {
    *(_QWORD *)(DeviceContextFromLuid + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 32);
  }
  if ( v51 )
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
  if ( v49 )
  {
    v48 = v53;
    if ( *(_BYTE *)(v53 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v53 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v48 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v7 )
  {
    _InterlockedExchange64(&qword_1C00A2788, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, DeviceContextFromLuid, v21);
  return (unsigned int)v4;
}
