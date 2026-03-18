/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0022CBC
 * Callers:
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00224D8 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0022520 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0022C48 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
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
