/*
 * XREFs of RtlpQueryEafPlusModuleList @ 0x1800E4B68
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x1800E2FB0 (RtlQueryImageMitigationPolicy.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpQueryEafPlusModuleList(HANDLE KeyHandle, void *a2)
{
  NTSTATUS inited; // ebx
  ULONG Length; // ebx
  void *ProcessHeap; // rcx
  _DWORD *Heap; // rdi
  NTSTATUS v8; // eax
  int v9; // ecx
  size_t v10; // rax
  unsigned __int32 v11; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF

  memset(a2, 0, 0x400uLL);
  inited = RtlInitUnicodeStringEx(&DestinationString, L"EAFModules");
  if ( inited < 0 )
  {
LABEL_24:
    v11 = inited;
    if ( (int)(inited + 0x80000000) < 0 || inited == -1073741772 )
      return 0LL;
  }
  else
  {
    for ( Length = 1036; ; Length = ResultLength )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, Length);
      if ( !Heap )
        break;
      v8 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
      inited = v8;
      if ( v8 >= 0 )
      {
        v9 = Heap[1];
        if ( ((v9 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v9 == 4 )
          {
            inited = -1073741788;
LABEL_23:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
            goto LABEL_24;
          }
          if ( v9 == 11 )
          {
            inited = -1073741788;
            goto LABEL_23;
          }
          if ( v9 != 1 )
          {
            inited = -1073741788;
            goto LABEL_23;
          }
          v10 = (unsigned int)Heap[2];
          ResultLength = Heap[2];
LABEL_16:
          if ( (unsigned int)v10 <= 0x400 )
          {
            memmove(a2, Heap + 3, v10);
            goto LABEL_23;
          }
        }
        else
        {
          if ( v9 != 1 )
          {
            inited = -1073741788;
            goto LABEL_23;
          }
          ResultLength = Heap[2];
          if ( a2 )
          {
            v10 = (unsigned int)Heap[2];
            goto LABEL_16;
          }
        }
        inited = -2147483643;
        goto LABEL_23;
      }
      if ( v8 != -2147483643 )
        goto LABEL_23;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
    return (unsigned __int32)-1073741801;
  }
  return v11;
}
