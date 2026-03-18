/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x140711648
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiFinalizeImageRetpolineState @ 0x1407108C8 (MiFinalizeImageRetpolineState.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14008E268 (MiIsRetpolineEnabled.c)
 *     MiMarkRetpolineBits @ 0x140711694 (MiMarkRetpolineBits.c)
 *     MiIsImageFullyRetpolined @ 0x140711754 (MiIsImageFullyRetpolined.c)
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
