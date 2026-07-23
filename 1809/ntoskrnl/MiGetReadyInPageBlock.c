/*
 * XREFs of MiGetReadyInPageBlock @ 0x14085054C
 * Callers:
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     MiGetInPageSupportBlock @ 0x14002C610 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x14002C6B0 (MiInitializeInPageSupport.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 */

ULONG_PTR __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  __int64 **VadEvent; // rsi
  ULONG_PTR v2; // rbx
  __int64 *v3; // rdi

  VadEvent = MiLocateVadEvent(a1, 8);
  v2 = (ULONG_PTR)VadEvent[1];
  while ( *(_DWORD *)(v2 + 176) != 1 )
  {
    v3 = (__int64 *)MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      MiFreeInPageSupportBlock((char *)v2);
      VadEvent[1] = v3;
      v2 = (ULONG_PTR)v3;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v2, 0);
  return v2;
}
