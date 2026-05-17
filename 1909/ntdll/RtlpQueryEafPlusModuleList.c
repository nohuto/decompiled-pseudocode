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

__int64 __fastcall RtlpQueryEafPlusModuleList(__int64 a1, void *a2)
{
  int inited; // ebx
  unsigned int i; // ebx
  void *ProcessHeap; // rcx
  _DWORD *Heap; // rdi
  int ValueKey; // eax
  int v8; // ecx
  unsigned int v9; // eax
  size_t v10; // r8
  unsigned int v11; // ecx
  unsigned int v13; // [rsp+30h] [rbp-38h]
  _BYTE v14[48]; // [rsp+38h] [rbp-30h] BYREF

  memset(a2, 0, 0x400uLL);
  inited = RtlInitUnicodeStringEx((__int64)v14, (__int64)L"EAFModules");
  if ( inited < 0 )
  {
LABEL_20:
    v11 = inited;
    if ( (int)(inited + 0x80000000) < 0 || inited == -1073741772 )
      return 0LL;
  }
  else
  {
    for ( i = 1036; ; i = v13 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = (_DWORD *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, i);
      if ( !Heap )
        break;
      ValueKey = NtQueryValueKey();
      inited = ValueKey;
      if ( ValueKey >= 0 )
      {
        v8 = Heap[1];
        if ( ((v8 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v8 != 1 )
            goto LABEL_10;
          v9 = Heap[2];
          if ( v9 <= 0x400 )
          {
            v10 = v9;
            goto LABEL_13;
          }
LABEL_18:
          inited = -2147483643;
        }
        else if ( v8 == 1 )
        {
          if ( !a2 || Heap[2] > 0x400u )
            goto LABEL_18;
          v10 = (unsigned int)Heap[2];
LABEL_13:
          memmove(a2, Heap + 3, v10);
        }
        else
        {
LABEL_10:
          inited = -1073741788;
        }
LABEL_19:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
        goto LABEL_20;
      }
      if ( ValueKey != -2147483643 )
        goto LABEL_19;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
    }
    return (unsigned int)-1073741801;
  }
  return v11;
}
