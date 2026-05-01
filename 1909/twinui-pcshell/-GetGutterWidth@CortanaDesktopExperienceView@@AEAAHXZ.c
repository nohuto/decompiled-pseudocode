/*
 * XREFs of ?GetGutterWidth@CortanaDesktopExperienceView@@AEAAHXZ @ 0x1800446C0
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180041304 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1801EE394 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaDesktopExperienceView::GetGutterWidth(CortanaDesktopExperienceView *this)
{
  if ( (unsigned int)(*((_DWORD *)this + 35) - 3) <= 1 || *((_DWORD *)this + 62) == 2 )
    return 0LL;
  else
    return *((_BYTE *)this + 253) != 0 ? 56 : 48;
}
