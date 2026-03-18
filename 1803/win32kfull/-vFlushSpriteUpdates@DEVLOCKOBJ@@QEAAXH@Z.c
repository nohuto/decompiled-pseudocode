/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C008F138
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008C4A0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C008A810 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKOBJ::vFlushSpriteUpdates(DEVLOCKOBJ *this, int a2)
{
  struct XDCOBJ *v2; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx

  v2 = (DEVLOCKOBJ *)((char *)this + 32);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    if ( a2 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        if ( (*(_DWORD *)(v4 + 44) & 1) == 0 )
        {
          SURFACE::bUnMap(*(SURFACE **)(v4 + 504), this, (struct DC *)v4);
          v4 = *((_QWORD *)this + 4);
        }
        *(_DWORD *)(v4 + 44) &= ~1u;
        v6 = *(_QWORD *)v2;
        if ( (*(_DWORD *)(*(_QWORD *)v2 + 36LL) & 0x4000) != 0 && *(_QWORD *)(v6 + 480) && *(_DWORD *)(v6 + 496) )
          GreUpdateSpriteDevLockEnd(v2, *((_DWORD *)this + 6) & 0x400000);
      }
    }
    else
    {
      v5 = *(_DWORD *)(v4 + 36);
      if ( (v5 & 0x4000) != 0 && (v5 & 0x40) != 0 && *(_QWORD *)(v4 + 480) )
      {
        if ( *(_DWORD *)(v4 + 496) )
        {
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(*(_QWORD *)(v4 + 504) + 272LL));
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(*(_QWORD *)(*(_QWORD *)v2 + 504LL) + 272LL));
        }
      }
    }
  }
}
