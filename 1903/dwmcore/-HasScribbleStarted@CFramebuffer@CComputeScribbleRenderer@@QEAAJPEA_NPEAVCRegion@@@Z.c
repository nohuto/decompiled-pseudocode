/*
 * XREFs of ?HasScribbleStarted@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEA_NPEAVCRegion@@@Z @ 0x1801B5DE4
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1800BCD30 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180090988 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::HasScribbleStarted(int **this, bool *a2, int **a3)
{
  int *v5; // rax
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 208) )
  {
    if ( *((_BYTE *)this + 241) )
    {
      v6 = FastRegion::CRegion::Copy(a3, this + 16);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x186,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
          (const char *)(unsigned int)v6);
        return v7;
      }
    }
    else
    {
      **a3 = 0;
    }
    *a2 = *((_BYTE *)this + 241);
  }
  else
  {
    v5 = *a3;
    *a2 = 0;
    *v5 = 0;
  }
  return 0LL;
}
