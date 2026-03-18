/*
 * XREFs of RtlOpenImageFileOptionsKey @ 0x1406E7AC0
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406D3864 (RtlpOpenImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, a2, (__int64)a3, a3);
}
