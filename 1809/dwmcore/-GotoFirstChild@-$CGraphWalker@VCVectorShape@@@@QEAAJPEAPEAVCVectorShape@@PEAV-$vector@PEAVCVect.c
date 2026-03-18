/*
 * XREFs of ?GotoFirstChild@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x1802232E4
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180222950 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180222A78 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVectorShape@@@@@Z @ 0x1802238B8 (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$C.c)
 */

__int64 __fastcall CGraphWalker<CVectorShape>::GotoFirstChild(__int64 a1, __int64 *a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  int v6; // ebp
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 280LL))(v4);
  if ( v6 )
  {
    v13 = *(_QWORD *)(a1 + 16);
    v14 = *(_DWORD *)(a1 + 24);
    v7 = CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Push(a1 + 32, &v13);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x8Bu);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 28) != 1 )
        v3 = v6 - 1;
      *(_DWORD *)(a1 + 24) = v3;
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(*(_QWORD *)(a1 + 8), v3);
      v11 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v11;
      *(_QWORD *)(a1 + 8) = v10;
      *a2 = v10;
    }
  }
  else
  {
    return 1;
  }
  return v9;
}
