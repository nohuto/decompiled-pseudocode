/*
 * XREFs of ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0112A68
 * Callers:
 *     Win32FreePagedLookasideListImpl @ 0x1C0112A50 (Win32FreePagedLookasideListImpl.c)
 *     Win32UAFMAllocPagedLookasideListImpl @ 0x1C020E8D0 (Win32UAFMAllocPagedLookasideListImpl.c)
 *     Win32UAFMFreePagedLookasideListImpl @ 0x1C020EAB0 (Win32UAFMFreePagedLookasideListImpl.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0112AA8 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rbx

  v2 = *(NSInstrumentation::CLeakTrackingAllocator **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)(a2 + 16));
  NSInstrumentation::CLeakTrackingAllocator::Free(v2, a2);
}
