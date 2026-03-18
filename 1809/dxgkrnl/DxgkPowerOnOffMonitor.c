/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x1C01438D4
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00BC560 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C0241E20 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     MonitorEnableDisableMonitor @ 0x1C0143D04 (MonitorEnableDisableMonitor.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0144B80 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoSetDevicePower @ 0x1C027766C (DpiPdoSetDevicePower.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C0277790 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02913B4 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DxgkPowerOnOffMonitor(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // r13
  __int64 v7; // rdi
  unsigned int v8; // r15d
  bool v9; // cc
  _DWORD *v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r14
  int v14; // ecx
  __int64 v15; // rax
  _QWORD *v16; // r8
  _QWORD *v17; // r14
  unsigned int v18; // r13d
  _QWORD *v19; // r12
  struct _DEVICE_OBJECT *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  _QWORD *v25; // r14
  PVOID v26; // r14
  __int64 v28; // rcx
  char *v29; // r12
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 DeviceExtension; // rsi
  __int64 v33; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  PIRP v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // r14d
  __int64 v42; // rax
  __int64 v43; // r12
  unsigned int v44; // esi
  ULONG v45; // r15d
  NTSTATUS v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned int v62; // esi
  _QWORD *v63; // rbx
  __int64 v64; // rax
  int WaitMode; // [rsp+20h] [rbp-A9h]
  unsigned int InputBuffer; // [rsp+50h] [rbp-79h] BYREF
  unsigned int *v67; // [rsp+58h] [rbp-71h]
  unsigned int v68; // [rsp+60h] [rbp-69h]
  PVOID P; // [rsp+68h] [rbp-61h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v70; // [rsp+70h] [rbp-59h]
  _DWORD *v71; // [rsp+78h] [rbp-51h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-49h]
  __int64 v73; // [rsp+88h] [rbp-41h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+A0h] [rbp-29h] BYREF
  _QWORD v76[2]; // [rsp+B8h] [rbp-11h] BYREF

  v6 = a6;
  LODWORD(v7) = 0;
  P = 0LL;
  WaitBlockArray = 0LL;
  v8 = 0;
  v9 = *a4 <= 1;
  v10 = a4;
  v11 = *(_QWORD *)(a1 + 64);
  v67 = a4;
  v12 = a1;
  v71 = a3;
  v68 = a2;
  v73 = a1;
  v70 = a6;
  InputBuffer = 0;
  v76[0] = 0LL;
  v76[1] = 0LL;
  if ( v9 )
  {
    a5 = 1;
  }
  else
  {
    DisplayLogSetMonitorPowerStage(a6, 1LL, 0LL, v76);
    LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v12, 1);
    if ( (int)v7 >= 0 )
    {
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v11 + 3792), WaitMode, 1LL, (__int64)a6);
      DpiReleaseCoreSyncAccessSafe(v12, 1);
    }
    DisplayLogSetMonitorPowerStage(a6, 2147483649LL, (unsigned int)v7, v76);
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v11 + 483) )
  {
    DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v11 + 3816), 4023LL);
    DpiCheckForOutstandingD3Requests(v11);
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
  v14 = *(_DWORD *)(v11 + 236);
  if ( v14 == 2 || *(_DWORD *)(v11 + 240) == 2 && ((v14 - 3) & 0xFFFFFFFC) == 0 && v14 != 4 )
  {
    if ( *(_BYTE *)(v11 + 3441) && *v10 == 1 )
    {
      DisplayLogSetMonitorPowerStage(a6, 2LL, 0LL, v76);
      DpiFdoInvalidateChildRelations(v12, 6LL, a6);
      DisplayLogSetMonitorPowerStage(a6, 2147483650LL, 0LL, v76);
    }
    DisplayLogSetMonitorPowerStage(a6, 4LL, 0LL, v76);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v11 + 3232), 1u);
    if ( a5 )
    {
      v15 = *(unsigned int *)(v11 + 3560);
      if ( (_DWORD)v15 )
      {
        P = ExAllocatePoolWithTag((POOL_TYPE)512, 56 * v15, 0x74727044u);
        v29 = (char *)P;
        if ( !P )
        {
          v30 = WdLogNewEntry5_WdLowResource(v28);
          *(_QWORD *)(v30 + 24) = 0LL;
          WdLogEvent5_WdLowResource(v30);
        }
        WaitBlockArray = (PKWAIT_BLOCK)&v29[8 * *(unsigned int *)(v11 + 3560)];
      }
    }
    v16 = (_QWORD *)(v11 + 3392);
    v17 = *(_QWORD **)(v11 + 3392);
    if ( v17 != (_QWORD *)(v11 + 3392) )
    {
      v18 = 0;
      do
      {
        v19 = v17 - 4;
        v17 = (_QWORD *)*v17;
        if ( *(_DWORD *)v19 == 1 )
        {
          if ( *v71 == -1 )
            goto LABEL_15;
          v31 = 0LL;
          if ( v68 )
          {
            do
            {
              if ( v71[v31] == *((_DWORD *)v19 + 6) )
                break;
              v31 = (unsigned int)(v31 + 1);
            }
            while ( (unsigned int)v31 < v68 );
            if ( (unsigned int)v31 < v68 )
            {
LABEL_15:
              v20 = (struct _DEVICE_OBJECT *)v19[6];
              if ( v20 )
              {
                DeviceExtension = (__int64)v20->DeviceExtension;
                AttachedDeviceReference = IoGetAttachedDeviceReference(v20);
                if ( AttachedDeviceReference )
                {
                  KeInitializeEvent(&Event, NotificationEvent, 0);
                  InputBuffer = *v67;
                  v35 = IoBuildDeviceIoControlRequest(
                          0x23242Fu,
                          AttachedDeviceReference,
                          &InputBuffer,
                          4u,
                          0LL,
                          0,
                          1u,
                          &Event,
                          &IoStatusBlock);
                  if ( v35 )
                  {
                    v35->IoStatus.Status = -1073741637;
                    LODWORD(v7) = IofCallDriver(AttachedDeviceReference, v35);
                    if ( (_DWORD)v7 == 259 )
                    {
                      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                      LODWORD(v7) = IoStatusBlock.Status;
                    }
                    if ( (int)v7 < 0 )
                    {
                      KeEnterCriticalRegion();
                      if ( *(_BYTE *)(DeviceExtension + 483) )
                      {
                        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
                        DpiCheckForOutstandingD3Requests(DeviceExtension);
                      }
                      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
                      LODWORD(v7) = DpiPdoSetDevicePower(v19[6], *v67, 0LL);
                      if ( *(_BYTE *)(DeviceExtension + 483) )
                      {
                        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
                        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
                      }
                      ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
                      KeLeaveCriticalRegion();
                    }
                    else if ( P )
                    {
                      ObfReferenceObject(*(PVOID *)(DeviceExtension + 24));
                      v37 = 1008LL;
                      if ( *v67 != 1 )
                        v37 = 984LL;
                      v38 = v18++;
                      *((_QWORD *)P + v38) = DeviceExtension + v37;
                    }
                  }
                  else
                  {
                    LODWORD(v7) = -1073741670;
                    v39 = WdLogNewEntry5_WdLowResource(v36);
                    *(_QWORD *)(v39 + 24) = -1073741670LL;
                    WdLogEvent5_WdLowResource(v39);
                  }
                  ObfDereferenceObject(AttachedDeviceReference);
                }
                else
                {
                  LODWORD(v7) = -1073741823;
                  v40 = WdLogNewEntry5_WdError(v33);
                  *(_QWORD *)(v40 + 24) = -1073741823LL;
                  WdLogEvent5_WdError(v40);
                }
                v16 = (_QWORD *)(v11 + 3392);
              }
              *((_DWORD *)v19 + 17) = *v67;
            }
          }
        }
      }
      while ( v17 != v16 );
      InputBuffer = v18;
      v6 = v70;
      v8 = InputBuffer;
    }
    ExReleaseResourceLite((PERESOURCE)(v11 + 3232));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v11 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v11 + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
    KeLeaveCriticalRegion();
    if ( v8 )
    {
      v41 = 10;
      v42 = -1000000LL * v8;
      v70 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v42;
      do
      {
        v43 = 0LL;
        v44 = v8;
        --v41;
        do
        {
          IoStatusBlock.Pointer = (PVOID)v42;
          v45 = v44;
          if ( v44 > 0x40 )
            v45 = 64;
          v46 = KeWaitForMultipleObjects(
                  v45,
                  (PVOID *)P + v43,
                  WaitAll,
                  Executive,
                  0,
                  0,
                  (PLARGE_INTEGER)&IoStatusBlock,
                  WaitBlockArray);
          v7 = v46;
          if ( v46 == 258 )
          {
            if ( v41 )
            {
              v50 = WdLogNewEntry5_WdWarning(v48, v47, v49);
              *(_QWORD *)(v50 + 24) = 258LL;
              WdLogEvent5_WdWarning(v50);
            }
            else
            {
              v51 = WdLogNewEntry5_WdError(v48);
              *(_QWORD *)(v51 + 24) = 258LL;
              WdLogEvent5_WdError(v51);
            }
          }
          else if ( v46 )
          {
            DisplayLogSetMonitorPowerStage(v6, 2147483652LL, (unsigned int)v46, v76);
            v53 = WdLogNewEntry5_WdError(v52);
            *(_QWORD *)(v53 + 24) = v7;
            WdLogEvent5_WdError(v53);
            goto LABEL_35;
          }
          v42 = (__int64)v70;
          v43 = v45 + (unsigned int)v43;
          v44 -= v45;
        }
        while ( v44 );
        if ( (_DWORD)v7 != 258 )
          break;
        v8 = InputBuffer;
      }
      while ( v41 );
    }
    DisplayLogSetMonitorPowerStage(v6, 2147483652LL, (unsigned int)v7, v76);
    v10 = v67;
    v12 = v73;
  }
  else
  {
    if ( *(_BYTE *)(v11 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v11 + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
    KeLeaveCriticalRegion();
  }
  if ( *v10 == 1 )
  {
    DisplayLogSetMonitorPowerStage(v6, 8LL, 0LL, v76);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v11 + 483) )
    {
      DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v11 + 3816), 4023LL);
      DpiCheckForOutstandingD3Requests(v11);
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v11 + 3232), 1u);
    v21 = DpiAcquireCoreSyncAccessSafe(v12, 1);
    v7 = v21;
    if ( v21 < 0 )
    {
      v61 = WdLogNewEntry5_WdEvent(v23, v22);
      *(_QWORD *)(v61 + 24) = v7;
      WdLogEvent5_WdEvent(v61);
    }
    else
    {
      v24 = *(_QWORD **)(v11 + 3392);
      if ( v24 != (_QWORD *)(v11 + 3392) )
      {
        do
        {
          v25 = v24;
          v24 = (_QWORD *)*v24;
          if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v25 - 7)) && !*((_BYTE *)v25 + 34) )
          {
            MonitorRemovePhysicalMonitor(*(DXGADAPTER **)(v11 + 3792), *((_DWORD *)v25 - 2), 0, v6);
            v54 = (_QWORD *)v25[2];
            v55 = v54 ? v54[8] : 0LL;
            if ( v55 )
            {
              if ( *(_BYTE *)(v55 + 944) )
              {
                v56 = DpiPdoSetMonitorDriverInterfaceState(v54);
                v7 = v56;
                if ( v56 < 0 )
                {
                  v60 = WdLogNewEntry5_WdWarning(v58, v57, v59);
                  *(_QWORD *)(v60 + 24) = v7;
                  WdLogEvent5_WdWarning(v60);
                }
              }
            }
          }
        }
        while ( v24 != (_QWORD *)(v11 + 3392) );
        v12 = v73;
      }
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v11 + 3792), WaitMode, 0LL, (__int64)v6);
      DpiReleaseCoreSyncAccessSafe(v12, 1);
    }
    DisplayLogSetMonitorPowerStage(v6, 2147483656LL, (unsigned int)v7, v76);
    ExReleaseResourceLite((PERESOURCE)(v11 + 3232));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v11 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v11 + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
    KeLeaveCriticalRegion();
LABEL_35:
    v10 = v67;
  }
  v26 = P;
  if ( P )
  {
    v62 = InputBuffer;
    if ( InputBuffer )
    {
      v63 = (char *)P + 8 * InputBuffer;
      do
      {
        --v63;
        v64 = 1008LL;
        if ( *v10 != 1 )
          v64 = 984LL;
        ObfDereferenceObject(*(PVOID *)(*v63 - v64 + 24));
        --v62;
      }
      while ( v62 );
    }
    ExFreePoolWithTag(v26, 0);
  }
  return (unsigned int)v7;
}
