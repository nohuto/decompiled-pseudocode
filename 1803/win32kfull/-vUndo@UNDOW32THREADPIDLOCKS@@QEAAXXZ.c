/*
 * XREFs of ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00E17FC
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00E11F0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C024D080 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

void __fastcall UNDOW32THREADPIDLOCKS::vUndo(UNDOW32THREADPIDLOCKS *this, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v5 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemSprite) )
        {
          v6 = *(__int64 **)(v5 + 312);
          *(_QWORD *)this = v6;
          v7 = *(_QWORD *)(v5 + 320);
          *((_DWORD *)this + 4) = 0;
          *((_DWORD *)this + 5) = 0;
          *((_QWORD *)this + 1) = v7;
          if ( v6 )
          {
            v8 = *v6;
            if ( (*(_DWORD *)(v8 + 36) & 0x4000) != 0 )
            {
              SURFACE::bUnMap(*(SURFACE **)(v8 + 504), 0LL, (struct DC *)v8);
              v7 = *((_QWORD *)this + 1);
              *((_DWORD *)this + 4) = 1;
            }
          }
          if ( v7 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)v7 + 36LL) & 0x4000) != 0 )
            {
              SURFACE::bUnMap(*(SURFACE **)(*(_QWORD *)v7 + 504LL), 0LL, 0LL);
              *((_DWORD *)this + 5) = 1;
            }
          }
        }
      }
    }
  }
}
