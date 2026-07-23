/*
 * XREFs of PopDefaultPolicy @ 0x140762D8C
 * Callers:
 *     PopResetCurrentPolicies @ 0x1407487DC (PopResetCurrentPolicies.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall PopDefaultPolicy(_DWORD *a1)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  memset(a1, 0, 0xE8uLL);
  v2 = a1 + 29;
  *a1 = 1;
  a1[10] = 1;
  a1[55] = 0;
  a1[23] = 1;
  v3 = 4LL;
  a1[17] = 2;
  a1[18] = 4;
  *(_QWORD *)(a1 + 19) = 2LL;
  do
  {
    *v2 = 2;
    v2 += 6;
    --v3;
  }
  while ( v3 );
  result = 0LL;
  *(_QWORD *)(a1 + 1) = 0LL;
  a1[3] = 0;
  a1[1] = 6;
  *((_QWORD *)a1 + 2) = 0LL;
  a1[6] = 0;
  a1[4] = 2;
  *(_QWORD *)(a1 + 7) = 0LL;
  a1[9] = 0;
  a1[7] = 0;
  return result;
}
