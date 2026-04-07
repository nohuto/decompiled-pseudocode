/*
 * XREFs of ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18004410C
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@2PEAPEAV1@@Z @ 0x180044064 (-Create@CMagnifierControl@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTar.c)
 * Callees:
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18000EF30 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CFullScreenMagnifier@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180044190 (-Create@CFullScreenMagnifier@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktop.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMagnifierControl::Initialize(struct CVisual **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int inserted; // eax
  int v5; // eax
  void *v7; // [rsp+28h] [rbp-10h]

  v2 = CVisual::Create(this + 6);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x88u, v7);
  }
  else
  {
    inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)this[6] + 32), this[7], 0LL, 0, 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x8Au, v7);
    }
    else
    {
      v5 = CFullScreenMagnifier::Create(this[4], this[5], this[3], this + 8);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x94u, v7);
    }
  }
  return v3;
}
