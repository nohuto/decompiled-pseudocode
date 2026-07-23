/*
 * XREFs of BiQueryBootEntryOrder @ 0x1408F55A4
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1408F3144 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1408F322C (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x1408F4948 (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1408F5750 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x1401BA9F0 (ZwQueryBootEntryOrder.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiReleasePrivilege @ 0x140712744 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140712794 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140715354 (BiLogMessage.c)
 */

__int64 __fastcall BiQueryBootEntryOrder(ULONG **a1, ULONG *a2)
{
  ULONG *v2; // rdi
  NTSTATUS v5; // ebx
  ULONG *PoolWithTag; // rax
  ULONG Count; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0LL;
  Count = 0;
  v5 = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryBootEntryOrder(0LL, &Count);
    if ( v5 != -1073741789 )
      goto LABEL_6;
    PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, 4LL * Count, 0x4B444342u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
LABEL_10:
      BiReleasePrivilege(&v9);
      return (unsigned int)v5;
    }
    v5 = ZwQueryBootEntryOrder(PoolWithTag, &Count);
    if ( v5 < 0 )
    {
LABEL_6:
      BiLogMessage(4LL, L"Failed to query boot entry order. Status: %x", (unsigned int)v5);
      if ( v5 < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_10;
      }
    }
    *a2 = Count;
    *a1 = v2;
    goto LABEL_10;
  }
  return (unsigned int)v5;
}
