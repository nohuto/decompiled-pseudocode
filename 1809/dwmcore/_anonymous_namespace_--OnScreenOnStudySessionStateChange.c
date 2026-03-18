/*
 * XREFs of _anonymous_namespace_::OnScreenOnStudySessionStateChange @ 0x18007BA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::OnScreenOnStudySessionStateChange(__int128 *a1)
{
  DWORD CurrentThreadId; // eax
  __int128 v3; // xmm0

  AcquireSRWLockExclusive(&SRWLock);
  CurrentThreadId = GetCurrentThreadId();
  byte_180307F38 = 1;
  dword_180308648 = CurrentThreadId;
  v3 = *a1;
  dword_180308648 = 0;
  xmmword_180307F40 = v3;
  ReleaseSRWLockExclusive(&SRWLock);
}
