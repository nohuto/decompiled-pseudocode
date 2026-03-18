/*
 * XREFs of DpiFdoStartAdapterThread @ 0x1C0148060
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C013BE10 (DpiSessionCreateCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     wcsncmp_0 @ 0x1C00207E3 (wcsncmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0044298 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C0145794 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiPnpEnableVga @ 0x1C0145BA0 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C0145CE8 (DpiPnpNotifyGdi.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0145E18 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 *     DxgkFinishPnPTransition @ 0x1C015DD24 (DxgkFinishPnPTransition.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C02685B0 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C026877C (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStartAdapterInChain @ 0x1C0273300 (DpiLdaStartAdapterInChain.c)
 */

void __fastcall DpiFdoStartAdapterThread(const WCHAR *StartContext)
{
  unsigned int v1; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r13
  char v6; // si
  char v7; // bl
  WCHAR *v8; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rcx
  unsigned int v11; // r12d
  __int64 v12; // r15
  const WCHAR *v13; // r12
  char v14; // al
  __int64 v15; // rsi
  bool v16; // bl
  int v17; // edx
  void *v18; // rcx
  struct _DEVICE_OBJECT *v19; // rcx
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // r14d
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  ULONG v26; // r13d
  PVOID PoolWithTag; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v31; // rcx
  struct _DEVICE_OBJECT *v32; // rcx
  int Timeout; // [rsp+20h] [rbp-168h]
  PVOID Data; // [rsp+28h] [rbp-160h]
  bool v35; // [rsp+40h] [rbp-148h]
  char v36; // [rsp+41h] [rbp-147h]
  char v37; // [rsp+42h] [rbp-146h] BYREF
  char v38; // [rsp+43h] [rbp-145h]
  char v39; // [rsp+44h] [rbp-144h]
  unsigned int v40; // [rsp+48h] [rbp-140h]
  void *v41; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v42; // [rsp+58h] [rbp-130h]
  int started; // [rsp+5Ch] [rbp-12Ch]
  const WCHAR *v44; // [rsp+60h] [rbp-128h]
  ULONG RequiredSize; // [rsp+68h] [rbp-120h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-118h] BYREF
  ULONG Type; // [rsp+80h] [rbp-108h] BYREF
  void *v48; // [rsp+88h] [rbp-100h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v50[10]; // [rsp+A0h] [rbp-E8h] BYREF
  wchar_t Str1[48]; // [rsp+F0h] [rbp-98h] BYREF

  memset(v50, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v50[1]);
  LODWORD(v5) = 0;
  v44 = 0LL;
  v35 = 0;
  v38 = 0;
  v50[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v50[3]) = 7;
  LOBYTE(v50[6]) = -1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( StartContext )
  {
    v21 = *(_DWORD *)StartContext;
    v8 = (WCHAR *)StartContext;
    v22 = *(_DWORD *)StartContext;
    v44 = StartContext;
    v1 = v22 >> 1;
    LOBYTE(v1) = v1 & 1;
    v6 = v21 & 1;
    v23 = v21 & 4;
    v36 = v6;
    v40 = v1;
    LOBYTE(v4) = v23 != 0;
    v35 = v23 != 0;
    if ( v23 )
    {
      *((_WORD *)StartContext + 261) = 0;
      RtlInitUnicodeString(&DestinationString, StartContext + 2);
      v7 = v35;
      v36 = v6;
      v40 = v1;
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    LOBYTE(v1) = 1;
    v36 = 1;
    v40 = v1;
    v6 = 1;
    v7 = 0;
    v8 = 0LL;
  }
  if ( byte_1C008E75A )
  {
    v24 = WdLogNewEntry5_WdEvent(v4, v3);
    *(_QWORD *)(v24 + 24) = 0LL;
    WdLogEvent5_WdEvent(v24);
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal(v4);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 77));
    if ( (_BYTE)v1 )
    {
      _InterlockedCompareExchange(&dword_1C008EA88, 5, 4);
      DpiPnpEnableVga(0, 1u, 0, (__int64)v50);
    }
    AcquireMiniportListMutex();
    if ( !qword_1C008E9E0 )
    {
      v25 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v25 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v25);
    }
    if ( v6 )
    {
      byte_1C008E792 = 1;
      DpiAcquirePostDisplayInfoFromBgfx((unsigned int *)&dword_1C008E9E8, 1, 1);
      dword_1C008EAD4 = 1;
      if ( qword_1C008E9E0 )
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(qword_1C008E9E0 + 64) + 976LL))(
          *(_QWORD *)(*(_QWORD *)(qword_1C008E9E0 + 64) + 48LL),
          &dword_1C008E9E8);
      dword_1C008EA88 = 1;
    }
    else if ( (_BYTE)v1 && (unsigned int)(dword_1C008EA88 - 4) <= 1 )
    {
      DpiDisableMsBddFallbackDriver(v50);
    }
    v11 = (unsigned __int8)v1 ^ 1;
    v42 = v11;
    if ( v11 < 2 )
    {
      while ( 1 )
      {
        v12 = qword_1C008E778;
        v39 = v11 == 0;
        if ( *(_QWORD *)v12 == v12 )
          goto LABEL_42;
        v13 = v44;
        do
        {
          v14 = *(_BYTE *)(v12 + 134);
          if ( v7 )
          {
            if ( !v14 )
              goto LABEL_40;
          }
          else if ( v14 )
          {
            goto LABEL_40;
          }
          KeWaitForSingleObject((PVOID)(v12 + 72), Executive, 0, 0, 0LL);
          v15 = *(_QWORD *)(v12 + 56);
          if ( *(_QWORD *)v15 != v15 )
          {
            do
            {
              if ( *(_DWORD *)(v15 + 16) == 1953656900 && *(_DWORD *)(v15 + 20) == 4 )
                goto LABEL_38;
              if ( !v7 )
              {
                v16 = 1;
LABEL_22:
                KeEnterCriticalRegion();
                if ( *(_BYTE *)(v15 + 483) )
                {
                  DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v15 + 3816), 4023LL);
                  DpiCheckForOutstandingD3Requests(v15);
                }
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 168), 1u);
                v17 = 0;
                if ( v39 == *(_BYTE *)(v15 + 1144)
                  && *(_DWORD *)(v15 + 236) == 1
                  && !*(_BYTE *)(v15 + 232)
                  && (!v35 || v16) )
                {
                  v37 = 0;
                  v18 = 0LL;
                  if ( v13 && *((_DWORD *)v13 + 131) )
                  {
                    v18 = (void *)(v13 + 264);
                    v17 = *((_DWORD *)v13 + 131);
                  }
                  Data = v18;
                  v19 = *(struct _DEVICE_OBJECT **)(v15 + 24);
                  Timeout = v17;
                  LOBYTE(v17) = v36;
                  if ( *(_DWORD *)(v15 + 504) )
                    v20 = DpiLdaStartAdapterInChain(
                            (_DWORD)v19,
                            v17,
                            (unsigned int)&v37,
                            (unsigned int)v50,
                            Timeout,
                            (__int64)Data);
                  else
                    v20 = DpiFdoStartAdapter(v19, Timeout, (__int64)Data);
                  LODWORD(v5) = v20;
                  if ( v20 != 1075708986 )
                  {
                    if ( v20 < 0 )
                    {
                      v32 = *(struct _DEVICE_OBJECT **)(v15 + 152);
                      *(_BYTE *)(v15 + 232) = 1;
                      IoInvalidateDeviceState(v32);
                    }
                    else
                    {
                      v38 |= v37;
                    }
                  }
                }
                if ( *(_BYTE *)(v15 + 483) )
                {
                  DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v15 + 3816), 4023LL);
                  DpiEnableD3Requests(*(_QWORD *)(v15 + 24));
                }
                ExReleaseResourceLite(*(PERESOURCE *)(v15 + 168));
                KeLeaveCriticalRegion();
                goto LABEL_37;
              }
              v26 = DestinationString.Length + 2;
              RequiredSize = 0;
              v41 = 0LL;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x74727044u);
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
              v41 = PoolWithTag;
              v48 = 0LL;
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v48);
              if ( PoolWithTag )
              {
                DevicePropertyData = IoGetDevicePropertyData(
                                       *(PDEVICE_OBJECT *)(v15 + 152),
                                       &DEVPKEY_Device_InstanceId,
                                       0,
                                       0,
                                       v26,
                                       PoolWithTag,
                                       &RequiredSize,
                                       &Type);
                v5 = DevicePropertyData;
                if ( DevicePropertyData < 0 )
                {
                  v29 = WdLogNewEntry5_WdError(v31);
                  *(_QWORD *)(v29 + 24) = v5;
                  goto LABEL_66;
                }
                RtlInitUnicodeString(&String1, (PCWSTR)PoolWithTag);
                if ( !*(_BYTE *)(v15 + 1152)
                  || (wcscpy(Str1, L"SWD\\VirtualDisplayAdapter\\VirtualDisplayDevice_"), String1.Length >= 0x60u)
                  && !wcsncmp_0(Str1, String1.Buffer, 0x2FuLL) )
                {
                  v16 = RtlCompareUnicodeString(&String1, &DestinationString, 1u) == 0;
                  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
                  goto LABEL_22;
                }
              }
              else
              {
                LODWORD(v5) = -1073741801;
              }
              v29 = WdLogNewEntry5_WdError(v28);
