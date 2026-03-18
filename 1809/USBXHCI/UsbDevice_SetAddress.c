/*
 * XREFs of UsbDevice_SetAddress @ 0x1C00366DC
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x1C0035050 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C00370F0 (UsbDevice_UcxEvtAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001615C (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0038C48 (WPP_RECORDER_SF_dqq.c)
 *     XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C0043114 (XilCoreUsbDevice_GetInputContextBufferLA.c)
 *     XilCoreUsbDevice_GetInputContextBufferSize @ 0x1C004312C (XilCoreUsbDevice_GetInputContextBufferSize.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C0043140 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_SetAddress(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rcx
  void *InputContextBufferVA; // rax
  size_t v9; // r8
  __int64 v10; // rsi
  int v11; // r14d
  unsigned int v12; // ebp
  __int64 v13; // rbx
  unsigned int v14; // eax
  int v15; // r8d
  int v16; // ecx
  unsigned int *v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // r8d
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  char v27; // cl
  __int64 v28; // r8
  __int64 v29; // rcx
  char v30; // al
  int v31; // eax
  __int64 v32; // rax
  bool v33; // cc
  unsigned int v34; // ecx
  int v35; // r8d
  unsigned int v36; // ecx
  char v37; // al

  v2 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v2 + 88);
  v6 = *(_QWORD *)(v2 + 144);
  XilCoreUsbDevice_GetInputContextBufferSize(a1 + (*(_BYTE *)(a1 + 649) != 0 ? 608LL : 600LL));
  InputContextBufferVA = (void *)XilCoreUsbDevice_GetInputContextBufferVA(v7);
  memset(InputContextBufferVA, 0, v9);
  v10 = XilCoreUsbDevice_GetInputContextBufferVA(a1 + (*(_BYTE *)(a1 + 649) != 0 ? 608LL : 600LL));
  v11 = *(_DWORD *)(v5 + 100) & 4;
  *(_DWORD *)(v10 + 4) |= 3u;
  v12 = 0;
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(v10 + 4);
  v13 = v11 != 0 ? 0x20 : 0;
  v14 = *(_DWORD *)(a1 + 36);
  v15 = 0;
  if ( v14 > 1 )
  {
    v16 = 0;
    v17 = (unsigned int *)(a1 + 48);
    v18 = v14 - 1;
    do
    {
      v19 = *v17++;
      if ( v19 > 0xF )
        v19 = 15;
      v20 = v19 << v16;
      v16 += 4;
      v15 |= v20;
      --v18;
    }
    while ( v18 );
  }
  v21 = *(_DWORD *)(v13 + v10 + 32) ^ (v15 ^ *(_DWORD *)(v13 + v10 + 32)) & 0xFFFFF;
  *(_DWORD *)(v13 + v10 + 32) = v21;
  v22 = *(_DWORD *)(a1 + 20);
  if ( v22 )
  {
    switch ( v22 )
    {
      case 1:
        v23 = v21 & 0xFF0FFFFF | 0x100000;
        break;
      case 2:
        v23 = v21 & 0xFF0FFFFF | 0x300000;
        break;
      case 3:
        v23 = v21 & 0xFF0FFFFF | 0x400000;
        break;
      default:
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0xCu,
          0x14u,
          (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
          *(unsigned __int8 *)(a1 + 135),
          *(_DWORD *)(a1 + 20));
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    v23 = v21 & 0xFF0FFFFF | 0x200000;
  }
  *(_DWORD *)(v13 + v10 + 32) = v23 & 0x7FFFFFF | 0x8000000;
  *(_BYTE *)(v13 + v10 + 38) = *(_BYTE *)(a1 + 44);
  v24 = *(_QWORD *)(a1 + 24);
  if ( v24 )
  {
    v25 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v24,
            off_1C004F298);
    if ( *(_DWORD *)(v25 + 144) > 1u )
      *(_DWORD *)(v13 + v10 + 32) |= 0x2000000u;
    *(_BYTE *)(v13 + v10 + 40) = *(_BYTE *)(v25 + 135);
    if ( !*(_BYTE *)(a1 + 136) && *(int *)(a1 + 20) < 2 && *(_DWORD *)(v25 + 144) )
      *(_BYTE *)(a1 + 137) = 1;
  }
  v26 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v26 )
    v27 = *(_BYTE *)(a1 + 4 * v26 + 44);
  else
    v27 = 0;
  *(_BYTE *)(v13 + v10 + 41) = v27;
  v28 = v11 != 0 ? 0x40 : 0;
  *(_DWORD *)(v28 + v10 + 68) ^= (*(_DWORD *)(v28 + v10 + 68) ^ (8 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 120LL))) & 0x38;
  *(_WORD *)(v28 + v10 + 70) = *(_WORD *)(*(_QWORD *)(a1 + 176) + 100LL) & 0x7FF;
  v29 = *(_QWORD *)(a1 + 176);
  v30 = *(_BYTE *)(v29 + 99) & 3;
  if ( v30 == 1 )
  {
    v31 = 0;
  }
  else if ( (*(_QWORD *)(*(_QWORD *)v29 + 272LL) & 0x10000000000000LL) == 0
         || v30 != 3
         || *(char *)(v29 + 98) >= 0
         || (v32 = *(_QWORD *)(v29 + 16), *(_WORD *)(v32 + 124) != 1529)
         || *(_WORD *)(v32 + 126) != 4353
         || (v33 = *(_DWORD *)(v32 + 36) <= 1u, v31 = 0, v33) )
  {
    v31 = 6;
  }
  v34 = v31 | *(_DWORD *)(v28 + v10 + 68) & 0xFFFFFFF9;
  *(_DWORD *)(v28 + v10 + 68) = v34;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 152LL) = HIWORD(v34);
  *(_QWORD *)((v11 != 0 ? 0x40 : 0) + v10 + 72) = Endpoint_GetDequeuePointer(*(_QWORD *)(a1 + 176), 0);
  XilCoreUsbDevice_GetInputContextBufferVA(a1 + (*(_BYTE *)(a1 + 649) != 0 ? 608LL : 600LL));
  WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), *(unsigned __int8 *)(a1 + 135), v35, 21);
  memset((void *)(a1 + 456), 0, 0x60uLL);
  *(_QWORD *)(a1 + 496) = UsbDevice_SetAddressCompletion;
  v36 = *(_DWORD *)(a1 + 492) & 0xFFFF2DFF | ((a2 & 1 | 0x16) << 9);
  *(_QWORD *)(a1 + 504) = a1;
  v37 = *(_BYTE *)(a1 + 135);
  *(_DWORD *)(a1 + 492) = v36;
  *(_BYTE *)(a1 + 495) = v37;
  *(_QWORD *)(a1 + 480) = XilCoreUsbDevice_GetInputContextBufferLA(a1 + (*(_BYTE *)(a1 + 649) != 0 ? 608LL : 600LL));
  *(_QWORD *)(a1 + 528) = XilCoreUsbDevice_GetInputContextBufferVA(a1 + (*(_BYTE *)(a1 + 649) != 0 ? 608LL : 600LL));
  *(_DWORD *)(a1 + 536) = XilCoreUsbDevice_GetInputContextBufferSize(a1 + (*(_BYTE *)(a1 + 649) != 0 ? 608LL : 600LL));
  *(_DWORD *)(a1 + 540) = 1;
  *(_QWORD *)(a1 + 544) = a1;
  Command_SendCommand(v6, a1 + 456);
  return v12;
}
