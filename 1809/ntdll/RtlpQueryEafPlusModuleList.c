/*
 * XREFs of RtlpQueryEafPlusModuleList @ 0x1800E4B68
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x1800E2FB0 (RtlQueryImageMitigationPolicy.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpQueryEafPlusModuleList(__int64 a1, void *a2)
{
  int inited; // ebx
  unsigned int i; // ebx
  void *ProcessHeap; // rcx
  _DWORD *Heap; // rdi
  int ValueKey; // eax
  int v8; // ecx
  size_t v9; // rax
  unsigned int v10; // ecx
  unsigned int v12; // [rsp+30h] [rbp-38h]
  _BYTE v13[48]; // [rsp+38h] [rbp-30h] BYREF

  memset(a2, 0, 0x400uLL);
  inited = RtlInitUnicodeStringEx((__int64)v13, (__int64)L"EAFModules");
  if ( inited < 0 )
  {
LABEL_24:
    v10 = inited;
    if ( (int)(inited + 0x80000000) < 0 || inited == -1073741772 )
      return 0LL;
  }
  else
  {
    for ( i = 1036; ; i = v12 )
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
          if ( v8 == 4 )
          {
            inited = -1073741788;
LABEL_23:
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
            goto LABEL_24;
          }
          if ( v8 == 11 )
          {
            inited = -1073741788;
            goto LABEL_23;
          }
          if ( v8 != 1 )
          {
            inited = -1073741788;
            goto LABEL_23;
          }
          v9 = (unsigned int)Heap[2];
LABEL_16:
          if ( (unsigned int)v9 <= 0x400 )
          {
            memmove(a2, Heap + 3, v9);
            goto LABEL_23;
          }
        }
        else
        {
          if ( v8 != 1 )
          {
            inited = -1073741788;
            goto LABEL_23;
          }
          if ( a2 )
          {
            v9 = (unsigned int)Heap[2];
            goto LABEL_16;
          }
        }
        inited = -2147483643;
        goto LABEL_23;
      }
      if ( ValueKey != -2147483643 )
        goto LABEL_23;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
    }
    return (unsigned int)-1073741801;
  }
  return v10;
}
