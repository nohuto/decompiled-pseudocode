/*
 * XREFs of RaidUnitAssignIdentity @ 0x1C00484C8
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C002059C (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     memmove @ 0x1C0024A80 (memmove.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

void *__fastcall RaidUnitAssignIdentity(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v4; // ax
  size_t v5; // r8

  *(_QWORD *)(a1 + 160) = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  *(_OWORD *)(a1 + 169) = *(_OWORD *)(*(_QWORD *)a2 + 16LL);
  *(_DWORD *)(a1 + 442) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  if ( a2[5] )
  {
    v4 = a2[4];
    v5 = 255LL;
    if ( v4 < 0xFFu )
      v5 = v4;
    memmove((void *)(a1 + 186), *((const void **)a2 + 2), v5);
  }
  *(_OWORD *)(a1 + 104) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 120) = *((_OWORD *)a2 + 1);
  *(_OWORD *)(a1 + 136) = *((_OWORD *)a2 + 2);
  *(_QWORD *)(a1 + 152) = *((_QWORD *)a2 + 6);
  return memset(a2, 0, 0x38uLL);
}
