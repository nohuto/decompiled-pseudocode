/*
 * XREFs of ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800A79D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000B580 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800AAC40 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 */

void __fastcall CVirtualDesktopSwitch::Destroy(CVirtualDesktopSwitch *this)
{
  CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents(this);
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}
