/*
 * XREFs of HUBUCX_DeleteDefaultEndpointFromUCX @ 0x1C0022B2C
 * Callers:
 *     HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum @ 0x1C001A750 (HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C001A780 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1C001A7E0 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C001A830 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_DeletingUCXDefaultEndpointOnOperationFailureFor30 @ 0x1C001BB50 (HUBDSM_DeletingUCXDefaultEndpointOnOperationFailureFor30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_DeleteDefaultEndpointFromUCX(_QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*a1 + 456LL))(*(_QWORD *)(*a1 + 248LL), a1[3], a1[11]);
  a1[11] = 0LL;
  return result;
}
