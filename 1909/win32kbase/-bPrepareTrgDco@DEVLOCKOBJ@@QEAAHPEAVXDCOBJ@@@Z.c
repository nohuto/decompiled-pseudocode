/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C002C9D8
 * Callers:
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C8A0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C998 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009A2D0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00AE4E4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DEVLOCKOBJ::bPrepareTrgDco(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported() < 0 )
    return 0LL;
  else
    return DEVLOCKOBJ_bPrepareTrgDcoWrap(this, a2);
}
