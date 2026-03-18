/*
 * XREFs of ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1802513F0
 * Callers:
 *     ?GetBounds@CShapeTree@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020D860 (-GetBounds@CShapeTree@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801F945C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x180251C6C (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x180251D70 (-GotoFirstChild@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVect.c)
 *     ?GotoParent@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z @ 0x180251E50 (-GotoParent@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z.c)
 *     ?GotoSibling@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x180251EBC (-GotoSibling@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVectorS.c)
 *     ?PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z @ 0x18025202C (-PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z.c)
 */

__int64 __fastcall CShapeTreeIterator::Walk<CShapeBoundingContext>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  CSpriteVectorShape *v6; // rdi
  signed int v7; // eax
  __int64 v8; // rcx
  int v9; // edi
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+58h] [rbp+28h] BYREF

  v3 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  do
  {
LABEL_2:
    v6 = *(CSpriteVectorShape **)(a3 + 8);
    *(_BYTE *)(a3 + 72) = 0;
    if ( !*((_BYTE *)v6 + 80) )
      break;
    *(_BYTE *)(a3 + 72) = 1;
    if ( (*(unsigned __int8 (__fastcall **)(CSpriteVectorShape *, __int64))(*(_QWORD *)v6 + 48LL))(v6, 174LL) )
    {
      CSpriteVectorShape::ComputeBounds(v6);
      break;
    }
    *((_WORD *)v6 + 40) = 0;
    v15 = 0LL;
    v7 = CGraphWalker<CVectorShape>::GotoFirstChild(a1, &v15);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x29u, 0LL);
      goto LABEL_16;
    }
  }
  while ( v15 );
  while ( 1 )
  {
    LOBYTE(v15) = 1;
    v10 = CShapeBoundingContext::PostSubgraph((CShapeBoundingContext *)a3, (bool *)&v15);
    v9 = v10;
    if ( v10 < 0 )
      break;
    v16 = 0LL;
    if ( (_BYTE)v15 )
    {
      v12 = CGraphWalker<CVectorShape>::GotoSibling(a1, &v16);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x39u, 0LL);
        goto LABEL_16;
      }
      if ( v16 )
        goto LABEL_2;
    }
    v15 = 0LL;
    CGraphWalker<CVectorShape>::GotoParent(a1, &v15);
    if ( !v15 )
      goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x34u, 0LL);
LABEL_16:
  CGraphWalker<CVectorShape>::EndWalk(a1, 0LL);
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v3;
}
