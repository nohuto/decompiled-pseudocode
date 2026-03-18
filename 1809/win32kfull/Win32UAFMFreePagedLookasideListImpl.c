/*
 * XREFs of Win32UAFMFreePagedLookasideListImpl @ 0x1C01F8950
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012CCA8 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012CCE8 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C01F7FE4 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreePagedLookasideListImpl(NSInstrumentation::CLeakTrackingAllocator *a1, int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx

  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, *(char **)a1);
  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid((__int64)a1, a2);
  v4 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
  *((_DWORD *)a1 - 1) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(v4, (char *)a1 - 16);
}
