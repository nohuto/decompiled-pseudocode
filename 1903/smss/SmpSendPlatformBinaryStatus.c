/*
 * XREFs of SmpSendPlatformBinaryStatus @ 0x1400130E8
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140008D5C (SmpLoadDataFromRegistry.c)
 *     SmpGetPlatformBinary @ 0x14000BC44 (SmpGetPlatformBinary.c)
 * Callees:
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140011F6C (_TlgWrite.c)
 */

char __fastcall SmpSendPlatformBinaryStatus(int a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  bool v5; // zf
  __int64 v6; // rcx
  char *Heap; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  char *InputBuffer; // rbx
  const struct _TlgProvider_t *v13; // rcx
  _QWORD *v14; // r9
  void *v15; // rdx
  __int64 v16; // r8
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG OpenOptions[2]; // [rsp+28h] [rbp-D8h]
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  void *FileHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v27[2]; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  int *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  __int64 *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  _DWORD *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  __int64 v35; // [rsp+110h] [rbp+10h]
  _DWORD v36[2]; // [rsp+118h] [rbp+18h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+120h] [rbp+20h] BYREF
  int *v38; // [rsp+140h] [rbp+40h]
  __int64 v39; // [rsp+148h] [rbp+48h]
  __int64 *v40; // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+158h] [rbp+58h]
  int v42; // [rsp+1A0h] [rbp+A0h] BYREF

  v42 = a1;
  v5 = a1 == 0;
  FileHandle = 0LL;
  v6 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  if ( !v5 )
    a2 = 0LL;
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(v6 + 48), 8u, 0x34uLL);
  InputBuffer = Heap;
  if ( Heap )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 0;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(Heap) = NtOpenFile(&FileHandle, 0x120003u, &ObjectAttributes, &IoStatusBlock, 2u, 0x60u);
    if ( (int)Heap >= 0 )
    {
      *(_DWORD *)InputBuffer = 1130980673;
      *((_DWORD *)InputBuffer + 1) = 1396854879;
      *((_DWORD *)InputBuffer + 2) = 52;
      *((_DWORD *)InputBuffer + 3) = 4;
      *((_DWORD *)InputBuffer + 5) = 1;
      *((_DWORD *)InputBuffer + 7) = 1;
      *((_DWORD *)InputBuffer + 4) = 0x40000;
      *((_DWORD *)InputBuffer + 6) = 0x40000;
      *((_DWORD *)InputBuffer + 8) = 0x40000;
      *((_DWORD *)InputBuffer + 9) = v42;
      *((_DWORD *)InputBuffer + 10) = 524290;
      *(_QWORD *)(InputBuffer + 44) = a2;
      LOBYTE(Heap) = NtDeviceIoControlFile(
                       FileHandle,
                       0LL,
                       0LL,
                       0LL,
                       &IoStatusBlock,
                       0x32C000u,
                       InputBuffer,
                       0x34u,
                       0LL,
                       0);
    }
  }
  if ( FileHandle )
    LOBYTE(Heap) = NtClose(FileHandle);
  if ( InputBuffer )
    LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, InputBuffer);
  v13 = (const struct _TlgProvider_t *)SmpTraceHandle;
  if ( SmpTraceHandle )
  {
    if ( v42 )
    {
      v27[1] = 4LL;
      v27[0] = &v42;
      v14 = v27;
      v16 = 1LL;
      v15 = &SmssEvt_PlatformBinaryExecutionFailed;
    }
    else
    {
      v14 = 0LL;
      v15 = &SmssEvt_PlatformBinaryExecuted;
      v16 = 0LL;
    }
    LOBYTE(Heap) = EtwEventWrite(SmpTraceHandle, v15, v16, v14, *(_QWORD *)ShareAccess, *(_QWORD *)OpenOptions);
  }
  if ( a4 )
  {
    if ( (unsigned int)dword_140021018 > 5 )
    {
      v20 = v42;
      v29 = &v20;
      v31 = &v23;
      v33 = v36;
      v35 = *((_QWORD *)a4 + 1);
      v36[0] = *a4;
      v23 = a3;
      v30 = 4LL;
      v32 = 8LL;
      v34 = 2LL;
      v36[1] = 0;
      LOBYTE(Heap) = TlgWrite(v13, &unk_14001D32F, v10, v11, 6u, &pData);
    }
  }
  else if ( (unsigned int)dword_140021018 > 5 )
  {
    v21 = v42;
    v38 = &v21;
    v40 = &v24;
    v24 = a3;
    v39 = 4LL;
    v41 = 8LL;
    LOBYTE(Heap) = TlgWrite(v13, &unk_14001D2FE, v10, v11, 4u, &v37);
  }
  return (char)Heap;
}
