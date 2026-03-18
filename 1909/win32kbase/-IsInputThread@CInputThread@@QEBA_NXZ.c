/*
 * XREFs of ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C00337A8
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C009CA80 (NtMITActivateInputProcessing.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0112BB0 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0112F20 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C01130D0 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThread::IsInputThread(CInputThread *this)
{
  CInputThread *v1; // rdi
  bool v2; // bl

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v2 = (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)v1 + 10);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
