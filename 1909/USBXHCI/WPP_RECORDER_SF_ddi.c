/*
 * XREFs of WPP_RECORDER_SF_DDi @ 0x1C000415C
 * Callers:
 *     TR_ValidateSecureTransferType @ 0x1C0003E60 (TR_ValidateSecureTransferType.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C002C2E8 (Control_Transfer_ValidateBuffer.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C002C4C0 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C002C7A0 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtRequestCancel @ 0x1C002CBE0 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C002CD70 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C002F924 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_RetrieveNextStage @ 0x1C002FE68 (Isoch_RetrieveNextStage.c)
 *     Isoch_Stage_Find @ 0x1C0030D7C (Isoch_Stage_Find.c)
 *     Isoch_TransferData_Initialize @ 0x1C0031C08 (Isoch_TransferData_Initialize.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C00329D0 (Isoch_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDi(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v12; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      8LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, a2, 14LL, a5, v9, (__int64 *)va);
}
