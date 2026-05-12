/*
 * XREFs of RaCreateDriver @ 0x1C006E790
 * Callers:
 *     StorPortInitialize @ 0x1C001E5F0 (StorPortInitialize.c)
 * Callees:
 *     StorSetFunctionExtensionTable @ 0x1C001E94C (StorSetFunctionExtensionTable.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 (__fastcall *__fastcall RaCreateDriver(KSPIN_LOCK *a1))()
{
  memset(a1, 0, 0x70uLL);
  *(_DWORD *)a1 = 2;
  a1[13] = (KSPIN_LOCK)(a1 + 12);
  a1[12] = (KSPIN_LOCK)(a1 + 12);
  a1[8] = (KSPIN_LOCK)(a1 + 7);
  a1[7] = (KSPIN_LOCK)(a1 + 7);
  KeInitializeSpinLock(a1 + 10);
  return StorSetFunctionExtensionTable();
}
