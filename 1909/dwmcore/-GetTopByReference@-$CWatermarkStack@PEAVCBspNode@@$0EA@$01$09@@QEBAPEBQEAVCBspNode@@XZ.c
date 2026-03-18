/*
 * XREFs of ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1800D41F0
 * Callers:
 *     ?EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z @ 0x180081D68 (-EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180087420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18025307C (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180253B28 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(*(_DWORD *)a1 - 1);
  return result;
}
