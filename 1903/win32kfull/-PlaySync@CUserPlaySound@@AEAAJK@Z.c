/*
 * XREFs of ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C0109130
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     xxxPlayEventSound @ 0x1C0128710 (xxxPlayEventSound.c)
 *     PostPlaySoundMessage @ 0x1C01325E0 (PostPlaySoundMessage.c)
 *     xxxMessageBeep @ 0x1C015AAA0 (xxxMessageBeep.c)
 * Callees:
 *     PlaySoundPostMessage @ 0x1C036B008 (PlaySoundPostMessage.c)
 */

__int64 __fastcall CUserPlaySound::PlaySync(RPC_BINDING_HANDLE *this)
{
  char *v1; // rdi
  unsigned int v3; // esi

  v1 = (char *)(this + 1);
  v3 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  if ( *this )
    v3 = PlaySoundPostMessage(*this);
  if ( v1 )
  {
    ExReleasePushLockSharedEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
