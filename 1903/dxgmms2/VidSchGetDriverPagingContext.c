/*
 * XREFs of VidSchGetDriverPagingContext @ 0x1C005C340
 * Callers:
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005C2D8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0078A60 (VidSchiSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDriverPagingContext(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)(a1[32] + 8LL * a2);
  if ( v3 )
    return *(_QWORD *)(v3 + 48);
  if ( a3 )
    v4 = a1[34];
  else
    v4 = a1[31];
  return *(_QWORD *)(*(_QWORD *)(v4 + 8LL * a2) + 64LL);
}
