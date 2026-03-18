/*
 * XREFs of ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C00A8B20
 * Callers:
 *     <none>
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C00685EC (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall LegacyInputDispatcher::PurgeInputDispatcherObjects(LegacyInputDispatcher *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned int v7; // edi

  if ( LegacyInputDispatcher::HasInputDispatcherObjects(this, a2, a3) )
  {
    v6 = *((unsigned int *)this + 10);
    v7 = *((_DWORD *)this + 13) - v6;
    if ( !v7 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v4, v5);
      v6 = *((unsigned int *)this + 10);
    }
    memset((void *)(*((_QWORD *)this + 1) + 8 * v6), 0, 8LL * v7);
    memset((void *)(*((_QWORD *)this + 4) + 16LL * *((unsigned int *)this + 10)), 0, 16LL * v7);
    *((_DWORD *)this + 13) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 10) = 64;
  }
}
