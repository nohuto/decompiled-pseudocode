/*
 * XREFs of ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01AA880
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C01D54B0 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01D4E34 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 */

void __fastcall MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(struct tagMENUSTATE **this)
{
  struct tagMENUSTATE *v1; // rcx

  v1 = *this;
  if ( v1 )
    xxxUnlockMenuStateInternal(v1, 0);
}
