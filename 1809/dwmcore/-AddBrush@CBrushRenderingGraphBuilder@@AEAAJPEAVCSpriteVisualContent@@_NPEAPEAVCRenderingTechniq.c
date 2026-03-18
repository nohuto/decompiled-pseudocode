/*
 * XREFs of ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0810
 * Callers:
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800DF50C (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x1800E02EC (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0CA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800DF50C (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0A98 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0CA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800E1608 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rcx
  unsigned int v14; // edx
  unsigned int v15; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  struct CRenderingTechniqueFragment *v18; // [rsp+78h] [rbp+28h] BYREF

  v4 = *(_QWORD *)a2;
  v18 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(v4 + 48))(a2, 50LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 95LL) )
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
      v15 = 155;
    }
    else
    {
      v10 = -2147467263;
      v15 = 159;
    }
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, v10, v15);
    goto LABEL_19;
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
    v15 = 150;
    goto LABEL_18;
  }
LABEL_6:
  v11 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v18);
  v10 = v11;
  if ( v11 >= 0 )
  {
    v10 = 0;
    *a4 = v18;
    return (unsigned int)v10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA3u);
LABEL_19:
  if ( v18 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v18, v14);
  return (unsigned int)v10;
}
