/*
 * XREFs of ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C007DEBC
 * Callers:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C007D3F8 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007D520 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C007DF04 (-AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(
        DirectComposition::CInteractionMarshaler *this)
{
  CompositionInputObject *v2; // rcx

  v2 = (CompositionInputObject *)*((_QWORD *)this + 31);
  if ( v2 )
  {
    CompositionInputObject::AssociateWithVisual(v2, 0LL);
    ObfDereferenceObject(*((PVOID *)this + 31));
    *((_QWORD *)this + 31) = 0LL;
  }
}
