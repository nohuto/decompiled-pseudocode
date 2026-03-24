/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x140853D04
 * Callers:
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140680FF8 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x1400DA570 (MiIsRetpolineEnabled.c)
 *     MiIsImageFullyRetpolined @ 0x140582274 (MiIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x140853D50 (MiMarkRetpolineBits.c)
 */

__int64 __fastcall MiMarkKernelImageRetpolineBits(__int64 a1, unsigned int a2)
{
  int v4; // edx
  __int64 v5; // rcx

  if ( MiIsRetpolineEnabled() && (!v4 || (unsigned int)MiIsImageFullyRetpolined(v5)) )
    return MiMarkRetpolineBits(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a2);
  else
    return 0LL;
}
