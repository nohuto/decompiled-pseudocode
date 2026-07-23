/*
 * XREFs of PiEventAllocatePendingEjectRelations @ 0x1408411A0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PiEventAllocatePendingEjectRelations(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  void *v4; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rbx
  bool v11; // cl

  v4 = *(void **)(a1 + 152);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x20207050u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[6] = a1;
    ObfReferenceObject(v4);
    v10[7] = v4;
    v10[8] = a2;
    *((_BYTE *)v10 + 88) = a3;
    v11 = (*(_DWORD *)(a1 + 144) & 8) != 0;
    v10[12] = a4;
    *((_BYTE *)v10 + 89) = v11;
  }
  return v10;
}
