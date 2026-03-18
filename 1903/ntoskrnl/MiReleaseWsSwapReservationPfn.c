/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x1400E3B98
 * Callers:
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiInPageSingleKernelStack @ 0x1400E3774 (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleaseWsSwapReservationPfn(__int64 a1)
{
  __int64 result; // rax
  char v3; // cl

  result = 0LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 && (*(_BYTE *)(a1 + 16) & 6) != 0 )
  {
    v3 = *(_BYTE *)(a1 + 34);
    if ( (v3 & 8) == 0 )
    {
      result = MiCapturePageFileInfoInline(a1 + 16, 1LL);
      *(_QWORD *)(a1 + 16) &= ~2uLL;
      v3 = *(_BYTE *)(a1 + 34);
    }
    *(_BYTE *)(a1 + 34) = v3 | 0x10;
  }
  return result;
}
