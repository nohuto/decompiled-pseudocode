/*
 * XREFs of ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x18020E7BC
 * Callers:
 *     ?ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT@@@Z @ 0x18020E4D4 (-ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTER.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x18020E860 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::SetRootVisual(
        CHolographicInteropTexture *this,
        struct CComposition **a2,
        __int64 a3)
{
  struct CVisualTree *v3; // rbx
  int VisualTree; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  CMILRefCountBase *v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    VisualTree = CVisual::GetVisualTree(a2, &v11, a3, 0);
    v7 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, VisualTree, 0xEBu);
      v3 = v11;
      goto LABEL_7;
    }
    v3 = v11;
  }
  v8 = CHolographicInteropTexture::SetVisualTree(this, v3);
  v7 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xEEu);
LABEL_7:
  if ( v3 )
    CMILRefCountBase::Release(v3);
  return v7;
}
