/*
 * XREFs of HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x1C0022A80
 * Callers:
 *     HUBDSM_CleaningUpAnyExistingConfigurationOnStart @ 0x1C001A460 (HUBDSM_CleaningUpAnyExistingConfigurationOnStart.c)
 *     HUBDSM_CompletingClientUnconfigureRequest @ 0x1C001A550 (HUBDSM_CompletingClientUnconfigureRequest.c)
 *     HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x1C001A590 (HUBDSM_CompletingClientUnconfigureRequestWithFailure.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C001A780 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1C001A7E0 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C001A830 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_DeletingEndpointsForOldConfiguration @ 0x1C001E6E0 (HUBDSM_DeletingEndpointsForOldConfiguration.c)
 * Callees:
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForInterface @ 0x1C00229E0 (HUBUCX_DeleteEndpointsAndFreeResourcesForInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rax
  __int64 v6; // rdx
  __int64 i; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rcx

  v2 = a2 + 2;
  v4 = (_QWORD *)a2[2];
  v6 = (__int64)(v4 - 1);
  for ( i = *v4 - 8LL; v2 != v4; i = *(_QWORD *)(i + 8) - 8LL )
  {
    v8 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v9 = (_QWORD *)v4[1], (_QWORD *)*v9 != v4) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(a1, v6);
    v4 = (_QWORD *)(i + 8);
    v6 = i;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *a2);
}
