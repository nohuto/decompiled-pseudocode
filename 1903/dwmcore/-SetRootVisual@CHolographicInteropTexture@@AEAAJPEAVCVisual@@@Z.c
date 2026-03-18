/*
 * XREFs of ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x180247A28
 * Callers:
 *     ?ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT@@@Z @ 0x180247764 (-ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICIN.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x1800B4F98 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x180247AD8 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::SetRootVisual(
        CHolographicInteropTexture *this,
        struct CComposition **a2,
        __int64 a3)
{
  CDirtyRegion *v3; // rbx
  signed int VisualTree; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  signed int v8; // eax
  __int64 v9; // rcx
  CDirtyRegion *v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    VisualTree = CVisual::GetVisualTree(a2, &v11, a3, 0);
    v7 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, VisualTree, 0xE0u, 0LL);
      v3 = v11;
      goto LABEL_7;
    }
    v3 = v11;
  }
  v8 = CHolographicInteropTexture::SetVisualTree(this, v3);
  v7 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xE3u, 0LL);
LABEL_7:
  if ( v3 )
    CDirtyRegion::Release(v3);
  return v7;
}
