/*
 * XREFs of ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046F4C
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180045EBC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x18003FD10 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800423F0 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180045EBC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180047640 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800493B4 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddMaskBrush(
        CBrushRenderingGraphBuilder *this,
        struct CMaskBrush *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CSpriteVisualContent *v4; // r15
  int v5; // edi
  struct CSpriteVisualContent *v6; // rsi
  CRenderingTechniqueFragment *v7; // rbx
  CRenderingTechniqueFragment *v11; // rcx
  unsigned int v12; // edx
  CRenderingTechniqueFragment *v13; // rax
  unsigned int v14; // ecx
  CRenderingTechniqueFragment *v15; // rdx
  __int64 v16; // r9
  unsigned int v17; // edx
  __int64 v18; // rdx
  struct CRenderingTechniqueFragment *v19; // rax
  CRenderingTechniqueFragment *v21; // rcx
  unsigned int v22; // edx
  CRenderingTechniqueFragment *v23; // r8
  CRenderingTechniqueFragment *v24; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v25[2]; // [rsp+38h] [rbp-18h] BYREF
  CRenderingTechniqueFragment *v26; // [rsp+40h] [rbp-10h] BYREF
  int v27; // [rsp+48h] [rbp-8h]
  CRenderingTechniqueFragment *v28; // [rsp+88h] [rbp+38h] BYREF

  v4 = (struct CSpriteVisualContent *)*((_QWORD *)a2 + 11);
  v5 = 0;
  v6 = (struct CSpriteVisualContent *)*((_QWORD *)a2 + 10);
  v7 = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  if ( *((_BYTE *)v4 + 72) )
  {
    v26 = 0LL;
    *(_QWORD *)v25 = &v24;
    LOBYTE(v27) = 1;
    v5 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v26);
    if ( (_BYTE)v27 )
    {
      v12 = (unsigned int)v26;
      v11 = **(CRenderingTechniqueFragment ***)v25;
      **(_QWORD **)v25 = v26;
      if ( v11 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v11, v12);
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, v5, 0x14Bu, 0LL);
      goto LABEL_18;
    }
    v5 = 0;
  }
  if ( !v6 )
  {
    std::unique_ptr<CRenderingTechniqueFragment>::operator=(&v28, &v24);
    v7 = v28;
    goto LABEL_17;
  }
  v13 = (CRenderingTechniqueFragment *)DefaultHeap::Alloc(0x80uLL);
  v7 = v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    *((_QWORD *)v13 + 1) = 0LL;
    *((_QWORD *)v13 + 4) = 0LL;
    *((_QWORD *)v13 + 5) = 0LL;
    *((_QWORD *)v13 + 6) = 0LL;
    *((_QWORD *)v13 + 7) = 0LL;
    *((_QWORD *)v13 + 8) = 0LL;
    *((_QWORD *)v13 + 9) = 0LL;
    *((_QWORD *)v13 + 10) = 0LL;
    *((_QWORD *)v13 + 14) = 0LL;
    *((_BYTE *)v13 + 120) = a3;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v15 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      v16 = *((_QWORD *)v7 + 5);
      v26 = v15;
      if ( *((_QWORD *)v7 + 6) == v16 )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          (__int64)v7 + 32,
          (char *)v16,
          v25);
        if ( v26 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v26, v17);
      }
      else
      {
        *(_QWORD *)v16 = *(_QWORD *)v25;
        *(_QWORD *)(v16 + 8) = v15;
        *((_QWORD *)v7 + 5) += 16LL;
      }
    }
    else
    {
      *(_QWORD *)v25 = v4;
      v26 = 0LL;
      v27 = 0;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v7,
        (const struct CBrushRenderingGraph::GraphInputParameters *)v25);
    }
    v26 = 0LL;
    if ( !*((_BYTE *)v6 + 72) )
    {
      *(_QWORD *)v25 = v6;
      v27 = 0;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v7,
        (const struct CBrushRenderingGraph::GraphInputParameters *)v25);
LABEL_17:
      v19 = v7;
      v7 = 0LL;
      *a4 = v19;
      goto LABEL_18;
    }
    v28 = 0LL;
    *(_QWORD *)v25 = &v28;
    LOBYTE(v27) = 1;
    v5 = CBrushRenderingGraphBuilder::AddBrush(this, v6, a3, &v26);
    if ( (_BYTE)v27 )
    {
      v22 = v25[0];
      v21 = **(CRenderingTechniqueFragment ***)v25;
      **(_QWORD **)v25 = v26;
      if ( v21 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v21, v22);
    }
    if ( v5 >= 0 )
    {
      v23 = v28;
      v5 = 0;
      v26 = v28;
      v28 = 0LL;
      v18 = *((_QWORD *)v7 + 5);
      if ( *((_QWORD *)v7 + 6) == v18 )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          (__int64)v7 + 32,
          (char *)v18,
          v25);
        if ( v26 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v26, v18);
      }
      else
      {
        *(_QWORD *)v18 = *(_QWORD *)v25;
        *(_QWORD *)(v18 + 8) = v23;
        *((_QWORD *)v7 + 5) += 16LL;
      }
      if ( v28 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v28, v18);
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v21, 0LL, 0, v5, 0x165u, 0LL);
    if ( v28 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v28, v18);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x151u, 0LL);
  }
LABEL_18:
  if ( v24 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v24, v18);
  if ( v7 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v7, v18);
  return (unsigned int)v5;
}
