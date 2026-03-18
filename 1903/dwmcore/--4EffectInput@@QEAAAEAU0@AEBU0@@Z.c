/*
 * XREFs of ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18007727C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x1800771B8 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall EffectInput::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a2;
  if ( *(_QWORD *)a1 != *(_QWORD *)a2 )
  {
    v7 = *(_QWORD *)a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v7);
    v7 = *(_QWORD *)a1;
    *(_QWORD *)a1 = v2;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v7);
  }
  v5 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a1 + 8) != v5 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v7);
    v7 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v5;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v7);
  }
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 44) = *(_BYTE *)(a2 + 44);
  *(_BYTE *)(a1 + 45) = *(_BYTE *)(a2 + 45);
  result = a1;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  return result;
}
