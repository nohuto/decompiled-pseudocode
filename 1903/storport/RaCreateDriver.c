/*
 * XREFs of RaCreateDriver @ 0x1C006BF58
 * Callers:
 *     StorPortInitialize @ 0x1C001A7A0 (StorPortInitialize.c)
 * Callees:
 *     StorSetFunctionExtensionTable @ 0x1C001AB0C (StorSetFunctionExtensionTable.c)
 *     memset @ 0x1C0023840 (memset.c)
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
