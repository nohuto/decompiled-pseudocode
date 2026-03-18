/*
 * XREFs of ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x1800DF3E8
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DE60C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1800DF450 (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

ULONGLONG *__fastcall CProcessResourceAttributionReporter::CProcessResourceAttributionReporter(ULONGLONG *pv)
{
  ULONGLONG TickCount64; // rax
  CProcessAttributionManager *v3; // rcx
  PTP_WORK ThreadpoolWork; // rax
  __int64 v5; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  TickCount64 = GetTickCount64();
  pv[1] = 0LL;
  v3 = qword_18033CC50;
  *pv = TickCount64;
  pv[4] = 0LL;
  pv[5] = 0LL;
  pv[6] = 0LL;
  pv[7] = (ULONGLONG)CProcessAttributionManager::CreateObserver(v3);
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)CProcessResourceAttributionReporter::ReportHighResourceUsageWorker,
                     pv,
                     0LL);
  pv[1] = (ULONGLONG)ThreadpoolWork;
  if ( !ThreadpoolWork )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v5);
  return pv;
}
