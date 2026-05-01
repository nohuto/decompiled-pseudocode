/*
 * XREFs of ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18005C9DC
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005D574 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     CempHeapFree @ 0x18003CBC0 (CempHeapFree.c)
 */

void __fastcall RmpCpuSetManagerInsertProcess(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v3; // r8d
  char v4; // al
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  struct _PEB *v9; // rcx
  char *Heap; // r8
  char v11; // cl
  unsigned __int64 v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rbp
  __int64 v15; // r14
  _QWORD *v16; // r10
  unsigned __int64 v17; // rcx
  void *v18; // rcx

  v2 = (unsigned __int64)a1 + 72;
  v3 = *((_DWORD *)a1 + 19);
  v4 = v3 & 0x1F;
  v5 = *((_QWORD *)a2 + 1) & (-1LL << (v3 & 0x1F));
  v6 = *((_QWORD *)a1 + 10);
  v7 = (HIBYTE(v5)
      + 37
      * (BYTE6(v5)
       + 37
       * ((unsigned __int8)((unsigned __int16)((*((_QWORD *)a2 + 1) & (unsigned __int64)(-1LL << v4)) >> 32) >> 8)
        + 37
        * (BYTE4(v5)
         + 37
         * (((*((_DWORD *)a2 + 2) & (unsigned int)(-1 << v4)) >> 24)
          + 37
          * ((unsigned __int8)((*((_DWORD *)a2 + 2) & (unsigned int)(-1 << v4)) >> 16)
           + 37
           * (37 * ((unsigned __int8)v5 + 11623883)
            + (unsigned __int8)((unsigned __int16)(*((_WORD *)a2 + 4) & (-1 << v4)) >> 8)))))))) & ((v3 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v6 + 8 * v7);
  *(_QWORD *)(v6 + 8 * v7) = a2;
  ++*(_DWORD *)v2;
  v8 = (unsigned int)(2 * (*(_DWORD *)(v2 + 4) >> 5));
  if ( *(_DWORD *)v2 >= (unsigned int)v8 )
  {
    v9 = NtCurrentPeb();
    if ( (unsigned int)v8 < 4 )
      v8 = 4LL;
    Heap = (char *)RtlAllocateHeap(v9->ProcessHeap, 0, 8LL * (unsigned int)v8);
    if ( Heap )
    {
      if ( (((_DWORD)v8 - 1) & (unsigned int)v8) != 0 )
      {
        v11 = -1;
        do
        {
          ++v11;
          LODWORD(v8) = (unsigned int)v8 >> 1;
        }
        while ( (_DWORD)v8 );
        v8 = (unsigned int)(1 << v11);
      }
      if ( (unsigned int)v8 > 0x4000000 )
        v8 = 0x4000000LL;
      v12 = (unsigned int)v8;
      if ( Heap > &Heap[8 * v8] )
        v12 = 0LL;
      if ( v12 )
        memset64(Heap, v2 | 1, v12);
      v13 = 0;
      v14 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v15 = *(_QWORD *)(v2 + 8);
          while ( 1 )
          {
            v16 = *(_QWORD **)(v15 + 8LL * v13);
            if ( ((unsigned __int8)v16 & 1) != 0 )
              break;
            *(_QWORD *)(v15 + 8LL * v13) = *v16;
            v17 = ((((unsigned __int64)v14 & v16[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v14 & v16[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v14 & v16[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v14 & v16[1]) >> 32)
                    + 37
                    * ((((unsigned int)v14 & (_DWORD)v16[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v14 & (_DWORD)v16[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v14 & v16[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v14 & v16[1]) >> 8)))))))) & (unsigned int)(v8 - 1);
            *v16 = *(_QWORD *)&Heap[8 * v17];
            *(_QWORD *)&Heap[8 * v17] = v16;
          }
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v2 + 4) >> 5 );
      }
      *(_DWORD *)(v2 + 4) &= 0x1Fu;
      v18 = *(void **)(v2 + 8);
      *(_DWORD *)(v2 + 4) |= 32 * v8;
      *(_QWORD *)(v2 + 8) = Heap;
      if ( v18 )
        CempHeapFree(v18);
    }
  }
}
