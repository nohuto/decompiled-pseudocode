/*
 * XREFs of KiCheckForSListAddress @ 0x1401026E0
 * Callers:
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x1401C7650 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401C8C70 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401C8F50 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C9230 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C9510 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C97F0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1401CA2B0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CAD60 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x1401CB450 (KiDispatchInterrupt.c)
 *     KiNmiInterruptStart @ 0x1401CF840 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x1401D2400 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1401D3140 (KiMcheckAbort.c)
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
