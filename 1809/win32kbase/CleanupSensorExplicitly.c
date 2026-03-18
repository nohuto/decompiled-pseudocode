/*
 * XREFs of CleanupSensorExplicitly @ 0x1C0086DE0
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1C0152FE0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003223C (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C0086E50 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CleanupSensorExplicitly(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  CBaseInput *v4; // rbx
  bool result; // al

  v3 = 6LL * (int)a1;
  v4 = *(&qword_1C01C3018 + 6 * (int)a1);
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v4 = *(&qword_1C01C3018 + v3);
  }
  result = CBaseInput::ExecutingOnSensorHostingThread(v4);
  if ( result )
  {
    (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)v4 + 40LL))(v4);
    CRIMBase::CleanupHandles(v4);
    result = 0;
    *((_QWORD *)v4 + 139) = 0LL;
  }
  return result;
}
