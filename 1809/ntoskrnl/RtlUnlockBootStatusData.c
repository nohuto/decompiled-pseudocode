/*
 * XREFs of RtlUnlockBootStatusData @ 0x140718BC0
 * Callers:
 *     PopBootStatSet @ 0x1407184E4 (PopBootStatSet.c)
 *     PoClearTransitionMarker @ 0x140744FE0 (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x1407530B0 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x140877270 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408774D8 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x1408775BC (PopBootStatUnlock.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwFsControlFile @ 0x1401B8890 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
