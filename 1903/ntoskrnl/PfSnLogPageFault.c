/*
 * XREFs of PfSnLogPageFault @ 0x140095FF4
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x140096AFC (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x140657E30 (MiLogRelocationRva.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     PfSnReferenceProcessTrace @ 0x140094AA0 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x140094BF4 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x14009529C (PfSnCheckLoggingForThread.c)
 */

void __fastcall PfSnLogPageFault(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx

  if ( (a3 & 4) == 0 || !*(_QWORD *)(a1 + 32) )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
    v8 = v7;
    if ( v7 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, (__int64)v7, a3) )
        PfSnLogPageFaultCommon((__int64)v8, a1, *(_QWORD *)(a1 + 24), a2, a3);
      ExReleaseRundownProtection_0(v8 + 45);
    }
  }
}
