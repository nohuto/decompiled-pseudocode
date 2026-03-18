/*
 * XREFs of EtwpDestructIptData @ 0x140906B30
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400FD838 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDestructIptData(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 1016);
  if ( v1 )
  {
    if ( v1[2] )
    {
      if ( *v1 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        (*(void (__fastcall **)(_QWORD))(v1[2] + 8LL))(*v1);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 1016) = 0LL;
  }
}
