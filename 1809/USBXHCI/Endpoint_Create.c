/*
 * XREFs of Endpoint_Create @ 0x1C005D370
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C005DA40 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C005DCA0 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsSecureDevice @ 0x1C000CF68 (Controller_IsSecureDevice.c)
 *     XilEndpoint_Create @ 0x1C00143A0 (XilEndpoint_Create.c)
 *     Endpoint_CreateClearStallContext @ 0x1C00151C4 (Endpoint_CreateClearStallContext.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001A380 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqDdd @ 0x1C001A4D4 (WPP_RECORDER_SF_ddqDdd.c)
 *     TR_GetWdfQueue @ 0x1C0024B10 (TR_GetWdfQueue.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x1C00347F0 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     Etw_EndpointCreate @ 0x1C0039580 (Etw_EndpointCreate.c)
 *     Endpoint_SetType @ 0x1C005D9E8 (Endpoint_SetType.c)
 *     TR_Create @ 0x1C0061390 (TR_Create.c)
 */

__int64 __fastcall Endpoint_Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v8; // r14
  unsigned int v9; // ebx
  char IsSecureDevice; // al
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  unsigned __int8 v14; // bl
  int ClearStallContext; // edi
  __int64 v16; // rax
  unsigned __int16 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // ebx
  __int64 v21; // rax
  struct _DEVICE_OBJECT *v22; // rax
  PIO_WORKITEM WorkItem; // rax
  unsigned int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rax
  char v32; // al
  __int64 WdfQueue; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v37; // [rsp+20h] [rbp-89h]
  __int64 v38; // [rsp+28h] [rbp-81h]
  __int64 v39; // [rsp+30h] [rbp-79h]
  __int64 v40; // [rsp+38h] [rbp-71h]
  _QWORD v41[5]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v42[13]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v43; // [rsp+110h] [rbp+67h] BYREF
  __int64 v44; // [rsp+118h] [rbp+6Fh] BYREF

  v43 = a3;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a1,
                   off_1C004F400);
  v9 = *(unsigned __int8 *)(a4 + 2);
  (*(void (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    off_1C004F298);
  HIDWORD(v40) = HIDWORD(a4);
  WPP_RECORDER_SF_ddqDdd(v8[9], v9 >> 7, (v9 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F), *(_BYTE *)(a4 + 3) & 3, v37);
  memset(v42, 0, 0x38uLL);
  v42[6] = off_1C004F180;
  LODWORD(v42[0]) = 56;
  v42[1] = Endpoint_EvtEndpointCleanupCallback;
  v42[3] = 0x100000001LL;
  IsSecureDevice = Controller_IsSecureDevice((__int64)v8);
  v12 = v11;
  if ( IsSecureDevice )
    v12 = 2;
  LODWORD(v42[3]) = v12;
  v13 = qword_1C0050670(UcxDriverGlobals, a2, &v43, v42, &v44);
  v14 = *(_BYTE *)(a4 + 2);
  ClearStallContext = v13;
  if ( v13 < 0 )
  {
    v16 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a2,
            off_1C004F298);
    LODWORD(v40) = ClearStallContext;
    v17 = 14;
    LODWORD(v39) = (v14 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v38) = *(unsigned __int8 *)(v16 + 135);
LABEL_5:
    WPP_RECORDER_SF_ddL(v8[9], 2u, 0xDu, v17, (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids, v38, v39, v40);
    return (unsigned int)ClearStallContext;
  }
  v18 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a2,
          off_1C004F298);
  WPP_RECORDER_SF_ddq(
    v8[9],
    4u,
    0xDu,
    0xFu,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    *(unsigned __int8 *)(v18 + 135),
    (v14 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
    v44);
  v19 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v44,
          off_1C004F180);
  KeInitializeEvent((PRKEVENT)(v19 + 40), NotificationEvent, 0);
  memset(v41, 0, sizeof(v41));
  LODWORD(v41[2]) = 0;
  LODWORD(v41[3]) = 0;
  LODWORD(v41[0]) = 40;
  v41[1] = Endpoint_WdfEvtStateMachineTimer;
  BYTE4(v41[2]) = 1;
  memset(v42, 0, 0x38uLL);
  v42[4] = v44;
  LODWORD(v42[0]) = 56;
  v42[3] = 0x100000001LL;
  ClearStallContext = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023
                                                                                               + 2544))(
                        WPP_MAIN_CB.Dpc.ProcessorHistory,
                        v41,
                        v42,
                        v19 + 1296);
  if ( ClearStallContext < 0 )
  {
    v20 = *(unsigned __int8 *)(a4 + 2);
    v21 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a2,
            off_1C004F298);
    v17 = 16;
