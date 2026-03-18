/*
 * XREFs of Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C000C778
 * Callers:
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0005400 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C0035C6C (UsbDevice_GetEndpointOffloadInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Interrupter_InitializeForOffload @ 0x1C001BAB4 (Interrupter_InitializeForOffload.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_IncrementNumberOfEndpointsOffloaded(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 576));
  v2 = *(_DWORD *)(a1 + 568);
  if ( !v2 && *(_DWORD *)(a1 + 564) == 1 )
  {
    Interrupter_InitializeForOffload(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL)
                                               + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 64LL)));
    v3 = *(_QWORD *)(a1 + 752);
    *(_BYTE *)(a1 + 760) = 1;
    (*(void (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3040))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v3);
    v2 = *(_DWORD *)(a1 + 568);
  }
  v4 = *(_QWORD *)(a1 + 576);
  *(_DWORD *)(a1 + 568) = v2 + 1;
  return DynamicLock_Release(v4);
}
