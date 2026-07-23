/*
 * XREFs of RtlpQueryEafPlusModuleList @ 0x1800E1EE8
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall RtlpQueryEafPlusModuleList(HANDLE KeyHandle, void *a2)
{
  NTSTATUS inited; // ebx
  ULONG Length; // ebx
  void *ProcessHeap; // rcx
  _DWORD *Heap; // rdi
  NTSTATUS v8; // eax
  int v9; // ecx
  ULONG v10; // eax
  size_t v11; // r8
  unsigned __int32 v12; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF

  memset(a2, 0, 0x400uLL);
  inited = RtlInitUnicodeStringEx(&DestinationString, L"EAFModules");
  if ( inited < 0 )
  {
LABEL_20:
    v12 = inited;
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
          if ( v9 != 1 )
            goto LABEL_10;
          v10 = Heap[2];
          ResultLength = v10;
          if ( v10 <= 0x400 )
          {
            v11 = v10;
            goto LABEL_13;
          }
LABEL_18:
          inited = -2147483643;
        }
        else if ( v9 == 1 )
        {
          ResultLength = Heap[2];
          if ( !a2 || Heap[2] > 0x400u )
            goto LABEL_18;
          v11 = (unsigned int)Heap[2];
LABEL_13:
          memmove(a2, Heap + 3, v11);
        }
        else
        {
LABEL_10:
          inited = -1073741788;
        }
LABEL_19:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        goto LABEL_20;
      }
      if ( v8 != -2147483643 )
        goto LABEL_19;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
    return (unsigned __int32)-1073741801;
  }
  return v12;
}
