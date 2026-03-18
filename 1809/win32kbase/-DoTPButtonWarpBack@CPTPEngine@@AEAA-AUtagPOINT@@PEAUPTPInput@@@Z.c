/*
 * XREFs of ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C015B274
 * Callers:
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C015EB64 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C015EDA4 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 * Callees:
 *     ?CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C015A058 (-CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C015ECF8 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C015EFC4 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 */

struct tagPOINT __fastcall CPTPEngine::DoTPButtonWarpBack(CPTPEngine *this, struct PTPInput *a2, _QWORD *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v6; // r13
  char *v7; // rbx
  unsigned __int64 v8; // r12

  v3 = *(_QWORD *)((char *)a3 + 28);
  *(_QWORD *)a2 = v3;
  if ( *((_DWORD *)this + 751) == 2 )
  {
    v6 = *((_QWORD *)this + 12);
    v7 = (char *)this + 296 * *((unsigned int *)this + 742) + 1192;
    v8 = *a3 - *((_QWORD *)v7 + 13);
    if ( v8 < v6 * *((unsigned int *)this + 81) / 0x3E8
      && !CPTPEngine::CrossedTPButtonWarpBackThreshold(this, (struct CContactState *)v7, *(struct tagPOINT *)(v7 + 24))
      && v3 != *((_QWORD *)v7 + 7) )
    {
      CBasePTPEngine::SendWarpbackTelemetry(this, 13LL, v3, *((_QWORD *)v7 + 7), 1000 * v8 / v6);
      CBasePTPEngine::SendMouseOutput(this, 5LL, *((_QWORD *)v7 + 7));
      *(_QWORD *)a2 = *((_QWORD *)v7 + 7);
    }
  }
  return (struct tagPOINT)a2;
}
