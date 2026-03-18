/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x1C0157898
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001E418 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C02A1480 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoGetChildDescriptor @ 0x1C001A698 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiPdoAddPdo @ 0x1C0157A0C (DpiPdoAddPdo.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0176214 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C0176448 (MonitorCreatePhysicalMonitor.c)
 *     DpiPdoRemovePdo @ 0x1C02AFB30 (DpiPdoRemovePdo.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C02AFEE0 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02C9B9C (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoHandleChildConnectionChange(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a9)
{
  unsigned __int8 v9; // bl
  __int64 v11; // rdi
  __int64 v12; // r15
  unsigned __int8 v13; // r13
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *ChildDescriptor; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v19; // rsi
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rbx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r15
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r13
  __int64 v33; // rax
  void *v34; // rcx
  int PhysicalMonitor; // eax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rax
  ULONG OutputBufferLength; // [rsp+20h] [rbp-E0h]
  int v43; // [rsp+28h] [rbp-D8h]
  unsigned int v45; // [rsp+44h] [rbp-BCh]
  _DWORD v47[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h]
  __int128 v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-90h]
  int v51; // [rsp+78h] [rbp-88h]
  int v52; // [rsp+7Ch] [rbp-84h]
  int v53; // [rsp+80h] [rbp-80h]
  int v54; // [rsp+84h] [rbp-7Ch]
  unsigned int v55; // [rsp+88h] [rbp-78h]
  int v56; // [rsp+8Ch] [rbp-74h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  _DWORD OutputBuffer[60]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = a4;
  v11 = *(_QWORD *)(a1 + 64);
  v12 = a1;
  v13 = a4;
  v45 = a3;
  if ( !a8 )
  {
    v52 = 0;
    v51 = 0;
    v50 = 0LL;
    v24 = *(_QWORD *)(v11 + 5760);
    v48 = 0LL;
    v49 = 0uLL;
    v25 = *(_DWORD *)(v11 + 24) & 0xFFFF00;
    v47[0] = 30;
    v47[1] = 72;
    v54 = v25 | 1;
    v56 = a4;
    v57 = *(_QWORD *)(v11 + 2672);
    v53 = 39;
    v55 = a2;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v47, v24, a3);
  }
  ChildDescriptor = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)DpiFdoGetChildDescriptor(v11, a2);
  v19 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v22 = -1073741810LL;
    goto LABEL_18;
  }
  if ( !*((_QWORD *)ChildDescriptor + 6) )
  {
    LOBYTE(v17) = 0;
    goto LABEL_6;
  }
  if ( IsInternalVideoOutput(ChildDescriptor[1]) )
  {
    v27 = *(_QWORD *)(v20 + 64);
    if ( *((_BYTE *)v19 + 66) == v9 )
    {
LABEL_32:
      v12 = a1;
      v9 = 1;
      goto LABEL_6;
    }
    memset(OutputBuffer, 0, 0xE8uLL);
    v28 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
    v32 = v28;
    if ( v28 < 0 )
    {
      OutputBuffer[7] = 0;
      v33 = WdLogNewEntry5_WdError(v30, v29, v31);
      *(_QWORD *)(v33 + 24) = v32;
      WdLogEvent5_WdError(v33);
    }
    v34 = *(void **)(v11 + 3896);
    if ( v9 )
    {
      PhysicalMonitor = MonitorCreatePhysicalMonitor(v34, a2, *((struct _DEVICE_OBJECT **)v19 + 6), 1u, v9, a9);
      v22 = PhysicalMonitor;
      if ( PhysicalMonitor >= 0 )
      {
        if ( *(_BYTE *)(v27 + 944) )
        {
          MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v11 + 3896), a2);
          goto LABEL_29;
        }
        goto LABEL_31;
      }
    }
    else
    {
      v36 = MonitorRemovePhysicalMonitor(v34, a2, OutputBuffer[7] != 0, a9);
      v22 = v36;
      if ( v36 >= 0 )
      {
        if ( !OutputBuffer[7] && *(_BYTE *)(v27 + 944) )
        {
LABEL_29:
          v37 = DpiPdoSetMonitorDriverInterfaceState(*((PVOID *)v19 + 6));
          v40 = v37;
          if ( v37 < 0 )
          {
            v41 = WdLogNewEntry5_WdWarning(v39, v38, v17);
            *(_QWORD *)(v41 + 24) = v40;
            WdLogEvent5_WdWarning(v41);
          }
        }
LABEL_31:
        LOBYTE(v17) = 1;
        v13 = a4;
        goto LABEL_32;
      }
    }
LABEL_18:
    v26 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v26 + 24) = v22;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v22;
  }
LABEL_6:
  *((_BYTE *)v19 + 66) = v13;
  if ( (_BYTE)v17 != v9 || v9 && a6 )
  {
    *((_BYTE *)v19 + 65) = v9;
    if ( v9 )
    {
      LOBYTE(v18) = a5;
      LOBYTE(v43) = a7;
      LOBYTE(OutputBufferLength) = a6;
      v21 = DpiPdoAddPdo(v12, v19, v45, v18, OutputBufferLength, v43, a9);
    }
    else
    {
      LOBYTE(v17) = 1;
      v21 = DpiPdoRemovePdo(v12, v19, v17, a9);
    }
    LODWORD(v22) = v21;
    if ( v21 >= 0 && v21 != 0x40000000 )
    {
      _m_prefetchw((const void *)(v11 + 3644));
      if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 3644), 1u) & 1) == 0 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v11 + 152), BusRelations);
    }
  }
  else
  {
    LODWORD(v22) = 0;
  }
  return (unsigned int)v22;
}
