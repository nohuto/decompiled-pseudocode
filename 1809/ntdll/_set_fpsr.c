/*
 * XREFs of _set_fpsr @ 0x180099E60
 * Callers:
 *     _control87 @ 0x180097A14 (_control87.c)
 *     _ctrlfp @ 0x180098E60 (_ctrlfp.c)
 *     _set_statfp @ 0x180098EE4 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
