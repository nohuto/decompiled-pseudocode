/*
 * XREFs of EtwEventWriteTransfer @ 0x180052D90
 * Callers:
 *     _TlgWrite @ 0x1800899FC (_TlgWrite.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x180052DD4 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWriteTransfer(int a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, a3, a4, a5, a6);
}
