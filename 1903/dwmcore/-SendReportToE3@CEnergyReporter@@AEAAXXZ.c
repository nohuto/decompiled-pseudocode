/*
 * XREFs of ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800C7464
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x1800A1EC0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x1800C483C (-AddMultipleAndSet@-$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSIT.c)
 */

void __fastcall CEnergyReporter::SendReportToE3(CEnergyReporter *this)
{
  int v2; // esi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax

  CProcessAttributionManager::EnumerateChangedProcessAttributions(
    *(CProcessAttributionManager::Record ****)(*((_QWORD *)this + 6) + 8LL),
    *((struct CProcessAttributionObserver **)this + 6),
    this,
    (void (__high *)(void *, unsigned int, unsigned __int64, const unsigned __int16 *, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))lambda_d9cc5af84aa64a7820423eccd07e515b_::_lambda_invoker_cdecl_);
  if ( *((_DWORD *)this + 10) )
  {
    v2 = 0;
    AcquireSRWLockExclusive((PSRWLOCK)this + 7);
    *((_DWORD *)this + 16) = GetCurrentThreadId();
    if ( *((_BYTE *)this + 80) )
    {
      if ( *((_BYTE *)this + 81) )
      {
        if ( (unsigned int)dword_18033A7EC < MEMORY[0x7FFE037C] && !(unsigned __int8)EtwCheckCoverage(&off_18033A7E0) )
          NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_18033A7E0, 0x18u);
      }
      else if ( *((_DWORD *)this + 28) >= 0xFFFFu )
      {
        v2 = -2147467259;
      }
      else
      {
        v2 = DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(
               (__int64)this + 88,
               *((const void **)this + 2),
               *((_DWORD *)this + 10));
      }
    }
    else
    {
      v3 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = *((_QWORD *)this + 2);
      v4 = *((_DWORD *)this + 9);
      *((_QWORD *)this + 2) = v3;
      LODWORD(v3) = *((_DWORD *)this + 27);
      *((_DWORD *)this + 27) = v4;
      v5 = *((_DWORD *)this + 10);
      *((_DWORD *)this + 9) = v3;
      LODWORD(v3) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = v5;
      *((_DWORD *)this + 10) = v3;
      SubmitThreadpoolWork(*((PTP_WORK *)this + 9));
      *((_BYTE *)this + 80) = 1;
    }
    *((_DWORD *)this + 16) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)this + 7);
    if ( v2 < 0
      && (unsigned int)dword_18033A7D4 < MEMORY[0x7FFE037C]
      && !(unsigned __int8)EtwCheckCoverage(&off_18033A7C8) )
    {
      NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_18033A7C8, 0x18u);
    }
    *((_DWORD *)this + 10) = 0;
  }
}
