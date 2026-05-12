/*
 * XREFs of RaidAdapterClearCryptoKeyTable @ 0x1C003328C
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0015D30 (RaidAdapterDevicePowerstopAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterClearCryptoKeyTable(__int64 a1)
{
  volatile LONG *v1; // rdi
  unsigned int i; // r8d
  __int64 v4; // rdx

  v1 = (volatile LONG *)(a1 + 5656);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5656));
  for ( i = 0; i < *(_DWORD *)(a1 + 5640); *(_DWORD *)((v4 << 6) + *(_QWORD *)(a1 + 5648) + 44) = 0 )
    v4 = i++;
  *(_BYTE *)(a1 + 5644) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  return 0LL;
}
