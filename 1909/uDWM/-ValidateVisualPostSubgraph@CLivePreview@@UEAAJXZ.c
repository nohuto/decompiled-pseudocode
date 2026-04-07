/*
 * XREFs of ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x18007AD60
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x1800169F0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x180038250 (-ValidateVisualPostSubgraph@CVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLivePreview::ValidateVisualPostSubgraph(CLivePreview *this, __int64 a2, __int64 a3)
{
  int updated; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CVisual::ValidateVisualPostSubgraph(this, a2, a3);
  if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    updated = CRenderDataVisual::UpdateRenderData(this);
    v5 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D1,
        (__int64)"windows\\dwm\\udwm\\livepreview.cpp",
        (const char *)(unsigned int)updated);
      return v5;
    }
    *((_DWORD *)this + 20) &= ~4u;
  }
  return 0LL;
}
