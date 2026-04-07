/*
 * XREFs of ?GetStride@CCompoundBitmapLock@@W7EAAJPEAI@Z @ 0x18004FE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompoundBitmapLock::GetStride(__int64 a1, unsigned int *a2)
{
  return CCompoundBitmapLock::GetStride((CCompoundBitmapLock *)(a1 - 8), a2);
}
