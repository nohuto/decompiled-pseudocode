/*
 * XREFs of RtlpCreateHeapEncoding @ 0x180049EDC
 * Callers:
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x180049F80 (RtlpHeapGenerateRandomValue64.c)
 */

void __fastcall RtlpCreateHeapEncoding(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (*(_BYTE *)(a1 + 120) & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) = 16;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) |= RtlpHeapGenerateRandomValue64(a1, a2);
    *(_DWORD *)(a1 + 140) = (unsigned __int16)RtlpHeapGenerateRandomValue64(v4, v3);
  }
}
