/*
 * XREFs of HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1C0005F14
 * Callers:
 *     HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransferWithNoSuchDevice @ 0x1C0007FD0 (HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransferWithNoSuchDevice.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C00097FC (HUBSM_FindAndSetTargetState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBHTX_CompleteGetPortStatusWithFailedStatus(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  _QWORD v6[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( *(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                                 WdfDriverGlobals,
                                 *(_QWORD *)(a1 + 2528))
                             + 184)
                 + 24LL) == 2228243 )
  {
    v4 = *(_QWORD *)(a1 + 2528);
    LOWORD(v6[0]) = 40;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
      WdfDriverGlobals,
      v4,
      v6);
    *(_DWORD *)v6[1] = 0;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 2528),
           a2);
}
