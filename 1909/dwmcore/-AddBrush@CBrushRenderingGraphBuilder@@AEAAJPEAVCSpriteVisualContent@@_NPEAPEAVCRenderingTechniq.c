/*
 * XREFs of ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180045EBC
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046334 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180046948 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046F4C (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020DE48 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 * Callees:
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800423F0 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180046004 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046334 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046F4C (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020DE48 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020DF74 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddBrush(
        CBrushRenderingGraphBuilder *this,
        struct CSpriteVisualContent *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  __int64 v4; // rax
  CRenderingTechniqueFragment *v9; // rcx
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v14; // edx
  unsigned int v15; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  CRenderingTechniqueFragment *v18; // [rsp+78h] [rbp+28h] BYREF

  v4 = *(_QWORD *)a2;
  v18 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(v4 + 48))(a2, 52LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 102LL) )
    {
      v16 = 0LL;
      v17 = 1;
      v10 = CBrushRenderingGraphBuilder::AddMaskBrush(this, a2, a3, &v16);
      if ( v17 )
      {
        v9 = v18;
        v18 = v16;
        if ( v9 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v9, (unsigned int)&v18);
      }
      if ( v10 >= 0 )
        goto LABEL_6;
      v15 = 154;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)a2 + 48LL))(
                a2,
                134LL) )
    {
      v16 = 0LL;
      v17 = 1;
      v10 = CBrushRenderingGraphBuilder::AddRadialGradientBrush(this, a2, a3, &v16);
      if ( v17 )
      {
        v9 = v18;
        v18 = v16;
        if ( v9 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v9, (unsigned int)&v18);
      }
      if ( v10 >= 0 )
        goto LABEL_6;
      v15 = 159;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)a2 + 48LL))(
                a2,
                108LL) )
    {
      v16 = 0LL;
      v17 = 1;
      v10 = CBrushRenderingGraphBuilder::AddNineGridBrush(this, a2, a3, &v16);
      if ( v17 )
      {
        v9 = v18;
        v18 = v16;
        if ( v9 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v9, (unsigned int)&v18);
      }
      if ( v10 >= 0 )
        goto LABEL_6;
      v15 = 164;
    }
    else
    {
      v10 = -2147467263;
      v15 = 168;
    }
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, v10, v15, 0LL);
    goto LABEL_31;
  }
  v16 = 0LL;
  v17 = 1;
  v10 = CBrushRenderingGraphBuilder::AddEffectBrush(this, a2, a3, &v16);
  if ( v17 )
  {
    v9 = v18;
    v18 = v16;
    if ( v9 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v9, (unsigned int)v16);
  }
  if ( v10 < 0 )
  {
    v15 = 149;
    goto LABEL_30;
  }
LABEL_6:
  v11 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v18);
  v10 = v11;
  if ( v11 >= 0 )
  {
    v10 = 0;
    *a4 = v18;
    ++*((_DWORD *)this + 2);
    return (unsigned int)v10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xACu, 0LL);
LABEL_31:
  if ( v18 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v18, v14);
  return (unsigned int)v10;
}
