/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C00273C8
 * Callers:
 *     GreGetBounds @ 0x1C0026520 (GreGetBounds.c)
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     GreValidateVisrgn @ 0x1C0027468 (GreValidateVisrgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0027DBC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x1C0029E90 (GreSelectVisRgnShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C002A080 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C002A550 (GreIsRendering.c)
 *     GreSetDCOrg @ 0x1C006AE40 (GreSetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C00760E0 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C009D9C0 (GreCopyVisRgn.c)
 *     GreIntersectVisRect @ 0x1C0107810 (GreIntersectVisRect.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0021C14 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 */

void __fastcall DCOBJA::~DCOBJA(struct OBJECT **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
  PopThreadGuardedObject(this + 2);
}
