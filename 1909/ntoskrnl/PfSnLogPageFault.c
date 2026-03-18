/*
 * XREFs of PfSnLogPageFault @ 0x1400D3314
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x1400D3E1C (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x14066AE50 (MiLogRelocationRva.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     PfSnReferenceProcessTrace @ 0x1400D1DC0 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x1400D1F14 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x1400D25BC (PfSnCheckLoggingForThread.c)
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
