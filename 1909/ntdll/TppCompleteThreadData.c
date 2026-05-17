/*
 * XREFs of TppCompleteThreadData @ 0x180030918
 * Callers:
 *     RtlpTpWaitCallback @ 0x18002EA00 (RtlpTpWaitCallback.c)
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     TppExecuteWaitCallback @ 0x180030488 (TppExecuteWaitCallback.c)
 *     RtlpTpTimerCallback @ 0x1800305A0 (RtlpTpTimerCallback.c)
 *     TppTimerpExecuteCallback @ 0x180030680 (TppTimerpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x1800802C0 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x18010FC40 (RtlpTpIoCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall TppCompleteThreadData(__int64 a1)
{
  if ( a1 )
  {
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - *(_QWORD *)(a1 + 24);
  }
}
