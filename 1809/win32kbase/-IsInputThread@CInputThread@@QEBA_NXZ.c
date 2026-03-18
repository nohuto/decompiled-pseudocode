/*
 * XREFs of ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0031610
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C007A4D0 (NtMITActivateInputProcessing.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00ED970 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00EDC10 (NtMITSynthesizeTouchInput.c)
 *     NtMITWaitForMultipleObjectsEx @ 0x1C00EDF00 (NtMITWaitForMultipleObjectsEx.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 */

bool __fastcall CInputThread::IsInputThread(CInputThread *this)
{
  CInputThread *v1; // rdi
  bool v2; // bl

  v1 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v2 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
