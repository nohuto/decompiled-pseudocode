/*
 * XREFs of ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0198DD0
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01949C4 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 * Callees:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C019559C (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C0198F60 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0199184 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CPTPEngine::SendLeftDownFromPhysical(CPTPEngine *a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v8; // r8
  __int128 v9; // [rsp+20h] [rbp-40h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]
  char v12; // [rsp+70h] [rbp+10h] BYREF

  *((_DWORD *)a1 + 814) |= 0x80u;
  result = *((unsigned int *)a1 + 814);
  if ( (result & 8) == 0 )
  {
    v10 = a4;
    v11 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v10);
    if ( a3 )
    {
      HIDWORD(v9) = 0;
      LODWORD(v9) = 0;
      *(_QWORD *)((char *)&v9 + 4) = *a3;
      v11 = 0LL;
      v10 = v9;
      CBasePTPEngine::SendTelemetryOutput(a1, 6LL, &v10);
    }
    v8 = *(_QWORD *)(a2 + 28);
    if ( (*((_DWORD *)a1 + 55) & 0x200) != 0 )
      v8 = **(_QWORD **)&CPTPEngine::DoTPButtonWarpBack(a1, (struct PTPInput *)&v12, a2);
    result = CBasePTPEngine::SendMouseOutput(a1, 1LL, v8);
    *((_DWORD *)a1 + 814) |= 8u;
  }
  return result;
}
