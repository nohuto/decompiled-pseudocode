/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x18009EF04
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x18009EDE8 (--1CInteraction@@MEAA@XZ.c)
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x1801F62CC (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x18009EF88 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 */

void __fastcall CInteractionProcessor::~CInteractionProcessor(CInteractionProcessor *this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup((CInteractionProcessor *)((char *)this + 648));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 71);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 60);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 51);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 40);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 31);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 20);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this);
}
