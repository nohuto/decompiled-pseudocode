/*
 * XREFs of ?CreateManipulationThread@CManipulationManager@@AEAAJXZ @ 0x180062840
 * Callers:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x1800625D0 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::CreateManipulationThread(HANDLE *this)
{
  unsigned int v1; // ebx
  HANDLE v3; // rcx
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 32) )
  {
    v1 = -2147467260;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_18029BB78, 2u, -2147467260, 0xB1u);
  }
  else
  {
    v3 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)CManipulationManager::s_ThreadMain, this, 4u, &ThreadId);
    this[3] = v3;
    CManipulationManager::s_dwManipulationThreadId = ThreadId;
    if ( v3 )
    {
      SetThreadPriority(v3, 16);
      ResumeThread(this[3]);
      WaitForSingleObject(CManipulationManager::s_hManipThreadInitializedWaitEvent, 0xFFFFFFFF);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0, &dword_18029BB78, 2u, -2147024882, 0xBEu);
    }
  }
  return v1;
}
