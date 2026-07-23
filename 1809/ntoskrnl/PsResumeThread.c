/*
 * XREFs of PsResumeThread @ 0x1406779A0
 * Callers:
 *     NtResumeThread @ 0x140677A20 (NtResumeThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x14080FFB8 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x140810BE0 (DbgkpWakeTarget.c)
 *     DbgkQueueUserExceptionReport @ 0x1408118BC (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140811AE0 (DbgkUserReportWorkRoutine.c)
 * Callees:
 *     KeResumeThread @ 0x1400F27A8 (KeResumeThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408BDDDC (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsResumeThread(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rdx
  int v6; // esi
  __int64 v7; // r8
  int v8; // ecx

  v4 = KeResumeThread(a1);
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  if ( v4 == 1 )
  {
    v7 = *(_QWORD *)(a1 + 544);
    v8 = *(_DWORD *)(v7 + 1740);
    if ( (v8 & 0x8000) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v7 + 1740), 0x8000u);
      v8 = *(_DWORD *)(v7 + 1740);
    }
    if ( (v8 & 0x100000) != 0 )
      EtwTiLogSuspendResumeThread(0LL, CurrentThread, a1, 0LL);
  }
  if ( a2 )
    *a2 = v6;
  return 0LL;
}
