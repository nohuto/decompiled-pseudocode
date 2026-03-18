/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0021C14
 * Callers:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00273C8 (--1DCOBJA@@QEAA@XZ.c)
 *     DestroyCacheDC @ 0x1C0045330 (DestroyCacheDC.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C006322C (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00632B8 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreMarkDCUnreadable @ 0x1C0099698 (GreMarkDCUnreadable.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C00ABAD0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C001DC90 (bDeleteDCInternalEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(struct OBJECT **this)
{
  HmgDecrementShareReferenceCountEx(*this);
}
