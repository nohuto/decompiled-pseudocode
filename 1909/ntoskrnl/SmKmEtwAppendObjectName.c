/*
 * XREFs of SmKmEtwAppendObjectName @ 0x140324694
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140324C10 (SmKmStoreTerminateWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400889DC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoSetThreadHardErrorMode @ 0x1400EA080 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ObQueryNameString @ 0x14062BC10 (ObQueryNameString.c)
 */

__int64 __fastcall SmKmEtwAppendObjectName(__int64 a1, unsigned __int64 DeviceAttachmentBaseRefWithTag)
{
  int v3; // r14d
  __int64 v4; // rdx
  void *v6; // r13
  _OBJECT_NAME_INFORMATION *v7; // rdi
  ULONG v8; // r14d
  void *v9; // rbp
  BOOLEAN v10; // r15
  NTSTATUS v11; // ebx
  wchar_t *Buffer; // rdx
  unsigned __int16 v13; // bx
  unsigned __int16 *v14; // rcx
  unsigned __int16 **v15; // rax
  __int64 v16; // rdx
  __int64 result; // rax
  _QWORD *v18; // rdx
  ULONG ReturnLength; // [rsp+20h] [rbp-68h] BYREF
  _OWORD Src[2]; // [rsp+28h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24);
  Src[0] = *(_OWORD *)L"\\Device\\Unknown";
  v6 = (void *)(v4 + 2);
  v7 = (_OBJECT_NAME_INFORMATION *)((v4 + 9) & 0xFFFFFFFFFFFFFFF8uLL);
  v8 = v4 + v3 - (_DWORD)v7;
  Src[1] = *(_OWORD *)L"Unknown";
  *(_QWORD *)&v7->Name.Length = 0LL;
  v7->Name.Buffer = 0LL;
  if ( (DeviceAttachmentBaseRefWithTag & 1) != 0 )
  {
    DeviceAttachmentBaseRefWithTag = (unsigned __int64)IoGetDeviceAttachmentBaseRefWithTag(
                                                         DeviceAttachmentBaseRefWithTag & 0xFFFFFFFFFFFFFFFEuLL,
                                                         0x746C6644u);
    v9 = (void *)DeviceAttachmentBaseRefWithTag;
  }
  else
  {
    v9 = 0LL;
  }
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v10 = IoSetThreadHardErrorMode(0);
    v11 = ObQueryNameString((PVOID)DeviceAttachmentBaseRefWithTag, v7, v8, &ReturnLength);
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
    IoSetThreadHardErrorMode(v10);
  }
  else
  {
    v11 = -1073741809;
  }
  if ( v11 >= 0 && v7->Name.Length )
  {
    Buffer = v7->Name.Buffer;
    v13 = v7->Name.Length >> 1;
  }
  else
  {
    Buffer = (wchar_t *)Src;
    v13 = 15;
  }
  memmove(v6, Buffer, 2LL * v13);
  v14 = (unsigned __int16 *)(*(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24));
  *v14 = v13;
  v15 = (unsigned __int16 **)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
  *v15 = v14;
  v15[1] = (unsigned __int16 *)2;
  v16 = (unsigned int)++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) += 2;
  result = *(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24);
  v18 = (_QWORD *)(*(_QWORD *)a1 + 16 * v16);
  LODWORD(v14) = 2 * v13;
  *v18 = result;
  v18[1] = (unsigned int)v14;
  ++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) += (_DWORD)v14;
  return result;
}
