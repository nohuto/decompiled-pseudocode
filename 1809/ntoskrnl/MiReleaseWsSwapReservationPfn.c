/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x14013D9B0
 * Callers:
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiInPageSingleKernelStack @ 0x14013D5A0 (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
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
      result = MiCapturePageFileInfoInline((_QWORD *)(a1 + 16), 1, 1);
      *(_QWORD *)(a1 + 16) &= ~2uLL;
      v3 = *(_BYTE *)(a1 + 34);
    }
    *(_BYTE *)(a1 + 34) = v3 | 0x10;
  }
  return result;
}
