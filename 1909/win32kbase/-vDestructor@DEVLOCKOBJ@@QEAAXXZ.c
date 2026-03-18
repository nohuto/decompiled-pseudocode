/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0017A44
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0017A1C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreGetClipBox @ 0x1C0017FA0 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x1C00508E0 (GreGetNearestColor.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0069D50 (pProcessDfbSurfacesInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01216B4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0122540 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C012C72C (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C012CDA0 (NtGdiGetGammaRampCapability.c)
 *     GreSetMagicColors @ 0x1C012D79C (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C012F460 (GreIntersectVisRect.c)
 * Callees:
 *     GreDecLockCount @ 0x1C0024310 (GreDecLockCount.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
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
    UntrapAppContainerRenderingWrap((char *)this + 72, (char *)this + 64, (char *)this + 56, (char *)this + 28);
}
