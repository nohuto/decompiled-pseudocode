/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x180003B50
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180003A10 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_18000E80A )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_18000E808, 2u, 0LL);
    v1 = byte_18000E80A;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_18000E80A = v1;
  }
  return (unsigned __int8)byte_18000E808;
}
