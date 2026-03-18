/*
 * XREFs of ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180177A28
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DECFC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x1800EBE90 (--1-$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U-$default_delete@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessResourceAttributionReporter::~CProcessResourceAttributionReporter(
        CProcessResourceAttributionReporter *this)
{
  unsigned int v2; // edx
  CProcessResourceAttributionReporter::HighResourceUsageReport *v3; // rbx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  CProcessResourceAttributionReporter::HighResourceUsageReport *v5; // [rsp+30h] [rbp+8h] BYREF

  WaitForThreadpoolWorkCallbacks(*((PTP_WORK *)this + 1), 1);
  CloseThreadpoolWork(*((PTP_WORK *)this + 1));
  v3 = (CProcessResourceAttributionReporter::HighResourceUsageReport *)InterlockedFlushSList((PSLIST_HEADER)this + 1);
  while ( v3 )
  {
    v5 = v3;
    v3 = *(CProcessResourceAttributionReporter::HighResourceUsageReport **)v3;
    std::unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>::~unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>(
      &v5,
      v2);
  }
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 7);
  if ( v4 )
    (**v4)(v4, 1LL);
  std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::_Tidy((char *)this + 32);
}
