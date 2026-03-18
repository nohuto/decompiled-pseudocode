/*
 * XREFs of UsbDevice_UcxEvtUpdate @ 0x1C0037C00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C0038094 (UsbDevice_UpdateUsbDevice.c)
 *     XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C0043114 (XilCoreUsbDevice_GetInputContextBufferLA.c)
 *     XilCoreUsbDevice_GetInputContextBufferSize @ 0x1C004312C (XilCoreUsbDevice_GetInputContextBufferSize.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C0043140 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_UcxEvtUpdate(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  void *InputContextBufferVA; // rax
  size_t v11; // r8
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rax
  int InputContextBufferSize; // eax
  __int64 v17; // rcx
  _QWORD v19[5]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  memset(v19, 0, sizeof(v19));
  LOWORD(v19[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v19);
  v4 = v19[1];
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(v19[1] + 16LL),
         off_1C004F298);
  v6 = v5;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v7 + 144);
  v9 = *(_QWORD *)(v7 + 88);
  if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
  {
    InputContextBufferVA = (void *)XilCoreUsbDevice_GetInputContextBufferVA(v5 + (*(_BYTE *)(v5 + 649) != 0
                                                                                ? 608LL
                                                                                : 600LL));
    memset(InputContextBufferVA, 0, v11);
    v12 = XilCoreUsbDevice_GetInputContextBufferVA(v6 + (*(_BYTE *)(v6 + 649) != 0 ? 608LL : 600LL));
    v13 = *(_DWORD *)(v9 + 100) & 4;
    v14 = v12;
    *(_DWORD *)(v12 + 4) |= 1u;
    *(_WORD *)((v13 != 0 ? 0x20 : 0) + v12 + 36) = *(_WORD *)(v4 + 48);
    v15 = v13 != 0 ? 72LL : 40LL;
    *(_DWORD *)(v15 + v14) &= 0x3FFFFFu;
    memset((void *)(v6 + 456), 0, 0x60uLL);
    *(_QWORD *)(v6 + 504) = v6;
    *(_QWORD *)(v6 + 496) = UsbDevice_UpdateCompletion;
    *(_DWORD *)(v6 + 492) = *(_DWORD *)(v6 + 492) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v6 + 495) = *(_BYTE *)(v6 + 135);
    *(_QWORD *)(v6 + 480) = XilCoreUsbDevice_GetInputContextBufferLA(v6 + (*(_BYTE *)(v6 + 649) != 0 ? 608LL : 600LL));
    *(_QWORD *)(v6 + 528) = XilCoreUsbDevice_GetInputContextBufferVA(v6 + (*(_BYTE *)(v6 + 649) != 0 ? 608LL : 600LL));
    InputContextBufferSize = XilCoreUsbDevice_GetInputContextBufferSize(v6 + (*(_BYTE *)(v6 + 649) != 0 ? 608LL : 600LL));
    v17 = *(_QWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 536) = InputContextBufferSize;
    *(_DWORD *)(v6 + 540) = 1;
    *(_QWORD *)(v6 + 544) = v6;
    if ( Controller_IsControllerAccessible(v17) )
    {
      *(_QWORD *)(v6 + 424) = a2;
      *(_BYTE *)(v6 + 432) = 0;
      return Command_SendCommand(v8, v6 + 456);
    }
    v3 = -1073741810;
  }
  else
  {
    UsbDevice_UpdateUsbDevice(v5, v4);
  }
  *(_QWORD *)(v6 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v3);
}
