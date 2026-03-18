/*
 * XREFs of ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00E31E0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     xxxPlayEventSound @ 0x1C01037C0 (xxxPlayEventSound.c)
 *     PostPlaySoundMessage @ 0x1C010D0E0 (PostPlaySoundMessage.c)
 *     xxxMessageBeep @ 0x1C015BA50 (xxxMessageBeep.c)
 * Callees:
 *     PlaySoundPostMessage @ 0x1C0368008 (PlaySoundPostMessage.c)
 */

__int64 __fastcall CUserPlaySound::PlaySync(RPC_BINDING_HANDLE *this)
{
  char *v1; // rdi
  unsigned int v3; // esi
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = (char *)(this + 1);
  v3 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  if ( *this )
    v3 = PlaySoundPostMessage(*this);
  if ( v1 )
  {
    ExReleasePushLockSharedEx(v1, 0LL, v4, v5);
    KeLeaveCriticalRegion();
  }
  return v3;
}
