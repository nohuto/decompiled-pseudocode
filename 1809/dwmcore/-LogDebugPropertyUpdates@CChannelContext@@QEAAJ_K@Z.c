/*
 * XREFs of ?LogDebugPropertyUpdates@CChannelContext@@QEAAJ_K@Z @ 0x1800CF854
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x180066DAC (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannelContext::LogDebugPropertyUpdates(CChannelContext *this, __int64 a2)
{
  CAnimationLoggingManager *v2; // rcx
  unsigned int v3; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v2 = (CAnimationLoggingManager *)*((_QWORD *)this + 7);
  if ( v2 && (v5 = CAnimationLoggingManager::LogDebugPropertyUpdates(v2, a2), v3 = v5, v5 < 0) )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x135u);
  else
    return 0;
  return v3;
}
