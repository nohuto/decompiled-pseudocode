/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x1C00362EC
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0019990 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0019C40 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C0035F9C (UsbDevice_InitializeEndpointContext.c)
 *     XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C0043114 (XilCoreUsbDevice_GetInputContextBufferLA.c)
 *     XilCoreUsbDevice_GetInputContextBufferSize @ 0x1C004312C (XilCoreUsbDevice_GetInputContextBufferSize.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C0043140 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_ReconfigureEndpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v8; // r13
  unsigned int v9; // esi
  void *InputContextBufferVA; // rax
  size_t v11; // r8
  _DWORD *v12; // rbp
  char v13; // cl
  char *v14; // rbx
  int v15; // ecx
  __int64 v16; // rdx
  int v17; // r15d
  __int64 v18; // r8
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v24; // [rsp+28h] [rbp-50h]
  int v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+80h] [rbp+8h]

  v6 = *(__int64 **)(a1 + 8);
  v8 = v6[11];
  v26 = v6[18];
  v25 = *(_DWORD *)(a2 + 144);
  v24 = *(unsigned __int8 *)(a1 + 135);
  WPP_RECORDER_SF_dd(v6[9], 4u, 0xCu, 0x45u, (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids, v24, v25);
  v9 = 0;
  InputContextBufferVA = (void *)XilCoreUsbDevice_GetInputContextBufferVA(a1 + (*(_BYTE *)(a1 + 649) != 0 ? 608LL : 600LL));
  memset(InputContextBufferVA, 0, v11);
  v12 = (_DWORD *)XilCoreUsbDevice_GetInputContextBufferVA(a1 + (*(_BYTE *)(a1 + 649) != 0 ? 608LL : 600LL));
  v13 = -(*(_DWORD *)(v8 + 100) & 4);
  v12[1] |= 1u;
  v14 = (char *)v12 + (v13 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(a1 + 136) )
  {
    v15 = *(_DWORD *)v14 | 0x4000000;
    *(_DWORD *)v14 = v15;
    v14[7] = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *(_DWORD *)v14 = v15 | 0x2000000;
      *((_DWORD *)v14 + 2) ^= (*((_DWORD *)v14 + 2) ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    v16 = *(_QWORD *)(a1 + 24);
    if ( v16 )
    {
      if ( *(int *)(a1 + 20) < 2
        && *(_DWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                         WPP_MAIN_CB.Dpc.ProcessorHistory,
                         v16,
                         off_1C004F298)
                     + 144) > 1u )
      {
        *(_DWORD *)v14 |= 0x2000000u;
      }
    }
  }
  v17 = *(_DWORD *)(a2 + 144);
  v18 = (unsigned int)(v17 - 1) + 2LL;
  if ( (*(_DWORD *)(v8 + 100) & 4) != 0 )
    v19 = v18 << 6;
  else
    v19 = 32 * v18;
  UsbDevice_InitializeEndpointContext(a1, a2, (__int64)v12 + v19);
  do
  {
    v20 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v20, v9) )
      *(_DWORD *)v14 = (v9 << 27) | *(_DWORD *)v14 & 0x7FFFFFF;
    ++v9;
  }
  while ( v9 < 0x20 );
  v12[1] |= 1 << v17;
  *v12 |= 1 << v17;
  memset((void *)(a1 + 456), 0, 0x60uLL);
  *(_QWORD *)(a1 + 504) = a1;
  *(_QWORD *)(a1 + 496) = UsbDevice_ConfigureEndpointCompletion;
  *(_DWORD *)(a1 + 492) = *(_DWORD *)(a1 + 492) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
  *(_QWORD *)(a1 + 480) = XilCoreUsbDevice_GetInputContextBufferLA(a1 + (*(_BYTE *)(a1 + 649) != 0 ? 608LL : 600LL));
  *(_QWORD *)(a1 + 528) = XilCoreUsbDevice_GetInputContextBufferVA(a1 + v21 + (*(_BYTE *)(a1 + 649) != 0 ? 8 : 0));
  *(_DWORD *)(a1 + 536) = XilCoreUsbDevice_GetInputContextBufferSize(a1 + v22 + (*(_BYTE *)(a1 + 649) != 0 ? 8 : 0));
  *(_QWORD *)(a1 + 552) = a3;
  *(_DWORD *)(a1 + 540) = 1;
  *(_QWORD *)(a1 + 544) = a1;
  *(_QWORD *)(a1 + 560) = a4;
  return Command_SendCommand(v26, a1 + 456);
}
