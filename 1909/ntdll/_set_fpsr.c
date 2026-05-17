/*
 * XREFs of _set_fpsr @ 0x180096DB0
 * Callers:
 *     _control87 @ 0x18009495C (_control87.c)
 *     _ctrlfp @ 0x180095DA4 (_ctrlfp.c)
 *     _set_statfp @ 0x180095E28 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
