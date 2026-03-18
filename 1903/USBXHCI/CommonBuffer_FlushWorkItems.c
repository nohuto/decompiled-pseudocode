/*
 * XREFs of CommonBuffer_FlushWorkItems @ 0x1C000CCC8
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C000EC78 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall CommonBuffer_FlushWorkItems(_QWORD *a1)
{
  void *i; // rcx
  NTSTATUS result; // eax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -600000000LL;
  for ( i = a1 + 3; ; i = a1 + 3 )
  {
    result = KeWaitForSingleObject(i, Executive, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*a1 + 72LL),
        4u,
        8u,
        0x10u,
        (__int64)&WPP_69dd49c7a64d37eeaa5b7723d8723313_Traceguids);
  }
  if ( a1[9] )
    return (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 3056))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return result;
}
