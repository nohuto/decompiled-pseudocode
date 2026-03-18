/*
 * XREFs of ?GotoPreChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x180256254
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x180255FC4 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVectorShape@@@@@Z @ 0x180253AFC (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$C.c)
 */

__int64 __fastcall CGraphWalker<CBspNode>::GotoPreChild(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v6; // rdi
  signed int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  *a2 = 0LL;
  if ( *(_DWORD *)(a1 + 28) )
    v6 = *(_QWORD *)(v2 + 16);
  else
    v6 = *(_QWORD *)(v2 + 24);
  if ( v6 )
  {
    *(_QWORD *)&v11 = *(_QWORD *)(a1 + 16);
    DWORD2(v11) = *(_DWORD *)(a1 + 24);
    v7 = CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Push((unsigned int *)(a1 + 32), &v11);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x148u, 0LL);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 8) = v6;
      *a2 = v6;
    }
  }
  return v3;
}
