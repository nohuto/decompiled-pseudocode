/*
 * XREFs of IopCreateArcName @ 0x140738C38
 * Callers:
 *     IoCreateArcName @ 0x140738C20 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x1409F4FAC (IopCreateArcNamesDisk.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     IoBuildDeviceIoControlRequest @ 0x14009AEF0 (IoBuildDeviceIoControlRequest.c)
 *     RtlStringCchPrintfA @ 0x140189BB8 (RtlStringCchPrintfA.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140189C2C (IopCreateUnicodeFromAnsiBuffer.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406CFEF0 (IopBuildSynchronousFsdRequest.c)
 *     IoCreateSymbolicLink @ 0x14071D2D0 (IoCreateSymbolicLink.c)
 *     IopVerifyDiskSignature @ 0x14078C65C (IopVerifyDiskSignature.c)
 *     VhdiVerifyBootDisk @ 0x140943C1C (VhdiVerifyBootDisk.c)
 */

__int64 __fastcall IopCreateArcName(PDEVICE_OBJECT DeviceObject, int a2)
{
  void *v3; // r13
  int v4; // r15d
  _DWORD *PoolWithTag; // rsi
  SIZE_T OutputBufferLength; // rdi
  PDEVICE_OBJECT *i; // rax
  IRP *v8; // rbx
  NTSTATUS Status; // ebx
  IRP *v11; // rbx
  unsigned int v12; // eax
  PVOID Pool_0; // rax
  __int64 v14; // rax
  IRP *v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  SIZE_T j; // rdx
  IRP *v19; // rbx
  char v20; // bl
  PVOID *v21; // rdi
  PVOID *v22; // r11
  char v23; // al
  bool v24; // zf
  const wchar_t *v25; // r8
  const char *v26; // r12
  unsigned __int8 *v27; // rcx
  __int64 v28; // r8
  int v29; // edx
  int v30; // eax
  int v31; // edi
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v38[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h] BYREF
  int v41; // [rsp+C0h] [rbp-40h]
  char v42[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)&SymbolicLinkName.Length = 0LL;
  SymbolicLinkName.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v3 = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = 0;
  v40 = 0LL;
  PoolWithTag = 0LL;
  v41 = 0;
  LODWORD(OutputBufferLength) = 4096;
  v38[0] = 0LL;
  v38[1] = 0LL;
  v39 = 0LL;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  for ( i = (PDEVICE_OBJECT *)IoArcTableListHead; i != (PDEVICE_OBJECT *)&IoArcTableListHead; i = (PDEVICE_OBJECT *)*i )
  {
    if ( i[8] == DeviceObject )
      return 0LL;
  }
  if ( a2 != -1 )
  {
    HIDWORD(v40) = a2;
    goto LABEL_14;
  }
  v8 = IoBuildDeviceIoControlRequest(0x2D1080u, DeviceObject, 0LL, 0, &v40, 0xCu, 0, &Object, &IoStatusBlock);
  if ( v8 )
  {
    KeInitializeEvent(&Object, NotificationEvent, 0);
    Status = IofCallDriver(DeviceObject, v8);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
      return (unsigned int)Status;
LABEL_14:
    v11 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, v38, 0x18u, 0, &Object, &IoStatusBlock);
    if ( !v11 )
      return (unsigned int)-1073741670;
    KeInitializeEvent(&Object, NotificationEvent, 0);
    Status = IofCallDriver(DeviceObject, v11);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
      return (unsigned int)Status;
    v12 = HIDWORD(v39);
    if ( HIDWORD(v39) < 0x200 )
      v12 = 512;
    v24 = DeviceObject->DeviceType == 2;
    HIDWORD(v39) = v12;
    if ( v24 )
    {
      v36 = 0x8000LL;
      Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNxCacheAligned, v12);
      v3 = Pool_0;
      if ( !Pool_0 )
        return (unsigned int)-1073741670;
      v14 = IopBuildSynchronousFsdRequest(
              3u,
              (__int64)DeviceObject,
              Pool_0,
              HIDWORD(v39),
              &v36,
              (__int64)&Object,
              (__int64)&IoStatusBlock);
      v15 = (IRP *)v14;
      if ( !v14 )
      {
        Status = -1073741670;
        goto LABEL_40;
      }
      *(_BYTE *)(*(_QWORD *)(v14 + 184) - 70LL) |= 2u;
      KeInitializeEvent(&Object, NotificationEvent, 0);
      Status = IofCallDriver(DeviceObject, v15);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
LABEL_40:
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
        return (unsigned int)Status;
      }
      v16 = 0LL;
      v17 = (unsigned __int64)HIDWORD(v39) >> 2;
      if ( v17 )
      {
        do
          v4 += *((_DWORD *)v3 + v16++);
        while ( v16 < v17 );
      }
      v4 = -v4;
    }
    else
    {
      for ( j = 4096LL; ; j = OutputBufferLength )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, j, 0x6F426F49u);
        if ( !PoolWithTag )
        {
          Status = -1073741670;
          goto LABEL_38;
        }
        v19 = IoBuildDeviceIoControlRequest(
                0x70050u,
                DeviceObject,
                0LL,
                0,
                PoolWithTag,
                OutputBufferLength,
                0,
                &Object,
                &IoStatusBlock);
        if ( !v19 )
          break;
        KeResetEvent(&Object);
        Status = IofCallDriver(DeviceObject, v19);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status != -1073741789 )
          goto LABEL_44;
        ExFreePoolWithTag(PoolWithTag, 0);
        OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
      }
      Status = -1073741670;
