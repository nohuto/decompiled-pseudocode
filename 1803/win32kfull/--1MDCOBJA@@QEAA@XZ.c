/*
 * XREFs of ??1MDCOBJA@@QEAA@XZ @ 0x1C0139274
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0008900 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreSetPaletteEntries @ 0x1C0287A50 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C0287F00 (NtGdiResizePalette.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FD94 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall MDCOBJA::~MDCOBJA(MDCOBJA *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vAltUnlockFast(this);
}
