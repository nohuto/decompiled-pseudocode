/*
 * XREFs of CmpFreePostBlock @ 0x14069504C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405CE180 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1405CF040 (CmpNotifyChangeKey.c)
 *     CmpPostNotify @ 0x1405DC29C (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1405F917C (CmNotifyRunDown.c)
 *     CmpDeleteKeyObject @ 0x14063F520 (CmpDeleteKeyObject.c)
 *     CmpPostApc @ 0x140694C10 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x140694FB4 (CmpSignalDeferredPosts.c)
 *     CmpFreeSubordinatePost @ 0x1406950A0 (CmpFreeSubordinatePost.c)
 *     CmpPostApcRunDown @ 0x140801010 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400C1040 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreePostBlock(PVOID P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 6);
  if ( v2 )
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)(v2 + 16));
    ExFreePoolWithTag(*((PVOID *)P + 6), 0);
  }
  if ( (*((_DWORD *)P + 14) & 0x10000) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 8), 0);
  ExFreePoolWithTag(P, 0);
}
