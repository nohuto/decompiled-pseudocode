/*
 * XREFs of MiInsertLargePageNeedsZero @ 0x1402C5990
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertLargePageNeedsZero(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rcx
  __int64 result; // rax

  v3 = (unsigned int)(*((_DWORD *)a1 + 5) % *((_DWORD *)a1 + 4));
  ++*((_DWORD *)a1 + 5);
  v4 = *a1;
  v5 = 3 * v3;
  v6 = (_QWORD *)(48LL * *a2 - 0x58000000000LL);
  *v6 = *(_QWORD *)(v4 + 24LL * (unsigned int)v3 + 16);
  *(_QWORD *)(v4 + 8 * v5 + 16) = v6;
  result = a2[1];
  *(_QWORD *)(v4 + 8 * v5 + 8) += result;
  return result;
}
