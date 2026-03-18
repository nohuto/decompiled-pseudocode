/*
 * XREFs of ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C013B0C8
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C0136898 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextPointerId(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // ax

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *((_WORD *)this + 60);
  v5 = v4;
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v5 = *((_WORD *)this + 60);
  }
  v6 = v5 + 1;
  *((_WORD *)this + 60) = v6;
  if ( v6 < 2u )
    *((_WORD *)this + 60) = 2;
  return v4;
}
