/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00ACE88
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00EE354 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C010EB44 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C02705B4 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0270658 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00AEA20 (-vClearRendering@DC@@QEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, DC **a2, __int64 a3)
{
  DC *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  int v8; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax

  v5 = *a2;
  if ( *a2 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 13);
      if ( !v6
        || !*((_BYTE *)this + 121)
        || (v7 = (_QWORD *)*((_QWORD *)this + 10)) == 0LL
        || !*((_BYTE *)this + 97)
        || *v6 != *v7 )
      {
        v8 = *((_DWORD *)v5 + 9);
        if ( (v8 & 0x200) != 0 )
        {
          if ( (v8 & 0x4000) == 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( !(unsigned int)IsThreadCrossSessionAttached(v5, v6, a3) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
              {
                v11 = *ThreadWin32Thread;
                if ( v11 )
                  *(_DWORD *)(v11 + 328) &= ~1u;
              }
            }
          }
          v12 = (_QWORD *)*((_QWORD *)this + 10);
          if ( v12 && *((_BYTE *)this + 97) && *(_QWORD *)*a2 == *v12 && !*((_QWORD *)this + 17)
            || (v13 = (_QWORD *)*((_QWORD *)this + 13)) != 0LL
            && *((_BYTE *)this + 121)
            && *(_QWORD *)*a2 == *v13
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
