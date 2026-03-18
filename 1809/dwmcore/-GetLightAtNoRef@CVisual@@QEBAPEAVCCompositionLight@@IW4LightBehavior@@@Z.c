/*
 * XREFs of ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x1800118DC
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003C7C0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003E5E0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetLightAtNoRef(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( a3 )
    v3 = a1[39] - a1[38];
  else
    v3 = a1[36] - a1[35];
  if ( a2 >= (unsigned int)(v3 >> 4) )
    return 0LL;
  if ( a3 )
    v4 = a1[38];
  else
    v4 = a1[35];
  return *(_QWORD *)(v4 + 16LL * a2);
}
