/*
 * XREFs of IopGetBootDiskInformation @ 0x140A39DBC
 * Callers:
 *     IoGetBootDiskInformation @ 0x140855C10 (IoGetBootDiskInformation.c)
 * Callees:
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     IoBuildDeviceIoControlRequest @ 0x14009AEF0 (IoBuildDeviceIoControlRequest.c)
 *     RtlEqualString @ 0x1400D1010 (RtlEqualString.c)
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x140189BB8 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     IoGetDeviceObjectPointer @ 0x1406907A0 (IoGetDeviceObjectPointer.c)
 *     IoGetConfigurationInformation @ 0x14073D130 (IoGetConfigurationInformation.c)
 *     IopVerifyDiskSignature @ 0x14078C65C (IopVerifyDiskSignature.c)
 */

__int64 __fastcall IopGetBootDiskInformation(__int64 a1, unsigned int a2)
{
  int v4; // r12d
  __int64 v6; // rsi
  bool v7; // cf
  __int64 v8; // rbx
  _QWORD **v9; // r13
  const CHAR *v10; // rdx
  ULONG v11; // eax
  NTSTATUS DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v13; // r15
  IRP *v14; // rax
  NTSTATUS Status; // eax
  SIZE_T v16; // rdx
  ULONG OutputBufferLength; // r14d
  IRP *v18; // rdi
  NTSTATUS v19; // edi
  _DWORD *OutputBuffer; // rbx
  int v21; // eax
  _QWORD *i; // r14
  char v23; // al
  __int64 v24; // r15
  __int64 v25; // r13
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  ULONG DiskCount; // [rsp+5Ch] [rbp-ACh]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  struct _KEVENT Object; // [rsp+68h] [rbp-A0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+80h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING ObjectName; // [rsp+98h] [rbp-70h] BYREF
  _STRING String1; // [rsp+A8h] [rbp-60h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD **v35; // [rsp+C0h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp-40h]
  _QWORD **v37; // [rsp+D0h] [rbp-38h]
  _STRING SourceString; // [rsp+D8h] [rbp-30h] BYREF
  _STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  _STRING String2; // [rsp+F8h] [rbp-10h] BYREF
  LARGE_INTEGER Timeout; // [rsp+108h] [rbp+0h] BYREF
  __int64 v42; // [rsp+110h] [rbp+8h]
  __int64 v43; // [rsp+118h] [rbp+10h]
  char pszDest[128]; // [rsp+128h] [rbp+20h] BYREF
  CHAR v45[128]; // [rsp+1A8h] [rbp+A0h] BYREF

  v36 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&ObjectName.Length = 0LL;
  ObjectName.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  Timeout.QuadPart = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  memset(&Object, 0, sizeof(Object));
  v4 = 0;
  *(_QWORD *)&String2.Length = 0LL;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  String2.Buffer = 0LL;
  v26 = 0;
  if ( (unsigned int)InitializationPhase >= 2 )
    return 3221225865LL;
  if ( a2 < 0x18 )
    return 3221225485LL;
  v6 = 0LL;
  v7 = a2 < 0x40;
  v8 = KeLoaderBlock_0;
  if ( !v7 )
    v6 = a1;
  v9 = *(_QWORD ***)(KeLoaderBlock_0 + 232);
  v10 = *(const CHAR **)(KeLoaderBlock_0 + 184);
  v37 = v9;
  v35 = (_QWORD **)**v9;
  RtlInitAnsiString(&DestinationString, v10);
  RtlInitAnsiString(&String2, *(PCSZ *)(v8 + 192));
  v11 = 0;
  for ( LODWORD(v28) = 0; v11 < DiskCount; LODWORD(v28) = v11 )
  {
    RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\Harddisk%d\\Partition0", v11);
    RtlInitAnsiString(&SourceString, pszDest);
    if ( RtlAnsiStringToUnicodeString(&ObjectName, &SourceString, 1u) < 0 )
      goto LABEL_26;
    DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0x80u, &FileObject, &DeviceObject);
    RtlFreeAnsiString(&ObjectName);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_26;
    v13 = DeviceObject;
    v14 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, &Timeout, 0x18u, 0, &Object, &IoStatusBlock);
    if ( !v14 )
      goto LABEL_11;
    LOWORD(Object.Header.Lock) = 0;
    Object.Header.SignalState = 0;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    Status = IofCallDriver(v13, v14);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      v16 = 4096LL;
      for ( OutputBufferLength = 4096; ; v16 = OutputBufferLength )
      {
        OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6F426F49u);
        if ( !OutputBuffer )
          break;
        v18 = IoBuildDeviceIoControlRequest(
                0x70050u,
                v13,
                0LL,
                0,
                OutputBuffer,
                OutputBufferLength,
                0,
                &Object,
                &IoStatusBlock);
        if ( !v18 )
          break;
        KeResetEvent(&Object);
        v19 = IofCallDriver(v13, v18);
        if ( v19 == 259 )
        {
          KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
          v19 = IoStatusBlock.Status;
        }
        if ( v19 != -1073741789 )
          goto LABEL_23;
        ExFreePoolWithTag(OutputBuffer, 0);
        OutputBufferLength *= 2;
      }
      v19 = -1073741670;
