/*
 * XREFs of EtwpInitStateChangeInfo @ 0x14060EB80
 * Callers:
 *     EtwTraceAppStateChange @ 0x1405B3C80 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x14066D6E8 (EtwTraceProcess.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x140092250 (PsGetProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x1400CCC30 (PsGetProcessStartKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall EtwpInitStateChangeInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h]

  memset((void *)a2, 0, 0x62uLL);
  LODWORD(v5) = *(_DWORD *)(a1 + 736);
  WORD2(v5) = PsGetProcessSessionId(a1);
  WORD3(v5) = MEMORY[0xFFFFF780000002C4];
  *((_QWORD *)&v5 + 1) = *(_QWORD *)(a1 + 776);
  *(_OWORD *)(a2 + 21) = v5;
  *((_QWORD *)&v5 + 1) = PsGetProcessStartKey(a1);
  *(_OWORD *)(a2 + 2) = v5;
  *(_DWORD *)(a2 + 37) = *(_DWORD *)(a1 + 1864);
  *(_QWORD *)(a2 + 82) = _InterlockedIncrement64(&EtwpAppStateChangeSequenceNumber);
  result = *(_QWORD *)(a1 + 1864);
  *(_QWORD *)(a2 + 90) = result;
  return result;
}
