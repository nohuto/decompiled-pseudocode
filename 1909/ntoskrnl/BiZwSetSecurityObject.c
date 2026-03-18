/*
 * XREFs of BiZwSetSecurityObject @ 0x1401781A4
 * Callers:
 *     BiCreateKey @ 0x14073F25C (BiCreateKey.c)
 *     BiOpenKey @ 0x14073FA30 (BiOpenKey.c)
 *     BiCloseKey @ 0x14073FBB4 (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1401C4070 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
