/*
 * XREFs of ScsiSyncCacheRequest @ 0x1C00037BC
 * Callers:
 *     ScsiToNVMe @ 0x1C0003070 (ScsiToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0003844 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 */

__int64 __fastcall ScsiSyncCacheRequest(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // cl

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1536) + 525LL) & 1) != 0 )
  {
    *(_BYTE *)(SrbExtension + 4253) &= 0xFCu;
    SrbAssignQueueId(a1, v5);
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v9 = *(_BYTE *)(a2 + 7);
    *(_DWORD *)(v6 + 4100) = GetNamespaceId(a1, v9, v7, v8);
    *(_BYTE *)(v6 + 4096) = 0;
  }
  else
  {
    *(_BYTE *)(v5 + 3) = 1;
  }
  return 0LL;
}
