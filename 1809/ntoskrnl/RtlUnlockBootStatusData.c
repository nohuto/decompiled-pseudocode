/*
 * XREFs of RtlUnlockBootStatusData @ 0x140719E40
 * Callers:
 *     PopBootStatSet @ 0x140719764 (PopBootStatSet.c)
 *     PoClearTransitionMarker @ 0x1407461B0 (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x140754280 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x1408784B0 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140878718 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x1408787FC (PopBootStatUnlock.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwFsControlFile @ 0x1401B8A10 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUnlockBootStatusData(HANDLE FileHandle)
{
  HANDLE v1; // rbx
  char v2; // di
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 InputBuffer; // [rsp+70h] [rbp+8h] BYREF

  v1 = FileHandle;
  v2 = 0;
  InputBuffer = 0;
  if ( BootStatFileHandleAcquired )
  {
    if ( FileHandle )
    {
      if ( BootStatKeepHandleOpen )
        goto LABEL_4;
    }
    else
    {
      v1 = BootStatFileHandle;
    }
    BootStatFileHandle = 0LL;
    v2 = 1;
    BootStatFileHandleAcquired = 0;
  }
LABEL_4:
  if ( v1 )
  {
    result = ZwFsControlFile(v1, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
    if ( v2 )
    {
      if ( BootStatDataCache )
      {
        ExFreePoolWithTag(BootStatDataCache, 0);
        BootStatDataCache = 0LL;
      }
      BootStatFileHandleAcquired = 0;
      return ZwClose(v1);
    }
  }
  return result;
}
