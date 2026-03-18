/*
 * XREFs of PnpUnloadAttachedDriver @ 0x140732938
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140173204 (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 */

__int64 __fastcall PnpUnloadAttachedDriver(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  wchar_t *PoolWithTag; // rdi
  __int64 v5; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1[6];
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !a1[5] || a1[1] )
    return 0LL;
  v3 = CmRegistryMachineSystemCurrentControlSetServices.Length + 6 + *(unsigned __int16 *)(v1 + 24);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v3, 0x65647050u);
  if ( PoolWithTag )
  {
    RtlStringCbPrintfW(
      PoolWithTag,
      v3,
      L"%s\\%s",
      CmRegistryMachineSystemCurrentControlSetServices.Buffer,
      *(_QWORD *)(v1 + 32));
    RtlInitUnicodeString(&DestinationString, PoolWithTag);
    LOBYTE(v5) = 1;
    IopUnloadDriver(&DestinationString, v5);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return 0LL;
  }
  return 3221225626LL;
}
