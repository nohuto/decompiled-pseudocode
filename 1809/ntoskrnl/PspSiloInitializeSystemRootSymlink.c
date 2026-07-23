/*
 * XREFs of PspSiloInitializeSystemRootSymlink @ 0x140888C7C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408886A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     RtlUShortAdd @ 0x14011CE8C (RtlUShortAdd.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401B9A50 (ZwCreateSymbolicLinkObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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

  ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)a1);
  result = RtlUShortAdd(0x14u, *((_WORD *)ServerSiloGlobals + 532), (USHORT *)&pusResult);
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
      RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(ServerSiloGlobals + 1064));
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
