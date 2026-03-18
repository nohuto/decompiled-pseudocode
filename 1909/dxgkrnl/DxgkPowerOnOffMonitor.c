/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x1C01591A4
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00E7630 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C02779D0 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00D0908 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00D192C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoSetDevicePower @ 0x1C0157F20 (DpiPdoSetDevicePower.c)
 *     MonitorEnableDisableMonitor @ 0x1C01597E4 (MonitorEnableDisableMonitor.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C015AF90 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C02B02F0 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02C9C5C (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DxgkPowerOnOffMonitor(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        int *a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // r15d
  bool v9; // cc
  int *v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r14
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // r13
  struct _KWAIT_BLOCK *v21; // rax
  _QWORD *v22; // r8
  _QWORD *v23; // r14
  unsigned int v24; // r12d
  _QWORD *v25; // r15
  struct _DEVICE_OBJECT *v26; // rcx
  int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // r13
  unsigned int v30; // esi
  ULONG v31; // r15d
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rsi
  _QWORD *v39; // r14
  PVOID v40; // r14
  unsigned int v41; // esi
  _QWORD *v42; // rbx
  __int64 v43; // rax
  __int64 DeviceExtension; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r13
  PIRP v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rax
  int WaitMode; // [rsp+20h] [rbp-A9h]
  unsigned int InputBuffer; // [rsp+50h] [rbp-79h] BYREF
  int *v77; // [rsp+58h] [rbp-71h]
  unsigned int v78; // [rsp+60h] [rbp-69h]
  PVOID P; // [rsp+68h] [rbp-61h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v80; // [rsp+70h] [rbp-59h]
  _DWORD *v81; // [rsp+78h] [rbp-51h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-49h]
  __int64 v83; // [rsp+88h] [rbp-41h]
  struct _IO_STATUS_BLOCK Timeout; // [rsp+90h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+A0h] [rbp-29h] BYREF
  _QWORD v86[2]; // [rsp+B8h] [rbp-11h] BYREF

  v6 = a6;
  LODWORD(v7) = 0;
  P = 0LL;
  WaitBlockArray = 0LL;
  v8 = 0;
  v9 = *a4 <= 1;
  v10 = a4;
  v11 = *(_QWORD *)(a1 + 64);
  v77 = a4;
  v12 = a1;
  v81 = a3;
  v78 = a2;
  v83 = a1;
  v80 = a6;
  InputBuffer = 0;
  v86[0] = 0LL;
  v86[1] = 0LL;
  if ( v9 )
  {
    a5 = 1;
  }
  else
  {
    DisplayLogSetMonitorPowerStage(a6, 1LL, 0LL, v86);
    LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v12, 1);
    if ( (int)v7 >= 0 )
    {
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v11 + 3896), WaitMode, 1LL, (__int64)a6);
      DpiReleaseCoreSyncAccessSafe(v12, 1);
    }
    DisplayLogSetMonitorPowerStage(a6, 2147483649LL, (unsigned int)v7, v86);
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v11 + 484) )
    DpiCheckForOutstandingD3Requests(v11);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
  v14 = *(_DWORD *)(v11 + 236);
  if ( v14 == 2 || *(_DWORD *)(v11 + 240) == 2 && ((v14 - 3) & 0xFFFFFFFC) == 0 && v14 != 4 )
  {
    if ( *(_BYTE *)(v11 + 3513) && *v10 == 1 )
    {
      DisplayLogSetMonitorPowerStage(a6, 2LL, 0LL, v86);
      DpiFdoInvalidateChildRelations(v12, 6LL, a6);
      DisplayLogSetMonitorPowerStage(a6, 2147483650LL, 0LL, v86);
    }
    DisplayLogSetMonitorPowerStage(a6, 4LL, 0LL, v86);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v11 + 3304), 1u);
    if ( a5 )
    {
      v15 = *(unsigned int *)(v11 + 3664);
      if ( (_DWORD)v15 )
      {
        P = ExAllocatePoolWithTag((POOL_TYPE)512, 56 * v15, 0x74727044u);
        v20 = (char *)P;
        if ( !P )
        {
          v57 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
          *(_QWORD *)(v57 + 24) = 0LL;
          WdLogEvent5_WdLowResource(v57);
        }
        v21 = (struct _KWAIT_BLOCK *)&v20[8 * *(unsigned int *)(v11 + 3664)];
        v10 = v77;
        WaitBlockArray = v21;
      }
    }
    v22 = (_QWORD *)(v11 + 3464);
    v23 = *(_QWORD **)(v11 + 3464);
    if ( v23 != (_QWORD *)(v11 + 3464) )
    {
      v24 = 0;
      do
      {
        v25 = v23 - 4;
        v23 = (_QWORD *)*v23;
        if ( *(_DWORD *)v25 == 1 )
        {
          if ( *v81 == -1 )
            goto LABEL_18;
          v58 = 0LL;
          if ( v78 )
          {
            do
            {
              if ( v81[v58] == *((_DWORD *)v25 + 6) )
                break;
              v58 = (unsigned int)(v58 + 1);
            }
            while ( (unsigned int)v58 < v78 );
            if ( (unsigned int)v58 < v78 )
            {
LABEL_18:
              v26 = (struct _DEVICE_OBJECT *)v25[6];
              if ( v26 )
              {
                DeviceExtension = (__int64)v26->DeviceExtension;
                AttachedDeviceReference = IoGetAttachedDeviceReference(v26);
                if ( AttachedDeviceReference )
                {
                  InputBuffer = 0;
                  Timeout.Pointer = 0LL;
                  Timeout.Information = 0LL;
                  KeInitializeEvent(&Event, NotificationEvent, 0);
                  InputBuffer = *v77;
                  v50 = IoBuildDeviceIoControlRequest(
                          0x23242Fu,
                          AttachedDeviceReference,
                          &InputBuffer,
                          4u,
                          0LL,
                          0,
                          1u,
                          &Event,
                          &Timeout);
                  if ( v50 )
                  {
                    v50->IoStatus.Status = -1073741637;
                    LODWORD(v7) = IofCallDriver(AttachedDeviceReference, v50);
                    if ( (_DWORD)v7 == 259 )
                    {
                      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                      LODWORD(v7) = Timeout.Status;
                    }
                    if ( (int)v7 < 0 )
                    {
                      KeEnterCriticalRegion();
                      if ( *(_BYTE *)(DeviceExtension + 484) )
                        DpiCheckForOutstandingD3Requests(DeviceExtension);
                      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
                      LODWORD(v7) = DpiPdoSetDevicePower(v25[6], *v77, 0);
                      if ( *(_BYTE *)(DeviceExtension + 484) )
                        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
                      ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
                      KeLeaveCriticalRegion();
                    }
                    else if ( P )
                    {
                      ObfReferenceObject(*(PVOID *)(DeviceExtension + 24));
                      v55 = 1008LL;
                      if ( *v77 != 1 )
                        v55 = 984LL;
                      v56 = v24++;
                      *((_QWORD *)P + v56) = DeviceExtension + v55;
                    }
                  }
                  else
                  {
                    LODWORD(v7) = -1073741670;
                    v59 = WdLogNewEntry5_WdLowResource(v52, v51, v53, v54);
                    *(_QWORD *)(v59 + 24) = -1073741670LL;
                    WdLogEvent5_WdLowResource(v59);
                  }
                  ObfDereferenceObject(AttachedDeviceReference);
                }
                else
                {
                  LODWORD(v7) = -1073741823;
                  v60 = WdLogNewEntry5_WdError(v47, v46, v48);
                  *(_QWORD *)(v60 + 24) = -1073741823LL;
                  WdLogEvent5_WdError(v60);
                }
                v10 = v77;
                v22 = (_QWORD *)(v11 + 3464);
              }
              *((_DWORD *)v25 + 17) = *v10;
            }
          }
        }
      }
      while ( v23 != v22 );
      InputBuffer = v24;
      v6 = v80;
      v8 = InputBuffer;
    }
    ExReleaseResourceLite((PERESOURCE)(v11 + 3304));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v11 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
    KeLeaveCriticalRegion();
    if ( v8 )
    {
      v27 = 10;
      v28 = -1000000LL * v8;
      v80 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v28;
      do
      {
        v29 = 0LL;
        v30 = v8;
        --v27;
        do
        {
          Timeout.Pointer = (PVOID)v28;
          v31 = v30;
          if ( v30 > 0x40 )
            v31 = 64;
          v32 = KeWaitForMultipleObjects(
                  v31,
                  (PVOID *)P + v29,
                  WaitAll,
                  Executive,
                  0,
                  0,
                  (PLARGE_INTEGER)&Timeout,
                  WaitBlockArray);
          v7 = v32;
          if ( v32 == 258 )
          {
            if ( v27 )
            {
              v61 = WdLogNewEntry5_WdWarning(v34, v33, v35);
              *(_QWORD *)(v61 + 24) = 258LL;
              WdLogEvent5_WdWarning(v61);
            }
            else
            {
              v62 = WdLogNewEntry5_WdError(v34, v33, v35);
              *(_QWORD *)(v62 + 24) = 258LL;
              WdLogEvent5_WdError(v62);
            }
          }
          else if ( v32 )
          {
            DisplayLogSetMonitorPowerStage(v6, 2147483652LL, (unsigned int)v32, v86);
            v66 = WdLogNewEntry5_WdError(v64, v63, v65);
            *(_QWORD *)(v66 + 24) = v7;
            WdLogEvent5_WdError(v66);
            goto LABEL_46;
          }
          v28 = (__int64)v80;
          v29 = v31 + (unsigned int)v29;
          v30 -= v31;
        }
        while ( v30 );
        if ( (_DWORD)v7 != 258 )
          break;
        v8 = InputBuffer;
      }
      while ( v27 );
    }
    DisplayLogSetMonitorPowerStage(v6, 2147483652LL, (unsigned int)v7, v86);
    v10 = v77;
    v12 = v83;
  }
  else
  {
    if ( *(_BYTE *)(v11 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
    KeLeaveCriticalRegion();
  }
  if ( *v10 == 1 )
  {
    DisplayLogSetMonitorPowerStage(v6, 8LL, 0LL, v86);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v11 + 484) )
      DpiCheckForOutstandingD3Requests(v11);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v11 + 3304), 1u);
    v36 = DpiAcquireCoreSyncAccessSafe(v12, 1);
    v7 = v36;
    if ( v36 < 0 )
    {
      v74 = WdLogNewEntry5_WdEvent(v37);
      *(_QWORD *)(v74 + 24) = v7;
      WdLogEvent5_WdEvent(v74);
    }
    else
    {
      v38 = *(_QWORD **)(v11 + 3464);
      if ( v38 != (_QWORD *)(v11 + 3464) )
      {
        do
        {
          v39 = v38;
          v38 = (_QWORD *)*v38;
          if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v39 - 7)) && !*((_BYTE *)v39 + 34) )
          {
            MonitorRemovePhysicalMonitor(*(void **)(v11 + 3896), *((_DWORD *)v39 - 2), 0, v6);
            v67 = (_QWORD *)v39[2];
            v68 = v67 ? v67[8] : 0LL;
            if ( v68 )
            {
              if ( *(_BYTE *)(v68 + 944) )
              {
                v69 = DpiPdoSetMonitorDriverInterfaceState(v67);
                v7 = v69;
                if ( v69 < 0 )
                {
                  v73 = WdLogNewEntry5_WdWarning(v71, v70, v72);
                  *(_QWORD *)(v73 + 24) = v7;
                  WdLogEvent5_WdWarning(v73);
                }
              }
            }
          }
        }
        while ( v38 != (_QWORD *)(v11 + 3464) );
        v12 = v83;
      }
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v11 + 3896), WaitMode, 0LL, (__int64)v6);
      DpiReleaseCoreSyncAccessSafe(v12, 1);
    }
    DisplayLogSetMonitorPowerStage(v6, 2147483656LL, (unsigned int)v7, v86);
    ExReleaseResourceLite((PERESOURCE)(v11 + 3304));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v11 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
    KeLeaveCriticalRegion();
LABEL_46:
    v10 = v77;
  }
  v40 = P;
  if ( P )
  {
    v41 = InputBuffer;
    if ( InputBuffer )
    {
      v42 = (char *)P + 8 * InputBuffer;
      do
      {
        --v42;
        v43 = 1008LL;
        if ( *v10 != 1 )
          v43 = 984LL;
        ObfDereferenceObject(*(PVOID *)(*v42 - v43 + 24));
        --v41;
      }
      while ( v41 );
    }
    ExFreePoolWithTag(v40, 0);
  }
  return (unsigned int)v7;
}
