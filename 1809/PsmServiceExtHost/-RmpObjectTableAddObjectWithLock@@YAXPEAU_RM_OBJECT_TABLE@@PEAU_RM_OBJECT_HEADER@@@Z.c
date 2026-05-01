/*
 * XREFs of ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180016208
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015F50 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180060500 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     CempHeapFree @ 0x18003CBC0 (CempHeapFree.c)
 */

void __fastcall RmpObjectTableAddObjectWithLock(unsigned __int64 a1, struct _RM_OBJECT_HEADER *a2)
{
  __int64 v3; // rbx
  unsigned int v5; // edi
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  struct _PEB *v9; // rcx
  char *Heap; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r15
  _QWORD *v15; // r11
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  char v18; // cl

  v3 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 >= (unsigned int)v3 )
  {
    v9 = NtCurrentPeb();
    if ( (unsigned int)v3 < 4 )
      v3 = 4LL;
    Heap = (char *)RtlAllocateHeap(v9->ProcessHeap, 0, 8LL * (unsigned int)v3);
    if ( Heap )
    {
      if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
      {
        v18 = -1;
        do
        {
          ++v18;
          LODWORD(v3) = (unsigned int)v3 >> 1;
        }
        while ( (_DWORD)v3 );
        v3 = (unsigned int)(1 << v18);
      }
      if ( (unsigned int)v3 > 0x4000000 )
        v3 = 0x4000000LL;
      v11 = (unsigned int)v3;
      if ( Heap > &Heap[8 * v3] )
        v11 = 0LL;
      if ( v11 )
        memset64(Heap, a1 | 1, v11);
      v12 = 0LL;
      v13 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v14 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v15 = *(_QWORD **)(v14 + 8LL * (unsigned int)v12);
            if ( ((unsigned __int8)v15 & 1) != 0 )
              break;
            *(_QWORD *)(v14 + 8LL * (unsigned int)v12) = *v15;
            v16 = ((((unsigned __int64)v13 & v15[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v13 & v15[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v13 & v15[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v13 & v15[1]) >> 32)
                    + 37
                    * ((((unsigned int)v13 & (_DWORD)v15[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v13 & (_DWORD)v15[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v13 & v15[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v13 & v15[1]) >> 8)))))))) & (unsigned int)(v3 - 1);
            *v15 = *(_QWORD *)&Heap[8 * v16];
            *(_QWORD *)&Heap[8 * v16] = v15;
          }
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      *(_DWORD *)(a1 + 4) &= 0x1Fu;
      v17 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 4) |= 32 * v3;
      *(_QWORD *)(a1 + 8) = Heap;
      if ( v17 )
        CempHeapFree(v17, 0LL, Heap, v12);
    }
  }
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *((_QWORD *)a2 + 1) & (-1LL << (v5 & 0x1F));
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (HIBYTE(v6)
      + 37
      * (BYTE6(v6)
       + 37
       * (BYTE5(v6)
        + 37
        * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))) & ((v5 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v7 + 8 * v8);
  *(_QWORD *)(v7 + 8 * v8) = a2;
  ++*(_DWORD *)a1;
}
