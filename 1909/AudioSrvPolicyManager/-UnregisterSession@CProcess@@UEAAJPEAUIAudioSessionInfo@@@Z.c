/*
 * XREFs of ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800125F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x1800064B8 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 */

__int64 __fastcall CProcess::UnregisterSession(struct _RTL_CRITICAL_SECTION *this, struct IAudioSessionInfo *a2)
{
  if ( a2 )
    return CWindowsPolicyManager::UnregisterSession(this, (struct CProcess *)&this[-1].LockSemaphore, a2);
  else
    return 2147942487LL;
}
