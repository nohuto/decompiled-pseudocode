/*
 * XREFs of ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x1800699C8
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006A51C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     CempHeapFreeForHashTable @ 0x18003E460 (CempHeapFreeForHashTable.c)
 */

void __fastcall RmpCpuSetManagerInsertProcess(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  struct _PEB *v8; // rcx
  char *Heap; // r8
  char v10; // cl
  unsigned __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // r14
  __int64 v14; // r11
  _QWORD *v15; // r9
  __int64 v16; // rdx
  void *v17; // rcx
  __int64 v18; // [rsp+50h] [rbp+30h]
  __int64 v19; // [rsp+58h] [rbp+38h]

  v2 = (unsigned __int64)a1 + 72;
  v4 = *((_DWORD *)a1 + 19);
  v18 = *((_QWORD *)a2 + 1) & (-1LL << (v4 & 0x1F));
  v5 = *((_QWORD *)a1 + 10);
  v6 = (37
      * (BYTE6(v18)
       + 37
       * (BYTE5(v18)
        + 37
        * (BYTE4(v18)
         + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
      + HIBYTE(v18)) & ((v4 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v5 + 8 * v6);
  *(_QWORD *)(v5 + 8 * v6) = a2;
  ++*(_DWORD *)v2;
  v7 = (unsigned int)(2 * (*(_DWORD *)(v2 + 4) >> 5));
  if ( *(_DWORD *)v2 >= (unsigned int)v7 )
  {
    v8 = NtCurrentPeb();
    if ( (unsigned int)v7 < 4 )
      v7 = 4LL;
    Heap = (char *)RtlAllocateHeap(v8->ProcessHeap, 0, 8LL * (unsigned int)v7);
    if ( Heap )
    {
      if ( (((_DWORD)v7 - 1) & (unsigned int)v7) != 0 )
      {
        v10 = -1;
        do
        {
          ++v10;
          LODWORD(v7) = (unsigned int)v7 >> 1;
        }
        while ( (_DWORD)v7 );
        v7 = (unsigned int)(1 << v10);
      }
      if ( (unsigned int)v7 > 0x4000000 )
        v7 = 0x4000000LL;
      v11 = (unsigned int)v7;
      if ( Heap > &Heap[8 * v7] )
        v11 = 0LL;
      if ( v11 )
        memset64(Heap, v2 | 1, v11);
      v12 = 0;
      v13 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v14 = *(_QWORD *)(v2 + 8);
          while ( 1 )
          {
            v15 = *(_QWORD **)(v14 + 8LL * v12);
            if ( ((unsigned __int8)v15 & 1) != 0 )
              break;
            *(_QWORD *)(v14 + 8LL * v12) = *v15;
            v19 = v13 & v15[1];
            v16 = (37
                 * (BYTE6(v19)
                  + 37
                  * (BYTE5(v19)
                   + 37
                   * (BYTE4(v19)
                    + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
                 + HIBYTE(v19)) & (unsigned int)(v7 - 1);
            *v15 = *(_QWORD *)&Heap[8 * v16];
            *(_QWORD *)&Heap[8 * v16] = v15;
          }
          ++v12;
        }
        while ( v12 < *(_DWORD *)(v2 + 4) >> 5 );
      }
      *(_DWORD *)(v2 + 4) &= 0x1Fu;
      v17 = *(void **)(v2 + 8);
      *(_DWORD *)(v2 + 4) |= 32 * v7;
      *(_QWORD *)(v2 + 8) = Heap;
      if ( v17 )
        CempHeapFreeForHashTable(v17);
    }
  }
}
