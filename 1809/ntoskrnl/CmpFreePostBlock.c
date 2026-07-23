/*
 * XREFs of CmpFreePostBlock @ 0x1406961EC
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405CF180 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1405D0040 (CmpNotifyChangeKey.c)
 *     CmpPostNotify @ 0x1405DD29C (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1405FA17C (CmNotifyRunDown.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     CmpPostApc @ 0x140695DB0 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x140696154 (CmpSignalDeferredPosts.c)
 *     CmpFreeSubordinatePost @ 0x140696240 (CmpFreeSubordinatePost.c)
 *     CmpPostApcRunDown @ 0x1408021F0 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
