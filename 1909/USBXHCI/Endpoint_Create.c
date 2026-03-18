/*
 * XREFs of Endpoint_Create @ 0x1C0064D10
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00654B0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C0065700 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     XilEndpoint_Create @ 0x1C0016FD0 (XilEndpoint_Create.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0017F1C (Endpoint_CreateClearStallContext.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001D740 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqDdd @ 0x1C001D894 (WPP_RECORDER_SF_ddqDdd.c)
 *     TR_GetWdfQueue @ 0x1C0029250 (TR_GetWdfQueue.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x1C0039860 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     Etw_EndpointCreate @ 0x1C003EDEC (Etw_EndpointCreate.c)
 *     Endpoint_SetType @ 0x1C0065460 (Endpoint_SetType.c)
 *     TR_Create @ 0x1C0069444 (TR_Create.c)
 */

__int64 __fastcall Endpoint_Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v9; // r14
  unsigned int v10; // ebx
  char IsSecureDevice; // al
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int ClearStallContext; // edi
  unsigned int v16; // ebx
  __int64 v17; // rax
  unsigned __int16 v18; // r9
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned int v22; // ebx
  __int64 v23; // rax
  struct _DEVICE_OBJECT *v24; // rax
  PIO_WORKITEM WorkItem; // rax
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rax
  int v32; // ebx
  __int64 v33; // rax
  char v34; // al
  __int64 WdfQueue; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v39; // [rsp+28h] [rbp-89h]
  __int64 v40; // [rsp+30h] [rbp-81h]
  __int64 v41; // [rsp+38h] [rbp-79h]
  __int64 v42; // [rsp+40h] [rbp-71h]
  __int64 v43; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v44[5]; // [rsp+70h] [rbp-41h] BYREF
  _OWORD v45[4]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v46; // [rsp+118h] [rbp+67h] BYREF

  v46 = a3;
  DWORD1(v45[0]) = 0;
  *(_QWORD *)&v45[1] = 0LL;
  v45[2] = 0LL;
  memset(v44, 0, sizeof(v44));
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a1,
                   off_1C0056428);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *(unsigned __int8 *)(a4 + 2);
    (*(void (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      a2,
      off_1C00562C0);
    HIDWORD(v42) = HIDWORD(a4);
    WPP_RECORDER_SF_ddqDdd(v9[9], v10 >> 7, (v10 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F), *(_BYTE *)(a4 + 3) & 3, v39);
  }
  *(_QWORD *)&v45[3] = off_1C00561A8;
  *(_QWORD *)&v45[0] = 56LL;
  *((_QWORD *)&v45[0] + 1) = Endpoint_EvtEndpointCleanupCallback;
  *(_QWORD *)&v45[1] = 0LL;
  v45[2] = 0LL;
  *((_QWORD *)&v45[1] + 1) = 0x100000001LL;
  IsSecureDevice = Controller_IsSecureDevice((__int64)v9);
  v13 = v12;
  v14 = v12 + 1;
  if ( IsSecureDevice )
    v13 = v14;
  DWORD2(v45[1]) = v13;
  ClearStallContext = qword_1C00576B0(UcxDriverGlobals, a2, &v46, v45, &v43);
  if ( ClearStallContext >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(unsigned __int8 *)(a4 + 2);
      v20 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              a2,
              off_1C00562C0);
      WPP_RECORDER_SF_ddq(
        v9[9],
        4u,
        0xDu,
        0xFu,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(v20 + 135),
        (v19 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
        v43);
    }
    v21 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v43,
            off_1C00561A8);
    KeInitializeEvent((PRKEVENT)(v21 + 40), NotificationEvent, 0);
    memset(v44, 0, sizeof(v44));
    LODWORD(v44[2]) = 0;
    LODWORD(v44[3]) = 0;
    LODWORD(v44[0]) = 40;
    v44[1] = Endpoint_WdfEvtStateMachineTimer;
    BYTE4(v44[2]) = 1;
    memset(v45, 0, 0x38uLL);
    *(_QWORD *)&v45[2] = v43;
    LODWORD(v45[0]) = 56;
    *((_QWORD *)&v45[1] + 1) = 0x100000001LL;
    ClearStallContext = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _OWORD *, __int64))(WdfFunctions_01023
                                                                                                 + 2544))(
                          WPP_MAIN_CB.Dpc.ProcessorHistory,
                          v44,
                          v45,
                          v21 + 1296);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v22 = *(unsigned __int8 *)(a4 + 2);
      v23 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              a2,
              off_1C00562C0);
      v18 = 16;
      goto LABEL_14;
    }
    v24 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 248))(
                                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                                     *v9);
    WorkItem = IoAllocateWorkItem(v24);
    *(_QWORD *)(v21 + 1272) = WorkItem;
    if ( !WorkItem )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = *(unsigned __int8 *)(a4 + 2);
        v27 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                a2,
                off_1C00562C0);
        LODWORD(v41) = (v26 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
        LODWORD(v40) = *(unsigned __int8 *)(v27 + 135);
        WPP_RECORDER_SF_dd(v9[9], 2u, 0xDu, 0x11u, (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids, v40, v41);
      }
      return (unsigned int)-1073741670;
    }
    *(_DWORD *)(v21 + 1140) = 2000;
    *(_DWORD *)(v21 + 1264) = 2000;
    *(_DWORD *)(v21 + 1168) = 0;
    *(_QWORD *)(v21 + 1256) = &ESMStateTable;
    *(_QWORD *)(v21 + 1248) = v21;
    *(_BYTE *)(v21 + 1306) = Controller_IsSecureDevice((__int64)v9);
    *(_QWORD *)v21 = v9;
    *(_QWORD *)(v21 + 8) = a2;
    v28 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a2,
            off_1C00562C0);
    v29 = a5;
    *(_QWORD *)(v21 + 16) = v28;
    *(_QWORD *)(v21 + 136) = 0LL;
    *(_QWORD *)(v21 + 264) = 0LL;
    *(_DWORD *)(v21 + 96) = *(_DWORD *)a4;
    *(_WORD *)(v21 + 100) = *(_WORD *)(a4 + 4);
    *(_BYTE *)(v21 + 102) = *(_BYTE *)(a4 + 6);
    if ( v29 )
    {
      *(_DWORD *)(v21 + 103) = *(_DWORD *)v29;
      *(_WORD *)(v21 + 107) = *(_WORD *)(v29 + 4);
    }
    if ( a6 )
      *(_QWORD *)(v21 + 109) = *a6;
    Endpoint_SetType(v21);
    v30 = 2 * (*(_BYTE *)(v21 + 98) & 0xF);
    if ( (unsigned int)(*(_DWORD *)(v21 + 120) - 1) > 2 )
      ++v30;
    *(_DWORD *)(v21 + 144) = v30;
    ClearStallContext = XilEndpoint_Create(v21);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v22 = *(unsigned __int8 *)(a4 + 2);
      v23 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              a2,
              off_1C00562C0);
      v18 = 18;
