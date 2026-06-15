/*
 * XREFs of ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801202FC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b7f472878db8e39f5d0d2856dc00e591__void_::_Do_call @ 0x180122590 (std--_Func_impl_no_alloc__lambda_b7f472878db8e39f5d0d2856dc00e591__void_--_Do_call.c)
 * Callees:
 *     ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x18011F984 (-DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x18011FCA4 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x18011FE34 (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180123410 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x180123F90 (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects(
        Sarm::CSpatialAudioResourceManager *this,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  Sarm::CStreamResource *i; // rax

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects", 0x244u);
  for ( i = Sarm::CSpatialAudioResourceManager::GetFirstStream(this, a2);
        i;
        i = Sarm::CSpatialAudioResourceManager::GetNextStream(this, a2) )
  {
    Sarm::CStreamResource::GrantAvailableObjects(i);
  }
  Sarm::CSpatialAudioResourceManager::DistributeAvailableObjectsToOtherApps(this, a2);
  if ( v4 )
    LeaveCriticalSection(v4);
}
