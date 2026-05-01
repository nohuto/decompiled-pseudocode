/*
 * XREFs of ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015F50
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015E54 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180016208 (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180016480 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     CempHeapFree @ 0x18003CBC0 (CempHeapFree.c)
 */

void __fastcall RmpActivityHostAddToTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  struct _PEB *v10; // rcx
  char *Heap; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r12
  _QWORD *v16; // r11
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  char v19; // cl

  v1 = *((_QWORD *)a1 + 6);
  v3 = v1 + 32;
  *((_QWORD *)a1 + 168) = utl::hash<_RM_PSM_HOST_INFO>::operator()(a1, (char *)a1 + 88);
  RtlAcquireSRWLockExclusive(v1 + 32);
  RmpObjectTableAddObjectWithLock((struct _RM_OBJECT_TABLE *)(v1 + 16), a1);
  v4 = v1 + 2432;
  v5 = (unsigned int)(2 * (*(_DWORD *)(v1 + 2436) >> 5));
  if ( *(_DWORD *)(v1 + 2432) >= (unsigned int)v5 )
  {
    v10 = NtCurrentPeb();
    if ( (unsigned int)v5 < 4 )
      v5 = 4LL;
    Heap = (char *)RtlAllocateHeap(v10->ProcessHeap, 0, 8LL * (unsigned int)v5);
    if ( Heap )
    {
      if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
      {
        v19 = -1;
        do
        {
          ++v19;
          LODWORD(v5) = (unsigned int)v5 >> 1;
        }
        while ( (_DWORD)v5 );
        v5 = (unsigned int)(1 << v19);
      }
      if ( (unsigned int)v5 > 0x4000000 )
        v5 = 0x4000000LL;
      v12 = (unsigned int)v5;
      if ( Heap > &Heap[8 * v5] )
        v12 = 0LL;
      if ( v12 )
        memset64(Heap, v4 | 1, v12);
      v13 = 0LL;
      v14 = -1LL << (*(_BYTE *)(v1 + 2436) & 0x1F);
      if ( (*(_DWORD *)(v1 + 2436) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v15 = *(_QWORD *)(v1 + 2440);
          while ( 1 )
          {
            v16 = *(_QWORD **)(v15 + 8LL * (unsigned int)v13);
            if ( ((unsigned __int8)v16 & 1) != 0 )
              break;
            *(_QWORD *)(v15 + 8LL * (unsigned int)v13) = *v16;
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
                       + (unsigned __int8)((unsigned __int16)(v14 & v16[1]) >> 8)))))))) & (unsigned int)(v5 - 1);
            *v16 = *(_QWORD *)&Heap[8 * v17];
            *(_QWORD *)&Heap[8 * v17] = v16;
          }
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < *(_DWORD *)(v1 + 2436) >> 5 );
      }
      *(_DWORD *)(v1 + 2436) &= 0x1Fu;
      v18 = *(_QWORD *)(v1 + 2440);
      *(_DWORD *)(v1 + 2436) |= 32 * v5;
      *(_QWORD *)(v1 + 2440) = Heap;
      if ( v18 )
        CempHeapFree(v18, 0LL, Heap, v13);
    }
  }
  v6 = *(_DWORD *)(v1 + 2436);
  v7 = *((_QWORD *)a1 + 168) & (-1LL << (v6 & 0x1F));
  v8 = *(_QWORD *)(v4 + 8);
  v9 = (HIBYTE(v7)
      + 37
      * (BYTE6(v7)
       + 37
       * (BYTE5(v7)
        + 37
        * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (37 * ((unsigned __int8)v7 + 11623883) + BYTE1(v7)))))))) & ((v6 >> 5) - 1);
  *((_QWORD *)a1 + 167) = *(_QWORD *)(v8 + 8 * v9);
  *(_QWORD *)(v8 + 8 * v9) = (char *)a1 + 1336;
  ++*(_DWORD *)v4;
  RtlReleaseSRWLockExclusive(v3);
}
