/*
 * XREFs of ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x180218234
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x18021846C (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18024D40C (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 */

__int64 __fastcall CWindowNode::ProcessSetCompositionSurface(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE *a3)
{
  void *v3; // r8
  struct CCompositionSurfaceBitmap *v4; // rbx
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  signed int v9; // eax
  __int64 v10; // rcx
  CGdiSpriteBitmap *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = (void *)*((_QWORD *)a3 + 1);
  v4 = 0LL;
  v12 = 0LL;
  if ( v3 )
  {
    v6 = CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
           (CCompositionSurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 16LL),
           *((struct CComposition **)this + 2),
           v3,
           &v12);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x574u, 0LL);
      v4 = v12;
      goto LABEL_7;
    }
    v4 = v12;
  }
  v9 = CWindowNode::SetFlipExBitmap(this, v4);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x577u, 0LL);
LABEL_7:
  if ( v4 )
    CGdiSpriteBitmap::Release(v4);
  return v8;
}
