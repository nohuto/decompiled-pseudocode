/*
 * XREFs of ViIoCallbackSnapState @ 0x140929144
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1409246E0 (IovpLocalCompletionRoutine.c)
 *     VfFastIoSnapState @ 0x14092904C (VfFastIoSnapState.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 */

_DWORD *ViIoCallbackSnapState()
{
  _DWORD *result; // rax
  unsigned __int8 CurrentIrql; // cl

  result = ExAllocateFromNPagedLookasideList(&ViIoCallbackStateLookaside);
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)result = CurrentIrql;
    result[1] = KeGetCurrentThread()->WaitBlock[3].SpareLong;
  }
  return result;
}
