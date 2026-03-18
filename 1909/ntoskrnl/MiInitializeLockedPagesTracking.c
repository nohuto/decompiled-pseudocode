/*
 * XREFs of MiInitializeLockedPagesTracking @ 0x140886DD8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140685748 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140789C18 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiInitializeLockedPagesTracking(__int64 a1)
{
  _QWORD *result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x78546D4Du);
  if ( result )
  {
    result[2] = 0LL;
    result[4] = 1LL;
    result[3] = 0LL;
    *result = 0LL;
    result[1] = 0LL;
    *(_QWORD *)(a1 + 1200) = result;
  }
  return result;
}
