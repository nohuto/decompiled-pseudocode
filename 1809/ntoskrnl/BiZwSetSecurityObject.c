/*
 * XREFs of BiZwSetSecurityObject @ 0x14016E5BC
 * Callers:
 *     BiCreateKey @ 0x140713004 (BiCreateKey.c)
 *     BiOpenKey @ 0x1407137A0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140713910 (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1401BB570 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
