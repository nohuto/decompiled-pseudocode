/*
 * XREFs of ?ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0181130
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C007CB9C (-UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVC.c)
 *     ?ReleaseAllReferences@CSharedReadMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00836A0 (-ReleaseAllReferences@CSharedReadMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rax
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(this, a2, 0LL, &v5);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
    *(_DWORD *)(v4 + 28) = 0;
  DirectComposition::CSharedReadMarshaler::ReleaseAllReferences(this, a2);
}
