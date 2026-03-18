/*
 * XREFs of ?GetDataPointer@CBitmapLock@@W7EAAJPEAIPEAPEAE@Z @ 0x1800F12F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::GetDataPointer(__int64 a1, unsigned int *a2, unsigned __int8 **a3)
{
  return CBitmapLock::GetDataPointer((CBitmapLock *)(a1 - 8), a2, a3);
}
