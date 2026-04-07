/*
 * XREFs of ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x180005600
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002F1D4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::StealStagedVisual(CAnimatedTransitionVisual *this, struct CVisual *a2)
{
  unsigned int v2; // ebp
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  struct tagPOINT v8; // rbx
  LONG y; // r15d
  CVisual *v10; // rcx
  __int64 v11; // rax
  int inserted; // eax
  struct tagPOINT v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)a2 + 3) + 32LL), a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x38Du);
  }
  else
  {
    if ( *((_BYTE *)this + 976) )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 91) + 32LL), a2, 0LL, 0, 1);
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x393u);
        goto LABEL_10;
      }
    }
    else
    {
      v7 = VisualCollection::InsertRelative((CAnimatedTransitionVisual *)((char *)this + 40), a2, 0LL, 0, 1);
      v6 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x397u);
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
        v10 = *(CVisual **)(*((_QWORD *)a2 + 6) + 8LL * v2);
        v11 = *((_QWORD *)v10 + 14);
        v14.y = HIDWORD(v11) - y;
        v14.x = v11 - v8.x;
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
