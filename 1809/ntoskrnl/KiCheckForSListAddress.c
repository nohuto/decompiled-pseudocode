/*
 * XREFs of KiCheckForSListAddress @ 0x140107D40
 * Callers:
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x1401BF730 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401C1160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401C1450 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C1740 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C1A30 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C1D20 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1401C2AA0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3800 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x1401C4050 (KiDispatchInterrupt.c)
 *     KiNmiInterruptStart @ 0x1401C8700 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x1401CB500 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1401CC3C0 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckForSListAddress(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(unsigned __int16 *)(a1 + 368);
  v2 = *(_QWORD *)(a1 + 360);
  if ( (_WORD)result == 51 )
  {
    result = KeUserPopEntrySListResume;
    if ( v2 > KeUserPopEntrySListResume && v2 <= KeUserPopEntrySListEnd )
      *(_QWORD *)(a1 + 360) = KeUserPopEntrySListResume;
  }
  else if ( (_WORD)result == 16 && v2 > (unsigned __int64)&ExpInterlockedPopEntrySListResume )
  {
    result = (__int64)&ExpInterlockedPopEntrySListEnd;
    if ( v2 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
      *(_QWORD *)(a1 + 360) = &ExpInterlockedPopEntrySListResume;
  }
  return result;
}
