/*
 * XREFs of CmpTryConvertKcbLockSharedToExclusive @ 0x1406319B8
 * Callers:
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpTryConvertKcbLockSharedToExclusive(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 1LL, 17LL) != 17 )
    return 0;
  *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
  return v1;
}