LABEL_8:
    LODWORD(v40) = ClearStallContext;
    LODWORD(v39) = (v20 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v38) = *(unsigned __int8 *)(v21 + 135);
    goto LABEL_5;
  }
  v22 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 248))(
                                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                                   *v8);
  WorkItem = IoAllocateWorkItem(v22);
  *(_QWORD *)(v19 + 1272) = WorkItem;
  if ( !WorkItem )
  {
    v24 = *(unsigned __int8 *)(a4 + 2);
    v25 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a2,
            off_1C004F298);
    LODWORD(v39) = (v24 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v38) = *(unsigned __int8 *)(v25 + 135);
    WPP_RECORDER_SF_dd(v8[9], 2u, 0xDu, 0x11u, (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids, v38, v39);
    return (unsigned int)-1073741670;
  }
  *(_DWORD *)(v19 + 1140) = 2000;
  *(_DWORD *)(v19 + 1264) = 2000;
  *(_DWORD *)(v19 + 1168) = 0;
  *(_QWORD *)(v19 + 1256) = &ESMStateTable;
  *(_QWORD *)(v19 + 1248) = v19;
  *(_BYTE *)(v19 + 1306) = Controller_IsSecureDevice((__int64)v8);
  *(_QWORD *)v19 = v8;
  *(_QWORD *)(v19 + 8) = a2;
  v26 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a2,
          off_1C004F298);
  v27 = a5;
  *(_QWORD *)(v19 + 16) = v26;
  *(_QWORD *)(v19 + 136) = 0LL;
  *(_QWORD *)(v19 + 264) = 0LL;
  *(_DWORD *)(v19 + 96) = *(_DWORD *)a4;
  *(_WORD *)(v19 + 100) = *(_WORD *)(a4 + 4);
  *(_BYTE *)(v19 + 102) = *(_BYTE *)(a4 + 6);
  if ( v27 )
  {
    *(_DWORD *)(v19 + 103) = *(_DWORD *)v27;
    *(_WORD *)(v19 + 107) = *(_WORD *)(v27 + 4);
  }
  if ( a6 )
    *(_QWORD *)(v19 + 109) = *a6;
  Endpoint_SetType(v19);
  v28 = 2 * (*(_BYTE *)(v19 + 98) & 0xF);
  if ( (unsigned int)(*(_DWORD *)(v19 + 120) - 1) > 2 )
    ++v28;
  *(_DWORD *)(v19 + 144) = v28;
  ClearStallContext = XilEndpoint_Create(v19);
  if ( ClearStallContext < 0 )
  {
    v20 = *(unsigned __int8 *)(a4 + 2);
    v21 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a2,
            off_1C004F298);
    v17 = 18;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v19 + 16) + 20LL) == 3
    && (*(_BYTE *)(v19 + 99) & 3) == 2
    && (*(_BYTE *)(v19 + 106) & 0x1F) != 0 )
  {
    v29 = *(_QWORD *)v19;
    *(_BYTE *)(v19 + 37) = 1;
    if ( (*(_QWORD *)(v29 + 272) & 0x200000LL) != 0 )
    {
      ClearStallContext = Endpoint_CreateClearStallContext(v19);
      if ( ClearStallContext < 0 )
      {
        v30 = *(_DWORD *)(v19 + 144);
        v31 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                a2,
                off_1C004F298);
        v17 = 19;
LABEL_25:
        LODWORD(v40) = ClearStallContext;
        LODWORD(v39) = v30;
        LODWORD(v38) = *(unsigned __int8 *)(v31 + 135);
        goto LABEL_5;
      }
    }
    v32 = *(_BYTE *)(v19 + 37);
  }
  else
  {
    *(_BYTE *)(v19 + 37) = 0;
    v32 = 0;
  }
  ClearStallContext = TR_Create((_DWORD)v8, v19, v44, v32 != 0, v19 + 88);
  if ( ClearStallContext < 0 )
  {
    v30 = *(_DWORD *)(v19 + 144);
    v31 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a2,
            off_1C004F298);
    v17 = 20;
    goto LABEL_25;
  }
  WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v19 + 88));
  ((void (__fastcall *)(__int64, __int64, __int64))qword_1C0050698)(UcxDriverGlobals, v44, WdfQueue);
  if ( *(_DWORD *)(v19 + 144) == 1 )
    *(_QWORD *)(*(_QWORD *)(v19 + 16) + 176LL) = v19;
  v34 = *(_QWORD *)(v19 + 16);
  *(_QWORD *)(v19 + 24) = v44;
  UsbDevice_AddEndpointToDeviceEndpointList(v34, v44, (_QWORD *)(v19 + 64));
  Etw_EndpointCreate(v35, (_QWORD *)v19);
  return (unsigned int)ClearStallContext;
}
