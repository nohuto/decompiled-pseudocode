/*
 * XREFs of HUBPDO_EvtDeviceD0Exit @ 0x1C0016400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     McTemplateK0pqqh @ 0x1C000A970 (McTemplateK0pqqh.c)
 *     HUBMISC_WaitForSignal @ 0x1C002C420 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C003680C (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     WMI_FireNotification @ 0x1C007A08C (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Exit(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  int v7; // r14d
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // esi
  struct _MCGEN_TRACE_CONTEXT *v14; // rcx
  __int64 v16; // [rsp+28h] [rbp-59h]
  __int64 v17; // [rsp+30h] [rbp-51h]
  _QWORD v18[3]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v19; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v20[7]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int128 v21; // [rsp+A0h] [rbp+1Fh] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005F040);
  v5 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 384) = a2;
  v21 = 0uLL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C005F130)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v5 + 2176)) >= 0 )
  {
    v21 = *(_OWORD *)(v5 + 2176);
    _InterlockedOr((volatile signed __int32 *)(v5 + 1636), 0x80u);
  }
  KeClearEvent((PRKEVENT)(v5 + 1584));
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v7 = v6;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v8 = (struct _MCGEN_TRACE_CONTEXT *)(*(_DWORD *)(v4 + 32) >> 3);
    LOWORD(v8) = (*(_DWORD *)(v4 + 32) & 8) != 0;
    McTemplateK0pqqh(
      v8,
      &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_START,
      (const GUID *)&v21,
      *(_QWORD *)(v5 + 24),
      a2,
      v6,
      (_WORD)v8);
  }
  if ( a2 == 5 )
  {
    v10 = 4075;
    if ( !v7 )
      goto LABEL_23;
  }
  else
  {
    if ( !v7 && (*(_DWORD *)(v5 + 1632) & 0x400) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v5 + 1632), 0x400u);
      memset(v20, 0, sizeof(v20));
      LODWORD(v20[0]) = 56;
      v20[3] = 0x100000001LL;
      v18[1] = HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended;
      v20[4] = a1;
      v18[0] = 24LL;
      v18[2] = 1LL;
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
             WdfDriverGlobals,
             v18,
             v20,
             &v19);
      if ( v9 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v19);
      }
      else
      {
        LODWORD(v17) = v9;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          2u,
          0x48u,
          (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
          v17);
      }
    }
    if ( a2 == 6 )
    {
      v10 = 4079;
      goto LABEL_23;
    }
    if ( a2 == 4 )
    {
      if ( (*(_DWORD *)(v4 + 32) & 4) != 0 )
      {
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 688))(
                WdfDriverGlobals,
                a1,
                3221226195LL);
        if ( v11 < 0 )
        {
          LODWORD(v17) = v11;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            3u,
            5u,
            0x49u,
            (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
            v17);
        }
        _InterlockedAnd((volatile signed __int32 *)(v4 + 32), 0xFFFFFFFB);
      }
      if ( (*(_DWORD *)(v5 + 1632) & 0x4000) == 0 )
        HUBIDLE_AddEvent(v4 + 72, 6008LL, 0LL);
    }
  }
  v10 = 4071;
LABEL_23:
  HUBSM_AddEvent(v5 + 504, v10);
  HUBMISC_WaitForSignal((PVOID)(v5 + 1584));
  LOBYTE(v12) = 1;
  v13 = *(_DWORD *)(v5 + 1576);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
         WdfDriverGlobals,
         *(_QWORD *)(v5 + 2416),
         v12) == 1 )
    WMI_FireNotification(*(_QWORD *)v5, *(unsigned __int16 *)(*(_QWORD *)(v5 + 8) + 200LL), 1LL);
  v14 = *(struct _MCGEN_TRACE_CONTEXT **)(v4 + 392);
  if ( v14 )
    SleepstudyHelper_ComponentInactive();
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v17) = v7;
    LODWORD(v16) = v13;
    McTemplateK0pqq(v14, &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_COMPLETE, (const GUID *)&v21, *(_QWORD *)(v5 + 24), v16, v17);
  }
  _InterlockedAnd((volatile signed __int32 *)(v5 + 1636), 0xFFFFFF7F);
  return v13;
}
