/*
 * XREFs of MiFinalizeImageRetpolineState @ 0x14070EAE8
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsRetpolineEnabled @ 0x140097E88 (MiIsRetpolineEnabled.c)
 *     MiMapRetpolineStubs @ 0x1401548C8 (MiMapRetpolineStubs.c)
 *     MiLogRetpolineImageLoadEvents @ 0x14070ECE4 (MiLogRetpolineImageLoadEvents.c)
 *     MiMarkKernelImageRetpolineBits @ 0x14070F868 (MiMarkKernelImageRetpolineBits.c)
 */

__int64 __fastcall MiFinalizeImageRetpolineState(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 result; // rax

  if ( !MiIsRetpolineEnabled() )
    goto LABEL_5;
  v3 = *(_QWORD *)(v2 + 48);
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
    MiMapRetpolineStubs(v3);
  result = MiMarkKernelImageRetpolineBits(a1, 1LL);
  if ( (int)result >= 0 )
  {
LABEL_5:
    MiLogRetpolineImageLoadEvents(a1);
    return 0LL;
  }
  return result;
}
