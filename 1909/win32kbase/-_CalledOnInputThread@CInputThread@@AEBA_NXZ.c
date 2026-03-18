/*
 * XREFs of ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0093AE0
 * Callers:
 *     SetThreadPriority @ 0x1C00936B0 (SetThreadPriority.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C00937B8 (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C00938E4 (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThread::_CalledOnInputThread(CInputThread *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 10);
}
