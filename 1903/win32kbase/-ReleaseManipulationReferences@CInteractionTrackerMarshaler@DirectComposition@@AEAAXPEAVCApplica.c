/*
 * XREFs of ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01AC9E4
 * Callers:
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01AC8E0 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01ACAF0 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi

  v4 = *((_QWORD *)this + 41);
  if ( v4 )
  {
    v5 = 0;
    if ( *((_DWORD *)this + 84) )
    {
      do
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 41) + 16LL * v5));
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 41) + 16LL * v5++ + 8));
      }
      while ( v5 < *((_DWORD *)this + 84) );
      v4 = *((_QWORD *)this + 41);
    }
    Win32FreePool(v4);
    *((_QWORD *)this + 41) = 0LL;
    *((_DWORD *)this + 84) = 0;
    *((_DWORD *)this + 85) = 0;
  }
}
