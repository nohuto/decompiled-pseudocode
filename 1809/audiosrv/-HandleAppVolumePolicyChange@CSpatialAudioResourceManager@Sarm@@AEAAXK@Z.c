/*
 * XREFs of ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801141B8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a41f02c335b415f2b3b1d26bfab90ccd__void_::_Do_call @ 0x180115FF0 (std--_Func_impl_no_alloc__lambda_a41f02c335b415f2b3b1d26bfab90ccd__void_--_Do_call.c)
 * Callees:
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180113C10 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180114158 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180115504 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180116F30 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ @ 0x180117DBC (-IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange(
        Sarm::CSpatialAudioResourceManager *this,
        unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  Sarm::CStreamResource *FirstStream; // rax
  Sarm::CStreamResource *v6; // rdi
  char IsProcessMuted; // al

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange", 0x32Au);
  FirstStream = Sarm::CSpatialAudioResourceManager::GetFirstStream(this, a2);
  v6 = FirstStream;
  if ( FirstStream )
  {
    IsProcessMuted = Sarm::CStreamResource::IsProcessMuted(FirstStream);
    if ( IsProcessMuted != *((_BYTE *)v6 + 88) )
    {
      *((_BYTE *)v6 + 88) = IsProcessMuted;
      if ( IsProcessMuted )
        Sarm::CSpatialAudioResourceManager::RevokeApplicationResources(this, a2);
      else
        Sarm::CSpatialAudioResourceManager::GrantApplicationResources(this, a2);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
