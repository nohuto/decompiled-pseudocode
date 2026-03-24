/*
 * XREFs of _ctrlfp @ 0x14019A254
 * Callers:
 *     _call_matherr @ 0x1401998CC (_call_matherr.c)
 *     _handle_error @ 0x1401999F8 (_handle_error.c)
 *     _handle_errorf @ 0x140199B28 (_handle_errorf.c)
 * Callees:
 *     _set_fpsr @ 0x14019A330 (_set_fpsr.c)
 *     _get_fpsr @ 0x1401C7270 (_get_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a2 & a1 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_140401EA4 && (((unsigned __int8)(a2 & a1) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    set_fpsr(v5);
  else
    set_fpsr((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}
