/*
 * XREFs of RIMIsInteractiveCtrl @ 0x1C0094A78
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C004DE5C (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C011BD08 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C011D6F4 (RIMIDECreateHIDDesc.c)
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
