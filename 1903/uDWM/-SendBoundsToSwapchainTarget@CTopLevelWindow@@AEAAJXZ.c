/*
 * XREFs of ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18008DFAC
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x18008DDB0 (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001EDD0 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x1800B66C0 (-UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SendBoundsToSwapchainTarget(CTopLevelWindow *this)
{
  unsigned int cxLeftWidth; // ebx
  CIndirectSwapchainRenderTargetProxy *v3; // rcx
  unsigned int cyTopHeight; // esi
  __int64 v5; // rax
  unsigned __int64 v6; // xmm0_8
  unsigned int v7; // r8d
  unsigned int v8; // edx
  __int64 v9; // rax
  float v10; // xmm2_4
  __int64 v11; // r10
  unsigned __int64 v12; // xmm0_8
  int updated; // eax
  struct _MARGINS v15; // [rsp+30h] [rbp-18h] BYREF

  cxLeftWidth = 0;
  v3 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 97);
  if ( v3 )
  {
    cyTopHeight = 0;
    if ( *((_BYTE *)this + 768) )
    {
      CTopLevelWindow::GetOutsideMargins(this, &v15);
      cxLeftWidth = v15.cxLeftWidth;
      cyTopHeight = v15.cyTopHeight;
      v3 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 97);
      v5 = *(_QWORD *)(*((_QWORD *)this + 90) + 48LL);
      v6 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 90) + 48LL), 8).m128i_u64[0];
      v7 = v6 - v15.cxRightWidth - v5 - v15.cxLeftWidth;
      v8 = HIDWORD(v6) - HIDWORD(v5) - v15.cyBottomHeight - v15.cyTopHeight;
    }
    else
    {
      v9 = *((_QWORD *)this + 90);
      v10 = *(float *)(v9 + 304);
      v11 = *(_QWORD *)(v9 + 196);
      v12 = _mm_srli_si128(*(__m128i *)(v9 + 196), 8).m128i_u64[0];
      v7 = (int)(float)((float)((int)v12 - v11) * v10);
      v8 = (int)(float)((float)(HIDWORD(v12) - HIDWORD(v11)) * v10);
    }
    updated = CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(v3, cxLeftWidth, cyTopHeight, v7, v8);
    cxLeftWidth = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x167Eu);
  }
  return cxLeftWidth;
}
