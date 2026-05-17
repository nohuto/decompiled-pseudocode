/*
 * XREFs of RtlIdnToAscii @ 0x18002C6C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x18002B040 (RtlpNameprepAsciiWorker.c)
 */

__int64 __fastcall RtlIdnToAscii(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  return RtlpNameprepAsciiWorker(a1, a2, a3, a4, a5, 1);
}
