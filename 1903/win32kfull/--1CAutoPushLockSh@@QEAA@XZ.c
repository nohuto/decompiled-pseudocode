/*
 * XREFs of ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01DB0F4
 * Callers:
 *     InternalSetTimer @ 0x1C00AB650 (InternalSetTimer.c)
 *     FreezeThawTimers @ 0x1C0115910 (FreezeThawTimers.c)
 *     SetProcessTimerDelay @ 0x1C01EBF50 (SetProcessTimerDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoPushLockSh::~CAutoPushLockSh(CAutoPushLockSh *this)
{
  ExReleasePushLockSharedEx(*(_QWORD *)this, 0LL);
  KeLeaveCriticalRegion();
}
