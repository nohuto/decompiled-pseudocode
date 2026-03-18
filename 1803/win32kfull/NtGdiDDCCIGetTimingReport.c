/*
 * XREFs of NtGdiDDCCIGetTimingReport @ 0x1C023EB20
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x1C023E028 (-DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetTimingReport(CMonitorAPI *a1, _DWORD *Address)
{
  int TimingReport; // ebx
  _DWORD v5[2]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  TimingReport = CMonitorAPI::DdcciGetTimingReport(a1, a1, (struct _MC_TIMING_REPORT *)v5);
  if ( TimingReport >= 0 )
  {
    ProbeForWrite(Address, 9uLL, 1u);
    *((_BYTE *)Address + 8) = v6;
    *Address = v5[0];
    Address[1] = v5[1];
  }
  return (unsigned int)TimingReport;
}
