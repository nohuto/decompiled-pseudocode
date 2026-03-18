/*
 * XREFs of ReferenceW32Process @ 0x1C019757C
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C010B9B4 (xxxWaitForInputIdle.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall ReferenceW32Process(__int64 a1)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(*(PVOID *)a1);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
