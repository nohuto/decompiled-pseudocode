/*
 * XREFs of UsbDevice_EndpointsConfigureCompletion @ 0x1C0035400
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x1C000532C (UsbDevice_SetConfigureRequestStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0012348 (WPP_RECORDER_SF_dqd.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0013CC8 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     Endpoint_Disable @ 0x1C0015310 (Endpoint_Disable.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C0035C6C (UsbDevice_GetEndpointOffloadInformation.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00385D4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0038914 (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0038C48 (WPP_RECORDER_SF_dqq.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C00430FC (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C0043114 (XilCoreUsbDevice_GetInputContextBufferLA.c)
 *     XilCoreUsbDevice_GetInputContextBufferSize @ 0x1C004312C (XilCoreUsbDevice_GetInputContextBufferSize.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C0043140 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

void __fastcall UsbDevice_EndpointsConfigureCompletion(__int64 a1, int a2, __int64 *a3)
{
  _QWORD *v3; // rdi
  unsigned int v5; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  _BYTE *v13; // r13
  char v14; // r14
  int v15; // ebx
  char v16; // al
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // rcx
  unsigned int i; // r12d
  __int64 *v25; // rax
  int v26; // r8d
  char v27; // al
  unsigned int j; // r14d
  __int64 *v29; // rax
  unsigned int k; // r12d
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 *v34; // rcx
  unsigned int v35; // r12d
  unsigned int *m; // r14
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned int n; // ebx
  __int64 *v40; // rax
  _DWORD *InputContextBufferVA; // r14
  __int64 v42; // rbx
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rax
  int InputContextBufferSize; // eax
  __int64 v47; // rcx
  char v48; // [rsp+40h] [rbp-88h]
  __int64 v49; // [rsp+48h] [rbp-80h] BYREF
  __int64 v50; // [rsp+50h] [rbp-78h]
  __int64 v51; // [rsp+58h] [rbp-70h]
  _QWORD v52[5]; // [rsp+60h] [rbp-68h] BYREF

  v3 = *(_QWORD **)(a1 + 48);
  v5 = 0;
  v48 = 0;
  v8 = v3[1];
  v49 = v3[55];
  v9 = *(_QWORD *)(v8 + 88);
  v10 = *(_QWORD *)(v8 + 144);
  v50 = v9;
  v51 = v10;
  memset(v52, 0, sizeof(v52));
  LOWORD(v52[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v49,
    v52);
  v11 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v49,
          off_1C004F068);
  v12 = v52[1];
  v13 = (_BYTE *)v11;
  if ( a2 == 3 )
  {
    if ( !*(_DWORD *)(v52[1] + 24LL) )
    {
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(v3[1] + 72LL),
        4u,
        0xCu,
        0x2Fu,
        (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
        *((unsigned __int8 *)v3 + 135),
        *v3,
        *(_DWORD *)(v52[1] + 40LL));
      goto LABEL_19;
    }
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(v3[1] + 72LL),
      4u,
      0xCu,
      0x30u,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      *((unsigned __int8 *)v3 + 135),
      *v3,
      *(_DWORD *)(v52[1] + 24LL));
LABEL_5:
    v14 = 1;
    v15 = -1073741823;
    goto LABEL_21;
  }
  v16 = *(_BYTE *)(a1 + 60);
  if ( v16 == 1 )
  {
    v17 = v3[1];
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 136) + 88LL) + 8LL);
    if ( *(_BYTE *)(*(_QWORD *)(v17 + 136) + 80LL)
      && (*((_BYTE *)v3 + 648) && *(_DWORD *)(v18 + 476) == 2 || *(_DWORD *)(v18 + 476) == 1) )
    {
      XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)(*(_QWORD *)(v17 + 136) + 16LL), (__int64)v3, 0LL, &v49);
      v19 = v3[1];
    }
    else
    {
      XilCoreUsbDevice_GetDeviceContextBufferVA((char *)v3 + (*((_BYTE *)v3 + 649) != 0 ? 608LL : 600LL));
    }
    v20 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(v19 + 72), v20, v19, 49);
    *(_DWORD *)(v12 + 76) = *(_DWORD *)(a1 + 64);
    if ( *v13 || v13[1] )
    {
      v15 = -1073741823;
LABEL_20:
      v14 = 0;
LABEL_21:
      for ( i = 0; i < *(_DWORD *)(v12 + 40); ++i )
      {
        v25 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                           WPP_MAIN_CB.Dpc.ProcessorHistory,
                           *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * i),
                           off_1C004F180);
        Endpoint_Disable(v25, 0LL);
      }
      if ( v14 != 1 )
        goto LABEL_40;
      goto LABEL_38;
    }
    v48 = 1;
LABEL_19:
    v15 = 0;
    goto LABEL_20;
  }
  v21 = *v3;
  v22 = *(unsigned __int8 *)(a1 + 61);
  v23 = v3[1];
  if ( v16 == 11 )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v23 + 72),
      v21,
      12,
      50,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      v22,
      *v3);
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_19;
    goto LABEL_5;
  }
  LOBYTE(v21) = 2;
  WPP_RECORDER_SF_dqL(*(_QWORD *)(v23 + 72), v21, v22, 51);
  v27 = *(_BYTE *)(a1 + 60);
  switch ( v27 )
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
LABEL_38:
    for ( j = 0; j < *(_DWORD *)(v12 + 24); ++j )
    {
      v29 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                         WPP_MAIN_CB.Dpc.ProcessorHistory,
                         *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * j),
                         off_1C004F180);
      Endpoint_Disable(v29, 0LL);
    }
LABEL_40:
    if ( v48 == 1 )
    {
      for ( k = 0; k < *(_DWORD *)(v12 + 24); v3[(unsigned int)v33 + 21] = v32 )
      {
        v31 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * k),
                off_1C004F180);
        v32 = v31;
        v33 = *(unsigned int *)(v31 + 144);
        v34 = (__int64 *)v3[v33 + 21];
        if ( v34 && v34 != (__int64 *)v31 )
        {
          LOBYTE(v33) = 1;
          Endpoint_Disable(v34, v33);
          v3[*(unsigned int *)(v32 + 144) + 21] = 0LL;
          LODWORD(v33) = *(_DWORD *)(v32 + 144);
        }
        ++k;
      }
    }
    if ( v15 >= 0 )
    {
      v35 = 0;
      for ( m = *(unsigned int **)(v12 + 88); v35 < *(_DWORD *)(v12 + 84); m = (unsigned int *)((char *)m + *m) )
      {
        UsbDevice_GetEndpointOffloadInformation(v3, v12, m);
        ++v35;
      }
    }
    UsbDevice_SetConfigureRequestStatus((__int64)v3, v15);
    if ( v15 < 0 )
      v38 = 2LL;
    else
      v38 = 1LL;
    UsbDevice_QueueConfigureEndpointEvent(v37, v38);
    return;
  }
  if ( !*(_DWORD *)(v12 + 24) || *v13 == 1 || v13[1] == 1 )
  {
    UsbDevice_SetConfigureRequestStatus((__int64)v3, -1073741823);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)v3[1],
      *v3,
      0LL,
      0x80000LL,
      "Configure Endpoints command failed when only disabling endpoints",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(v3[1], 2, 4119, 0LL, 0LL, 0LL);
  }
  else
  {
    v13[1] = 1;
    WPP_RECORDER_SF_dqq(*(_QWORD *)(v3[1] + 72LL), *((unsigned __int8 *)v3 + 135), v26, 52);
    for ( n = 0; n < *(_DWORD *)(v12 + 24); ++n )
    {
      v40 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                         WPP_MAIN_CB.Dpc.ProcessorHistory,
                         *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * n),
                         off_1C004F180);
      Endpoint_Disable(v40, 0LL);
    }
    InputContextBufferVA = (_DWORD *)XilCoreUsbDevice_GetInputContextBufferVA((char *)v3 + (*((_BYTE *)v3 + 649) != 0
                                                                                          ? 608LL
                                                                                          : 600LL));
    if ( (*(_DWORD *)(v50 + 100) & 4) != 0 )
    {
      memset(InputContextBufferVA, 0, 0x840uLL);
      v42 = 16LL;
    }
    else
    {
      memset(InputContextBufferVA, 0, 0x420uLL);
      v42 = 8LL;
    }
    InputContextBufferVA[1] |= 1u;
    if ( *((_BYTE *)v3 + 136) )
    {
      v43 = InputContextBufferVA[v42] | 0x4000000;
      InputContextBufferVA[v42] = v43;
      HIBYTE(InputContextBufferVA[v42 + 1]) = *((_BYTE *)v3 + 140);
      if ( *((_DWORD *)v3 + 5) == 2 )
      {
        if ( *((_DWORD *)v3 + 36) > 1u )
          InputContextBufferVA[v42] = v43 | 0x2000000;
        InputContextBufferVA[v42 + 2] ^= (InputContextBufferVA[v42 + 2] ^ (*((_DWORD *)v3 + 37) << 16)) & 0x30000;
      }
    }
    if ( (*(_QWORD *)(v3[1] + 272LL) & 0x2000000000000000LL) != 0 && !*((_BYTE *)v3 + 136) )
    {
      v44 = v3[3];
      if ( v44 )
      {
        if ( *((int *)v3 + 5) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                           WPP_MAIN_CB.Dpc.ProcessorHistory,
                           v44,
                           off_1C004F298)
                       + 144) > 1u )
        {
          InputContextBufferVA[v42] |= 0x2000000u;
        }
      }
    }
    if ( *(_DWORD *)(v12 + 40) )
    {
      do
      {
        v45 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * v5++),
                off_1C004F180);
        *InputContextBufferVA |= 1 << *(_DWORD *)(v45 + 144);
      }
      while ( v5 < *(_DWORD *)(v12 + 40) );
    }
    memset(v3 + 57, 0, 0x60uLL);
    v3[63] = v3;
    v3[62] = UsbDevice_EndpointsConfigureCompletion;
    *((_DWORD *)v3 + 123) = *((_DWORD *)v3 + 123) & 0xFFFF01FF | 0x3000;
    *((_BYTE *)v3 + 495) = *((_BYTE *)v3 + 135);
    v3[60] = XilCoreUsbDevice_GetInputContextBufferLA((char *)v3 + (*((_BYTE *)v3 + 649) != 0 ? 608LL : 600LL));
    v3[66] = InputContextBufferVA;
    InputContextBufferSize = XilCoreUsbDevice_GetInputContextBufferSize((char *)v3 + (*((_BYTE *)v3 + 649) != 0
                                                                                    ? 608LL
                                                                                    : 600LL));
    v47 = v51;
    *((_DWORD *)v3 + 134) = InputContextBufferSize;
    *((_DWORD *)v3 + 135) = 1;
    v3[68] = v3;
    Command_SendCommand(v47, (__int64)(v3 + 57));
  }
}
