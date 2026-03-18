/*
 * XREFs of ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C015EDA4
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C015A680 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 * Callees:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C015B274 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C015ECF8 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C015EF14 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

unsigned __int64 __fastcall CPTPEngine::SendRightDownFromPhysical(CPTPEngine *a1, _QWORD *a2, _QWORD *a3, int a4)
{
  unsigned __int64 result; // rax
  __int64 v8; // r8
  __int128 v9; // [rsp+20h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]
  char v13; // [rsp+70h] [rbp+10h] BYREF

  *((_DWORD *)a1 + 824) |= 0x100u;
  result = *((unsigned int *)a1 + 824);
  if ( (result & 0x10) == 0 )
  {
    LODWORD(v9) = a4;
    v12 = v10;
    v11 = v9;
    CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v11);
    if ( a3 )
    {
      *(_QWORD *)((char *)&v9 + 4) = *a3;
      LODWORD(v9) = 1;
      v12 = v10;
      v11 = v9;
      CBasePTPEngine::SendTelemetryOutput(a1, 6LL, &v11);
    }
    v8 = *(_QWORD *)((char *)a2 + 28);
    if ( (*((_DWORD *)a1 + 55) & 0x200) != 0 )
      v8 = **(_QWORD **)&CPTPEngine::DoTPButtonWarpBack(a1, (struct PTPInput *)&v13, a2);
    result = (unsigned __int64)CBasePTPEngine::SendMouseOutput((__int64)a1, 3, v8, 0);
    *((_DWORD *)a1 + 824) |= 0x10u;
  }
  return result;
}
