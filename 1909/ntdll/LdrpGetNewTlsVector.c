/*
 * XREFs of LdrpGetNewTlsVector @ 0x180056000
 * Callers:
 *     LdrpHandleTlsData @ 0x180055984 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180055E24 (LdrpAllocateTls.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

_DWORD *__fastcall LdrpGetNewTlsVector(unsigned int a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // rbx

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, 8LL * a1 + 16);
  v3 = result;
  if ( result )
  {
    *result = a1;
    memset(result + 4, 0, 8LL * a1);
    return v3 + 4;
  }
  return result;
}
