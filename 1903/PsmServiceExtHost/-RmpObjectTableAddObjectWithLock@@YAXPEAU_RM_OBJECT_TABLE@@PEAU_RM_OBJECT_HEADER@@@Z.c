/*
 * XREFs of ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180015DA4
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015B24 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18006D470 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     CempHeapFreeForHashTable @ 0x18003E460 (CempHeapFreeForHashTable.c)
 */

void __fastcall RmpObjectTableAddObjectWithLock(unsigned __int64 a1, struct _RM_OBJECT_HEADER *a2)
{
  __int64 v3; // rbx
  struct _PEB *v5; // rcx
  char *Heap; // r8
  char v7; // cl
  unsigned __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // r9
  __int64 v11; // r15
  _QWORD *v12; // r10
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+60h] [rbp+40h]
  __int64 v19; // [rsp+68h] [rbp+48h]

  v3 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 >= (unsigned int)v3 )
  {
    v5 = NtCurrentPeb();
    if ( (unsigned int)v3 < 4 )
      v3 = 4LL;
    Heap = (char *)RtlAllocateHeap(v5->ProcessHeap, 0, 8LL * (unsigned int)v3);
    if ( Heap )
    {
      if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
      {
        v7 = -1;
        do
        {
          ++v7;
          LODWORD(v3) = (unsigned int)v3 >> 1;
        }
        while ( (_DWORD)v3 );
        v3 = (unsigned int)(1 << v7);
      }
      if ( (unsigned int)v3 > 0x4000000 )
        v3 = 0x4000000LL;
      v8 = (unsigned int)v3;
      if ( Heap > &Heap[8 * v3] )
        v8 = 0LL;
      if ( v8 )
        memset64(Heap, a1 | 1, v8);
      v9 = 0;
      v10 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v11 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v12 = *(_QWORD **)(v11 + 8LL * v9);
            if ( ((unsigned __int8)v12 & 1) != 0 )
              break;
            *(_QWORD *)(v11 + 8LL * v9) = *v12;
            v18 = v10 & v12[1];
            v13 = (37
                 * (BYTE6(v18)
                  + 37
                  * (BYTE5(v18)
                   + 37
                   * (BYTE4(v18)
                    + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
                 + HIBYTE(v18)) & (unsigned int)(v3 - 1);
            *v12 = *(_QWORD *)&Heap[8 * v13];
            *(_QWORD *)&Heap[8 * v13] = v12;
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      *(_DWORD *)(a1 + 4) &= 0x1Fu;
      v17 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 4) |= 32 * v3;
      *(_QWORD *)(a1 + 8) = Heap;
      if ( v17 )
        CempHeapFreeForHashTable(v17, 0LL);
    }
  }
  v14 = *(_DWORD *)(a1 + 4);
  v19 = *((_QWORD *)a2 + 1) & (-1LL << (v14 & 0x1F));
  v15 = *(_QWORD *)(a1 + 8);
  v16 = (37
       * (BYTE6(v19)
        + 37
        * (BYTE5(v19)
         + 37
         * (BYTE4(v19)
          + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
       + HIBYTE(v19)) & ((v14 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v15 + 8 * v16);
  *(_QWORD *)(v15 + 8 * v16) = a2;
  ++*(_DWORD *)a1;
}
