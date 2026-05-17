/*
 * XREFs of EtwEventWriteTransfer @ 0x18004DCB0
 * Callers:
 *     _TlgWrite @ 0x18004D1E8 (_TlgWrite.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18004DCF4 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWriteTransfer(int a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, a3, a4, a5, a6);
}
