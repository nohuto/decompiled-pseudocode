/*
 * XREFs of RtlpGetChainHead @ 0x1400858D0
 * Callers:
 *     RtlInsertEntryHashTable @ 0x1400857C0 (RtlInsertEntryHashTable.c)
 *     RtlContractHashTable @ 0x140085EB0 (RtlContractHashTable.c)
 *     RtlpPopulateContext @ 0x140085FE8 (RtlpPopulateContext.c)
 *     RtlExpandHashTable @ 0x1400860F0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetChainHead(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v4, a2 + 128);
    a2 = (a2 + 128) ^ (1 << v4);
    v2 = *(_QWORD *)(v2 + 8LL * (v4 - 7));
  }
  return v2 + 16LL * a2;
}
