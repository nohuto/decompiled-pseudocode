/*
 * XREFs of RtlpScanProcessVirtualMemory @ 0x1800F77FC
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180084DF0 (RtlDetectHeapLeaks.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A0760 (ZwQueryVirtualMemory.c)
 *     RtlpGetHeapBlock @ 0x1800F7074 (RtlpGetHeapBlock.c)
 *     RtlpGetMemoryFlag @ 0x1800F7110 (RtlpGetMemoryFlag.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800F75BC (RtlpScanHeapAllocBlocks.c)
 */

char RtlpScanProcessVirtualMemory()
{
  char *v0; // rbx
  NTSTATUS VirtualMemory; // esi
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rdi
  unsigned __int64 i; // rax
  __int64 HeapBlock; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 *v11; // rax
  _BYTE MemoryInformation[24]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-50h]
  int v15; // [rsp+50h] [rbp-48h]
  int v16; // [rsp+54h] [rbp-44h]

  v0 = 0LL;
  VirtualMemory = 0;
  while ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v0,
                      MemoryBasicInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory >= 0 )
    {
      if ( (MemoryInformation[16] & 0xCC) != 0
        && (v15 & 0x1000) != 0
        && (v16 & 0x100) == 0
        && !RtlpGetMemoryFlag((_QWORD *)RtlpProcessMemoryMap, (unsigned __int64)v0) )
      {
        v2 = (unsigned __int64 *)v0;
        v3 = v14 >> 3;
        v4 = 0LL;
        for ( i = 0LL; i < v3; i = v4 )
        {
          HeapBlock = RtlpGetHeapBlock(*v2);
          v7 = HeapBlock;
          if ( HeapBlock )
          {
            if ( !*(_QWORD *)(HeapBlock + 16) )
              __debugbreak();
            v8 = *(_DWORD *)(HeapBlock + 32);
            if ( !v8 )
            {
              v9 = *(_QWORD *)v7;
              v10 = *(_QWORD **)(v7 + 8);
              if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7
                || *v10 != v7
                || (*v10 = v9,
                    *(_QWORD *)(v9 + 8) = v10,
                    v11 = (__int64 *)qword_180163B08,
                    *(__int64 **)qword_180163B08 != &RtlpBusyList) )
              {
                __fastfail(3u);
              }
              *(_QWORD *)v7 = &RtlpBusyList;
              *(_QWORD *)(v7 + 8) = v11;
              *v11 = v7;
              qword_180163B08 = v7;
              v8 = *(_DWORD *)(v7 + 32);
            }
            *(_DWORD *)(v7 + 32) = v8 + 1;
          }
          ++v2;
          ++v4;
        }
      }
      v0 += v14;
    }
  }
  RtlpScanHeapAllocBlocks();
  return 1;
}
