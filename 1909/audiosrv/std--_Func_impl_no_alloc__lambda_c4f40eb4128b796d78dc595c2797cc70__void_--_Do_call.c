/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c4f40eb4128b796d78dc595c2797cc70__void_::_Do_call @ 0x1801225B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB2A0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x18011FACC (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x180122F78 (-LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180123410 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x180123CB8 (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_c4f40eb4128b796d78dc595c2797cc70__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  Sarm::CStreamResource *Stream; // rax
  CSpatialAudioResourceManagerTraceLogger *v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 64));
  v5 = (struct _RTL_CRITICAL_SECTION *)(v1 + 64);
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRevocationCompletion", 0x22Du);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream((Sarm::CSpatialAudioResourceManager *)v1, v2);
  if ( Stream )
  {
    Sarm::CStreamResource::CompleteRevocation(Stream);
    if ( v1 != -64 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 64));
  }
  else
  {
    CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(v4, 0x232u, v2);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v5);
  }
}
