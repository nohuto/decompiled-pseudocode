/*
 * XREFs of ??1CPTPEngine@@UEAA@XZ @ 0x1C0159B5C
 * Callers:
 *     ??_GCPTPEngine@@UEAAPEAXI@Z @ 0x1C0159BC0 (--_GCPTPEngine@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C015EF14 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void __fastcall CPTPEngine::~CPTPEngine(CPTPEngine *this)
{
  __int128 v2; // [rsp+40h] [rbp-28h] BYREF
  __int64 v3; // [rsp+50h] [rbp-18h]

  *(_QWORD *)this = &CPTPEngine::`vftable';
  v2 = 0uLL;
  v3 = 0LL;
  CBasePTPEngine::SendTelemetryOutput(this, 2LL, &v2);
  *(_QWORD *)this = &IPTPEngine::`vftable';
}