LABEL_44:
      if ( Status < 0 )
        goto LABEL_38;
      if ( *PoolWithTag != 2 && (*PoolWithTag || PoolWithTag[1] || PoolWithTag[2]) )
      {
        v20 = 0;
LABEL_52:
        v21 = (PVOID *)IoArcTableListHead;
        v22 = &IoArcTableListHead;
        while ( 1 )
        {
          if ( v21 == v22 )
          {
            Status = -1073741637;
            goto LABEL_38;
          }
          if ( !*((_BYTE *)v21 + 72) && !v21[8] )
          {
            if ( v20 )
            {
              if ( *((_BYTE *)v21 + 36) )
                goto LABEL_65;
              v24 = *((_DWORD *)v21 + 8) == v4;
            }
            else
            {
              if ( !(unsigned __int8)IopVerifyDiskSignature(PoolWithTag, v21, &v36) )
                goto LABEL_65;
              if ( v21[7] )
              {
                v23 = VhdiVerifyBootDisk(DeviceObject);
                v22 = &IoArcTableListHead;
                if ( !v23 )
                  goto LABEL_65;
              }
              if ( *PoolWithTag )
                goto LABEL_66;
              v24 = *((_DWORD *)v21 + 8) == PoolWithTag[3];
            }
            if ( v24 )
            {
LABEL_66:
              v21[8] = DeviceObject;
              v25 = L"\\Device\\CdRom%d";
              if ( DeviceObject->DeviceType != 2 )
                v25 = L"\\Device\\Harddisk%d\\Partition0";
              RtlStringCchPrintfW(pszDest, 0x40uLL, v25, HIDWORD(v40));
              RtlInitUnicodeString(&DestinationString, pszDest);
              v26 = (const char *)v21[3];
              RtlStringCchPrintfA(v42, 0x40uLL, "\\ArcName\\%s", v26);
              Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v42);
              if ( Status >= 0 )
              {
                IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                RtlFreeAnsiString(&SymbolicLinkName);
                if ( DeviceObject->DeviceType == 2 )
                {
                  if ( (unsigned int)InitializationPhase < 2 )
                  {
                    v27 = (unsigned __int8 *)v21[3];
                    v28 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v27;
                    do
                    {
                      v29 = v27[v28];
                      v30 = *v27 - v29;
                      if ( v30 )
                        break;
                      ++v27;
                    }
                    while ( v29 );
                    if ( !v30 )
                      DeviceObject->Flags |= 0x100u;
                  }
                }
                else if ( PoolWithTag[1] )
                {
                  Status = 0;
                  v31 = 1;
                  do
                  {
                    LODWORD(OutputBuffer) = v31;
                    RtlStringCchPrintfW(
                      pszDest,
                      0x40uLL,
                      L"\\Device\\Harddisk%d\\Partition%d",
                      HIDWORD(v40),
                      OutputBuffer);
                    RtlInitUnicodeString(&DestinationString, pszDest);
                    RtlStringCchPrintfA(v42, 0x40uLL, "\\ArcName\\%spartition(%d)", v26, v31);
                    if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v42) >= 0 )
                    {
                      IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                      RtlFreeAnsiString(&SymbolicLinkName);
                    }
                    ++v31;
                  }
                  while ( (unsigned int)(v31 - 1) < PoolWithTag[1] );
                }
              }
LABEL_38:
              if ( PoolWithTag )
                ExFreePoolWithTag(PoolWithTag, 0);
              goto LABEL_40;
            }
          }
LABEL_65:
          v21 = (PVOID *)*v21;
        }
      }
      v4 = PoolWithTag[3];
    }
    v20 = 1;
    goto LABEL_52;
  }
  return (unsigned int)-1073741670;
}
