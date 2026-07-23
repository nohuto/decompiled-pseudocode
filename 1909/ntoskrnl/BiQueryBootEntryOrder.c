/*
 * XREFs of BiQueryBootEntryOrder @ 0x140931A34
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14092F59C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14092F684 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140930DA0 (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140931BE8 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x1401C3370 (ZwQueryBootEntryOrder.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x14074126C (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407412BC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiQueryBootEntryOrder(ULONG **a1, ULONG *a2)
{
  ULONG *v2; // rdi
  NTSTATUS v5; // ebx
  ULONG *PoolWithTag; // rax
  ULONG Count; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
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
      BiReleasePrivilege((unsigned int *)&v9);
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
