/*
 * XREFs of ?bEfToL@EFLOAT@@QEAAHAEAJ@Z @ 0x1C0252790
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C014349C (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 */

__int64 __fastcall EFLOAT::bEfToL(EFLOAT *this, int *a2)
{
  return bFToL(*(float *)this, a2, 6u);
}
