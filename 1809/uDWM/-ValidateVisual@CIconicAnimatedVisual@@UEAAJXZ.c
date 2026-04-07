/*
 * XREFs of ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800AE210
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180022DA0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180036ED8 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800ADB60 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800ADD70 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800ADF14 (-UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800AE140 (-UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::ValidateVisual(CSecondaryWindowRepresentation **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int updated; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  if ( *((char *)this + 80) < 0 )
  {
    v2 = CIconicAnimatedVisual::EnsureVisualBrush((CIconicAnimatedVisual *)this);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xE6u);
      return v3;
    }
    v4 = CSecondaryWindowRepresentation::Validate(this[36]);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xE7u);
      return v3;
    }
    updated = CIconicAnimatedVisual::UpdateSourceRect((CIconicAnimatedVisual *)this);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xE8u);
      return v3;
    }
    v6 = CIconicAnimatedVisual::UpdateDestinationRect((const struct tagRECT *)this);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xE9u);
      return v3;
    }
    v7 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xEAu);
      return v3;
    }
    v8 = CIconicAnimatedVisual::SetupInstructions((CIconicAnimatedVisual *)this);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xEBu);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x80u;
  }
  v9 = CRenderDataVisual::ValidateVisual((CRenderDataVisual *)this);
  v3 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xEFu);
  return v3;
}
