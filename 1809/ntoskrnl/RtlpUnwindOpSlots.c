/*
 * XREFs of RtlpUnwindOpSlots @ 0x14013A52C
 * Callers:
 *     RtlUnwindEx @ 0x14009DF30 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x14009EB90 (RtlpWalkFrameChain.c)
 *     RtlpVirtualUnwind @ 0x1400A0670 (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x1400A0F40 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x140137680 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x14013A374 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
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
