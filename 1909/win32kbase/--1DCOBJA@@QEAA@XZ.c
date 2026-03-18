/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C00BBF58
 * Callers:
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C001D5B0 (GreGetBounds.c)
 *     ReleaseCacheDC @ 0x1C00200C0 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0020A50 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0017C6C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(__int64 **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
}
