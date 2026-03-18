/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C02706C4
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0274FE8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00AED20 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vFlushSpriteUpdates(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v2; // rcx
  __int64 v3; // r8
  int v4; // edx

  v2 = (DEVLOCKBLTOBJ *)((char *)this + 80);
  v3 = *(_QWORD *)v2;
  if ( *(_QWORD *)v2 )
  {
    if ( *((_BYTE *)v2 + 17) )
    {
      v4 = *((_DWORD *)this + 18);
      if ( (v4 & 0x1000) != 0 && (*(_DWORD *)(v3 + 36) & 0x4000) != 0 && *(_QWORD *)(v3 + 472) )
      {
        if ( *(_DWORD *)(v3 + 488) )
          GreUpdateSpriteDevLockEnd(v2, v4 & 0x400000);
      }
    }
  }
}
