/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x140854F64
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x1400DA5F0 (MiIsRetpolineEnabled.c)
 *     MiIsImageFullyRetpolined @ 0x140583274 (MiIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x140854FB0 (MiMarkRetpolineBits.c)
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
