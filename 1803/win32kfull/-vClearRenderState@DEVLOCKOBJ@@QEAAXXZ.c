/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F01C
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C008C2A0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     NtGdiGetPixel @ 0x1C008EAD0 (NtGdiGetPixel.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C008EFD0 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008F840 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 6);
    if ( (v3 & 0x801000) != 0 )
    {
      *(_DWORD *)(v1 + 40) &= ~2u;
      v3 = *((_DWORD *)this + 6);
    }
    if ( (v3 & 0x1000) != 0 && (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x200) != 0 )
    {
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
      if ( !*((_QWORD *)this + 6) )
        DC::vClearRendering(*((DC **)this + 4));
      if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v5, v4) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            v8 = *ThreadWin32Thread;
            if ( v8 )
              *(_BYTE *)(v8 + 328) = 0;
          }
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
  }
}
