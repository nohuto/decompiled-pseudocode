/*
 * XREFs of Endpoint_OnCancelEndpointConfigure @ 0x1C001633C
 * Callers:
 *     ESM_ReconfiguringEndpointAfterStop @ 0x1C0040B70 (ESM_ReconfiguringEndpointAfterStop.c)
 * Callees:
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C00140FC (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0018358 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C00430FC (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigure(_QWORD *a1)
{
  int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // rsi
  unsigned int v8; // edx
  char *v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  v2 = *((_DWORD *)a1 + 36);
  v3 = *(_QWORD *)(*a1 + 144LL);
  v4 = *(_QWORD *)(*a1 + 88LL);
  WPP_RECORDER_SF_dd(
    a1[10],
    4u,
    0xDu,
    0x44u,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    *(unsigned __int8 *)(a1[2] + 135LL),
    v2);
  v5 = a1[2];
  v6 = *(_BYTE *)(v5 + 650);
  if ( (*(_DWORD *)(v4 + 100) & 4) != 0 )
  {
    if ( v6 )
      v7 = XilCoreUsbDevice_GetDeviceContextBufferVA(v5 + (*(_BYTE *)(v5 + 649) != 0 ? 608LL : 600LL))
         + (((unsigned int)(v2 - 1) + 1LL) << 6);
    else
      v7 = 0LL;
    v8 = 2112;
  }
  else
  {
    if ( v6 )
      v7 = XilCoreUsbDevice_GetDeviceContextBufferVA(v5 + (*(_BYTE *)(v5 + 649) != 0 ? 608LL : 600LL))
         + 32 * ((unsigned int)(v2 - 1) + 1LL);
    else
      v7 = 0LL;
    v8 = 1056;
  }
  v9 = XilEndpoint_AcquireBuffer(a1, v8, (__int64)a1, 846491717);
  a1[32] = v9;
  if ( v9 )
  {
    Endpoint_SetUpConfigureEndpointCommand(
      (int)a1,
      1,
      (int)Endpoint_OnCancelEndpointConfigureCompletion_EpDropped,
      (int)a1,
      (__int64)v9,
      v7,
      0LL,
      a1 + 20);
    return Command_SendCommand(v3, (__int64)(a1 + 20));
  }
  else
  {
    LODWORD(v12) = *((_DWORD *)a1 + 36);
    LODWORD(v11) = *(unsigned __int8 *)(a1[2] + 135LL);
    WPP_RECORDER_SF_dd(a1[10], 2u, 0xDu, 0x45u, (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids, v11, v12);
    Controller_ReportFatalError(*a1, 2, 0, a1[2], (__int64)a1, 0LL);
    _m_prefetchw(a1 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)a1 + 8, 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEvent(a1 + 36);
  }
  return result;
}
