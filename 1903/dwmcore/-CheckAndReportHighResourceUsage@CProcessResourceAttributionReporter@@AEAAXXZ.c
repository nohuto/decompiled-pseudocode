/*
 * XREFs of ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800CA8F0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x1800A1EC0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

void __fastcall CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(
        CProcessResourceAttributionReporter *this)
{
  struct _SLIST_ENTRY *v2; // rax
  struct _SLIST_ENTRY *v3; // rbx
  struct _SLIST_ENTRY *v4; // rdx

  CProcessAttributionManager::EnumerateChangedProcessAttributions(
    *(CProcessAttributionManager::Record ****)(*((_QWORD *)this + 7) + 8LL),
    *((struct CProcessAttributionObserver **)this + 7),
    this,
    (void (__high *)(void *, unsigned int, unsigned __int64, const unsigned __int16 *, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))lambda_35c4e12550229a4699a78f989695a2d8_::_lambda_invoker_cdecl_);
  if ( ListEntry[1].Next != (struct _SLIST_ENTRY *)*((_QWORD *)&ListEntry[1].Next + 1) )
  {
    v2 = (struct _SLIST_ENTRY *)operator new(0x30uLL);
    v3 = v2;
    if ( v2 )
    {
      memset_0(v2, 0, 0x30uLL);
      *((_QWORD *)&v3[1].Next + 1) = 0LL;
      v3[2].Next = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
    v4 = ListEntry;
    ListEntry = v3;
    InterlockedPushEntrySList((PSLIST_HEADER)this + 1, v4);
    SubmitThreadpoolWork(*((PTP_WORK *)this + 1));
  }
}
