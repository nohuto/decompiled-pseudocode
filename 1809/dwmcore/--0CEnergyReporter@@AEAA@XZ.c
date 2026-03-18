/*
 * XREFs of ??0CEnergyReporter@@AEAA@XZ @ 0x180060E00
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180060FBC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x180060EFC (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 */

CEnergyReporter *__fastcall CEnergyReporter::CEnergyReporter(PVOID pv)
{
  ULONGLONG TickCount64; // rax
  CProcessAttributionManager *v3; // rcx
  PTP_WORK ThreadpoolWork; // rax

  TickCount64 = GetTickCount64();
  v3 = qword_180307EB0;
  *(_QWORD *)pv = TickCount64;
  *((_DWORD *)pv + 2) = 0;
  *((_QWORD *)pv + 2) = 0LL;
  *((_QWORD *)pv + 3) = 0LL;
  *((_QWORD *)pv + 4) = 0LL;
  *((_DWORD *)pv + 10) = 0;
  *((_QWORD *)pv + 6) = CProcessAttributionManager::CreateObserver(v3);
  *((_DWORD *)pv + 16) = 0;
  InitializeSRWLock((PSRWLOCK)pv + 7);
  *((_QWORD *)pv + 9) = 0LL;
  *((_WORD *)pv + 40) = 0;
  *((_QWORD *)pv + 11) = 0LL;
  *((_QWORD *)pv + 12) = 0LL;
  *((_QWORD *)pv + 13) = 0LL;
  *((_DWORD *)pv + 28) = 0;
  ThreadpoolWork = CreateThreadpoolWork(CEnergyReporter::SendReportToE3Worker, pv, 0LL);
  *((_QWORD *)pv + 9) = ThreadpoolWork;
  if ( !ThreadpoolWork )
    RaiseFailFastException(0LL, 0LL, 0);
  return (CEnergyReporter *)pv;
}
