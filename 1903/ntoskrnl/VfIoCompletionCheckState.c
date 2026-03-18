/*
 * XREFs of VfIoCompletionCheckState @ 0x14096771C
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140963860 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfIoCompletionCheckState(unsigned int *Entry, ULONG_PTR a2)
{
  unsigned __int8 v4; // cl

  if ( (MmVerifierData & 0x10) != 0 )
  {
    v4 = *(_BYTE *)Entry;
    if ( v4 != KeGetCurrentIrql() )
      VerifierBugCheckIfAppropriate(0xC4u, 0xFAuLL, a2, v4, KeGetCurrentIrql());
  }
  if ( (MmVerifierData & 0x10) != 0 && Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
    VerifierBugCheckIfAppropriate(0xC4u, 0xFBuLL, a2, KeGetCurrentThread()->CombinedApcDisable, Entry[1]);
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
