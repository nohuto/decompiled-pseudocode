/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x18002936C
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x180029250 (--1CInteraction@@MEAA@XZ.c)
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x18023BBB0 (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800293F0 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CInteractionProcessor::~CInteractionProcessor(CInteractionProcessor *this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup((CInteractionProcessor *)((char *)this + 648));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 568);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 480);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 408);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 320);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 248);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 160);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 88);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(this);
}
