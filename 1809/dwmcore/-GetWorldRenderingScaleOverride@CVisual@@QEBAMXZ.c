/*
 * XREFs of ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x1801B7024
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801B78E4 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRI.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetWorldRenderingScaleOverride(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v1 + 4) & 0x40000) == 0 )
    return 0.0;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0xE000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(float *)(i + 4);
}
