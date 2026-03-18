/*
 * XREFs of ??1DISPLAY_CALLOUT_ENTRY@@QEAA@XZ @ 0x1C02406F4
 * Callers:
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C0041F50 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DISPLAY_CALLOUT_ENTRY::~DISPLAY_CALLOUT_ENTRY(DISPLAY_CALLOUT_ENTRY *this, __int64 a2)
{
  if ( *((_BYTE *)this + 21) )
    _InterlockedDecrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 370);
}
