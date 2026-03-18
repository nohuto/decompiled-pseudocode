/*
 * XREFs of Controller_Start @ 0x1C00103F0
 * Callers:
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013260 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     Register_GetExtendedTBCEnable @ 0x1C00039C4 (Register_GetExtendedTBCEnable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C000DF94 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_I @ 0x1C00146DC (WPP_RECORDER_SF_I.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_Start(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // r13
  bool ExtendedTBCEnable; // al
  char v8; // r8
  int v9; // edx
  unsigned int v10; // ebx
  ULONGLONG v11; // rbp
  int v12; // r14d
  char Ulong; // bl
  int v14; // r8d
  int v15; // r14d
  ULONGLONG v16; // rcx
  int v17; // r8d
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  int v20; // ebp
  __int64 v21; // rcx
  __int64 v22; // rbx
  int v23; // eax
  int Timeout; // [rsp+20h] [rbp-58h]
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  ULONGLONG UnbiasedInterruptTime; // [rsp+80h] [rbp+8h]

  v1 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( *(_BYTE *)(a1 + 537) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      3810LL);
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x73u, (__int64)&Context.Logger + 4);
  if ( Controller_IsControllerAccessible(a1) )
  {
    v4 = *(_QWORD *)(a1 + 88);
    v5 = *(_QWORD *)(v4 + 32);
    v6 = v5 + 4;
    if ( (XilRegister_ReadUlong(v4, v5 + 4) & 1) != 0 )
    {
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 20LL, 2LL);
      XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v5);
      ExtendedTBCEnable = Register_GetExtendedTBCEnable(*(_QWORD *)(a1 + 88));
      *(_BYTE *)(a1 + 538) = ExtendedTBCEnable;
      v10 = v9 & 0xFFFF9FFF | ((v8 & 2 | (4 * ExtendedTBCEnable)) << 12);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x75u, (__int64)&Context.Logger + 4);
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      v11 = 0LL;
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v5, v10);
      v12 = 0;
      while ( 1 )
      {
        KeStallExecutionProcessor(0x64u);
        Ulong = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
        if ( (Ulong & 1) == 0 )
          break;
        if ( (unsigned int)++v12 >= 0x32 )
          goto LABEL_18;
      }
      v11 = KeQueryUnbiasedInterruptTime();
LABEL_18:
      if ( (Ulong & 1) != 0 )
      {
        v3 = ExAllocateTimer(Controller_HighResTimerCompletion, &Event, 4LL);
        if ( !v3 )
          return (unsigned int)-1073741670;
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v15 = 0;
        while ( 1 )
        {
          ExSetTimer(v3, -50000LL, 0LL, 0LL);
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Ulong = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
          if ( (Ulong & 1) == 0 )
            break;
          if ( (unsigned int)++v15 >= 7 )
            goto LABEL_26;
        }
        v11 = KeQueryUnbiasedInterruptTime();
      }
LABEL_26:
      if ( (Ulong & 1) != 0 )
      {
        v16 = KeQueryUnbiasedInterruptTime();
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = (v16 - UnbiasedInterruptTime) / 0x2710;
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v18, v17, 118, Timeout, (v16 - UnbiasedInterruptTime) / 0x2710);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = (v11 - UnbiasedInterruptTime) / 0xA;
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v19, v14, 119, Timeout, (v11 - UnbiasedInterruptTime) / 0xA);
      }
      DynamicLock_Acquire(*(_QWORD *)(a1 + 656));
      ++*(_DWORD *)(a1 + 664);
      v20 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 112))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(a1 + 672));
      if ( v20 )
      {
        (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
          Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
          a1 + 648);
        v21 = *(_QWORD *)(a1 + 88);
        v22 = *(_QWORD *)(v21 + 32);
        v23 = XilRegister_ReadUlong(v21, v22);
        XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v22, v23 | 0x400u);
        *(_BYTE *)(a1 + 648) = 1;
      }
      DynamicLock_Release(*(_QWORD *)(a1 + 656));
      if ( v20 )
        Controller_DetectFrameMicroframeBoundary(a1);
      (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        *(_QWORD *)(a1 + 360),
        -50000000LL);
      if ( v3 )
        ExDeleteTimer(v3, 0LL, 0LL, 0LL);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0x74u, (__int64)&Context.Logger + 4);
      return (unsigned int)-1073741630;
    }
  }
  return v1;
}
