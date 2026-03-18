/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C01186F4
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00AD7B0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C011869C (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00AED20 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKOBJ::vFlushSpriteUpdates(DEVLOCKOBJ *this, int a2)
{
  struct XDCOBJ *v2; // rdi
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rbx

  v2 = (DEVLOCKOBJ *)((char *)this + 32);
  v4 = *((_QWORD *)this + 4);
  if ( v4 && *((_BYTE *)this + 49) )
  {
    if ( a2 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        v5 = *((_QWORD *)this + 4);
        if ( (*(_DWORD *)(v4 + 44) & 1) == 0 && *(_QWORD *)(v4 + 496) )
        {
          SURFACE::bUnMap(*(SURFACE **)(v4 + 496), this, (struct DC *)v4);
          v5 = *((_QWORD *)this + 4);
        }
        *(_DWORD *)(v5 + 44) &= ~1u;
        v6 = *(_QWORD *)v2;
        if ( (*(_DWORD *)(*(_QWORD *)v2 + 36LL) & 0x4000) != 0 && *(_QWORD *)(v6 + 472) )
        {
          if ( *(_DWORD *)(v6 + 488) )
            GreUpdateSpriteDevLockEnd(v2, *((_DWORD *)this + 6) & 0x400000);
        }
      }
    }
    else
    {
      v7 = *(_DWORD *)(v4 + 36);
      if ( (v7 & 0x4000) != 0 && (v7 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(v4 + 472) )
        {
          if ( *(_DWORD *)(v4 + 488) )
          {
            v8 = *(_QWORD *)(v4 + 496);
            if ( v8 )
            {
              W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v8 + 272));
              W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v8 + 272));
            }
          }
        }
      }
    }
  }
}
