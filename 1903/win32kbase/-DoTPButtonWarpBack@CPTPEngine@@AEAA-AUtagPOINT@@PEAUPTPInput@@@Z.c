/*
 * XREFs of ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C019559C
 * Callers:
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0198DD0 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0199000 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 * Callees:
 *     ?CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0194440 (-CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C0198F60 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C0199234 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 */

struct tagPOINT __fastcall CPTPEngine::DoTPButtonWarpBack(CPTPEngine *this, struct PTPInput *a2, __int64 a3)
{
  bool v3; // zf
  unsigned __int64 v7; // r15
  char *v8; // rbx
  unsigned __int64 v9; // rbp

  v3 = *((_DWORD *)this + 743) == 2;
  *(_QWORD *)a2 = *(_QWORD *)(a3 + 28);
  if ( v3 )
  {
    v7 = *((_QWORD *)this + 12);
    v8 = (char *)this + 296 * *((unsigned int *)this + 734) + 1160;
    v9 = *(_QWORD *)a3 - *((_QWORD *)v8 + 13);
    if ( v9 < v7 * *((unsigned int *)this + 81) / 0x3E8
      && !CPTPEngine::CrossedTPButtonWarpBackThreshold(this, (struct CContactState *)v8, *(struct tagPOINT *)(v8 + 24))
      && (*(_DWORD *)(a3 + 28) != *((_DWORD *)v8 + 14) || *(_DWORD *)(a3 + 32) != *((_DWORD *)v8 + 15)) )
    {
      CBasePTPEngine::SendWarpbackTelemetry(this, 13LL, *(_QWORD *)(a3 + 28), *((_QWORD *)v8 + 7), 1000 * v9 / v7);
      CBasePTPEngine::SendMouseOutput(this, 5LL, *((_QWORD *)v8 + 7));
      *(_QWORD *)a2 = *((_QWORD *)v8 + 7);
    }
  }
  return (struct tagPOINT)a2;
}
