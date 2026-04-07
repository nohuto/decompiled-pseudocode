/*
 * XREFs of ?ValidateVisual@CText@@UEAAJXZ @ 0x180023D70
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180010CD8 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180022DA0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CText::ValidateVisual(CText *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  if ( (*((_BYTE *)this + 80) & 2) != 0 || (v2 = CText::ValidateResources(this), v3 = v2, v2 >= 0) )
  {
    v4 = CRenderDataVisual::ValidateVisual(this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xF6u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xF4u);
  }
  return v3;
}
