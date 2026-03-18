/*
 * XREFs of RIMIsInteractiveCtrl @ 0x1C00A859C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00AE4FC (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0144678 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0148AD8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsInteractiveCtrl(_WORD *a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1[1] != 1 || *a1 != 14 )
    return 0LL;
  return result;
}
