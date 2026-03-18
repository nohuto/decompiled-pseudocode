/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C009B318
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0243EB4 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C008A810 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vFlushSpriteUpdates(DEVLOCKBLTOBJ *this)
{
  __int64 v1; // r8
  int v2; // edx

  v1 = *((_QWORD *)this + 10);
  if ( v1 )
  {
    v2 = *((_DWORD *)this + 18);
    if ( (v2 & 0x1000) != 0 && (*(_DWORD *)(v1 + 36) & 0x4000) != 0 && *(_QWORD *)(v1 + 480) )
    {
      if ( *(_DWORD *)(v1 + 496) )
        GreUpdateSpriteDevLockEnd((DEVLOCKBLTOBJ *)((char *)this + 80), v2 & 0x400000);
    }
  }
}
