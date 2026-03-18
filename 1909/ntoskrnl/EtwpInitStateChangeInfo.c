/*
 * XREFs of EtwpInitStateChangeInfo @ 0x1406536BC
 * Callers:
 *     EtwTraceAppStateChange @ 0x140636F48 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1406838A0 (EtwTraceProcess.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x1400C8670 (PsGetProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x1400C9AF0 (PsGetProcessStartKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall EtwpInitStateChangeInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h]

  memset((void *)a2, 0, 0x62uLL);
  LODWORD(v5) = *(_DWORD *)(a1 + 744);
  WORD2(v5) = PsGetProcessSessionId(a1);
  WORD3(v5) = MEMORY[0xFFFFF780000002C4];
  *((_QWORD *)&v5 + 1) = *(_QWORD *)(a1 + 784);
  *(_OWORD *)(a2 + 21) = v5;
  *((_QWORD *)&v5 + 1) = PsGetProcessStartKey(a1);
  *(_OWORD *)(a2 + 2) = v5;
  *(_DWORD *)(a2 + 37) = *(_DWORD *)(a1 + 1912);
  *(_QWORD *)(a2 + 82) = _InterlockedIncrement64(&EtwpAppStateChangeSequenceNumber);
  result = *(_QWORD *)(a1 + 1912);
  *(_QWORD *)(a2 + 90) = result;
  return result;
}
