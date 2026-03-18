/*
 * XREFs of ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C0049A50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDispatcherObjectCallbackIdexForWrite@LegacyInputDispatcher@@AEBAIXZ @ 0x1C0049B0C (-GetDispatcherObjectCallbackIdexForWrite@LegacyInputDispatcher@@AEBAIXZ.c)
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C004AAF0 (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::RegisterInputDispatcherObjects(
        LegacyInputDispatcher *this,
        void *a2,
        __int64 a3,
        struct InputDispatcherObject *a4)
{
  unsigned int v5; // edi
  unsigned int v8; // eax
  unsigned int i; // r9d
  __int64 v10; // rcx
  __int64 v11; // rdx

  v5 = a3;
  if ( (unsigned int)(a3 + *((_DWORD *)this + 13)) > *((_DWORD *)this + 11) )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("Did you add a new DISPATCHER object and did not increment RIT_DISPATCHER_COUNT or MOUSE_SENSOR_OBJECTS?");
    return 3221225485LL;
  }
  else
  {
    if ( !*((_QWORD *)this + 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v8 = LegacyInputDispatcher::GetDispatcherObjectCallbackIdexForWrite(this);
    for ( i = 0; i < v5; *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v11 + 8) = a2 )
    {
      v10 = *(_QWORD *)a4;
      a4 = (struct InputDispatcherObject *)((char *)a4 + 24);
      *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * (i + *((_DWORD *)this + 13))) = v10;
      v11 = 2LL * (i + v8);
      ++i;
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v11) = *((_QWORD *)a4 - 1);
    }
    if ( !LegacyInputDispatcher::HasInputDispatcherObjects(this) )
      *((_DWORD *)this + 10) = *((_DWORD *)this + 13);
    *((_DWORD *)this + 13) += v5;
    return 0LL;
  }
}