LABEL_23:
      ObfDereferenceObject(FileObject);
      if ( v19 >= 0 )
      {
        v21 = HIDWORD(v43);
        if ( HIDWORD(v43) < 0x200 )
          v21 = 512;
        HIDWORD(v43) = v21;
        for ( i = *v9; i != v9; i = (_QWORD *)*i )
        {
          if ( v35 != v9 || DiskCount != 1 || *OutputBuffer )
          {
            v23 = IopVerifyDiskSignature((__int64)OutputBuffer, (__int64)i, &v26);
            v4 = v26;
            if ( !v23 )
              continue;
          }
          v24 = 0LL;
          if ( OutputBuffer[1] )
          {
            v25 = v36;
            do
            {
              if ( !v4 && !*OutputBuffer )
                v4 = OutputBuffer[2];
              if ( OutputBuffer[36 * v24 + 18] )
              {
                RtlStringCchPrintfA(v45, 0x80uLL, "%spartition(%d)", (const char *)i[3], OutputBuffer[36 * v24 + 18]);
                RtlInitAnsiString(&String1, v45);
                if ( RtlEqualString(&String1, &DestinationString, 1u) )
                {
                  *(_DWORD *)(v25 + 16) = v4;
                  *(_QWORD *)v25 = *(_QWORD *)&OutputBuffer[36 * v24 + 14];
                  if ( v6 )
                  {
                    if ( *OutputBuffer == 1 )
                    {
                      *(_BYTE *)(v6 + 56) = 1;
                      *(_OWORD *)(v6 + 24) = *(_OWORD *)(OutputBuffer + 2);
                    }
                    else
                    {
                      *(_BYTE *)(v6 + 56) = 0;
                    }
                  }
                }
                if ( RtlEqualString(&String1, &String2, 1u) )
                {
                  *(_DWORD *)(v25 + 20) = v4;
                  *(_QWORD *)(v25 + 8) = *(_QWORD *)&OutputBuffer[36 * v24 + 14];
                  if ( *OutputBuffer == 1 )
                  {
                    if ( v6 )
                    {
                      *(_BYTE *)(v6 + 57) = 1;
                      *(_OWORD *)(v6 + 40) = *(_OWORD *)(OutputBuffer + 2);
                    }
                  }
                  else if ( v6 )
                  {
                    *(_BYTE *)(v6 + 57) = 0;
                  }
                }
              }
              v24 = (unsigned int)(v24 + 1);
            }
            while ( (unsigned int)v24 < OutputBuffer[1] );
            v9 = v37;
            v26 = v4;
          }
        }
LABEL_25:
        ExFreePoolWithTag(OutputBuffer, 0);
        goto LABEL_26;
      }
      if ( OutputBuffer )
        goto LABEL_25;
    }
    else
    {
LABEL_11:
      ObfDereferenceObject(FileObject);
    }
LABEL_26:
    v11 = v28 + 1;
  }
  return 0LL;
}
