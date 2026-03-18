/*
 * XREFs of HUBREG_WriteValueToDeviceHardwareKey @ 0x1C0075708
 * Callers:
 *     HUBMISC_InstallMsOs20RegistryProperties @ 0x1C002C278 (HUBMISC_InstallMsOs20RegistryProperties.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006E360 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x1C0072660 (HUBMISC_SetExtPropDescSemaphoreInRegistry.c)
 *     HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x1C0072778 (HUBMISC_ParseAndWriteCustomPropertiesInRegistry.c)
 *     HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended @ 0x1C00772E0 (HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended.c)
 *     HUBREG_UpdateSqmEnumerationFailureCode @ 0x1C0077394 (HUBREG_UpdateSqmEnumerationFailureCode.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_WriteValueToDeviceHardwareKey(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 v12; // r9
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
          WdfDriverGlobals,
          v9,
          1LL,
          131078LL,
          0LL,
          &v15);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, __int64))(WdfFunctions_01015
                                                                                                 + 1928))(
            WdfDriverGlobals,
            v15,
            a2,
            a3,
            a4,
            a5);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_6;
    v12 = 97;
  }
  else
  {
    v12 = 96;
  }
  LODWORD(v14) = v10;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    v12,
    (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
    v14);
LABEL_6:
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v11;
}
