/*
 * XREFs of RtlpScanProcessVirtualMemory @ 0x1800F4BFC
 * Callers:
 *     RtlDetectHeapLeaks @ 0x18006B830 (RtlDetectHeapLeaks.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D2F0 (ZwQueryVirtualMemory.c)
 *     RtlpGetHeapBlock @ 0x1800F4474 (RtlpGetHeapBlock.c)
 *     RtlpGetMemoryFlag @ 0x1800F4510 (RtlpGetMemoryFlag.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800F49BC (RtlpScanHeapAllocBlocks.c)
 */

char RtlpScanProcessVirtualMemory()
{
  unsigned __int64 v0; // rbx
  int VirtualMemory; // esi
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rdi
  unsigned __int64 i; // rax
  __int64 HeapBlock; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 *v10; // rax
  char v12; // [rsp+40h] [rbp-58h]
  unsigned __int64 v13; // [rsp+48h] [rbp-50h]
  __int16 v14; // [rsp+50h] [rbp-48h]
  __int16 v15; // [rsp+54h] [rbp-44h]

  v0 = 0LL;
  VirtualMemory = 0;
  while ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwQueryVirtualMemory();
    if ( VirtualMemory >= 0 )
    {
      if ( (v12 & 0xCC) != 0
        && (v14 & 0x1000) != 0
        && (v15 & 0x100) == 0
        && !RtlpGetMemoryFlag((_QWORD *)RtlpProcessMemoryMap, v0) )
      {
        v2 = (unsigned __int64 *)v0;
        v3 = 0LL;
        for ( i = 0LL; i < v13 >> 3; i = v3 )
        {
          HeapBlock = RtlpGetHeapBlock(*v2);
          v6 = HeapBlock;
          if ( HeapBlock )
          {
            if ( !*(_QWORD *)(HeapBlock + 16) )
              __debugbreak();
            v7 = *(_DWORD *)(HeapBlock + 32);
            if ( !v7 )
            {
              v8 = *(_QWORD *)v6;
              v9 = *(_QWORD **)(v6 + 8);
              if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || *v9 != v6 )
                __fastfail(3u);
              *v9 = v8;
              *(_QWORD *)(v8 + 8) = v9;
              v10 = (__int64 *)qword_180163BB8;
              if ( *(__int64 **)qword_180163BB8 != &RtlpBusyList )
                __fastfail(3u);
              *(_QWORD *)v6 = &RtlpBusyList;
              *(_QWORD *)(v6 + 8) = v10;
              *v10 = v6;
              qword_180163BB8 = v6;
              v7 = *(_DWORD *)(v6 + 32);
            }
            *(_DWORD *)(v6 + 32) = v7 + 1;
          }
          ++v2;
          ++v3;
        }
      }
      v0 += v13;
    }
  }
  RtlpScanHeapAllocBlocks();
  return 1;
}
