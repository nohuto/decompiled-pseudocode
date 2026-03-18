/*
 * XREFs of KiGetGdtIdt @ 0x14034A7B0
 * Callers:
 *     sub_1401A1720 @ 0x1401A1720 (sub_1401A1720.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140332010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     <none>
 */

void __fastcall KiGetGdtIdt(void *a1, void *a2)
{
  __sgdt(a1);
  __sidt(a2);
}
