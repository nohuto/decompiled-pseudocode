/*
 * XREFs of WheaGetErrorSource @ 0x14033F700
 * Callers:
 *     <none>
 * Callees:
 *     WheapGetErrorSource @ 0x1403400FC (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaGetErrorSource(unsigned int a1)
{
  __int64 ErrorSource; // rax

  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, a1);
  return (ErrorSource + 96) & -(__int64)(ErrorSource != 0);
}
