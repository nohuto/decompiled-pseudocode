/*
 * XREFs of ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800C72C4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x1800C4324 (-AddMultipleAndSet@-$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSIT.c)
 *     std::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)_::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)___lambda_d9cc5af84aa64a7820423eccd07e515b__void_ @ 0x1800EBAEC (std--function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_con_ea_1800EBAEC.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800EC7A0 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 */

void __fastcall CEnergyReporter::SendReportToE3(CEnergyReporter *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // esi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  _BYTE v10[72]; // [rsp+20h] [rbp-48h] BYREF

  v4 = std::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const____::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const______lambda_d9cc5af84aa64a7820423eccd07e515b__void_(
         v10,
         a2,
         a3,
         *((_QWORD *)this + 6));
  CProcessAttributionObserver::ForEachChangedProcessAttribution(v5, this, v4);
  if ( *((_DWORD *)this + 10) )
  {
    v6 = 0;
    AcquireSRWLockExclusive((PSRWLOCK)this + 7);
    *((_DWORD *)this + 16) = GetCurrentThreadId();
    if ( *((_BYTE *)this + 80) )
    {
      if ( *((_BYTE *)this + 81) )
      {
        if ( (unsigned int)dword_18033729C < MEMORY[0x7FFE037C] && !(unsigned __int8)EtwCheckCoverage(&off_180337290) )
          NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_180337290, 0x18u);
      }
      else if ( *((_DWORD *)this + 28) >= 0xFFFFu )
      {
        v6 = -2147467259;
      }
      else
      {
        v6 = DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(
               (__int64)this + 88,
               *((const void **)this + 2),
               *((_DWORD *)this + 10));
      }
    }
    else
    {
      v7 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = *((_QWORD *)this + 2);
      v8 = *((_DWORD *)this + 9);
      *((_QWORD *)this + 2) = v7;
      LODWORD(v7) = *((_DWORD *)this + 27);
      *((_DWORD *)this + 27) = v8;
      v9 = *((_DWORD *)this + 10);
      *((_DWORD *)this + 9) = v7;
      LODWORD(v7) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = v9;
      *((_DWORD *)this + 10) = v7;
      SubmitThreadpoolWork(*((PTP_WORK *)this + 9));
      *((_BYTE *)this + 80) = 1;
    }
    *((_DWORD *)this + 16) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)this + 7);
    if ( v6 < 0
      && (unsigned int)dword_180337284 < MEMORY[0x7FFE037C]
      && !(unsigned __int8)EtwCheckCoverage(&off_180337278) )
    {
      NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_180337278, 0x18u);
    }
    *((_DWORD *)this + 10) = 0;
  }
}
