/*
 * XREFs of IopCreateArcName @ 0x14070C6A8
 * Callers:
 *     IoCreateArcName @ 0x14070C690 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x1409D77C0 (IopCreateArcNamesDisk.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400DDD10 (IoBuildDeviceIoControlRequest.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14018E0D0 (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x14018E100 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IopBuildSynchronousFsdRequest @ 0x140664070 (IopBuildSynchronousFsdRequest.c)
 *     IoCreateSymbolicLink @ 0x1406CCA90 (IoCreateSymbolicLink.c)
 *     IoVerifyPartitionTable @ 0x1407060F0 (IoVerifyPartitionTable.c)
 *     IopVerifyDiskSignature @ 0x140764948 (IopVerifyDiskSignature.c)
 *     VhdiVerifyBootDisk @ 0x140906E4C (VhdiVerifyBootDisk.c)
 */

__int64 __fastcall IopCreateArcName(PDEVICE_OBJECT DeviceObject, unsigned int a2)
{
  PDEVICE_OBJECT v2; // rax
  int *PoolWithTag; // r15
  IRP *v5; // rbx
  NTSTATUS Status; // ebx
  IRP *v7; // rbx
  unsigned int v8; // ecx
  bool v9; // zf
  __int64 v10; // rax
  _DWORD *Pool_0; // rax
  _DWORD *v12; // r14
  __int64 v13; // rax
  IRP *v14; // rbx
  int v15; // r13d
  SIZE_T OutputBufferLength; // rdi
  SIZE_T j; // rdx
  IRP *v18; // rbx
  int v19; // r12d
  unsigned __int64 v20; // rcx
  unsigned __int64 k; // rax
  int v22; // eax
  bool v23; // bl
  PVOID *v24; // rdi
  PVOID *v25; // r11
  char v27; // r8
  const wchar_t *v28; // r8
  const char *v29; // r13
  int v30; // edi
  unsigned __int64 v31; // rcx
  unsigned __int64 i; // rax
  unsigned __int8 *v33; // rcx
  __int64 v34; // r8
  int v35; // edx
  int v36; // eax
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  _DWORD *v38; // [rsp+50h] [rbp-B0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  struct _KEVENT Object; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v44[20]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v45; // [rsp+BCh] [rbp-44h]
  _BYTE v46[4]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v47; // [rsp+C4h] [rbp-3Ch]
  char v48[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF
  __int64 retaddr; // [rsp+1D8h] [rbp+D8h]

  v2 = (PDEVICE_OBJECT)IoArcTableListHead;
  PoolWithTag = 0LL;
  while ( 1 )
  {
    if ( v2 == (PDEVICE_OBJECT)&IoArcTableListHead )
    {
      if ( a2 == -1 )
      {
        v5 = IoBuildDeviceIoControlRequest(0x2D1080u, DeviceObject, 0LL, 0, v46, 0xCu, 0, &Object, &IoStatusBlock);
        if ( !v5 )
          return (unsigned int)-1073741670;
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(DeviceObject, v5);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
      }
      else
      {
        v47 = a2;
      }
      v7 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, v44, 0x18u, 0, &Object, &IoStatusBlock);
      if ( v7 )
      {
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(DeviceObject, v7);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
        v8 = v45;
        if ( v45 < 0x200 )
          v8 = 512;
        v9 = DeviceObject->DeviceType == 2;
        v45 = v8;
        v10 = 0x8000LL;
        if ( !v9 )
          v10 = 0LL;
        v41 = v10;
        Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNxCacheAligned, v8);
        v38 = Pool_0;
        v12 = Pool_0;
        if ( Pool_0 )
        {
          v13 = IopBuildSynchronousFsdRequest(
                  3u,
                  (__int64)DeviceObject,
                  Pool_0,
                  v45,
                  &v41,
                  (__int64)&Object,
                  (__int64)&IoStatusBlock,
                  retaddr);
          v14 = (IRP *)v13;
          if ( !v13 )
          {
            Status = -1073741670;
            goto LABEL_53;
          }
          *(_BYTE *)(*(_QWORD *)(v13 + 184) - 70LL) |= 2u;
          KeInitializeEvent(&Object, NotificationEvent, 0);
          Status = IofCallDriver(DeviceObject, v14);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( Status >= 0 )
          {
            if ( DeviceObject->DeviceType == 2 )
            {
              v19 = 0;
              v31 = (unsigned __int64)v45 >> 2;
              for ( i = 0LL; i < v31; ++i )
                v19 += v38[i];
            }
            else
            {
              v15 = v12[110];
              LODWORD(OutputBufferLength) = 4096;
              for ( j = 4096LL; ; j = OutputBufferLength )
              {
                PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, j, 0x6F426F49u);
                if ( !PoolWithTag )
                {
                  Status = -1073741670;
                  goto LABEL_51;
                }
                v18 = IoBuildDeviceIoControlRequest(
                        0x70050u,
                        DeviceObject,
                        0LL,
                        0,
                        PoolWithTag,
                        OutputBufferLength,
                        0,
                        &Object,
                        &IoStatusBlock);
                if ( !v18 )
                  break;
                KeResetEvent(&Object);
                Status = IofCallDriver(DeviceObject, v18);
                if ( Status == 259 )
                {
                  KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
                  Status = IoStatusBlock.Status;
                }
                if ( Status != -1073741789 )
                  goto LABEL_30;
                ExFreePoolWithTag(PoolWithTag, 0);
                OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
              }
              Status = -1073741670;
LABEL_30:
              if ( Status < 0 )
                goto LABEL_51;
              v19 = 0;
              v20 = (unsigned __int64)v45 >> 2;
              for ( k = 0LL; k < v20; ++k )
                v19 += v38[k];
              v22 = *PoolWithTag;
              if ( !*PoolWithTag && !v15 )
                PoolWithTag[2] = 0;
              v23 = 0;
              if ( v22 != 2 )
              {
                if ( !v22 && !PoolWithTag[1] && !PoolWithTag[2] )
                  v23 = IoVerifyPartitionTable(DeviceObject, 0) == -1073741637;
                goto LABEL_41;
              }
            }
            v23 = 1;
LABEL_41:
            v24 = (PVOID *)IoArcTableListHead;
            v25 = &IoArcTableListHead;
            while ( 1 )
            {
              if ( v24 == v25 )
              {
                Status = -1073741637;
                goto LABEL_50;
              }
              if ( !*((_BYTE *)v24 + 72) )
              {
                if ( v23 )
                {
                  if ( *((_BYTE *)v24 + 36) || v19 + *((_DWORD *)v24 + 8) )
                    goto LABEL_46;
                }
                else
                {
                  v27 = IopVerifyDiskSignature(PoolWithTag, v24, &v41);
                  if ( !v27 )
                    goto LABEL_46;
                  if ( v24[7] )
                  {
                    v27 = VhdiVerifyBootDisk(DeviceObject);
                    v25 = &IoArcTableListHead;
                  }
                  if ( !v27 || v19 + *((_DWORD *)v24 + 8) )
                    goto LABEL_46;
                }
                if ( !v24[8] )
                {
                  v24[8] = DeviceObject;
                  v28 = L"\\Device\\CdRom%d";
                  if ( DeviceObject->DeviceType != 2 )
                    v28 = L"\\Device\\Harddisk%d\\Partition0";
                  RtlStringCchPrintfW(pszDest, 0x40uLL, v28, v47);
                  RtlInitUnicodeString(&DestinationString, pszDest);
                  v29 = (const char *)v24[3];
                  RtlStringCchPrintfA(v48, 0x40uLL, "\\ArcName\\%s", v29);
                  Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v48);
                  if ( Status < 0 )
                    goto LABEL_50;
                  IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                  RtlFreeAnsiString(&SymbolicLinkName);
                  if ( DeviceObject->DeviceType != 2 )
                  {
                    if ( PoolWithTag[1] )
                    {
                      Status = 0;
                      v30 = 1;
                      do
                      {
                        LODWORD(OutputBuffer) = v30;
                        RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition%d", v47, OutputBuffer);
                        RtlInitUnicodeString(&DestinationString, pszDest);
                        RtlStringCchPrintfA(v48, 0x40uLL, "\\ArcName\\%spartition(%d)", v29, v30);
                        if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v48) >= 0 )
                        {
                          IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                          RtlFreeAnsiString(&SymbolicLinkName);
                        }
                        ++v30;
                      }
                      while ( v30 - 1 < (unsigned int)PoolWithTag[1] );
                    }
                    goto LABEL_50;
                  }
                  if ( (unsigned int)InitializationPhase < 2 )
                  {
                    v33 = (unsigned __int8 *)v24[3];
                    v34 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v33;
                    do
                    {
                      v35 = v33[v34];
                      v36 = *v33 - v35;
                      if ( v36 )
                        break;
                      ++v33;
                    }
                    while ( v35 );
                    v12 = v38;
                    if ( !v36 )
                      DeviceObject->Flags |= 0x100u;
LABEL_51:
                    if ( PoolWithTag )
                      ExFreePoolWithTag(PoolWithTag, 0);
                    break;
                  }
LABEL_50:
                  v12 = v38;
                  goto LABEL_51;
                }
              }
LABEL_46:
              v24 = (PVOID *)*v24;
            }
          }
LABEL_53:
          ExFreePoolWithTag(v12, 0);
          return (unsigned int)Status;
        }
      }
      return (unsigned int)-1073741670;
    }
    if ( v2->DeviceExtension == DeviceObject )
      return 0LL;
    v2 = *(PDEVICE_OBJECT *)&v2->Type;
  }
}
