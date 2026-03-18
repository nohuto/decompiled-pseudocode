/*
 * XREFs of _set_fpsr @ 0x1401A4BA0
 * Callers:
 *     _ctrlfp @ 0x1401A4AC0 (_ctrlfp.c)
 *     _set_statfp @ 0x1401A4B44 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
