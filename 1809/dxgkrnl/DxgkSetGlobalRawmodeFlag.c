/*
 * XREFs of DxgkSetGlobalRawmodeFlag @ 0x1C023BBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00C99D0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z @ 0x1C028AC04 (-SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkSetGlobalRawmodeFlag(__int64 a1)
{
  bool v1; // bl
  CCD_BTL *v2; // rax

  v1 = (_BYTE)a1 != 0;
  v2 = CCD_BTL::Global(a1);
  return CCD_BTL::SetUnsupportedMonitorModesFlag(v2, v1);
}
