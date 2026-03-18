/*
 * XREFs of IsPointerInputClientMessage @ 0x1C002E5B4
 * Callers:
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z @ 0x1C01CD500 (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputClientMessage(unsigned int a1)
{
  return a1 >= 0x245 && a1 <= 0x257 && a1 != 589;
}
