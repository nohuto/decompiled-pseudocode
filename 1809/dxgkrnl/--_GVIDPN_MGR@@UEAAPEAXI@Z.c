/*
 * XREFs of ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C004D0F0
 * Callers:
 *     ??_EVIDPN_MGR@@WBA@EAAPEAXI@Z @ 0x1C00233F0 (--_EVIDPN_MGR@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C004C4C4 (--1VIDPN_MGR@@UEAA@XZ.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::`scalar deleting destructor'(VIDPN_MGR *P, char a2)
{
  VIDPN_MGR::~VIDPN_MGR(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
