/*
 * XREFs of PopDripsWatchdogCheckHwDivergence @ 0x1408AA4F0
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408AA750 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084B640 (DbgkWerCaptureLiveKernelDump.c)
 */

NTSTATUS __fastcall PopDripsWatchdogCheckHwDivergence(unsigned __int64 a1, unsigned __int64 a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v3; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+58h] [rbp-20h]

  if ( a2 > a1 )
  {
    result = PopDripsSwHwDivergenceThreshold;
    if ( (unsigned int)PopDripsSwHwDivergenceThreshold < (a2 - a1) / 0xF4240 )
    {
      v3 = a2;
      v4 = a1;
      result = ZwUpdateWnfStateData(&WNF_PO_SW_HW_DRIPS_DIVERGENCE, &v3, 0x10u, 0LL, 0LL, 0, 0);
      if ( PopDripsSwHwDivergenceEnableLiveDump )
        return DbgkWerCaptureLiveKernelDump(L"DripsDiverge", 420, v3, v4, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
