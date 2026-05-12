/*
 * XREFs of RaidUnitAssignIdentity @ 0x1C00499A8
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0023448 (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     memmove @ 0x1C002C080 (memmove.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

void *__fastcall RaidUnitAssignIdentity(__int64 a1, void *a2)
{
  unsigned __int16 v3; // ax
  size_t v4; // r8

  *(_OWORD *)(a1 + 104) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 120) = *((_OWORD *)a2 + 1);
  *(_OWORD *)(a1 + 136) = *((_OWORD *)a2 + 2);
  *(_QWORD *)(a1 + 152) = *((_QWORD *)a2 + 6);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  *(_OWORD *)(a1 + 169) = *(_OWORD *)(*(_QWORD *)a2 + 16LL);
  *(_DWORD *)(a1 + 442) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  if ( *((_WORD *)a2 + 5) )
  {
    v3 = *((_WORD *)a2 + 4);
    v4 = 255LL;
    if ( v3 < 0xFFu )
      v4 = v3;
    memmove((void *)(a1 + 186), *((const void **)a2 + 2), v4);
  }
  return memset(a2, 0, 0x38uLL);
}
