/*
 * XREFs of ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C015D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C0159FE4 (-CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C015C994 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C015EF14 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CPTPEngine::ProcessTimer(CPTPEngine *this)
{
  unsigned int v1; // edx
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v1 = *((_DWORD *)this + 821);
  *((_DWORD *)this + 817) = 0;
  CPTPEngine::CancelMouseUpTimer(this, v1, 1);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    *((_DWORD *)this + 825) |= 1u;
    v4 = 0uLL;
    v5 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v4);
  }
  return 0LL;
}
