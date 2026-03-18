/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C011DDA0
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C025BFE8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00591F0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vFlushSpriteUpdates(DEVLOCKBLTOBJ *this)
{
  __int64 v1; // r8
  int v2; // edx

  v1 = *((_QWORD *)this + 15);
  if ( v1 )
  {
    v2 = *((_DWORD *)this + 28);
    if ( (v2 & 0x1000) != 0 && (*(_DWORD *)(v1 + 36) & 0x4000) != 0 && *(_QWORD *)(v1 + 472) )
    {
      if ( *(_DWORD *)(v1 + 488) )
        GreUpdateSpriteDevLockEnd((DEVLOCKBLTOBJ *)((char *)this + 120), v2 & 0x400000);
    }
  }
}
