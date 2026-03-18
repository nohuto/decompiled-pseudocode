/*
 * XREFs of ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x180029B24
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18004281C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180081380 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800846F0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x180084D54 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x1800C0E4C (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ.c)
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x1800D3338 (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180029FA4 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArrayImpl<1>::AddMultiple(__int64 a1, int a2, int a3, _QWORD *a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  int v11; // r8d

  v8 = DynArrayImpl<1>::Grow(a1, a2, a3, 0, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x18Eu, 0LL);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 24);
    if ( a4 )
      *a4 = *(_QWORD *)a1 + (unsigned int)(a2 * v11);
    *(_DWORD *)(a1 + 24) = v11 + a3;
  }
  return v10;
}
