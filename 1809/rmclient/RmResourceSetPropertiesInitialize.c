/*
 * XREFs of RmResourceSetPropertiesInitialize @ 0x1800069D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 */

__int64 __fastcall RmResourceSetPropertiesInitialize(_QWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x68uLL);
  result = 0LL;
  a1[5] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  *((_DWORD *)a1 + 22) = 1;
  a1[9] = -1LL;
  a1[8] = -1LL;
  a1[7] = -1LL;
  a1[6] = -1LL;
  return result;
}
