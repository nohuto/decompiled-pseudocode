/*
 * XREFs of ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180159830
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ @ 0x18015A5FC (-NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801BDA8C (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddNewComposeTopContent(
        CDesktopRenderTarget *this,
        struct IImageSource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  CComposeTop *v6; // rcx
  char *v9; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (CComposeTop *)*((_QWORD *)this + 19);
  if ( !v6 )
  {
    v9 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0xA0uLL);
    if ( !v9 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)v9 + 1) = 0LL;
    *((_OWORD *)v9 + 1) = _xmm;
    *((_WORD *)v9 + 40) = 32085;
    *((_OWORD *)v9 + 2) = _xmm;
    *((_OWORD *)v9 + 3) = _xmm;
    *((_OWORD *)v9 + 4) = _xmm;
    *((_WORD *)v9 + 74) = 32085;
    *(_OWORD *)(v9 + 84) = _xmm;
    *(_OWORD *)(v9 + 100) = _xmm;
    *(_OWORD *)(v9 + 116) = _xmm;
    *(_OWORD *)(v9 + 132) = _xmm;
    *((_QWORD *)v9 + 19) = 0LL;
    *((_QWORD *)this + 19) = v9;
    CDesktopRenderTarget::NotifyDesktopDirectScreenWrite((CDesktopRenderTarget *)((char *)this - 168));
    v6 = (CComposeTop *)*((_QWORD *)this + 19);
  }
  CComposeTop::AddNewContent(v6, a2, a3, a4);
  return 0LL;
}