LABEL_66:
              WdLogEvent5_WdError(v29);
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
LABEL_37:
              v7 = v35;
LABEL_38:
              v15 = *(_QWORD *)v15;
            }
            while ( *(_QWORD *)v15 != *(_QWORD *)(v12 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v12 + 72), 0);
LABEL_40:
          v12 = *(_QWORD *)v12;
        }
        while ( *(_QWORD *)v12 != qword_1C008E778 );
        v11 = v42;
LABEL_42:
        v42 = ++v11;
        if ( v11 >= 2 )
        {
          LOBYTE(v1) = v40;
          v6 = v36;
          v8 = (WCHAR *)v44;
          break;
        }
      }
    }
    if ( (_BYTE)v1 && (unsigned int)(dword_1C008EA88 - 1) <= 1 )
      DpiEnableMsBddFallbackDriver(v50);
    _InterlockedExchange64(&qword_1C008E788, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( v38 == 1 )
    {
      DpiPnpNotifyGdi(0LL, 1u, started, v7, (__int64)v50);
    }
    else if ( (_BYTE)v1 )
    {
      DpiPnpEnableVga(1u, 1u, started, (__int64)v50);
    }
    else
    {
      DxgkFinishPnPTransition(0xFFFFFFFF);
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x74727044u);
  if ( !v6 )
    PsTerminateSystemThread(v5);
}
