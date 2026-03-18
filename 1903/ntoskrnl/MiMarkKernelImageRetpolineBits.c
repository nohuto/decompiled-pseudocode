/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x14070F868
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiFinalizeImageRetpolineState @ 0x14070EAE8 (MiFinalizeImageRetpolineState.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x140097E88 (MiIsRetpolineEnabled.c)
 *     MiMarkRetpolineBits @ 0x14070F8B4 (MiMarkRetpolineBits.c)
 *     MiIsImageFullyRetpolined @ 0x14070F974 (MiIsImageFullyRetpolined.c)
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
