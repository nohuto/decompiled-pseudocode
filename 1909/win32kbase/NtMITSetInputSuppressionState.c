/*
 * XREFs of NtMITSetInputSuppressionState @ 0x1C0112700
 * Callers:
 *     <none>
 * Callees:
 *     SetUMInputSuppressionState @ 0x1C0182704 (SetUMInputSuppressionState.c)
 */

__int64 __fastcall NtMITSetInputSuppressionState(unsigned int a1, unsigned int a2, unsigned int a3)
{
  CInputThread *v3; // rsi
  unsigned int CurrentThreadId; // eax
  int v8; // ebx
  unsigned int v9; // edi

  v3 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v8 = *((_DWORD *)v3 + 10);
  v9 = CurrentThreadId;
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 == v8 )
    return SetUMInputSuppressionState(a1, a2, a3);
  else
    return 3221225506LL;
}
