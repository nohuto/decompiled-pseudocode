/*
 * XREFs of sub_180067480 @ 0x180067480
 * Callers:
 *     sub_1800672AC @ 0x1800672AC (sub_1800672AC.c)
 *     RtlEnumerateEntryHashTable @ 0x180067350 (RtlEnumerateEntryHashTable.c)
 *     RtlStronglyEnumerateEntryHashTable @ 0x180067410 (RtlStronglyEnumerateEntryHashTable.c)
 *     RtlContractHashTable @ 0x18007FF50 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x180086440 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180067480(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v3; // ecx

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v3, a2 + 128);
    a2 = (a2 + 128) ^ (1 << v3);
    v2 = *(_QWORD *)(v2 + 8LL * (v3 - 7));
  }
  return v2 + 16LL * a2;
}
