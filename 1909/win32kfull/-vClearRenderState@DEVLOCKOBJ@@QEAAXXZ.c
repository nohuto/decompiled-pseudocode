/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A4850
 * Callers:
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00AAF2C (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C00AAF70 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00D2560 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00AEA20 (-vClearRendering@DC@@QEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax

  v2 = *((_QWORD *)this + 4);
  if ( v2 && *((_BYTE *)this + 49) && (*((_DWORD *)this + 6) & 0x1000) != 0 && (*(_DWORD *)(v2 + 36) & 0x200) != 0 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    if ( !*((_QWORD *)this + 7) )
      DC::vClearRendering(*((DC **)this + 4));
    if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v4, v3, v5) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v8 = *ThreadWin32Thread;
          if ( v8 )
            *(_DWORD *)(v8 + 328) &= ~1u;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
}
