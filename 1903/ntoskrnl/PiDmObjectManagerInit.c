/*
 * XREFs of PiDmObjectManagerInit @ 0x140756E18
 * Callers:
 *     PiDmInit @ 0x1409F93E4 (PiDmInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400025C0 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 */

void __fastcall PiDmObjectManagerInit(__int64 a1, int a2)
{
  ExInitializeResourceLite((PERESOURCE)a1);
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)(a1 + 104),
    (PRTL_AVL_COMPARE_ROUTINE)PiDmCompareObjects,
    (PRTL_AVL_ALLOCATE_ROUTINE)PiDmAllocateGenericTableEntry,
    PiDmFreeGenericTableEntry,
    0LL);
  *(_DWORD *)(a1 + 208) = a2;
}
