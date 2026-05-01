/*
 * XREFs of ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180044DC0
 * Callers:
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044A58 (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044C90 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapFree @ 0x18003CBC0 (CempHeapFree.c)
 */

__int64 __fastcall RmpObjectTableAllocateState(unsigned __int64 a1)
{
  __int64 v2; // rbx
  struct _PEB *v3; // rcx
  char *Heap; // rax
  char v5; // r8
  unsigned __int64 v6; // rcx
  unsigned int v7; // r10d
  __int64 v8; // r11
  void *v9; // rcx
  char v11; // cl
  __int64 v12; // r15
  _QWORD *v13; // r14
  unsigned __int64 v14; // rcx

  v2 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 >= (unsigned int)v2 )
  {
    v3 = NtCurrentPeb();
    if ( (unsigned int)v2 < 4 )
      v2 = 4LL;
    Heap = (char *)RtlAllocateHeap(v3->ProcessHeap, 0, 8LL * (unsigned int)v2);
    v5 = 0;
    if ( Heap )
    {
      if ( (((_DWORD)v2 - 1) & (unsigned int)v2) != 0 )
      {
        v11 = -1;
        do
        {
          ++v11;
          LODWORD(v2) = (unsigned int)v2 >> 1;
        }
        while ( (_DWORD)v2 );
        v2 = (unsigned int)(1 << v11);
      }
      if ( (unsigned int)v2 > 0x4000000 )
        v2 = 0x4000000LL;
      v6 = (unsigned int)v2;
      if ( Heap > &Heap[8 * v2] )
        v6 = 0LL;
      if ( v6 )
        memset64(Heap, a1 | 1, v6);
      v7 = 0;
      v8 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v12 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v13 = *(_QWORD **)(v12 + 8LL * v7);
            if ( ((unsigned __int8)v13 & 1) != 0 )
              break;
            *(_QWORD *)(v12 + 8LL * v7) = *v13;
            v14 = ((((unsigned __int64)v8 & v13[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v8 & v13[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v8 & v13[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v8 & v13[1]) >> 32)
                    + 37
                    * ((((unsigned int)v8 & (_DWORD)v13[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v8 & (_DWORD)v13[1]) >> 16)
                      + 37
                      * ((unsigned __int8)((unsigned __int16)(v8 & v13[1]) >> 8)
                       + 37 * ((unsigned __int8)(v8 & v13[1]) + 11623883)))))))) & (unsigned int)(v2 - 1);
            *v13 = *(_QWORD *)&Heap[8 * v14];
            *(_QWORD *)&Heap[8 * v14] = v13;
          }
          ++v7;
        }
        while ( v7 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      *(_DWORD *)(a1 + 4) &= 0x1Fu;
      v9 = *(void **)(a1 + 8);
      *(_DWORD *)(a1 + 4) |= 32 * v2;
      *(_QWORD *)(a1 + 8) = Heap;
      if ( v9 )
        CempHeapFree(v9);
    }
    else if ( *(_DWORD *)(a1 + 4) < 0x20u )
    {
      return v5 == 0 ? 0xC0000017 : 0;
    }
  }
  v5 = 1;
  return v5 == 0 ? 0xC0000017 : 0;
}
