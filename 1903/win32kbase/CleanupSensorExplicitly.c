/*
 * XREFs of CleanupSensorExplicitly @ 0x1C0099570
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1C0187200 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0069B00 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C00995E0 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CleanupSensorExplicitly(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  CRIMBase *v4; // rbx

  v3 = 6LL * (int)a1;
  v4 = *(&qword_1C020B018 + 6 * (int)a1);
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v4 = *(&qword_1C020B018 + v3);
  }
  if ( CBaseInput::ExecutingOnSensorHostingThread(v4) )
  {
    (*(void (__fastcall **)(CRIMBase *))(*(_QWORD *)v4 + 40LL))(v4);
    CRIMBase::CleanupHandles(v4);
    *((_QWORD *)v4 + 151) = 0LL;
  }
}
