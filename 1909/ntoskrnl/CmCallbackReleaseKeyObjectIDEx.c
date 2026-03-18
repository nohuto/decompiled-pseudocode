/*
 * XREFs of CmCallbackReleaseKeyObjectIDEx @ 0x14066A890
 * Callers:
 *     <none>
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall CmCallbackReleaseKeyObjectIDEx(void *a1)
{
  CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
}
