/*
 * XREFs of ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800DF50C
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0810 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800DF8B0 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0810 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800E1454 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800E1608 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E1F80 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddMaskBrush(
        CBrushRenderingGraphBuilder *this,
        struct CMaskBrush *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CSpriteVisualContent *v6; // rdx
  CRenderingTechniqueFragment *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  struct CRenderingTechniqueFragment *v12; // rax
  __int64 v13; // rcx
  struct CRenderingTechniqueFragment *v14; // rbx
  CRenderingTechniqueFragment *v15; // r8
  struct CRenderingTechniqueFragment **v16; // rdx
  unsigned int v17; // edx
  unsigned int v18; // edx
  struct CRenderingTechniqueFragment *v20; // [rsp+30h] [rbp-30h] BYREF
  CRenderingTechniqueFragment *v21; // [rsp+38h] [rbp-28h]
  CRenderingTechniqueFragment **v22; // [rsp+40h] [rbp-20h] BYREF
  struct CRenderingTechniqueFragment *v23; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+50h] [rbp-10h]
  CRenderingTechniqueFragment *v25; // [rsp+98h] [rbp+38h] BYREF

  LOBYTE(v24) = 1;
  v25 = 0LL;
  v23 = 0LL;
  v6 = (struct CSpriteVisualContent *)*((_QWORD *)a2 + 10);
  v22 = &v25;
  v20 = 0LL;
  v10 = CBrushRenderingGraphBuilder::AddBrush(this, v6, a3, &v23);
  if ( (_BYTE)v24 )
  {
    v11 = (unsigned int)v23;
    v9 = *v22;
    *v22 = v23;
    if ( v9 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v9, v11);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, v10, 0x148u);
  }
  else
  {
    if ( !*((_QWORD *)a2 + 9) )
    {
      std::unique_ptr<CRenderingTechniqueFragment>::operator=(&v20, &v25);
      v14 = v20;
LABEL_13:
      v10 = 0;
      *a4 = v14;
      goto LABEL_14;
    }
    v12 = (struct CRenderingTechniqueFragment *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
    v14 = v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 1) = 0LL;
      *((_QWORD *)v12 + 2) = 0LL;
      *((_QWORD *)v12 + 3) = 0LL;
      *((_QWORD *)v12 + 4) = 0LL;
      *((_QWORD *)v12 + 5) = 0LL;
      *((_QWORD *)v12 + 6) = 0LL;
      *((_QWORD *)v12 + 7) = 0LL;
      *((_QWORD *)v12 + 8) = 0LL;
      *((_QWORD *)v12 + 9) = 0LL;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 14) = 0LL;
      *((_BYTE *)v12 + 120) = a3;
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      v15 = v25;
      v25 = 0LL;
      v16 = (struct CRenderingTechniqueFragment **)*((_QWORD *)v14 + 5);
      v21 = v15;
      if ( *((struct CRenderingTechniqueFragment ***)v14 + 6) == v16 )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          (char *)v14 + 32,
          v16,
          &v20);
        if ( v21 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v21, v17);
      }
      else
      {
        *v16 = v20;
        v16[1] = v15;
        *((_QWORD *)v14 + 5) += 16LL;
      }
      v22 = (CRenderingTechniqueFragment **)*((_QWORD *)a2 + 9);
      v23 = 0LL;
      v24 = 0;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v14,
        (const struct CBrushRenderingGraph::GraphInputParameters *)&v22);
      goto LABEL_13;
    }
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x14Du);
  }
LABEL_14:
  if ( v25 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v25, v18);
  return (unsigned int)v10;
}
