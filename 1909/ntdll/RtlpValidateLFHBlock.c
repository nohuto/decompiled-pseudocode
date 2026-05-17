/*
 * XREFs of RtlpValidateLFHBlock @ 0x180107C7C
 * Callers:
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

bool __fastcall RtlpValidateLFHBlock(int a1, unsigned __int64 a2)
{
  __int64 v2; // rdx

  if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(a2 + 8) ^ (a2 >> 4)) )
    v2 = 0LL;
  else
    v2 = *(_QWORD *)(a2 - ((a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(a2 + 8) ^ (unsigned int)(a2 >> 4)) >> 12));
  return v2 == **(_QWORD **)(v2 + 8);
}
