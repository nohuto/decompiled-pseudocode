/*
 * XREFs of NdisIMRevertBack @ 0x1C0098200
 * Callers:
 *     <none>
 * Callees:
 *     ndisMProcessDeferred @ 0x1C009B2BC (ndisMProcessDeferred.c)
 */

void __fastcall NdisIMRevertBack(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi

  v2 = (KSPIN_LOCK *)(a1 + 96);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  ndisMProcessDeferred(a1);
  *(_QWORD *)(a1 + 520) = 0LL;
  if ( a2 == -1 )
  {
    KeReleaseSpinLockFromDpcLevel(v2);
  }
  else
  {
    *(_BYTE *)(a1 + 89) = 0;
    *(_QWORD *)(a1 + 1864) = 0LL;
    KeReleaseSpinLock(v2, a2);
  }
}
