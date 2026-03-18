/*
 * XREFs of ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01DAF74
 * Callers:
 *     InternalSetTimer @ 0x1C004C470 (InternalSetTimer.c)
 *     FreezeThawTimers @ 0x1C00F0B30 (FreezeThawTimers.c)
 *     SetProcessTimerDelay @ 0x1C01EBDD0 (SetProcessTimerDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoPushLockSh::~CAutoPushLockSh(CAutoPushLockSh *this, __int64 a2, __int64 a3, __int64 a4)
{
  ExReleasePushLockSharedEx(*(_QWORD *)this, 0LL, a3, a4);
  KeLeaveCriticalRegion();
}
