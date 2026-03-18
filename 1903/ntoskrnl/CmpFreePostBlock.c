/*
 * XREFs of CmpFreePostBlock @ 0x1406D1ECC
 * Callers:
 *     CmpSignalDeferredPosts @ 0x1406023E0 (CmpSignalDeferredPosts.c)
 *     CmNotifyRunDown @ 0x14060D8F0 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x14062BFA0 (CmpNotifyChangeKey.c)
 *     CmpPostNotify @ 0x14062D830 (CmpPostNotify.c)
 *     CmpPostApc @ 0x1406D1D30 (CmpPostApc.c)
 *     CmpFreeSubordinatePost @ 0x1406D1F20 (CmpFreeSubordinatePost.c)
 *     CmpPostApcRunDown @ 0x14083A550 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
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
