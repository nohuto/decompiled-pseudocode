/*
 * XREFs of MiLockNestedVad @ 0x14089B8A0
 * Callers:
 *     MiFreeVadRange @ 0x1400ABCD8 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiUpControlAreaRefs @ 0x1402BA800 (MiUpControlAreaRefs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockNestedVad(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
}
