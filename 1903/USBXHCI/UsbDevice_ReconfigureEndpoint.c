/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x1C003B4BC
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001CCD0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CFA0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C003B188 (UsbDevice_InitializeEndpointContext.c)
 *     XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C0048B58 (XilCoreUsbDevice_GetInputContextBufferLA.c)
 *     XilCoreUsbDevice_GetInputContextBufferSize @ 0x1C0048B70 (XilCoreUsbDevice_GetInputContextBufferSize.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C0048B84 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_ReconfigureEndpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v8; // r13
  __int64 v9; // rcx
  void *InputContextBufferVA; // rax
  size_t v11; // r8
  _DWORD *v12; // r14
  char v13; // cl
  unsigned int v14; // esi
  char *v15; // rbx
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // r15d
  __int64 v19; // r8
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v25; // [rsp+28h] [rbp-50h]
  int v26; // [rsp+30h] [rbp-48h]
  __int64 v27; // [rsp+80h] [rbp+8h]

  v6 = *(__int64 **)(a1 + 8);
  v8 = v6[11];
  v27 = v6[18];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = *(_DWORD *)(a2 + 144);
    v25 = *(unsigned __int8 *)(a1 + 135);
    WPP_RECORDER_SF_dd(v6[9], 4u, 0xCu, 0x45u, (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids, v25, v26);
  }
  XilCoreUsbDevice_GetInputContextBufferSize(a1 + (*(_BYTE *)(a1 + 657) != 0 ? 616LL : 608LL));
  InputContextBufferVA = (void *)XilCoreUsbDevice_GetInputContextBufferVA(v9);
  memset(InputContextBufferVA, 0, v11);
  v12 = (_DWORD *)XilCoreUsbDevice_GetInputContextBufferVA(a1 + (*(_BYTE *)(a1 + 657) != 0 ? 616LL : 608LL));
  v13 = -(*(_DWORD *)(v8 + 100) & 4);
  v12[1] |= 1u;
  v14 = 0;
  v15 = (char *)v12 + (v13 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(a1 + 136) )
  {
    v16 = *(_DWORD *)v15 | 0x4000000;
    *(_DWORD *)v15 = v16;
    v15[7] = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *(_DWORD *)v15 = v16 | 0x2000000;
      *((_DWORD *)v15 + 2) ^= (*((_DWORD *)v15 + 2) ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    v17 = *(_QWORD *)(a1 + 24);
    if ( v17 )
    {
      if ( *(int *)(a1 + 20) < 2
        && *(_DWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                         WPP_MAIN_CB.Dpc.ProcessorHistory,
                         v17,
                         off_1C00562C0)
                     + 144) > 1u )
      {
        *(_DWORD *)v15 |= 0x2000000u;
      }
    }
  }
  v18 = *(_DWORD *)(a2 + 144);
  v19 = (unsigned int)(v18 - 1) + 2LL;
  if ( (*(_DWORD *)(v8 + 100) & 4) != 0 )
    v20 = v19 << 6;
  else
    v20 = 32 * v19;
  UsbDevice_InitializeEndpointContext(a1, a2, (__int64)v12 + v20);
  do
  {
    v21 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v21, v14) )
      *(_DWORD *)v15 = (v14 << 27) | *(_DWORD *)v15 & 0x7FFFFFF;
    ++v14;
  }
  while ( v14 < 0x20 );
  v12[1] |= 1 << v18;
  *v12 |= 1 << v18;
  memset((void *)(a1 + 456), 0, 0x60uLL);
  *(_QWORD *)(a1 + 504) = a1;
  *(_QWORD *)(a1 + 496) = UsbDevice_ConfigureEndpointCompletion;
  *(_DWORD *)(a1 + 492) = *(_DWORD *)(a1 + 492) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
  *(_QWORD *)(a1 + 480) = XilCoreUsbDevice_GetInputContextBufferLA(a1 + (*(_BYTE *)(a1 + 657) != 0 ? 616LL : 608LL));
  *(_QWORD *)(a1 + 528) = XilCoreUsbDevice_GetInputContextBufferVA(a1 + v22 + (*(_BYTE *)(a1 + 657) != 0 ? 8 : 0));
  *(_DWORD *)(a1 + 536) = XilCoreUsbDevice_GetInputContextBufferSize(a1 + v23 + (*(_BYTE *)(a1 + 657) != 0 ? 8 : 0));
  *(_QWORD *)(a1 + 552) = a3;
  *(_DWORD *)(a1 + 540) = 1;
  *(_QWORD *)(a1 + 544) = a1;
  *(_QWORD *)(a1 + 560) = a4;
  return Command_SendCommand(v27, a1 + 456);
}
