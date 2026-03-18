/*
 * XREFs of HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0020E98
 * Callers:
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C001E690 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency @ 0x1C001E770 (HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C001EE10 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C00228A4 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00209F4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

void __fastcall HUBUCX_EnableDisableEndpointsUsingUCXIoctl(__int64 a1)
{
  int v2; // edx
  _QWORD **v3; // r8
  _QWORD *i; // rax
  __int64 j; // rdx
  _QWORD *v6; // rcx
  _DWORD *v7; // rdi
  __int64 k; // rdx
  int v9; // eax
  int v10; // [rsp+28h] [rbp-10h]

  if ( !*(_DWORD *)(a1 + 128) )
  {
    if ( !*(_DWORD *)(a1 + 112) )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x18u,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 2416),
        0LL);
      v2 = 4028;
LABEL_4:
      HUBSM_AddEvent(a1 + 504, v2);
      return;
    }
    if ( (*(_DWORD *)(a1 + 1636) & 0x8000) != 0 )
    {
      v3 = (_QWORD **)(*(_QWORD *)(a1 + 48) + 16LL);
      for ( i = *v3; ; i = (_QWORD *)*i )
      {
        v6 = i - 1;
        if ( v3 == i )
          break;
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)v6 + 6); j = (unsigned int)(j + 1) )
        {
          if ( LODWORD(v6[9 * j + 6]) == 3 )
            LODWORD(v6[9 * j + 6]) = 6;
        }
      }
      *(_DWORD *)(a1 + 1564) = -2147481856;
      *(_DWORD *)(a1 + 1560) = -1073741823;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x19u,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
      v2 = 4020;
      goto LABEL_4;
    }
  }
  v7 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(a1 + 432),
                   0LL);
  memset(v7, 0, 0x60uLL);
  *v7 = 96;
  *((_QWORD *)v7 + 1) = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
  *((_QWORD *)v7 + 2) = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(a1 + 1636) & 0x8000) == 0 )
  {
    v7[6] = *(_DWORD *)(a1 + 112);
    *((_QWORD *)v7 + 4) = *(_QWORD *)(a1 + 104);
  }
  v7[10] = *(_DWORD *)(a1 + 128);
  *((_QWORD *)v7 + 6) = *(_QWORD *)(a1 + 120);
  v7[14] = *(_DWORD *)(a1 + 144);
  *((_QWORD *)v7 + 8) = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)(a1 + 48) != -32LL )
  {
    *((_BYTE *)v7 + 80) = *(_BYTE *)(*(_QWORD *)(a1 + 48) + 37LL);
    if ( *(_QWORD *)(a1 + 64) )
    {
      for ( k = 0LL; k < 2; ++k )
        *((_BYTE *)v7 + k + 81) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + k + 2);
    }
  }
  v7[21] = *(_DWORD *)(a1 + 148);
  *((_QWORD *)v7 + 11) = *(_QWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  v9 = HUBUCX_SubmitUcxIoctl(a1, 0x491037u);
  if ( v9 < 0 )
  {
    v10 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x1Au,
      (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
      v10);
  }
}
