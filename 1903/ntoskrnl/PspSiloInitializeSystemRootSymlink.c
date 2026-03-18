/*
 * XREFs of PspSiloInitializeSystemRootSymlink @ 0x1408C5DE4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C57C0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     RtlUShortAdd @ 0x14011ED4C (RtlUShortAdd.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401C1850 (ZwCreateSymbolicLinkObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall PspSiloInitializeSystemRootSymlink(struct _LIST_ENTRY *a1)
{
  char *ServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  unsigned __int16 v4; // si
  wchar_t *PoolWithTag; // rdi
  struct _LIST_ENTRY *v6; // rbx
  NTSTATUS v7; // esi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE pusResult; // [rsp+88h] [rbp+28h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)a1);
  result = RtlUShortAdd(0x14u, *((_WORD *)ServerSiloGlobals + 524), (USHORT *)&pusResult);
  if ( result >= 0 )
  {
    v4 = (unsigned __int16)pusResult;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)pusResult, 0x70537350u);
    if ( PoolWithTag )
    {
      DestinationString.Buffer = PoolWithTag;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.MaximumLength = v4;
      RtlCopyUnicodeString(&DestinationString, &PspSystemRootTargetPrefix);
      RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(ServerSiloGlobals + 1048));
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSystemRootSymlinkName;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 528;
      v6 = PsAttachSiloToCurrentThread(a1);
      v7 = ZwCreateSymbolicLinkObject(&pusResult, 0xF0001u, &ObjectAttributes, &DestinationString);
      PsDetachSiloFromCurrentThread(v6);
      if ( v7 >= 0 )
        ZwClose(pusResult);
      ExFreePoolWithTag(PoolWithTag, 0x70537350u);
      return v7;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
