/*
 * XREFs of ??1MDCOBJ@@QEAA@XZ @ 0x1C013CDFC
 * Callers:
 *     NtGdiResizePalette @ 0x1C0287F00 (NtGdiResizePalette.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall MDCOBJ::~MDCOBJ(MDCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
