/*
 * XREFs of ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800ADB60
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800AE210 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x180009950 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800ADA84 (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::EnsureVisualBrush(CIconicAnimatedVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int Brush; // eax
  __int64 v6; // [rsp+20h] [rbp-28h]

  v2 = CIconicAnimatedVisual::EnsureSecondaryWindowRepresentation(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( !*((_QWORD *)this + 38) )
    {
      Brush = CSecondaryWindowRepresentation::GetBrush(
                *((_QWORD *)this + 36),
                (__int64)this + 304,
                (CBaseObject **)this + 39,
                (CBaseObject **)this + 40,
                v6,
                (CBaseObject **)this + 41,
                (CBaseObject **)this + 42,
                (CBaseObject **)this + 38);
      v3 = Brush;
      if ( Brush < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Brush, 0x6Fu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x62u);
  }
  return v3;
}
