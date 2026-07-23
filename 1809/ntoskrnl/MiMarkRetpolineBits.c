/*
 * XREFs of MiMarkRetpolineBits @ 0x140854FB0
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x140854F64 (MiMarkKernelImageRetpolineBits.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x1409ABFD0 (MmMarkHypercallPageRetpolineBit.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409B98C4 (MiApplyRetpolineToBootDrivers.c)
 *     MiInitializeRetpoline @ 0x1409DFFC8 (MiInitializeRetpoline.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400265A8 (MiSplitBitmapPages.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x14008AF10 (RtlSetBitsEx.c)
 *     RtlAreBitsClearEx @ 0x140114430 (RtlAreBitsClearEx.c)
 *     MiAddressToRetpolineBit @ 0x1402B91E0 (MiAddressToRetpolineBit.c)
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
  if ( v7 || RtlAreBitsClearEx((__int64)&qword_140439F00, v2, v4 - v2) )
  {
    if ( !(unsigned int)MiSplitBitmapPages(5u, (unsigned __int64)qword_140439F08 + (v2 >> 3), v5 + (v2 & 7) - v2) )
      return 3221225495LL;
    RtlSetBitsEx((__int64)&qword_140439F00, v2, v6);
  }
  else
  {
    RtlClearBitsEx((__int64)&qword_140439F00, v2, v6);
  }
  return 0LL;
}
