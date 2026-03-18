/*
 * XREFs of Win32UAFMFreePoolImpl @ 0x1C020EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0138AA8 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C020E380 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreePoolImpl(__int64 a1, unsigned int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rcx

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a1, a2);
  v3 = *(NSInstrumentation::CLeakTrackingAllocator **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  *(_DWORD *)(a1 - 4) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(v3, (char *)(a1 - 16));
}
