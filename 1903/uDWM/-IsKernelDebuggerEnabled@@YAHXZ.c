/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1800B78E8
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800B79A8 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_1800DBEAC )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1800DE9B0, 2u, 0LL);
    v1 = byte_1800DBEAC;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_1800DBEAC = v1;
  }
  return (unsigned __int8)byte_1800DE9B0;
}
