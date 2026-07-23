/*
 * XREFs of sub_180055F60 @ 0x180055F60
 * Callers:
 *     sub_1800558E4 @ 0x1800558E4 (sub_1800558E4.c)
 *     sub_180055D84 @ 0x180055D84 (sub_180055D84.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

_DWORD *__fastcall sub_180055F60(unsigned int a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // rbx

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 786432, 8LL * a1 + 16);
  v3 = result;
  if ( result )
  {
    *result = a1;
    memset(result + 4, 0, 8LL * a1);
    return v3 + 4;
  }
  return result;
}
