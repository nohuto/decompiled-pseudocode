/*
 * XREFs of ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180222A78
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801DA22C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x1802231D4 (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x1802232E4 (-GotoFirstChild@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVect.c)
 *     ?GotoParent@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z @ 0x1802233BC (-GotoParent@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z.c)
 *     ?GotoSibling@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x180223428 (-GotoSibling@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVectorS.c)
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x1802236D4 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 */

__int64 __fastcall CShapeTreeIterator::Walk<CShapeDrawingContext>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  bool v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  while ( 1 )
  {
LABEL_2:
    v6 = CShapeDrawingContext::PreSubgraph((CShapeDrawingContext *)a3, &v15);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x24u);
      goto LABEL_16;
    }
    if ( !v15 )
      break;
    v16 = 0LL;
    v9 = CGraphWalker<CVectorShape>::GotoFirstChild(a1, &v16);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x29u);
      goto LABEL_16;
    }
    if ( !v16 )
      goto LABEL_6;
  }
  while ( 1 )
  {
LABEL_6:
    v11 = *(_QWORD **)(a3 + 8);
    if ( v11[7] )
    {
      --*(_DWORD *)(a3 + 88);
      *(_BYTE *)(a3 + 536) = 1;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v11 + 48LL))(v11, 143LL) )
        *(_BYTE *)(a3 + 537) = 1;
    }
    v16 = 0LL;
    v12 = CGraphWalker<CVectorShape>::GotoSibling(a1, &v16);
    v8 = v12;
    if ( v12 < 0 )
      break;
    if ( v16 )
      goto LABEL_2;
    v16 = 0LL;
    CGraphWalker<CVectorShape>::GotoParent(a1, &v16);
    if ( !v16 )
      goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x39u);
LABEL_16:
  CGraphWalker<CVectorShape>::EndWalk(a1, 0LL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
