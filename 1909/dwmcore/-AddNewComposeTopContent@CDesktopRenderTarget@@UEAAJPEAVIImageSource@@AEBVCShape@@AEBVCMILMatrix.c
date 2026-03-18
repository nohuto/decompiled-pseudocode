/*
 * XREFs of ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801A60B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ @ 0x1801A6F8C (-NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801FDCAC (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddNewComposeTopContent(
        CDesktopRenderTarget *this,
        struct IImageSource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v5; // edi
  CComposeTop *v6; // rcx
  char *v10; // rax
  __int64 v11; // rcx

  v5 = 0;
  v6 = (CComposeTop *)*((_QWORD *)this + 25);
  if ( v6 )
    goto LABEL_7;
  v10 = (char *)operator new(0xA0uLL);
  if ( v10 )
  {
    *(_QWORD *)v10 = 0LL;
    *((_QWORD *)v10 + 1) = 0LL;
    *((_OWORD *)v10 + 1) = _xmm;
    *((_WORD *)v10 + 40) = 32085;
    *((_OWORD *)v10 + 2) = _xmm;
    *((_OWORD *)v10 + 3) = _xmm;
    *((_OWORD *)v10 + 4) = _xmm;
    *((_WORD *)v10 + 74) = 32085;
    *(_OWORD *)(v10 + 84) = _xmm;
    *(_OWORD *)(v10 + 100) = _xmm;
    *(_OWORD *)(v10 + 116) = _xmm;
    *(_OWORD *)(v10 + 132) = _xmm;
    *((_QWORD *)v10 + 19) = 0LL;
  }
  *((_QWORD *)this + 25) = v10;
  if ( v10 )
  {
    CDesktopRenderTarget::NotifyDesktopDirectScreenWrite((CDesktopRenderTarget *)((char *)this - 168));
    v6 = (CComposeTop *)*((_QWORD *)this + 25);
LABEL_7:
    CComposeTop::AddNewContent(v6, a2, a3, a4);
    return v5;
  }
  v5 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x8007000E, 0x703u, 0LL);
  return v5;
}
