/*
 * XREFs of ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C004AAF0
 * Callers:
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C0049A50 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?GetDispatcherObjectCallbackIdexForWrite@LegacyInputDispatcher@@AEBAIXZ @ 0x1C0049B0C (-GetDispatcherObjectCallbackIdexForWrite@LegacyInputDispatcher@@AEBAIXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJJ@Z @ 0x1C004AA24 (-Dispatch@LegacyInputDispatcher@@QEBAJJ@Z.c)
 *     ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C0094DC0 (-PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall LegacyInputDispatcher::HasInputDispatcherObjects(LegacyInputDispatcher *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // edx

  v3 = *((_DWORD *)this + 10);
  v5 = v3;
  if ( v3 >= *((_DWORD *)this + 13) && v3 != 64 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v3, a3);
    v5 = *((_DWORD *)this + 10);
  }
  return v5 != 64;
}
