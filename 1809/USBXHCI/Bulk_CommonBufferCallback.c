/*
 * XREFs of Bulk_CommonBufferCallback @ 0x1C002ECB0
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_MapTransfers @ 0x1C002FF50 (Bulk_MapTransfers.c)
 */

__int64 __fastcall Bulk_CommonBufferCallback(__int64 a1)
{
  ++*(_DWORD *)(a1 + 332);
  return Bulk_MapTransfers(a1, 0LL);
}
