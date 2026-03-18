/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0022CF8
 * Callers:
 *     GreGetClipBox @ 0x1C00197D0 (GreGetClipBox.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0049C10 (pProcessDfbSurfacesInternal.c)
 *     GreGetNearestColor @ 0x1C005CCA0 (GreGetNearestColor.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00C1054 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00C1DA0 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C00D820C (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C00D9BA0 (GreIntersectVisRect.c)
 * Callees:
 *     GreDecLockCount @ 0x1C001F9F0 (GreDecLockCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rdx
  struct _ERESOURCE *v5; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rax

  if ( (int)IsDEVLOCKOBJ_bDisposeTrgDcoSupported() >= 0 )
    DEVLOCKOBJ_bDisposeTrgDcoWrap(this);
  v2 = *((_DWORD *)this + 6);
  if ( (v2 & 0x1000) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      --*(_DWORD *)(ThreadWin32Thread + 104);
    *((_DWORD *)this + 6) &= ~0x1000u;
    v7 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v7 )
    {
      *(_QWORD *)(v7 + 320) = 0LL;
      *(_QWORD *)(v7 + 312) = 0LL;
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
    UntrapAppContainerRenderingWrap((char *)this + 64, (char *)this + 56, (char *)this + 48, (char *)this + 28);
}
