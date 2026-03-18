/*
 * XREFs of MiMarkRetpolineBits @ 0x140711694
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x140711648 (MiMarkKernelImageRetpolineBits.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0AC8 (MiApplyRetpolineToBootDrivers.c)
 *     MiInitializeRetpoline @ 0x140A19AE8 (MiInitializeRetpoline.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A3C5B0 (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     RtlSetBitsEx @ 0x140073620 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x1400E8360 (RtlClearBitsEx.c)
 *     MiSplitBitmapPages @ 0x1400E8500 (MiSplitBitmapPages.c)
 *     RtlAreBitsClearEx @ 0x140117040 (RtlAreBitsClearEx.c)
 *     MiAddressToRetpolineBit @ 0x140154F50 (MiAddressToRetpolineBit.c)
 */

__int64 __fastcall MiMarkRetpolineBits(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  int v7; // r8d

  v2 = MiAddressToRetpolineBit(a1);
  v4 = MiAddressToRetpolineBit((v3 + v1 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL);
  v5 = v4;
  v6 = v4 - v2;
  if ( !v7 && !RtlAreBitsClearEx((__int64)&qword_140464558, v2, v4 - v2) )
  {
    RtlClearBitsEx((__int64)&qword_140464558, v2, v6);
    return 0LL;
  }
  if ( (unsigned int)MiSplitBitmapPages(5, (unsigned __int64)qword_140464560 + (v2 >> 3), v5 + (v2 & 7) - v2) )
  {
    RtlSetBitsEx((__int64)&qword_140464558, v2, v6);
    return 0LL;
  }
  return 3221225495LL;
}
