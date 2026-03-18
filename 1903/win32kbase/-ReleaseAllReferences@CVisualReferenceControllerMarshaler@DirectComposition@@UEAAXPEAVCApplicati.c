/*
 * XREFs of ?ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0082860
 * Callers:
 *     ?ReleaseAllReferences@CSharedVisualReferenceControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01C5830 (-ReleaseAllReferences@CSharedVisualReferenceControllerMarshaler@DirectComposition@@MEAAXPEAVCApp.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C0082A90 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualReferenceControllerMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualReferenceControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase *v4; // rdx

  v4 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v4);
    *((_QWORD *)this + 5) = 0LL;
  }
}
