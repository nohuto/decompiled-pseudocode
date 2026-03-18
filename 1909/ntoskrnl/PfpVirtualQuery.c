/*
 * XREFs of PfpVirtualQuery @ 0x1406F9954
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1405CEA00 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PfpVirtualQuery(__int64 a1, char a2, _DWORD *a3)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // eax
  NTSTATUS result; // eax
  __int64 *Length[5]; // [rsp+40h] [rbp-28h] BYREF

  memset(Length, 0, 0x20uLL);
  if ( *(_DWORD *)(a1 + 24) != 32 )
    return -1073741306;
  v6 = 32;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( (v7 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v7 + 32 > 0x7FFFFFFF0000LL || (v6 = 32, v7 + 32 < v7) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v6 = *(_DWORD *)(a1 + 24);
    }
  }
  memmove(Length, *(const void **)(a1 + 16), v6);
  if ( LODWORD(Length[0]) != 1 )
    return -1073741811;
  v8 = 2;
  if ( (BYTE4(Length[0]) & 1) != 0 && (BYTE4(Length[0]) & 2) != 0 )
    return -1073741811;
  if ( (HIDWORD(Length[0]) & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( (BYTE4(Length[0]) & 1) == 0 )
    v8 = (BYTE4(Length[0]) & 2) != 0;
  result = MmQueryVirtualMemory(Length[3], 0LL, 4, Length[1], (SIZE_T)Length[2], 0LL, v8);
  if ( result >= 0 )
    *a3 = 32;
  return result;
}
