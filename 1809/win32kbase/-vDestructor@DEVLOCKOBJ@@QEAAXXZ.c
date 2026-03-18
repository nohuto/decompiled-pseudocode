/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001C89C
 * Callers:
 *     GreGetNearestColor @ 0x1C0013600 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x1C001C680 (GreGetClipBox.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001C878 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00A03D0 (pProcessDfbSurfacesInternal.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00F8214 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C01061E4 (GreSetMagicColors.c)
 * Callees:
 *     GreDecLockCount @ 0x1C00242C0 (GreDecLockCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rdx
  struct _ERESOURCE *v5; // rcx
  __int64 ThreadWin32Thread; // rax

  if ( (int)IsDEVLOCKOBJ_bDisposeTrgDcoSupported() >= 0 )
    DEVLOCKOBJ_bDisposeTrgDcoWrap(this);
  v2 = *((_DWORD *)this + 6);
  if ( (v2 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  else if ( (v2 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion();
    }
  }
  v3 = *((_DWORD *)this + 6);
  if ( (v3 & 8) != 0 )
    *((_DWORD *)this + 6) = v3 & 0xFFFFFFF7;
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v4);
    v5 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v5 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v5);
      PsLeavePriorityRegion();
    }
  }
  if ( (int)IsUntrapAppContainerRenderingSupported() >= 0 )
    UntrapAppContainerRenderingWrap((char *)this + 96, (char *)this + 88, (char *)this + 80, (char *)this + 28);
}
