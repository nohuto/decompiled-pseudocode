/*
 * XREFs of ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020F558
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180037EBC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRenderingGraph@@PEAI@Z @ 0x18003451C (-FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRender.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x180034A00 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180037EBC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddNineGridBrush(
        CBrushRenderingGraphBuilder *this,
        struct CNineGridBrush *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CSpriteVisualContent *v4; // rdi
  CRenderingTechniqueFragment *v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // edx
  CRenderingTechniqueFragment *v14; // [rsp+30h] [rbp-20h] BYREF
  CRenderingTechniqueFragment **v15; // [rsp+38h] [rbp-18h] BYREF
  struct CRenderingTechniqueFragment *v16; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+48h] [rbp-8h]
  unsigned int v18; // [rsp+78h] [rbp+28h] BYREF

  v4 = (struct CSpriteVisualContent *)*((_QWORD *)a2 + 10);
  v14 = 0LL;
  v16 = 0LL;
  v15 = &v14;
  LOBYTE(v17) = 1;
  v9 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v16);
  if ( (_BYTE)v17 )
  {
    v10 = (unsigned int)v16;
    v8 = *v15;
    *v15 = v16;
    if ( v8 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v8, v10);
  }
  if ( (v9 & 0x80000000) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)v4 + 48LL))(v4, 134LL) )
    {
      v17 = 0;
      v15 = (CRenderingTechniqueFragment **)v4;
      v16 = *(struct CRenderingTechniqueFragment **)v14;
      if ( !CBrushRenderingGraphBuilder::FindExistingNamedInput(
              this,
              (const struct CBrushRenderingGraph::GraphInputParameters *)&v15,
              &v18) )
      {
        v9 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x8000FFFF, 0x1C5u, 0LL);
        goto LABEL_11;
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 24LL * v18) = a2;
    }
    *a4 = v14;
    return v9;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, v9, 0x1B6u, 0LL);
LABEL_11:
  if ( v14 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v14, v12);
  return v9;
}
