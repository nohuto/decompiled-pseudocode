/*
 * XREFs of KiCheckForSListAddress @ 0x140107DC0
 * Callers:
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x1401BF890 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401C12C0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401C15B0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C18A0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C1B90 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C1E80 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1401C2C00 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3960 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x1401C41B0 (KiDispatchInterrupt.c)
 *     KiNmiInterruptStart @ 0x1401C8800 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x1401CB600 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1401CC4C0 (KiMcheckAbort.c)
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
