/*
 * XREFs of _set_fpsr @ 0x180099E70
 * Callers:
 *     _control87 @ 0x180097A24 (_control87.c)
 *     _ctrlfp @ 0x180098E70 (_ctrlfp.c)
 *     _set_statfp @ 0x180098EF4 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
