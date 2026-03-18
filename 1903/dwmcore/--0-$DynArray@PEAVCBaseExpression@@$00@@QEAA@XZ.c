/*
 * XREFs of ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1800DFE60
 * Callers:
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x1800DFB04 (--0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrame.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1800E1F7C (--0CExpressionManager@@AEAA@XZ.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x180080824 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

__int64 __fastcall DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DynArrayImpl<1>::DynArrayImpl<1>(a1, 0LL, 0, a4, 8);
  return a1;
}
