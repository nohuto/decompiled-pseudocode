/*
 * XREFs of RaidAdapterClearCryptoKeyTable @ 0x1C00376F0
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0016B44 (RaidAdapterDevicePowerstopAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterClearCryptoKeyTable(__int64 a1)
{
  volatile LONG *v1; // rdi
  unsigned int i; // r8d
  __int64 v4; // rdx

  v1 = (volatile LONG *)(a1 + 5792);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5792));
  for ( i = 0; i < *(_DWORD *)(a1 + 5776); *(_DWORD *)((v4 << 6) + *(_QWORD *)(a1 + 5784) + 44) = 0 )
    v4 = i++;
  *(_BYTE *)(a1 + 5780) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  return 0LL;
}
