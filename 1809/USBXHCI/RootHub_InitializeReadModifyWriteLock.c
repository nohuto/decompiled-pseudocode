/*
 * XREFs of RootHub_InitializeReadModifyWriteLock @ 0x1C001E7D4
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C0060A08 (RootHub_PrepareHardware.c)
 * Callees:
 *     DynamicLock_Create @ 0x1C00417E0 (DynamicLock_Create.c)
 */

__int64 __fastcall RootHub_InitializeReadModifyWriteLock(_QWORD *a1, unsigned int a2)
{
  return DynamicLock_Create(*a1, *(_QWORD *)(a1[1] + 72LL), *(_BYTE *)(a1[1] + 473LL) != 0, a1[6] + 80LL * a2 + 24);
}
