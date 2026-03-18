/*
 * XREFs of ?ReleaseAllReferences@CSharedVisualReferenceControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01813A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00883C0 (-ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicati.c)
 */

void __fastcall DirectComposition::CSharedVisualReferenceControllerMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedVisualReferenceControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 6) = 0LL;
  }
  DirectComposition::CVisualReferenceControllerMarshaler::ReleaseAllReferences(this, a2);
}
