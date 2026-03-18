/*
 * XREFs of ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C02481F4
 * Callers:
 *     GreDrawStream @ 0x1C00A6FB0 (GreDrawStream.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0247588 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008F840 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008FE50 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
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
  UntrapAppContainerRendering((HDC *)this + 8, (HSURF *)this + 7, (HSURF *)this + 6, (unsigned int *)this + 7);
}
