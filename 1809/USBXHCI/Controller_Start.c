/*
 * XREFs of Controller_Start @ 0x1C000DCE8
 * Callers:
 *     Controller_InternalReset @ 0x1C000CB80 (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0010730 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C000BC40 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_I @ 0x1C0011CDC (WPP_RECORDER_SF_I.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_Start(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 v6; // r13
  int v7; // ebx
  int v8; // edi
  int v9; // r8d
  ULONGLONG v10; // r15
  int v11; // r12d
  char Ulong; // bl
  int v13; // r8d
  int v14; // edi
  ULONGLONG v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // r8d
  unsigned __int64 v18; // rdx
  int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // eax
  int Timeout; // [rsp+20h] [rbp-58h]
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  ULONGLONG UnbiasedInterruptTime; // [rsp+80h] [rbp+8h]

  v1 = 0;
  if ( *(_BYTE *)(a1 + 473) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      3730LL);
  v3 = 0LL;
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x71u, (__int64)&Context.Logger + 4);
  if ( Controller_IsControllerAccessible(a1) )
  {
    v4 = *(_QWORD *)(a1 + 88);
    v5 = *(_QWORD *)(v4 + 32);
    v6 = v5 + 4;
    if ( (XilRegister_ReadUlong(v4, v5 + 4) & 1) != 0 )
    {
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 20LL, 2LL);
      v7 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v5) | 5;
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 104LL);
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x73u, (__int64)&Context.Logger + 4);
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      v9 = 0;
      v10 = 0LL;
      if ( (v8 & 0x50) == 0x50 )
        v9 = 0x4000;
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v5, v7 & 0xFFFF9FFF | ((v8 & 2) << 12) | v9);
      v11 = 0;
      while ( 1 )
      {
        KeStallExecutionProcessor(0x64u);
        Ulong = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
        if ( (Ulong & 1) == 0 )
          break;
        if ( (unsigned int)++v11 >= 0x32 )
          goto LABEL_14;
      }
      v10 = KeQueryUnbiasedInterruptTime();
LABEL_14:
      if ( (Ulong & 1) != 0 )
      {
        v3 = ExAllocateTimer(Controller_HighResTimerCompletion, &Event, 4LL);
        if ( !v3 )
          return (unsigned int)-1073741670;
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v14 = 0;
        while ( 1 )
        {
          ExSetTimer(v3, -50000LL, 0LL, 0LL);
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Ulong = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
          if ( (Ulong & 1) == 0 )
            break;
          if ( (unsigned int)++v14 >= 7 )
            goto LABEL_22;
        }
        v10 = KeQueryUnbiasedInterruptTime();
      }
LABEL_22:
      if ( (Ulong & 1) != 0 )
      {
        v15 = KeQueryUnbiasedInterruptTime();
        v16 = (v15 - UnbiasedInterruptTime) / 0x2710;
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v16, v17, 116, Timeout, (v15 - UnbiasedInterruptTime) / 0x2710);
      }
      else
      {
        v18 = (v10 - UnbiasedInterruptTime) / 0xA;
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v18, v13, 117, Timeout, (v10 - UnbiasedInterruptTime) / 0xA);
      }
      DynamicLock_Acquire(*(_QWORD *)(a1 + 592));
      ++*(_DWORD *)(a1 + 600);
      v19 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 112))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(a1 + 608));
      if ( v19 )
      {
        (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
          Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
          a1 + 584);
        v20 = *(_QWORD *)(a1 + 88);
        v21 = *(_QWORD *)(v20 + 32);
        v22 = XilRegister_ReadUlong(v20, v21);
        XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v21, v22 | 0x400u);
        *(_BYTE *)(a1 + 584) = 1;
      }
      DynamicLock_Release(*(_QWORD *)(a1 + 592));
      if ( v19 )
        Controller_DetectFrameMicroframeBoundary(a1);
      (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        *(_QWORD *)(a1 + 296),
        -50000000LL);
      if ( v3 )
        ExDeleteTimer(v3, 0LL, 0LL, 0LL);
    }
    else
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0x72u, (__int64)&Context.Logger + 4);
      return (unsigned int)-1073741630;
    }
  }
  return v1;
}
