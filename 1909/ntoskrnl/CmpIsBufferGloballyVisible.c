/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x140651798
 * Callers:
 *     CmpBounceContextStart @ 0x1406002B0 (CmpBounceContextStart.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406003F0 (CmpDoesBufferRequireCapturing.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400C6CC0 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  return a1 > 0x7FFFFFFEFFFFLL && !MmIsSessionAddress(a1);
}
