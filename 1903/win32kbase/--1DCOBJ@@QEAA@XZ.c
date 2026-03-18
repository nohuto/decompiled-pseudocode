/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C00BDBB4
 * Callers:
 *     hdcOpenDCW @ 0x1C003BC90 (hdcOpenDCW.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C003F9F0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00200C0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}
