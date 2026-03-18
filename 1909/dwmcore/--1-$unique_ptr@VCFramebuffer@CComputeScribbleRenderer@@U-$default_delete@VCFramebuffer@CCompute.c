/*
 * XREFs of ??1?$unique_ptr@VCFramebuffer@CComputeScribbleRenderer@@U?$default_delete@VCFramebuffer@CComputeScribbleRenderer@@@std@@@std@@QEAA@XZ @ 0x1801ABBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ @ 0x1801ABD00 (--1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CComputeScribbleRenderer::CFramebuffer>::~unique_ptr<CComputeScribbleRenderer::CFramebuffer>(
        CComputeScribbleRenderer::CFramebuffer **a1)
{
  CComputeScribbleRenderer::CFramebuffer *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CComputeScribbleRenderer::CFramebuffer::~CFramebuffer(*a1);
    operator delete(v1);
  }
}
