/*
 * XREFs of ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800404DC
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180027580 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180028630 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800365C0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x180042ABC (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAccent::_UpdateAcrylicBlurBehind(CAccent *this)
{
  unsigned int v1; // edi
  int updated; // eax
  struct CVisual *v5; // rdx
  __int64 v6; // rcx
  int inserted; // eax
  int v8; // eax
  void *v9; // [rsp+28h] [rbp-10h]

  v1 = 0;
  if ( *((_QWORD *)this + 43) && *((_BYTE *)this + 397) )
  {
    CRenderDataVisual::ClearInstructions(this);
    *(_OWORD *)(*((_QWORD *)this + 43) + 352LL) = *(_OWORD *)((char *)this + 616);
    updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
                *((CAccentAcrylicBlurBehind **)this + 43),
                (CAccent *)((char *)this + 280));
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x6B5u, v9);
    }
    else
    {
      v5 = (struct CVisual *)*((_QWORD *)this + 43);
      v6 = *((_QWORD *)v5 + 3);
      if ( (CAccent *)v6 != this )
      {
        if ( v6 )
        {
          v8 = VisualCollection::Remove((VisualCollection *)(v6 + 32), v5);
          v1 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6BDu, v9);
            return v1;
          }
          v5 = (struct CVisual *)*((_QWORD *)this + 43);
        }
        inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), v5, 0LL, 0, 1);
        v1 = inserted;
        if ( inserted < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x6BFu, v9);
      }
    }
  }
  return v1;
}
