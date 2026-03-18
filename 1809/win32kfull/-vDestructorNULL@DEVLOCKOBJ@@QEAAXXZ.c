/*
 * XREFs of ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C02601B0
 * Callers:
 *     GreDrawStream @ 0x1C0047970 (GreDrawStream.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C025F3FC (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C0057A10 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0057D00 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

void __fastcall DEVLOCKOBJ::vDestructorNULL(DEVLOCKOBJ *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 ThreadWin32Thread; // rax
  int v5; // eax
  __int64 v6; // rdx

  DEVLOCKOBJ::bDisposeTrgDco(this);
  v2 = *((_DWORD *)this + 6);
  if ( (v2 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
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
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = *((_DWORD *)this + 6);
  if ( (v5 & 8) != 0 )
    *((_DWORD *)this + 6) = v5 & 0xFFFFFFF7;
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v6);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  UntrapAppContainerRenderingWorker(
    (HDC *)this + 12,
    (HSURF *)this + 11,
    (HSURF *)this + 10,
    (const unsigned int *)this + 7);
}
