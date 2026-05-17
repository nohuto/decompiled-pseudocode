/*
 * XREFs of TppCompleteThreadData @ 0x18002EBE8
 * Callers:
 *     TppExecuteWaitCallback @ 0x18002BDF8 (TppExecuteWaitCallback.c)
 *     TppSimplepExecuteCallback @ 0x18002E7B0 (TppSimplepExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x18002E890 (RtlpTpTimerCallback.c)
 *     TppTimerpExecuteCallback @ 0x18002E970 (TppTimerpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18002EA60 (TppIopExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x18002F9F0 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x180030240 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x180031DC0 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1801113E0 (RtlpTpIoCallback.c)
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
