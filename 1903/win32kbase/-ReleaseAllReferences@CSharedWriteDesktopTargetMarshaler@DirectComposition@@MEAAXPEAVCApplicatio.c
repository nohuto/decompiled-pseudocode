/*
 * XREFs of ?ReleaseAllReferences@CSharedWriteDesktopTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00A80F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CDesktopTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00A8140 (-ReleaseAllReferences@CDesktopTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@.c)
 */

void __fastcall DirectComposition::CSharedWriteDesktopTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedWriteDesktopTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 12) = 0LL;
  }
  DirectComposition::CDesktopTargetMarshaler::ReleaseAllReferences(this, a2);
}
