/*
 * XREFs of NtRIMGetDevicePreparsedDataLockfree @ 0x1C00DF5F0
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C00E1F70 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall NtRIMGetDevicePreparsedDataLockfree(__int64 a1, __int64 a2, __int64 a3)
{
  return RIMGetDevicePreparsedDataLockfree(a1, a2, a3, 1LL);
}
