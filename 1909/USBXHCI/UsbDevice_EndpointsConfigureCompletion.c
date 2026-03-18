/*
 * XREFs of UsbDevice_EndpointsConfigureCompletion @ 0x1C003A570
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x1C00062F4 (UsbDevice_SetConfigureRequestStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0014D48 (WPP_RECORDER_SF_dqd.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016864 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C003AE58 (UsbDevice_GetEndpointOffloadInformation.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C003DC64 (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C003DF98 (WPP_RECORDER_SF_dqq.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C0048B40 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C0048B58 (XilCoreUsbDevice_GetInputContextBufferLA.c)
 *     XilCoreUsbDevice_GetInputContextBufferSize @ 0x1C0048B70 (XilCoreUsbDevice_GetInputContextBufferSize.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C0048B84 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

void __fastcall UsbDevice_EndpointsConfigureCompletion(__int64 a1, int a2, __int64 *a3)
{
  _QWORD *v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rbp
  _BYTE *v13; // r13
  char v14; // r14
  int v15; // ebx
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // edx
  int v23; // edx
  unsigned int i; // r12d
  __int64 *v25; // rax
  unsigned int j; // r14d
  __int64 *v27; // rax
  unsigned int k; // r12d
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 *v32; // rcx
  unsigned int v33; // r12d
  unsigned int *m; // r14
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int n; // ebx
  __int64 *v38; // rax
  _DWORD *InputContextBufferVA; // r14
  __int64 v40; // rbx
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rax
  int InputContextBufferSize; // eax
  __int64 v45; // rcx
  char v46; // [rsp+40h] [rbp-88h]
  __int64 v47; // [rsp+48h] [rbp-80h] BYREF
  __int64 v48; // [rsp+50h] [rbp-78h]
  __int64 v49; // [rsp+58h] [rbp-70h]
  _QWORD v50[5]; // [rsp+60h] [rbp-68h] BYREF

  memset(v50, 0, sizeof(v50));
  v6 = *(_QWORD **)(a1 + 48);
  v7 = 0;
  v46 = 0;
  v8 = v6[1];
  v47 = v6[55];
  v9 = *(_QWORD *)(v8 + 88);
  v49 = *(_QWORD *)(v8 + 144);
  v48 = v9;
  LOWORD(v50[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v47,
    v50);
  v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v47,
          off_1C0056090);
  v12 = v50[1];
  v13 = (_BYTE *)v10;
  if ( a2 == 3 )
  {
    if ( !*(_DWORD *)(v50[1] + 24LL) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqd(
          *(_QWORD *)(v6[1] + 72LL),
          4u,
          0xCu,
          0x2Fu,
          (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
          *((unsigned __int8 *)v6 + 135),
          *v6,
          *(_DWORD *)(v50[1] + 40LL));
      goto LABEL_25;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(v6[1] + 72LL),
        4u,
        0xCu,
        0x30u,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *((unsigned __int8 *)v6 + 135),
        *v6,
        *(_DWORD *)(v50[1] + 24LL));
LABEL_7:
    v14 = 1;
    v15 = -1073741823;
    goto LABEL_27;
  }
  v16 = *(_BYTE *)(a1 + 60);
  if ( v16 == 1 )
  {
    v17 = *(_QWORD *)(v6[1] + 136LL);
    v18 = *(_QWORD *)(v17 + 88);
    v19 = v17 + 16;
    v20 = *(_QWORD *)(v18 + 8);
    if ( *(_BYTE *)(v19 + 64) && (*((_BYTE *)v6 + 656) && *(_DWORD *)(v20 + 540) == 2 || *(_DWORD *)(v20 + 540) == 1) )
      XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)v19, (__int64)v6, 0LL, &v47);
    else
      XilCoreUsbDevice_GetDeviceContextBufferVA((char *)v6 + (*((_BYTE *)v6 + 657) != 0 ? 616LL : 608LL));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_dqL(*(_QWORD *)(v6[1] + 72LL), v22, v21, 49);
    }
    *(_DWORD *)(v12 + 76) = *(_DWORD *)(a1 + 64);
    if ( *v13 || v13[1] )
    {
      v15 = -1073741823;
LABEL_26:
      v14 = 0;
LABEL_27:
      for ( i = 0; i < *(_DWORD *)(v12 + 40); ++i )
      {
        v25 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                           WPP_MAIN_CB.Dpc.ProcessorHistory,
                           *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * i),
                           off_1C00561A8);
        Endpoint_Disable(v25, 0LL);
      }
      if ( v14 != 1 )
        goto LABEL_48;
      goto LABEL_46;
    }
    v46 = 1;
LABEL_25:
    v15 = 0;
    goto LABEL_26;
  }
  if ( v16 == 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(v6[1] + 72LL),
        v23,
        12,
        50,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *(_BYTE *)(a1 + 61),
        *v6);
    }
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_25;
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_dqL(*(_QWORD *)(v6[1] + 72LL), 2, v11, 51);
    v16 = *(_BYTE *)(a1 + 60);
  }
  switch ( v16 )
  {
    case 8:
    case 35:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 1u;
      break;
    case 7:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 2u;
      break;
    case 29:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 4u;
      *(_DWORD *)(v12 + 76) = *(_DWORD *)(a1 + 64);
      break;
  }
  if ( !*(_DWORD *)(v12 + 40) )
  {
    v15 = -1073741823;
LABEL_46:
    for ( j = 0; j < *(_DWORD *)(v12 + 24); ++j )
    {
      v27 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                         WPP_MAIN_CB.Dpc.ProcessorHistory,
                         *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * j),
                         off_1C00561A8);
      Endpoint_Disable(v27, 0LL);
    }
LABEL_48:
    if ( v46 == 1 )
    {
      for ( k = 0; k < *(_DWORD *)(v12 + 24); v6[(unsigned int)v31 + 21] = v30 )
      {
        v29 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * k),
                off_1C00561A8);
        v30 = v29;
        v31 = *(unsigned int *)(v29 + 144);
        v32 = (__int64 *)v6[v31 + 21];
        if ( v32 && v32 != (__int64 *)v29 )
        {
          LOBYTE(v31) = 1;
          Endpoint_Disable(v32, v31);
          v6[*(unsigned int *)(v30 + 144) + 21] = 0LL;
          LODWORD(v31) = *(_DWORD *)(v30 + 144);
        }
        ++k;
      }
    }
    if ( v15 >= 0 )
    {
      v33 = 0;
      for ( m = *(unsigned int **)(v12 + 88); v33 < *(_DWORD *)(v12 + 84); m = (unsigned int *)((char *)m + *m) )
      {
        UsbDevice_GetEndpointOffloadInformation(v6, v12, m);
        ++v33;
      }
    }
    UsbDevice_SetConfigureRequestStatus((__int64)v6, v15);
    if ( v15 < 0 )
      v36 = 2LL;
    else
      v36 = 1LL;
    UsbDevice_QueueConfigureEndpointEvent(v35, v36);
    return;
  }
  if ( !*(_DWORD *)(v12 + 24) || *v13 == 1 || v13[1] == 1 )
  {
    UsbDevice_SetConfigureRequestStatus((__int64)v6, -1073741823);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)v6[1],
      *v6,
      0LL,
      0x80000LL,
      "Configure Endpoints command failed when only disabling endpoints",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(v6[1], 2, 4119, 0LL, 0LL, 0LL);
  }
  else
  {
    v13[1] = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqq(*(_QWORD *)(v6[1] + 72LL), *((unsigned __int8 *)v6 + 135), v11, 52);
    for ( n = 0; n < *(_DWORD *)(v12 + 24); ++n )
    {
      v38 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                         WPP_MAIN_CB.Dpc.ProcessorHistory,
                         *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * n),
                         off_1C00561A8);
      Endpoint_Disable(v38, 0LL);
    }
    InputContextBufferVA = (_DWORD *)XilCoreUsbDevice_GetInputContextBufferVA((char *)v6 + (*((_BYTE *)v6 + 657) != 0
                                                                                          ? 616LL
                                                                                          : 608LL));
    if ( (*(_DWORD *)(v48 + 100) & 4) != 0 )
    {
      memset(InputContextBufferVA, 0, 0x840uLL);
      v40 = 16LL;
    }
    else
    {
      memset(InputContextBufferVA, 0, 0x420uLL);
      v40 = 8LL;
    }
    InputContextBufferVA[1] |= 1u;
    if ( *((_BYTE *)v6 + 136) )
    {
      v41 = InputContextBufferVA[v40] | 0x4000000;
      InputContextBufferVA[v40] = v41;
      HIBYTE(InputContextBufferVA[v40 + 1]) = *((_BYTE *)v6 + 140);
      if ( *((_DWORD *)v6 + 5) == 2 )
      {
        if ( *((_DWORD *)v6 + 36) > 1u )
          InputContextBufferVA[v40] = v41 | 0x2000000;
        InputContextBufferVA[v40 + 2] ^= (InputContextBufferVA[v40 + 2] ^ (*((_DWORD *)v6 + 37) << 16)) & 0x30000;
      }
    }
    if ( (*(_QWORD *)(v6[1] + 336LL) & 0x2000000000000000LL) != 0 && !*((_BYTE *)v6 + 136) )
    {
      v42 = v6[3];
      if ( v42 )
      {
        if ( *((int *)v6 + 5) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                           WPP_MAIN_CB.Dpc.ProcessorHistory,
                           v42,
                           off_1C00562C0)
                       + 144) > 1u )
        {
          InputContextBufferVA[v40] |= 0x2000000u;
        }
      }
    }
    if ( *(_DWORD *)(v12 + 40) )
    {
      do
      {
        v43 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * v7++),
                off_1C00561A8);
        *InputContextBufferVA |= 1 << *(_DWORD *)(v43 + 144);
      }
      while ( v7 < *(_DWORD *)(v12 + 40) );
    }
    memset(v6 + 57, 0, 0x60uLL);
    v6[63] = v6;
    v6[62] = UsbDevice_EndpointsConfigureCompletion;
    *((_DWORD *)v6 + 123) = *((_DWORD *)v6 + 123) & 0xFFFF01FF | 0x3000;
    *((_BYTE *)v6 + 495) = *((_BYTE *)v6 + 135);
    v6[60] = XilCoreUsbDevice_GetInputContextBufferLA((char *)v6 + (*((_BYTE *)v6 + 657) != 0 ? 616LL : 608LL));
    v6[66] = InputContextBufferVA;
    InputContextBufferSize = XilCoreUsbDevice_GetInputContextBufferSize((char *)v6 + (*((_BYTE *)v6 + 657) != 0
                                                                                    ? 616LL
                                                                                    : 608LL));
    v45 = v49;
    *((_DWORD *)v6 + 134) = InputContextBufferSize;
    *((_DWORD *)v6 + 135) = 1;
    v6[68] = v6;
    Command_SendCommand(v45, (__int64)(v6 + 57));
  }
}
