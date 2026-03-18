/*
 * XREFs of ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0079CBC
 * Callers:
 *     ??_ECSharedInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0079430 (--_ECSharedInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0079AD0 (--_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ @ 0x1C007A568 (--1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ.c)
 *     ?Reset@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAX_N@Z @ 0x1C007A8F4 (-Reset@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@.c)
 *     ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C007A928 (-Reset@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HH.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this)
{
  char *v2; // rbx

  v2 = (char *)this + 280;
  *(_QWORD *)this = &DirectComposition::CInteractionMarshaler::`vftable';
  CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Reset((char *)this + 280);
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(v2);
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset((char *)this + 264);
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup((DirectComposition::CInteractionMarshaler *)((char *)this + 144));
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup((DirectComposition::CInteractionMarshaler *)((char *)this + 40));
}
