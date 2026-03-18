/*
 * XREFs of ?InitializeInputSensors@@YAJXZ @ 0x1C0184DF0
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x1C0184F30 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00546F0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C005AEE0 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sd @ 0x1C01818A8 (WPP_RECORDER_SF_sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitializeInputSensors(__int64 a1, __int64 a2, __int64 a3)
{
  CMouseSensor **v3; // rsi
  __int64 v4; // rdi
  CBaseInput **v5; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // r9d
  __int64 v9; // rbx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // edi

  v3 = &qword_1C0208018;
  v4 = 0LL;
  v5 = &qword_1C0208018;
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
    v7 = CBaseInput::RegisterDispatcherObject(*v5, gpIOCPDispatcher);
    a1 = (unsigned int)v7;
    if ( v7 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v8 = 21;
      goto LABEL_13;
    }
LABEL_7:
    v4 = (unsigned int)(v4 + 1);
    v5 += 6;
    if ( (unsigned int)v4 >= 3 )
      goto LABEL_14;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_14;
  v8 = 20;
LABEL_13:
  LOBYTE(a2) = 2;
  WPP_RECORDER_SF_sd(
    a1,
    a2,
    3,
    v8,
    (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids,
    (__int64)s_rgSensorMap[6 * v4 + 5],
    a1);
LABEL_14:
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)*v3 + 16LL))(*v3);
    v13 = v10;
    if ( v10 < 0 )
      break;
    v9 = (unsigned int)(v9 + 1);
    v3 += 6;
    if ( (unsigned int)v9 >= 3 )
      return v13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_sd(
      v12,
      v11,
      3,
      22,
      (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids,
      (__int64)s_rgSensorMap[6 * v9 + 5],
      v10);
  }
  return v13;
}
