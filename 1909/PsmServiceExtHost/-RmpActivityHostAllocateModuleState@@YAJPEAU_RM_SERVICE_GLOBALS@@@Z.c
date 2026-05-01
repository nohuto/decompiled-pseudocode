/*
 * XREFs of ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044530
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180043494 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapFreeForHashTable @ 0x18003E460 (CempHeapFreeForHashTable.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180044640 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

__int64 __fastcall RmpActivityHostAllocateModuleState(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 result; // rax
  char v3; // r15
  __int64 v4; // rbx
  struct _PEB *v5; // rcx
  char *Heap; // r8
  char v7; // cl
  unsigned __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // r10
  __int64 v11; // r12
  _QWORD *v12; // r9
  __int64 v13; // rdx
  void *v14; // rcx
  __int64 v15; // rbx
  struct _PEB *v16; // rcx
  char *v17; // r8
  unsigned __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // r13
  __int64 v21; // r11
  _QWORD *v22; // r9
  __int64 v23; // rdx
  void *v24; // rcx
  __int64 v25; // [rsp+60h] [rbp+40h]
  __int64 v26; // [rsp+68h] [rbp+48h]

  result = RmpObjectTableAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( (int)result >= 0 )
  {
    v3 = -1;
    v4 = (unsigned int)(2 * (*((_DWORD *)a1 + 609) >> 5));
    if ( *((_DWORD *)a1 + 608) >= (unsigned int)v4 )
    {
      v5 = NtCurrentPeb();
      if ( (unsigned int)v4 < 4 )
        v4 = 4LL;
      Heap = (char *)RtlAllocateHeap(v5->ProcessHeap, 0, 8LL * (unsigned int)v4);
      if ( Heap )
      {
        if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
        {
          v7 = -1;
          do
          {
            ++v7;
            LODWORD(v4) = (unsigned int)v4 >> 1;
          }
          while ( (_DWORD)v4 );
          v4 = (unsigned int)(1 << v7);
        }
        if ( (unsigned int)v4 > 0x4000000 )
          v4 = 0x4000000LL;
        v8 = (unsigned int)v4;
        if ( Heap > &Heap[8 * v4] )
          v8 = 0LL;
        if ( v8 )
          memset64(Heap, ((unsigned __int64)a1 + 2432) | 1, v8);
        v9 = 0;
        v10 = -1LL << (*((_BYTE *)a1 + 2436) & 0x1F);
        if ( (*((_DWORD *)a1 + 609) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v11 = *((_QWORD *)a1 + 305);
            while ( 1 )
            {
              v12 = *(_QWORD **)(v11 + 8LL * v9);
              if ( ((unsigned __int8)v12 & 1) != 0 )
                break;
              *(_QWORD *)(v11 + 8LL * v9) = *v12;
              v25 = v10 & v12[1];
              v13 = (37
                   * (BYTE6(v25)
                    + 37
                    * (BYTE5(v25)
                     + 37
                     * (BYTE4(v25)
                      + 37
                      * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
                   + HIBYTE(v25)) & (unsigned int)(v4 - 1);
              *v12 = *(_QWORD *)&Heap[8 * v13];
              *(_QWORD *)&Heap[8 * v13] = v12;
            }
            ++v9;
          }
          while ( v9 < *((_DWORD *)a1 + 609) >> 5 );
        }
        *((_DWORD *)a1 + 609) &= 0x1Fu;
        v14 = (void *)*((_QWORD *)a1 + 305);
        *((_DWORD *)a1 + 609) |= 32 * v4;
        *((_QWORD *)a1 + 305) = Heap;
        if ( v14 )
          CempHeapFreeForHashTable(v14);
      }
      else if ( *((_DWORD *)a1 + 609) < 0x20u )
      {
        return 3221225495LL;
      }
    }
    v15 = (unsigned int)(2 * (*((_DWORD *)a1 + 613) >> 5));
    if ( *((_DWORD *)a1 + 612) < (unsigned int)v15 )
      goto LABEL_3;
    v16 = NtCurrentPeb();
    if ( (unsigned int)v15 < 4 )
      v15 = 4LL;
    v17 = (char *)RtlAllocateHeap(v16->ProcessHeap, 0, 8LL * (unsigned int)v15);
    if ( v17 )
    {
      if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
      {
        do
        {
          ++v3;
          LODWORD(v15) = (unsigned int)v15 >> 1;
        }
        while ( (_DWORD)v15 );
        v15 = (unsigned int)(1 << v3);
      }
      if ( (unsigned int)v15 > 0x4000000 )
        v15 = 0x4000000LL;
      v18 = (unsigned int)v15;
      if ( v17 > &v17[8 * v15] )
        v18 = 0LL;
      if ( v18 )
        memset64(v17, ((unsigned __int64)a1 + 2448) | 1, v18);
      v19 = 0;
      v20 = -1LL << (*((_BYTE *)a1 + 2452) & 0x1F);
      if ( (*((_DWORD *)a1 + 613) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v21 = *((_QWORD *)a1 + 307);
          while ( 1 )
          {
            v22 = *(_QWORD **)(v21 + 8LL * v19);
            if ( ((unsigned __int8)v22 & 1) != 0 )
              break;
            *(_QWORD *)(v21 + 8LL * v19) = *v22;
            v26 = v20 & v22[1];
            v23 = (37
                 * (BYTE6(v26)
                  + 37
                  * (BYTE5(v26)
                   + 37
                   * (BYTE4(v26)
                    + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                 + HIBYTE(v26)) & (unsigned int)(v15 - 1);
            *v22 = *(_QWORD *)&v17[8 * v23];
            *(_QWORD *)&v17[8 * v23] = v22;
          }
          ++v19;
        }
        while ( v19 < *((_DWORD *)a1 + 613) >> 5 );
      }
      *((_DWORD *)a1 + 613) &= 0x1Fu;
      v24 = (void *)*((_QWORD *)a1 + 307);
      *((_DWORD *)a1 + 613) |= 32 * v15;
      *((_QWORD *)a1 + 307) = v17;
      if ( v24 )
        CempHeapFreeForHashTable(v24);
      goto LABEL_3;
    }
    if ( *((_DWORD *)a1 + 613) >= 0x20u )
    {
LABEL_3:
      result = TpAllocPool((char *)a1 + 2464, 0LL);
      if ( (int)result >= 0 )
      {
        *((_DWORD *)a1 + 618) = 3;
        *((_QWORD *)a1 + 310) = 0LL;
        *((_QWORD *)a1 + 311) = 0LL;
        *((_QWORD *)a1 + 312) = 0LL;
        *((_QWORD *)a1 + 313) = 0LL;
        *((_QWORD *)a1 + 314) = 0LL;
        *((_QWORD *)a1 + 315) = 0LL;
        *((_DWORD *)a1 + 632) = 0;
        *((_DWORD *)a1 + 633) = 1;
        *((_DWORD *)a1 + 634) = 72;
        *((_QWORD *)a1 + 310) = *((_QWORD *)a1 + 308);
        return 0LL;
      }
      return result;
    }
    return 3221225495LL;
  }
  return result;
}
