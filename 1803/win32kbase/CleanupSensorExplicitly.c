/*
 * XREFs of CleanupSensorExplicitly @ 0x1C012DCD0
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01310F0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003AEAC (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C0121C4C (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CleanupSensorExplicitly(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  CBaseInput *v3; // rbx
  bool result; // al

  v2 = 6LL * (int)a1;
  v3 = *(&qword_1C019A5A8 + 6 * (int)a1);
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v3 = *(&qword_1C019A5A8 + v2);
  }
  result = CBaseInput::ExecutingOnSensorHostingThread(v3);
  if ( result )
  {
    (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)v3 + 40LL))(v3);
    CRIMBase::CleanupHandles(v3);
    result = 0;
    *((_QWORD *)v3 + 135) = 0LL;
  }
  return result;
}
