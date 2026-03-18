/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x140009008
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1400090E0 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_140013C42 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_140013C40, 2u, 0LL);
    v1 = byte_140013C42;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_140013C42 = v1;
  }
  return (unsigned __int8)byte_140013C40;
}
