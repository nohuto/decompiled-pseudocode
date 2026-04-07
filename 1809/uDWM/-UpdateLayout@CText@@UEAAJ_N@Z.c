/*
 * XREFs of ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x18000EAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180010CD8 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x1800255D0 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CText::UpdateLayout(CText *this, bool a2)
{
  int updated; // eax
  unsigned int v4; // ebx
  int v5; // eax

  updated = CRenderDataVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1B9u);
  }
  else
  {
    v5 = CText::ValidateResources(this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1BAu);
  }
  return v4;
}
