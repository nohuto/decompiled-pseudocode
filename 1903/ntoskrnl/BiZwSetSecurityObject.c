/*
 * XREFs of BiZwSetSecurityObject @ 0x140177AB4
 * Callers:
 *     BiCreateKey @ 0x14073D35C (BiCreateKey.c)
 *     BiOpenKey @ 0x14073DB30 (BiOpenKey.c)
 *     BiCloseKey @ 0x14073DCB4 (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1401C34F0 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
