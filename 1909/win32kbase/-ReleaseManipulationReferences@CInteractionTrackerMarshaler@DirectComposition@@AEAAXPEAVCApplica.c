/*
 * XREFs of ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01AAD08
 * Callers:
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01AAC00 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01AAE10 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi

  v4 = *((_QWORD *)this + 42);
  if ( v4 )
  {
    v5 = 0;
    if ( *((_DWORD *)this + 86) )
    {
      do
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 42) + 16LL * v5));
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 42) + 16LL * v5++ + 8));
      }
      while ( v5 < *((_DWORD *)this + 86) );
      v4 = *((_QWORD *)this + 42);
    }
    Win32FreePool(v4);
    *((_QWORD *)this + 42) = 0LL;
    *((_DWORD *)this + 86) = 0;
    *((_DWORD *)this + 87) = 0;
  }
}
