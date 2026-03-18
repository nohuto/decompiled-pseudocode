/*
 * XREFs of ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18019462C
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x1800A5330 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x1801947D0 (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x180240864 (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 *     ?ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180248518 (-ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18024862C (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802486A0 (-ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180248728 (-ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CBaseExpression *,1>::Remove(__int64 *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 i; // r11
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0LL;
  for ( i = *a1; (unsigned int)v3 < v2; v3 = (unsigned int)(v3 + 1) )
  {
    if ( *a2 == *(_QWORD *)(i + 8 * v3) )
      break;
  }
  if ( (unsigned int)v3 >= v2 )
    return 0LL;
  for ( ; (unsigned int)v3 < v2 - 1; v2 = *((_DWORD *)a1 + 6) )
  {
    v6 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    *(_QWORD *)(i + 8 * v6) = *(_QWORD *)(i + 8LL * (unsigned int)v3);
  }
  result = 1LL;
  *((_DWORD *)a1 + 6) = v2 - 1;
  return result;
}
