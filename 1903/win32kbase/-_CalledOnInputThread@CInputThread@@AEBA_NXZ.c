/*
 * XREFs of ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0095110
 * Callers:
 *     SetThreadPriority @ 0x1C0094CE0 (SetThreadPriority.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C0094DE8 (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C0094F14 (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThread::_CalledOnInputThread(CInputThread *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 10);
}
