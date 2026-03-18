/*
 * XREFs of HUBUCX_DeleteDeviceFromUCX @ 0x1C0024B60
 * Callers:
 *     HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum @ 0x1C001BFF0 (HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C001C020 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1C001C080 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C001C0D0 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_DeletingUCXDeviceOnOperationFailureFor30OnHubSuspend @ 0x1C001D470 (HUBDSM_DeletingUCXDeviceOnOperationFailureFor30OnHubSuspend.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_DeleteDeviceFromUCX(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*a1 + 408LL))(*(_QWORD *)(*a1 + 248LL), a1[3]);
}
