/*
 * XREFs of ??1SPRITELOCK@@QEAA@XZ @ 0x1C002A260
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01016DC (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SPRITELOCK::~SPRITELOCK(SPRITELOCK *this)
{
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    if ( ghsemSprite )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
      PsLeavePriorityRegion();
    }
  }
}
