/*
 * XREFs of ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x180044790
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B500 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180022CA0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x180044834 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::_UpdateAcrylicBlurBehind(CAccent *this)
{
  unsigned int v1; // edi
  int updated; // eax
  struct CVisual *v4; // rdx
  __int64 v5; // rcx
  int inserted; // eax
  int v8; // eax

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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x6BBu);
    }
    else
    {
      v4 = (struct CVisual *)*((_QWORD *)this + 43);
      v5 = *((_QWORD *)v4 + 3);
      if ( (CAccent *)v5 != this )
      {
        if ( v5 )
        {
          v8 = VisualCollection::Remove((VisualCollection *)(v5 + 32), v4);
          v1 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6C3u);
            return v1;
          }
          v4 = (struct CVisual *)*((_QWORD *)this + 43);
        }
        inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), v4, 0LL, 0, 1);
        v1 = inserted;
        if ( inserted < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x6C5u);
      }
    }
  }
  return v1;
}
