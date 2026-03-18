/*
 * XREFs of NtRIMGetDevicePreparsedDataLockfree @ 0x1C0134150
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0136370 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall NtRIMGetDevicePreparsedDataLockfree(__int64 a1, __int64 a2, __int64 a3)
{
  return RIMGetDevicePreparsedDataLockfree(a1, a2, a3, 1LL);
}
