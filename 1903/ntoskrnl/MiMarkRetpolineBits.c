/*
 * XREFs of MiMarkRetpolineBits @ 0x14070F8B4
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x14070F868 (MiMarkKernelImageRetpolineBits.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0BB8 (MiApplyRetpolineToBootDrivers.c)
 *     MiInitializeRetpoline @ 0x140A19958 (MiInitializeRetpoline.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A3C7E0 (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1400733B0 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x1400ACE50 (RtlClearBitsEx.c)
 *     MiSplitBitmapPages @ 0x1400ACFF0 (MiSplitBitmapPages.c)
 *     RtlAreBitsClearEx @ 0x1401159D0 (RtlAreBitsClearEx.c)
 *     MiAddressToRetpolineBit @ 0x1401548B0 (MiAddressToRetpolineBit.c)
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
  if ( !v7 && !RtlAreBitsClearEx((__int64)&qword_140464858, v2, v4 - v2) )
  {
    RtlClearBitsEx((__int64)&qword_140464858, v2, v6);
    return 0LL;
  }
  if ( (unsigned int)MiSplitBitmapPages(5, (unsigned __int64)qword_140464860 + (v2 >> 3), v5 + (v2 & 7) - v2) )
  {
    RtlSetBitsEx((__int64)&qword_140464858, v2, v6);
    return 0LL;
  }
  return 3221225495LL;
}
