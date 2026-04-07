/*
 * XREFs of ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x180033428
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180032148 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800365C0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::StealStagedVisual(CAnimatedTransitionVisual *this, struct CVisual *a2)
{
  unsigned int v2; // ebp
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  struct tagPOINT v8; // rbx
  LONG y; // r15d
  struct tagPOINT *v10; // rcx
  int inserted; // eax
  void *v13; // [rsp+28h] [rbp-20h]
  struct tagPOINT v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)a2 + 3) + 32LL), a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x384u, v13);
  }
  else
  {
    if ( *((_BYTE *)this + 976) )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 91) + 32LL), a2, 0LL, 0, 1);
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x38Au, v13);
        goto LABEL_10;
      }
    }
    else
    {
      v7 = VisualCollection::InsertRelative((CAnimatedTransitionVisual *)((char *)this + 40), a2, 0LL, 0, 1);
      v6 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x38Eu, v13);
        goto LABEL_10;
      }
    }
    v8 = *(struct tagPOINT *)(**((_QWORD **)a2 + 6) + 112LL);
    v14 = v8;
    if ( *((_DWORD *)a2 + 18) )
    {
      y = v14.y;
      do
      {
        v10 = *(struct tagPOINT **)(*((_QWORD *)a2 + 6) + 8LL * v2);
        v14 = v10[14];
        v14.x -= v8.x;
        v14.y -= y;
        CVisual::SetOffset(v10, &v14);
        ++v2;
      }
      while ( v2 < *((_DWORD *)a2 + 18) );
    }
    *((_BYTE *)this + 975) = 1;
  }
LABEL_10:
  CBaseObject::Release(a2);
  return v6;
}
