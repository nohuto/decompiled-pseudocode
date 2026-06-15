/*
 * XREFs of ?GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAPEAUIAudioDuckingManager@@@Z @ 0x1800091C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetDuckingManager(
        CWindowsPolicyManager *this,
        struct IAudioDuckingManager **a2)
{
  *a2 = (struct IAudioDuckingManager *)((*((_QWORD *)this + 5) + 24LL) & -(__int64)(*((_QWORD *)this + 5) != 0LL));
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 5) + 8LL));
  return 0LL;
}
