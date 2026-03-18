/*
 * XREFs of SepCleanupLUIDDeviceMapDirectory @ 0x1406D78E4
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406D75FC (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140729F9C (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003FAD0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     wcscmp @ 0x1401A1F50 (wcscmp.c)
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1401C0BD0 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x1401C2210 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401C25D0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQueryDirectoryObject @ 0x1401C2870 (ZwQueryDirectoryObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCleanupLUIDDeviceMapDirectory(_DWORD *a1, struct _LIST_ENTRY *a2)
{
  UNICODE_STRING *v4; // rbx
  char v5; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  struct _LIST_ENTRY *v7; // r13
  NTSTATUS v8; // edi
  SIZE_T v9; // rdx
  HANDLE *PoolWithTag; // r14
  BOOLEAN RestartScan; // r15
  __int64 v12; // rdi
  SIZE_T v13; // r12
  NTSTATUS v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // r15d
  HANDLE *v17; // rsi
  HANDLE *v19; // rsi
  char v20; // [rsp+40h] [rbp-C0h]
  unsigned int v21; // [rsp+44h] [rbp-BCh]
  ULONG BufferLength; // [rsp+48h] [rbp-B8h]
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Context; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ReturnLength; // [rsp+5Ch] [rbp-A4h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v29[56]; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v21 = 100;
  Context = 0;
  BufferLength = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = 0LL;
  memset(v29, 0, 0x30uLL);
  if ( !a1 )
    return 3221225485LL;
  v20 = ObReferenceObjectSafeWithTag((__int64)KeGetCurrentThread()->ApcState.Process);
  v5 = v20;
  if ( v20 )
    ObfDereferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x4D526553u);
  else
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v29);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a2);
  swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, a1[1], *a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v7 = PsAttachSiloToCurrentThread(a2);
  v8 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v8 < 0 )
  {
    PsDetachSiloFromCurrentThread(v7);
    if ( !v20 )
      KiUnstackDetachProcess((struct _KTHREAD *)v29, 0);
    return (unsigned int)v8;
  }
  else
  {
    v9 = 800LL;
LABEL_6:
    PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, v9, 0x61486553u);
    if ( PoolWithTag )
    {
      RestartScan = 1;
      v12 = 0LL;
      while ( 1 )
      {
        LODWORD(v13) = BufferLength;
        do
        {
          v14 = ZwQueryDirectoryObject(DirectoryHandle, v4, v13, 1u, RestartScan, &Context, &ReturnLength);
          if ( v14 == -1073741789 )
          {
            v13 = ReturnLength;
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
            v4 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v13, 0x62446553u);
            if ( !v4 )
              v14 = -1073741670;
          }
        }
        while ( v14 == -1073741789 );
        BufferLength = v13;
        v5 = v20;
        if ( v14 < 0 )
          break;
        if ( !wcscmp(v4[1].Buffer, L"SymbolicLink") )
        {
          v15 = v21;
          if ( (unsigned int)v12 >= v21 )
          {
            if ( (_DWORD)v12 )
            {
              v19 = PoolWithTag;
              do
              {
                ZwClose(*v19++);
                --v12;
              }
              while ( v12 );
              v15 = v21;
            }
            v21 = v15 + 20;
            ExFreePoolWithTag(PoolWithTag, 0);
            v9 = 8LL * (v15 + 20);
            goto LABEL_6;
          }
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.ObjectName = v4;
          if ( ZwOpenSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
          {
            if ( ZwMakeTemporaryObject(LinkHandle) < 0 )
            {
              ZwClose(LinkHandle);
            }
            else
            {
              PoolWithTag[v12] = LinkHandle;
              v12 = (unsigned int)(v12 + 1);
            }
          }
        }
        RestartScan = 0;
      }
      v16 = 0;
      if ( v14 != -2147483622 )
        v16 = v14;
      if ( (_DWORD)v12 )
      {
        v17 = PoolWithTag;
        do
        {
          ZwClose(*v17++);
          --v12;
        }
        while ( v12 );
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      if ( DirectoryHandle )
        ZwClose(DirectoryHandle);
      PsDetachSiloFromCurrentThread(v7);
      if ( !v20 )
        KiUnstackDetachProcess((struct _KTHREAD *)v29, 0);
      return v16;
    }
    else
    {
      ZwClose(DirectoryHandle);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      PsDetachSiloFromCurrentThread(v7);
      if ( !v5 )
        KiUnstackDetachProcess((struct _KTHREAD *)v29, 0);
      return 3221225495LL;
    }
  }
}
