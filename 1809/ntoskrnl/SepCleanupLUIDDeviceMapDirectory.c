/*
 * XREFs of SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406B4880 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F8478 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1400067D0 (PsGetServerSiloServiceSessionId.c)
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcscmp @ 0x140197840 (wcscmp.c)
 *     swprintf_s @ 0x14019A4A0 (swprintf_s.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1401B8DF0 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x1401BA410 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401BA7D0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQueryDirectoryObject @ 0x1401BAA70 (ZwQueryDirectoryObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCleanupLUIDDeviceMapDirectory(_DWORD *a1, struct _LIST_ENTRY *a2)
{
  UNICODE_STRING *v2; // rbx
  unsigned int v5; // r13d
  char v6; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  struct _LIST_ENTRY *v8; // rsi
  NTSTATUS v9; // edi
  HANDLE *PoolWithTag; // r14
  BOOLEAN RestartScan; // r15
  __int64 v12; // rdi
  SIZE_T v13; // r12
  NTSTATUS v14; // esi
  unsigned int v15; // r15d
  HANDLE *v16; // rsi
  HANDLE *v18; // rsi
  char v19; // [rsp+40h] [rbp-C0h]
  ULONG BufferLength; // [rsp+44h] [rbp-BCh]
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Context; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ReturnLength; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE LinkHandle; // [rsp+58h] [rbp-A8h] BYREF
  struct _LIST_ENTRY *v25; // [rsp+60h] [rbp-A0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v28[56]; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  v2 = 0LL;
  Context = 0;
  BufferLength = 0;
  v5 = 100;
  if ( !a1 )
    return 3221225485LL;
  v19 = ObReferenceObjectSafeWithTag((__int64)KeGetCurrentThread()->ApcState.Process);
  v6 = v19;
  if ( v19 )
    ObfDereferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x4D526553u);
  else
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v28);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a2);
  swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, a1[1], *a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v25 = PsAttachSiloToCurrentThread(a2);
  v8 = v25;
  v9 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v9 < 0 )
  {
    PsDetachSiloFromCurrentThread(v8);
    if ( !v19 )
      KiUnstackDetachProcess((__int64)v28, 0LL);
    return (unsigned int)v9;
  }
  else
  {
    PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 0x320uLL, 0x61486553u);
    if ( PoolWithTag )
    {
LABEL_6:
      RestartScan = 1;
      v12 = 0LL;
      while ( 1 )
      {
        LODWORD(v13) = BufferLength;
        do
        {
          v14 = ZwQueryDirectoryObject(DirectoryHandle, v2, v13, 1u, RestartScan, &Context, &ReturnLength);
          if ( v14 == -1073741789 )
          {
            v13 = ReturnLength;
            if ( v2 )
              ExFreePoolWithTag(v2, 0);
            v2 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v13, 0x62446553u);
            if ( !v2 )
              v14 = -1073741670;
          }
        }
        while ( v14 == -1073741789 );
        BufferLength = v13;
        v6 = v19;
        if ( v14 < 0 )
          break;
        if ( !wcscmp(v2[1].Buffer, L"SymbolicLink") )
        {
          if ( (unsigned int)v12 >= v5 )
          {
            if ( (_DWORD)v12 )
            {
              v18 = PoolWithTag;
              do
              {
                ZwClose(*v18++);
                --v12;
              }
              while ( v12 );
            }
            v5 += 20;
            ExFreePoolWithTag(PoolWithTag, 0);
            PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 8LL * v5, 0x61486553u);
            if ( !PoolWithTag )
            {
              v8 = v25;
              goto LABEL_45;
            }
            goto LABEL_6;
          }
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.ObjectName = v2;
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
      v15 = 0;
      if ( v14 != -2147483622 )
        v15 = v14;
      if ( (_DWORD)v12 )
      {
        v16 = PoolWithTag;
        do
        {
          ZwClose(*v16++);
          --v12;
        }
        while ( v12 );
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      if ( DirectoryHandle )
        ZwClose(DirectoryHandle);
      PsDetachSiloFromCurrentThread(v25);
      if ( !v19 )
        KiUnstackDetachProcess((__int64)v28, 0LL);
      return v15;
    }
    else
    {
LABEL_45:
      ZwClose(DirectoryHandle);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      PsDetachSiloFromCurrentThread(v8);
      if ( !v6 )
        KiUnstackDetachProcess((__int64)v28, 0LL);
      return 3221225495LL;
    }
  }
}
