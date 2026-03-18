/*
 * XREFs of ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C01F3E78
 * Callers:
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C027F630 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C0282F40 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 * Callees:
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C013F6D4 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1C01F0954 (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 *     ?PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z @ 0x1C01F2D3C (-PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z.c)
 */

void __fastcall DISPLAY_SOURCE::SetPostCompositionConfigUnsafe(
        DISPLAY_SOURCE *this,
        __int64 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  char v6; // bl
  __int64 v8; // rax
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v10; // rdx

  v6 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 520LL) != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 9178LL;
    WdLogEvent5_WdAssertion(v8);
  }
  LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(this);
  if ( LatestPostCompositionConfigInternal )
  {
    if ( PostCompositionConfigsMatch(LatestPostCompositionConfigInternal, v6, a3, a4) )
      goto LABEL_8;
  }
  else if ( !v6 )
  {
    return;
  }
  LOBYTE(v10) = v6;
  DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, v10, a3, a4);
LABEL_8:
  if ( v6 )
    *((_BYTE *)this + 3744) = 1;
}
