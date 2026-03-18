/*
 * XREFs of ??1MDCOBJA@@QEAA@XZ @ 0x1C0164BEC
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00EE010 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00EE3F4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall MDCOBJA::~MDCOBJA(__int64 **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
}
