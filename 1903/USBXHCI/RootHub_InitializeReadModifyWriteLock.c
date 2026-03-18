/*
 * XREFs of RootHub_InitializeReadModifyWriteLock @ 0x1C00222D0
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C00689FC (RootHub_PrepareHardware.c)
 * Callees:
 *     DynamicLock_Create @ 0x1C004702C (DynamicLock_Create.c)
 */

__int64 __fastcall RootHub_InitializeReadModifyWriteLock(_QWORD *a1, unsigned int a2)
{
  return DynamicLock_Create(*a1, *(_QWORD *)(a1[1] + 72LL), *(_BYTE *)(a1[1] + 537LL) != 0, a1[6] + 88LL * a2 + 24);
}