LABEL_14:
      LODWORD(v42) = ClearStallContext;
      LODWORD(v41) = (v22 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
      LODWORD(v40) = *(unsigned __int8 *)(v23 + 135);
      goto LABEL_8;
    }
    if ( *(_DWORD *)(*(_QWORD *)(v21 + 16) + 20LL) == 3
      && (*(_BYTE *)(v21 + 99) & 3) == 2
      && (*(_BYTE *)(v21 + 106) & 0x1F) != 0 )
    {
      v31 = *(_QWORD *)v21;
      *(_BYTE *)(v21 + 37) = 1;
      if ( (*(_QWORD *)(v31 + 336) & 0x200000LL) != 0 )
      {
        ClearStallContext = Endpoint_CreateClearStallContext(v21);
        if ( ClearStallContext < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)ClearStallContext;
          v32 = *(_DWORD *)(v21 + 144);
          v33 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                  WPP_MAIN_CB.Dpc.ProcessorHistory,
                  a2,
                  off_1C00562C0);
          v18 = 19;
          goto LABEL_35;
        }
      }
      v34 = *(_BYTE *)(v21 + 37);
    }
    else
    {
      *(_BYTE *)(v21 + 37) = 0;
      v34 = 0;
    }
    ClearStallContext = TR_Create((_DWORD)v9, v21, v43, v34 != 0, v21 + 88);
    if ( ClearStallContext >= 0 )
    {
      WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v21 + 88));
      ((void (__fastcall *)(__int64, __int64, __int64))qword_1C00576D8)(UcxDriverGlobals, v43, WdfQueue);
      if ( *(_DWORD *)(v21 + 144) == 1 )
        *(_QWORD *)(*(_QWORD *)(v21 + 16) + 176LL) = v21;
      v36 = *(_QWORD *)(v21 + 16);
      *(_QWORD *)(v21 + 24) = v43;
      UsbDevice_AddEndpointToDeviceEndpointList(v36, v43, (_QWORD *)(v21 + 64));
      Etw_EndpointCreate(v37, (_QWORD *)v21);
      return (unsigned int)ClearStallContext;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)ClearStallContext;
    v32 = *(_DWORD *)(v21 + 144);
    v33 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a2,
            off_1C00562C0);
    v18 = 20;
LABEL_35:
    LODWORD(v42) = ClearStallContext;
    LODWORD(v41) = v32;
    LODWORD(v40) = *(unsigned __int8 *)(v33 + 135);
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *(unsigned __int8 *)(a4 + 2);
    v17 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a2,
            off_1C00562C0);
    v18 = 14;
    LODWORD(v42) = ClearStallContext;
    LODWORD(v41) = (v16 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v40) = *(unsigned __int8 *)(v17 + 135);
LABEL_8:
    WPP_RECORDER_SF_ddL(v9[9], 2u, 0xDu, v18, (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids, v40, v41, v42);
  }
  return (unsigned int)ClearStallContext;
}
