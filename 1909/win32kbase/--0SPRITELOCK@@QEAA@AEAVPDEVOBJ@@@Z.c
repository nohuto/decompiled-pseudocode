/*
 * XREFs of ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002C2F0
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C012781C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C002C420 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     McTemplateK0pqz @ 0x1C012FEB8 (McTemplateK0pqz.c)
 */

SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2)
{
  int v4; // edx
  int v5; // ecx
  __int64 ThreadWin32Thread; // rbx
  int v7; // r8d
  struct _ERESOURCE *v8; // rbx

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || !(unsigned int)PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 88LL;
    v8 = ghsemSprite;
    if ( ghsemSprite )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
    }
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz(v5, v4, v7, (_DWORD)ghsemSprite, 5, (__int64)L"ghsemSprite");
  }
  return this;
}
