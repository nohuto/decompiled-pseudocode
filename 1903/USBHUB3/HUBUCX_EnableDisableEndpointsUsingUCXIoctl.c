/*
 * XREFs of HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0022E24
 * Callers:
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C0020420 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency @ 0x1C0020500 (HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C0020BD0 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C0024A40 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C002292C (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

void __fastcall HUBUCX_EnableDisableEndpointsUsingUCXIoctl(__int64 *a1)
{
  int v2; // edx
  _QWORD **v3; // r8
  _QWORD *i; // rax
  __int64 j; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 k; // rdx
  int v9; // r8d
  int v10; // [rsp+28h] [rbp-10h]

  if ( !*((_DWORD *)a1 + 32) )
  {
    if ( !*((_DWORD *)a1 + 28) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1[1] + 1432),
          4u,
          5u,
          0x18u,
          (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        a1[302],
        0LL);
      v2 = 4028;
LABEL_6:
      HUBSM_AddEvent((__int64)(a1 + 63), v2);
      return;
    }
    if ( (*((_DWORD *)a1 + 409) & 0x8000) != 0 )
    {
      v3 = (_QWORD **)(a1[6] + 16);
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
      *((_DWORD *)a1 + 391) = -2147481856;
      *((_DWORD *)a1 + 390) = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1[1] + 1432),
          4u,
          5u,
          0x19u,
          (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
      v2 = 4020;
      goto LABEL_6;
    }
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         a1[54],
         0LL);
  memset((void *)(v7 + 4), 0, 0x5CuLL);
  *(_DWORD *)v7 = 96;
  *(_QWORD *)(v7 + 8) = *(_QWORD *)(*a1 + 248);
  *(_QWORD *)(v7 + 16) = a1[3];
  if ( (*((_DWORD *)a1 + 409) & 0x8000) == 0 )
  {
    *(_DWORD *)(v7 + 24) = *((_DWORD *)a1 + 28);
    *(_QWORD *)(v7 + 32) = a1[13];
  }
  *(_DWORD *)(v7 + 40) = *((_DWORD *)a1 + 32);
  *(_QWORD *)(v7 + 48) = a1[15];
  *(_DWORD *)(v7 + 56) = *((_DWORD *)a1 + 36);
  *(_QWORD *)(v7 + 64) = a1[17];
  if ( a1[6] != -32 )
  {
    *(_BYTE *)(v7 + 80) = *(_BYTE *)(a1[6] + 37);
    if ( a1[8] )
    {
      for ( k = 0LL; k < 2; ++k )
        *(_BYTE *)(v7 + k + 81) = *(_BYTE *)(*(_QWORD *)(a1[10] + 32) + k + 2);
    }
  }
  *(_DWORD *)(v7 + 84) = *((_DWORD *)a1 + 37);
  *(_QWORD *)(v7 + 88) = a1[19];
  *((_DWORD *)a1 + 37) = 0;
  a1[19] = 0LL;
  v9 = HUBUCX_SubmitUcxIoctl(a1, 0x491037u);
  if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432),
      2u,
      5u,
      0x1Au,
      (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
      v10);
  }
}
