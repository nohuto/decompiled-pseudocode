/*
 * XREFs of RtlpUnwindOpSlots @ 0x14013C620
 * Callers:
 *     RtlDispatchException @ 0x1400173E0 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x140017EB0 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x140019840 (RtlUnwindEx.c)
 *     RtlpVirtualUnwind @ 0x14001AB00 (RtlpVirtualUnwind.c)
 *     RtlVirtualUnwind @ 0x14013A340 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x14013C478 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpUnwindOpSlots(unsigned __int16 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = HIBYTE(a1) & 0xF;
  if ( (unsigned int)v1 >= 0xB )
    RtlRaiseStatus(-1073741569);
  result = RtlpUnwindOpSlotTable[v1];
  if ( (_DWORD)v1 == 1 && (a1 & 0xF000u) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
