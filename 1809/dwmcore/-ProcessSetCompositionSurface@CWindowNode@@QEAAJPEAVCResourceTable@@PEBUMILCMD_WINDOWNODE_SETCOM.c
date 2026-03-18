/*
 * XREFs of ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x1801B9C74
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18016D730 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801B9ED0 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetCompositionSurface(
        struct CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE *a3)
{
  void *v3; // r8
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  CGdiSpriteBitmap *v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = (void *)*((_QWORD *)a3 + 1);
  if ( v3
    && (v5 = CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
               (CCompositionSurfaceManager *)(*((_QWORD *)this[2] + 9) + 16LL),
               this[2],
               v3,
               &v11),
        v7 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x5A2u);
  }
  else
  {
    v8 = CWindowNode::SetFlipExBitmap((CWindowNode *)this, 0LL);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x5A5u);
  }
  return v7;
}
