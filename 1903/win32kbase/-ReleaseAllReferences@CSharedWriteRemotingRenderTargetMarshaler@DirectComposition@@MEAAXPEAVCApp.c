/*
 * XREFs of ?ReleaseAllReferences@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01C6610
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CRemotingRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01AA430 (-ReleaseAllReferences@CRemotingRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationCha.c)
 */

void __fastcall DirectComposition::CSharedWriteRemotingRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedWriteRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 10) = 0LL;
  }
  DirectComposition::CRemotingRenderTargetMarshaler::ReleaseAllReferences(this, a2);
}
