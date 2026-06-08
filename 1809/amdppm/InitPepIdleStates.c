/*
 * XREFs of InitPepIdleStates @ 0x1C002C6F8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027484 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C002A784 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C002A9A0 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C002D030 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C002D3D4 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C002D5FC (PepNotifyReportCStates.c)
 */

__int64 __fastcall InitPepIdleStates(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 264) & 0x300LL) != 0 )
  {
    v2 = PepNotifyReportCStates(a1);
    if ( v2 < 0 )
    {
      v9 = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xAu,
        (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
        v9);
    }
  }
  v11 = 0LL;
  v10 = 0LL;
  v3 = -1073741823;
  v4 = *(_QWORD *)(a1 + 264);
  if ( (v4 & 0x200000200LL) != 0 )
  {
    v5 = PepNotifyQueryProcessorIdleStatesV2(a1, &v10);
    v3 = v5;
    if ( v5 >= 0 )
      goto LABEL_10;
    LODWORD(v8) = v5;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
      v8);
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFDFFFFFDFFuLL;
    v4 = *(_QWORD *)(a1 + 264);
  }
  if ( (v4 & 0x100000100LL) != 0 )
  {
    v6 = PepNotifyQueryProcessorIdleStates(a1, &v11);
    v3 = v6;
    if ( v6 < 0 )
    {
      LODWORD(v8) = v6;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xCu,
        (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
        v8);
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFEFFFFFEFFuLL;
    }
  }
LABEL_10:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113F0,
    0LL);
  *(_QWORD *)(a1 + 1120) = v10;
  *(_QWORD *)(a1 + 1112) = v11;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113F0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  ProcLibTraceGetProcessorIdleStatesV2(a1, 0);
  ProcLibTraceGetProcessorIdleStates(a1, 0);
  return v3;
}
