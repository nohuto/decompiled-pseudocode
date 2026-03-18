/*
 * XREFs of _set_fpsr @ 0x1C0079AE0
 * Callers:
 *     _ctrlfp @ 0x1C0079A14 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0079A98 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
