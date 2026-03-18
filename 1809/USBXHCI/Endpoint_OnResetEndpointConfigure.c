/*
 * XREFs of Endpoint_OnResetEndpointConfigure @ 0x1C0016E34
 * Callers:
 *     ESM_ReconfiguringEndpointOnReset @ 0x1C0040B90 (ESM_ReconfiguringEndpointOnReset.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C00140FC (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001615C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C001621C (Endpoint_InitializeTransferRing.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0018358 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C00430FC (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigure(int *a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  char v7; // cl
  __int64 DeviceContextBufferVA; // rax
  int v9; // r8d
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rax
  int v13; // r8d
  char *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // r10
  __int64 DequeuePointer; // rax
  int v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *((_QWORD *)a1 + 34),
         off_1C004F068);
  v5 = *((_QWORD *)a1 + 2);
  v6 = v4;
  v7 = *(_BYTE *)(v5 + 650);
  if ( (*(_DWORD *)(v3 + 100) & 4) != 0 )
  {
    if ( v7 )
    {
      DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v5 + (*(_BYTE *)(v5 + 649) != 0 ? 608LL : 600LL));
      v10 = DeviceContextBufferVA + (((unsigned int)(v9 - 1) + 1LL) << 6);
    }
    else
    {
      v10 = 0LL;
    }
    v11 = 2112;
  }
  else
  {
    if ( v7 )
    {
      v12 = XilCoreUsbDevice_GetDeviceContextBufferVA(v5 + (*(_BYTE *)(v5 + 649) != 0 ? 608LL : 600LL));
      v10 = v12 + 32 * ((unsigned int)(v13 - 1) + 1LL);
    }
    else
    {
      v10 = 0LL;
    }
    v11 = 1056;
  }
  v14 = XilEndpoint_AcquireBuffer(a1, v11, (__int64)a1, 846491717);
  *(_QWORD *)(v6 + 8) = v14;
  v15 = *((_QWORD *)a1 + 2);
  if ( v14 )
  {
    v17 = *((_QWORD *)a1 + 10);
    v20 = a1[36];
    v19 = *(unsigned __int8 *)(v15 + 135);
    if ( *((_BYTE *)a1 + 37) )
    {
      WPP_RECORDER_SF_dd(v17, 4u, 0xDu, 0x30u, (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids, v19, v20);
      Endpoint_SetUpConfigureEndpointCommand(
        (int)a1,
        1,
        (int)Endpoint_OnResetEndpointConfigureCompletion_EpDropped,
        v6,
        *(_QWORD *)(v6 + 8),
        v10,
        0LL,
        (void *)(v6 + 16));
    }
    else
    {
      WPP_RECORDER_SF_dd(v17, 4u, 0xDu, 0x31u, (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids, v19, v20);
      Endpoint_SetUpConfigureEndpointCommand(
        (int)a1,
        2,
        (int)Endpoint_OnResetEndpointConfigureCompletion,
        v6,
        *(_QWORD *)(v6 + 8),
        v10,
        (__int64)&v21,
        (void *)(v6 + 16));
      Endpoint_InitializeTransferRing((__int64 *)a1, 0);
      DequeuePointer = Endpoint_GetDequeuePointer((__int64)a1, 0);
      *(_QWORD *)(v21 + 8) = DequeuePointer;
    }
    return Command_SendCommand(v2, v6 + 16);
  }
  else
  {
    WPP_RECORDER_SF_dd(
      *((_QWORD *)a1 + 10),
      2u,
      0xDu,
      0x2Fu,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      *(unsigned __int8 *)(v15 + 135),
      a1[36]);
    a1[70] = -1073741670;
    return ESM_AddEvent(a1 + 72);
  }
}
