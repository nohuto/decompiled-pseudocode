/*
 * XREFs of ?InitializeInputSensors@@YAJXZ @ 0x1C0152C48
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x1C0152D80 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C007A9A0 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0086C40 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sd @ 0x1C0150AC4 (WPP_RECORDER_SF_sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitializeInputSensors(__int64 a1, __int64 a2, __int64 a3)
{
  CMouseSensor **v3; // rsi
  __int64 v4; // rdi
  CBaseInput **v5; // rbx
  int v6; // eax
  int v7; // eax
  unsigned __int16 v8; // r9
  __int64 v9; // rbx
  int v10; // edi
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-18h]

  v3 = &qword_1C01C3018;
  v4 = 0LL;
  v5 = &qword_1C01C3018;
  while ( 1 )
  {
    v6 = *((_DWORD *)v5 - 2);
    if ( v6 != 2 )
    {
      if ( v6 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      goto LABEL_7;
    }
    LODWORD(a1) = CBaseInput::InitializeSensor(*v5);
    if ( (int)a1 < 0 )
      break;
    v7 = CBaseInput::RegisterDispatcherObject(
           *v5,
           (struct IRegisterInputDispatcherObjects *)WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    a1 = (unsigned int)v7;
    if ( v7 < 0 )
    {
      v8 = 21;
      goto LABEL_11;
    }
LABEL_7:
    v4 = (unsigned int)(v4 + 1);
    v5 += 6;
    if ( (unsigned int)v4 >= 3 )
      goto LABEL_12;
  }
  v8 = 20;
LABEL_11:
  v13 = a1;
  WPP_RECORDER_SF_sd(
    gBaseLog,
    2u,
    2u,
    v8,
    (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids,
    (const struct _MCGEN_TRACE_CONTEXT *)s_rgSensorMap[6 * v4 + 5],
    v13);
LABEL_12:
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)*v3 + 16LL))(*v3);
    if ( v10 < 0 )
      break;
    v9 = (unsigned int)(v9 + 1);
    v3 += 6;
    if ( (unsigned int)v9 >= 3 )
      return (unsigned int)v10;
  }
  LODWORD(v12) = v10;
  WPP_RECORDER_SF_sd(
    gBaseLog,
    2u,
    2u,
    0x16u,
    (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids,
    (const struct _MCGEN_TRACE_CONTEXT *)s_rgSensorMap[6 * v9 + 5],
    v12);
  return (unsigned int)v10;
}
