/*
 * XREFs of EtwpReserveWithPebsIndex @ 0x14032F710
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     EtwpLogContextSwapEvent @ 0x1401471C0 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x1400C31E0 (EtwpReserveTraceBuffer.c)
 */

__int64 __fastcall EtwpReserveWithPebsIndex(unsigned int *a1, __int16 a2, int a3, __int64 a4, __int64 *a5, __int16 a6)
{
  __int16 v6; // bx
  __int64 result; // rax

  v6 = a3 + 24;
  result = EtwpReserveTraceBuffer(a1, a3 + 24, a4, a5, a6);
  if ( result )
  {
    *(_QWORD *)(result + 8) = *a5;
    *(_WORD *)(result + 4) = v6;
    *(_WORD *)(result + 6) = a2;
    *(_DWORD *)result = (unsigned __int8)a6 | 0xC0118000;
    *(_QWORD *)(result + 16) = *(_QWORD *)KeGetCurrentPrcb()->ProfileEventIndexAddress;
    result += 24LL;
  }
  return result;
}
