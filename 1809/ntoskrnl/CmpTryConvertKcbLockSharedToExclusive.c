/*
 * XREFs of CmpTryConvertKcbLockSharedToExclusive @ 0x1405CF40C
 * Callers:
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1405CD560 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmEnumerateValueKey @ 0x1405D4080 (CmEnumerateValueKey.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpTryConvertKcbLockSharedToExclusive(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), 1LL, 17LL) != 17 )
    return 0;
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  return v1;
}
