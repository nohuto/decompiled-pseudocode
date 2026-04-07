/*
 * XREFs of ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18004436C
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@3PEAPEAV1@@Z @ 0x1800442B8 (-Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDComp.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026E70 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800443FC (-Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMagnifierControl::Initialize(struct IDwmChannel **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int inserted; // eax
  int v5; // eax

  v2 = CVisual::Create(this[2], this + 6);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x8Au);
  }
  else
  {
    inserted = VisualCollection::InsertRelative((struct IDwmChannel *)((char *)this[6] + 32), this[7], 0LL, 0, 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x8Cu);
    }
    else
    {
      v5 = CFullScreenMagnifier::Create(this[2], this[4], this[5], this[3], this + 8);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x97u);
    }
  }
  return v3;
}
