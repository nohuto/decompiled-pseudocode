/*
 * XREFs of MiGetReadyInPageBlock @ 0x14088B27C
 * Callers:
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     MiInitializeInPageSupport @ 0x14005A7A0 (MiInitializeInPageSupport.c)
 *     MiFreeInPageSupportBlock @ 0x140091C70 (MiFreeInPageSupportBlock.c)
 *     MiGetInPageSupportBlock @ 0x1400A61EC (MiGetInPageSupportBlock.c)
 *     MiLocateVadEvent @ 0x1400ACF04 (MiLocateVadEvent.c)
 */

ULONG_PTR __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  __int64 VadEvent; // rsi
  ULONG_PTR v2; // rbx
  void *v3; // rdi

  VadEvent = MiLocateVadEvent(a1, 8LL);
  v2 = *(_QWORD *)(VadEvent + 8);
  while ( *(_DWORD *)(v2 + 176) != 1 )
  {
    v3 = MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      MiFreeInPageSupportBlock((char *)v2);
      *(_QWORD *)(VadEvent + 8) = v3;
      v2 = (ULONG_PTR)v3;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v2, 0);
  return v2;
}
