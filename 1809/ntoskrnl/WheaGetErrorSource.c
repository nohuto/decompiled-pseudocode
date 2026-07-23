/*
 * XREFs of WheaGetErrorSource @ 0x14031FEE0
 * Callers:
 *     <none>
 * Callees:
 *     WheapGetErrorSource @ 0x140320644 (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaGetErrorSource(unsigned int a1)
{
  __int64 ErrorSource; // rax

  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, a1);
  return (ErrorSource + 89) & -(__int64)(ErrorSource != 0);
}
