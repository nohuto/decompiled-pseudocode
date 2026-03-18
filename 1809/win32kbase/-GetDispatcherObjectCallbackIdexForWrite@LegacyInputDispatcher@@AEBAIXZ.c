/*
 * XREFs of ?GetDispatcherObjectCallbackIdexForWrite@LegacyInputDispatcher@@AEBAIXZ @ 0x1C0049B0C
 * Callers:
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C0049A50 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C004AAF0 (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::GetDispatcherObjectCallbackIdexForWrite(
        LegacyInputDispatcher *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi

  v3 = 0;
  if ( !*((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)this + 13) >= *((_DWORD *)this + 11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( LegacyInputDispatcher::HasInputDispatcherObjects(this) )
    return (unsigned int)(*((_DWORD *)this + 13) - *((_DWORD *)this + 10));
  return v3;
}
