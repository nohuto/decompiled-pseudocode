/*
 * XREFs of ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x1800DFD20
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DECFC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1800DFD88 (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
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
  v3 = lpMem;
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
