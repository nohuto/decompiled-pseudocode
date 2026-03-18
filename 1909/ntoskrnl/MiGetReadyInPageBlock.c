/*
 * XREFs of MiGetReadyInPageBlock @ 0x14088AA9C
 * Callers:
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     MiInitializeInPageSupport @ 0x14005A840 (MiInitializeInPageSupport.c)
 *     MiGetInPageSupportBlock @ 0x140093A1C (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x1400CEFD0 (MiFreeInPageSupportBlock.c)
 *     MiLocateVadEvent @ 0x1400E8414 (MiLocateVadEvent.c)
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
