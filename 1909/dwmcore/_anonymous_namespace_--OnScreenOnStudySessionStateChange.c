/*
 * XREFs of _anonymous_namespace_::OnScreenOnStudySessionStateChange @ 0x1800E7350
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
  byte_180339CE0 = 1;
  dword_18033D520 = CurrentThreadId;
  v3 = *a1;
  dword_18033D520 = 0;
  xmmword_180339D20 = v3;
  ReleaseSRWLockExclusive(&SRWLock);
}
