/*
 * XREFs of _ctrlfp @ 0x180095DA4
 * Callers:
 *     fabs @ 0x1800904D0 (fabs.c)
 *     _call_matherr @ 0x180094C30 (_call_matherr.c)
 *     _handle_error @ 0x180094D5C (_handle_error.c)
 *     _except1 @ 0x180095440 (_except1.c)
 *     _handle_qnan1 @ 0x1800957A8 (_handle_qnan1.c)
 *     _umatherr @ 0x180095AF4 (_umatherr.c)
 * Callees:
 *     _set_fpsr @ 0x180096DB0 (_set_fpsr.c)
 *     _get_fpsr @ 0x1800A3A50 (_get_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a2 & a1 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_18015FF20 && (((unsigned __int8)(a2 & a1) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    set_fpsr(v5);
  else
    set_fpsr((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}
