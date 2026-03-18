/*
 * XREFs of CmpFreePostBlock @ 0x1406D113C
 * Callers:
 *     CmpSignalDeferredPosts @ 0x140603EF0 (CmpSignalDeferredPosts.c)
 *     CmNotifyRunDown @ 0x14060F400 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x14062FDF0 (CmpNotifyChangeKey.c)
 *     CmpPostNotify @ 0x140631680 (CmpPostNotify.c)
 *     CmpPostApc @ 0x1406D0FA0 (CmpPostApc.c)
 *     CmpFreeSubordinatePost @ 0x1406D1190 (CmpFreeSubordinatePost.c)
 *     CmpPostApcRunDown @ 0x140839BB0 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
