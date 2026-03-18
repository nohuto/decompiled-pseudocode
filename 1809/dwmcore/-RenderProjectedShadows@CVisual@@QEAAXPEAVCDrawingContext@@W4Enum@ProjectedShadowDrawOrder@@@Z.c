/*
 * XREFs of ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1801B8014
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180032BF0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001391C (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1801AEE28 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z @ 0x1801AF154 (-GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z.c)
 */

unsigned __int64 __fastcall CVisual::RenderProjectedShadows(CVisual *a1, CDrawingContext *a2, int a3)
{
  unsigned __int64 result; // rax
  unsigned int v6; // r13d
  unsigned int v7; // r14d
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rcx
  int v13; // ebx
  struct IRenderTarget **v14; // rdi
  struct CProjectedShadow *ShadowAtIndexNoRef; // rax
  __int64 v16; // [rsp+40h] [rbp-68h] BYREF
  CDrawingContext *v17; // [rsp+48h] [rbp-60h]
  _QWORD *v18; // [rsp+50h] [rbp-58h]
  __int64 v19[2]; // [rsp+58h] [rbp-50h] BYREF

  result = *((_QWORD *)a1 + 28);
  v17 = a2;
  if ( (*(_DWORD *)result & 0x10000) != 0 )
  {
    result = CVisual::GetProjectedShadowReceivers((__int64)a1);
    v6 = 0;
    v18 = (_QWORD *)result;
    v7 = 0;
    v8 = (_QWORD *)result;
    v9 = *(_QWORD *)result;
    if ( (__int64)(*(_QWORD *)(result + 8) - *(_QWORD *)result) >> 3 )
    {
      v10 = 0LL;
      do
      {
        v11 = *(_QWORD *)(v9 + 8 * v10);
        v12 = v9;
        if ( *(_DWORD *)(v11 + 92) == a3 )
        {
          v13 = ((__int64)(*(_QWORD *)(v11 + 72) - *(_QWORD *)(v11 + 64)) >> 3) - 1;
          if ( v13 >= 0 )
          {
            v14 = (struct IRenderTarget **)v17;
            do
            {
              LOBYTE(v16) = 0;
              *(_OWORD *)v19 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              ShadowAtIndexNoRef = CProjectedShadowReceiver::GetShadowAtIndexNoRef((CProjectedShadowReceiver *)v11, v13);
              CVisual::RenderContentWorker(
                a1,
                (__int64)ShadowAtIndexNoRef,
                2u,
                v6++,
                v14,
                (__int64)a1 + 132,
                (__int64)&v16,
                (__int64)v19);
              --v13;
            }
            while ( v13 >= 0 );
            v8 = v18;
            v12 = *v18;
          }
        }
        v10 = ++v7;
        result = (v8[1] - v12) >> 3;
        v9 = v12;
      }
      while ( v7 < result );
    }
  }
  return result;
}
