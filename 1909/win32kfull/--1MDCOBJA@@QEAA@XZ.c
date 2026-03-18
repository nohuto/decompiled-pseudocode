/*
 * XREFs of ??1MDCOBJA@@QEAA@XZ @ 0x1C016618C
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00CCC00 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00CD178 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall MDCOBJA::~MDCOBJA(__int64 **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
}
