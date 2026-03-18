/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0062FE8
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0062450 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00730A8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0133FFC (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0270CC4 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0270D68 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0064660 (-vClearRendering@DC@@QEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, DC **a2, __int64 a3, __int64 a4)
{
  DC *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  v6 = *a2;
  if ( *a2 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 13);
      if ( !v7
        || !*((_BYTE *)this + 121)
        || (v8 = (_QWORD *)*((_QWORD *)this + 10)) == 0LL
        || !*((_BYTE *)this + 97)
        || *v7 != *v8 )
      {
        v9 = *((_DWORD *)v6 + 9);
        if ( (v9 & 0x200) != 0 )
        {
          if ( (v9 & 0x4000) == 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v7, a3, a4) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
              {
                v12 = *ThreadWin32Thread;
                if ( v12 )
                  *(_DWORD *)(v12 + 328) &= ~1u;
              }
            }
          }
          v13 = (_QWORD *)*((_QWORD *)this + 10);
          if ( v13 && *((_BYTE *)this + 97) && *(_QWORD *)*a2 == *v13 && !*((_QWORD *)this + 17)
            || (v14 = (_QWORD *)*((_QWORD *)this + 13)) != 0LL
            && *((_BYTE *)this + 121)
            && *(_QWORD *)*a2 == *v14
            && !*((_QWORD *)this + 20) )
          {
            GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
            DC::vClearRendering(*a2);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
            GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          }
        }
      }
    }
  }
}
