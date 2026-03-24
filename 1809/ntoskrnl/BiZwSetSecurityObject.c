/*
 * XREFs of BiZwSetSecurityObject @ 0x14016E5DC
 * Callers:
 *     BiCreateKey @ 0x140712FE4 (BiCreateKey.c)
 *     BiOpenKey @ 0x140713780 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407138F0 (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1401BB590 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
