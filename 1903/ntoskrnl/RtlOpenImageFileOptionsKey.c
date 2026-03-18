/*
 * XREFs of RtlOpenImageFileOptionsKey @ 0x14068D2E0
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406D417C (RtlpOpenImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlOpenImageFileOptionsKey(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, a2, a3, a3);
}
