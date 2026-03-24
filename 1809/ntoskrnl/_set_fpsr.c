/*
 * XREFs of _set_fpsr @ 0x14019A330
 * Callers:
 *     _ctrlfp @ 0x14019A254 (_ctrlfp.c)
 *     _set_statfp @ 0x14019A2D8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
