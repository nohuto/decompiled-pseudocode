/*
 * XREFs of WPP_RECORDER_SF_ddq @ 0x1C001D740
 * Callers:
 *     Endpoint_Enable @ 0x1C00182F0 (Endpoint_Enable.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C001AE60 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C001B0F0 (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_UcxEvtEndpointAbort @ 0x1C001C1D0 (Endpoint_UcxEvtEndpointAbort.c)
 *     Endpoint_UcxEvtEndpointPurge @ 0x1C001C4C0 (Endpoint_UcxEvtEndpointPurge.c)
 *     Endpoint_WdfEvtAbortComplete @ 0x1C001D400 (Endpoint_WdfEvtAbortComplete.c)
 *     Endpoint_WdfEvtPurgeComplete @ 0x1C001D4E0 (Endpoint_WdfEvtPurgeComplete.c)
 *     UsbDevice_TransferEventHandler @ 0x1C003C24C (UsbDevice_TransferEventHandler.c)
 *     Endpoint_Create @ 0x1C0064D10 (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_ddq(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v15; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  va_list va2; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
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
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, (__int64 *)va);
}
