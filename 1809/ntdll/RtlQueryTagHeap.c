/*
 * XREFs of RtlQueryTagHeap @ 0x1800F23D0
 * Callers:
 *     RtlDebugQueryTagHeap @ 0x18010805C (RtlDebugQueryTagHeap.c)
 *     TpDbgDumpHeapUsage @ 0x180110710 (TpDbgDumpHeapUsage.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlDebugQueryTagHeap @ 0x18010805C (RtlDebugQueryTagHeap.c)
 */

void *__fastcall RtlQueryTagHeap(__int64 a1, int a2, unsigned __int16 a3, char a4, __int64 a5)
{
  int v7; // ecx
  void *TagHeap; // rdi
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v14; // [rsp+30h] [rbp-28h]

  v14 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 116);
  if ( (v7 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  TagHeap = 0LL;
  v9 = v7 | a2;
  if ( ((v7 | a2) & 0x61000000) != 0 && ((v7 | a2) & 0x10000000) == 0 )
  {
    TagHeap = (void *)RtlDebugQueryTagHeap(a1, v9, a3, a4, a5);
  }
  else
  {
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v14 = 1;
    }
    if ( a3 < *(_WORD *)(a1 + 224) && (v10 = *(_QWORD *)(a1 + 232)) != 0 )
    {
      if ( a5 )
      {
        *(_DWORD *)a5 = *(_DWORD *)(v10 + 72LL * a3);
        *(_DWORD *)(a5 + 4) = *(_DWORD *)(v10 + 72LL * a3 + 4);
        *(_QWORD *)(a5 + 8) = 16LL * *(_QWORD *)(v10 + 72LL * a3 + 8);
      }
      if ( a4 )
      {
        *(_QWORD *)(v10 + 72LL * a3) = 0LL;
        *(_QWORD *)(v10 + 72LL * a3 + 8) = 0LL;
      }
      TagHeap = (void *)(v10 + 20 + 72LL * a3);
    }
    else if ( (a3 & 0x8000u) != 0 && (a3 ^ 0x8000u) < 0x81 )
    {
      v11 = *(_QWORD *)(a1 + 328);
      if ( v11 )
      {
        v12 = v11 + 16LL * (a3 ^ 0x8000u);
        if ( a5 )
        {
          *(_DWORD *)a5 = *(_DWORD *)v12;
          *(_DWORD *)(a5 + 4) = *(_DWORD *)(v12 + 4);
          *(_QWORD *)(a5 + 8) = 16LL * *(_QWORD *)(v12 + 8);
        }
        if ( a4 )
        {
          *(_QWORD *)v12 = 0LL;
          *(_QWORD *)(v12 + 8) = 0LL;
        }
        TagHeap = &unk_18011CB50;
      }
    }
  }
  if ( v14 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return TagHeap;
}
