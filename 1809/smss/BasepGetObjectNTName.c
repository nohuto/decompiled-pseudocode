/*
 * XREFs of BasepGetObjectNTName @ 0x14000E02C
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14000E548 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001008C (BaseSetLastNTError.c)
 *     memmove_0 @ 0x1400101E3 (memmove_0.c)
 */

__int64 __fastcall BasepGetObjectNTName(HANDLE Handle, const void ***a2)
{
  const void **Heap; // rbx
  ULONG v5; // edi
  NTSTATUS v6; // eax
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  ULONG ReturnLength; // [rsp+60h] [rbp+18h] BYREF

  Heap = 0LL;
  v5 = 536;
  while ( 1 )
  {
    if ( Heap )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    Heap = (const void **)RtlAllocateHeap(
                            *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                            KernelBaseGlobalData,
                            v5);
    if ( !Heap )
      break;
    v6 = NtQueryObject(Handle, ObjectNameInformation, Heap, v5, &ReturnLength);
    v5 = ReturnLength;
    if ( v6 != -2147483643 )
      goto LABEL_8;
  }
  v6 = -1073741670;
LABEL_8:
  if ( v6 >= 0 )
  {
    ReturnLength = *(unsigned __int16 *)Heap;
    memmove_0(Heap, Heap[1], ReturnLength);
    result = 1LL;
    v8 = (unsigned __int64)ReturnLength >> 1;
    *a2 = Heap;
    *((_WORD *)Heap + v8) = 0;
  }
  else
  {
    BaseSetLastNTError((unsigned int)v6);
    if ( Heap )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    return 0LL;
  }
  return result;
}
