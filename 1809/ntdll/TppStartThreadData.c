/*
 * XREFs of TppStartThreadData @ 0x18002EC24
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

struct _TEB *__fastcall TppStartThreadData(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *result; // rax
  _QWORD *v5; // r11
  _DWORD *ThreadPoolData; // r10
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r8

  result = NtCurrentTeb();
  v5 = 0LL;
  ThreadPoolData = result->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v8 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v9 = ((_BYTE)v8 - 1) & 1;
    ThreadPoolData[3] = v9;
    v10 = 8LL * v9;
    v5 = &ThreadPoolData[v10 + 8];
    *(_QWORD *)&ThreadPoolData[v10 + 10] = a3;
    *(_QWORD *)&ThreadPoolData[v10 + 12] = a4;
    *v5 = a2;
    result = (struct _TEB *)MEMORY[0x7FFE03B0];
    *(_QWORD *)&ThreadPoolData[v10 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *a1 = v5;
  return result;
}
