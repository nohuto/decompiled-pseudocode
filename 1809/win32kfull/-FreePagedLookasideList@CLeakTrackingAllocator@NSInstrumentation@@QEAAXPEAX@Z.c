/*
 * XREFs of ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012CCA8
 * Callers:
 *     Win32FreePagedLookasideListImpl @ 0x1C012CC90 (Win32FreePagedLookasideListImpl.c)
 *     Win32UAFMAllocPagedLookasideListImpl @ 0x1C01F8770 (Win32UAFMAllocPagedLookasideListImpl.c)
 *     Win32UAFMFreePagedLookasideListImpl @ 0x1C01F8950 (Win32UAFMFreePagedLookasideListImpl.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012CCE8 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rbx

  v2 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)(a2 + 16));
  NSInstrumentation::CLeakTrackingAllocator::Free(v2, a2);
}
