/*
 * XREFs of PfpVirtualQuery @ 0x1408662D8
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14062AAF0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpVirtualQuery(__int64 a1, char a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // eax
  unsigned __int64 v6; // rdx
  int v7; // eax
  int v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+44h] [rbp-24h]
  __int64 *v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-18h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 24) != 32 )
    return 3221225990LL;
  v5 = 32;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( (v6 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v6 + 32 > 0x7FFFFFFF0000LL || (v5 = 32, v6 + 32 < v6) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v5 = *(_DWORD *)(a1 + 24);
    }
  }
  memmove(&v8, *(const void **)(a1 + 16), v5);
  if ( v8 != 1 )
    return 3221225485LL;
  v7 = 2;
  if ( (v9 & 1) != 0 && (v9 & 2) != 0 )
    return 3221225485LL;
  if ( (v9 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (v9 & 1) == 0 )
    v7 = (v9 & 2) != 0;
  result = MmQueryVirtualMemory(BugCheckParameter1, 0LL, 4, v10, v11, 0LL, v7);
  if ( (int)result >= 0 )
    *a3 = 32;
  return result;
}
