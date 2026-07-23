/*
 * XREFs of KiRemoveThreadFromReadyQueue @ 0x1401604C8
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1401177F0 (KiRemoveThreadFromAnyReadyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRemoveThreadFromReadyQueue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 - 96) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 1296), 0xFFFBFFFF);
  v3 = *(_QWORD **)a2;
  v4 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v4 != a2 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 22808) ^= 1 << a3;
  --*(_DWORD *)(a1 + 23476);
  result = *(unsigned int *)(a2 + 1800);
  *(_QWORD *)(a1 + 23480) -= result;
  return result;
}
