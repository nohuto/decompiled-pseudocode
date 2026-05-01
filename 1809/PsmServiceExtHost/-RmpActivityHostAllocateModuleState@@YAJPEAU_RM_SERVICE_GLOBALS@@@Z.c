/*
 * XREFs of ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044A58
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800436F8 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapFree @ 0x18003CBC0 (CempHeapFree.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180044DC0 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

__int64 __fastcall RmpActivityHostAllocateModuleState(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 result; // rax
  char v3; // r14
  __int64 v4; // rbx
  struct _PEB *v5; // rcx
  char *Heap; // r8
  unsigned __int64 v7; // rcx
  unsigned int v8; // r9d
  __int64 v9; // r10
  void *v10; // rcx
  __int64 v11; // rbx
  struct _PEB *v12; // rcx
  char *v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // r9d
  __int64 v16; // r15
  void *v17; // rcx
  char v18; // cl
  __int64 v19; // r13
  _QWORD *v20; // r11
  unsigned __int64 v21; // rcx
  __int64 v22; // r14
  _QWORD *v23; // r10
  unsigned __int64 v24; // rcx

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
          v18 = -1;
          do
          {
            ++v18;
            LODWORD(v4) = (unsigned int)v4 >> 1;
          }
          while ( (_DWORD)v4 );
          v4 = (unsigned int)(1 << v18);
        }
        if ( (unsigned int)v4 > 0x4000000 )
          v4 = 0x4000000LL;
        v7 = (unsigned int)v4;
        if ( Heap > &Heap[8 * v4] )
          v7 = 0LL;
        if ( v7 )
          memset64(Heap, ((unsigned __int64)a1 + 2432) | 1, v7);
        v8 = 0;
        v9 = -1LL << (*((_BYTE *)a1 + 2436) & 0x1F);
        if ( (*((_DWORD *)a1 + 609) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v19 = *((_QWORD *)a1 + 305);
            while ( 1 )
            {
              v20 = *(_QWORD **)(v19 + 8LL * v8);
              if ( ((unsigned __int8)v20 & 1) != 0 )
                break;
              *(_QWORD *)(v19 + 8LL * v8) = *v20;
              v21 = ((((unsigned __int64)v9 & v20[1]) >> 56)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v9 & v20[1]) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v9 & v20[1]) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v9 & v20[1]) >> 32)
                      + 37
                      * ((((unsigned int)v9 & (_DWORD)v20[1]) >> 24)
                       + 37
                       * ((unsigned __int8)(((unsigned int)v9 & (_DWORD)v20[1]) >> 16)
                        + 37
                        * ((unsigned __int8)((unsigned __int16)(v9 & v20[1]) >> 8)
                         + 37 * ((unsigned __int8)(v9 & v20[1]) + 11623883)))))))) & (unsigned int)(v4 - 1);
              *v20 = *(_QWORD *)&Heap[8 * v21];
              *(_QWORD *)&Heap[8 * v21] = v20;
            }
            ++v8;
          }
          while ( v8 < *((_DWORD *)a1 + 609) >> 5 );
        }
        *((_DWORD *)a1 + 609) &= 0x1Fu;
        v10 = (void *)*((_QWORD *)a1 + 305);
        *((_DWORD *)a1 + 609) |= 32 * v4;
        *((_QWORD *)a1 + 305) = Heap;
        if ( v10 )
          CempHeapFree(v10);
      }
      else if ( *((_DWORD *)a1 + 609) < 0x20u )
      {
        return 3221225495LL;
      }
    }
    v11 = (unsigned int)(2 * (*((_DWORD *)a1 + 613) >> 5));
    if ( *((_DWORD *)a1 + 612) < (unsigned int)v11 )
      goto LABEL_30;
    v12 = NtCurrentPeb();
    if ( (unsigned int)v11 < 4 )
      v11 = 4LL;
    v13 = (char *)RtlAllocateHeap(v12->ProcessHeap, 0, 8LL * (unsigned int)v11);
    if ( v13 )
    {
      if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
      {
        do
        {
          ++v3;
          LODWORD(v11) = (unsigned int)v11 >> 1;
        }
        while ( (_DWORD)v11 );
        v11 = (unsigned int)(1 << v3);
      }
      if ( (unsigned int)v11 > 0x4000000 )
        v11 = 0x4000000LL;
      v14 = (unsigned int)v11;
      if ( v13 > &v13[8 * v11] )
        v14 = 0LL;
      if ( v14 )
        memset64(v13, ((unsigned __int64)a1 + 2448) | 1, v14);
      v15 = 0;
      v16 = -1LL << (*((_BYTE *)a1 + 2452) & 0x1F);
      if ( (*((_DWORD *)a1 + 613) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v22 = *((_QWORD *)a1 + 307);
          while ( 1 )
          {
            v23 = *(_QWORD **)(v22 + 8LL * v15);
            if ( ((unsigned __int8)v23 & 1) != 0 )
              break;
            *(_QWORD *)(v22 + 8LL * v15) = *v23;
            v24 = ((((unsigned __int64)v16 & v23[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v16 & v23[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v16 & v23[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v16 & v23[1]) >> 32)
                    + 37
                    * ((((unsigned int)v16 & (_DWORD)v23[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v16 & (_DWORD)v23[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v16 & v23[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v16 & v23[1]) >> 8)))))))) & (unsigned int)(v11 - 1);
            *v23 = *(_QWORD *)&v13[8 * v24];
            *(_QWORD *)&v13[8 * v24] = v23;
          }
          ++v15;
        }
        while ( v15 < *((_DWORD *)a1 + 613) >> 5 );
      }
      *((_DWORD *)a1 + 613) &= 0x1Fu;
      v17 = (void *)*((_QWORD *)a1 + 307);
      *((_DWORD *)a1 + 613) |= 32 * v11;
      *((_QWORD *)a1 + 307) = v13;
      if ( v17 )
        CempHeapFree(v17);
      goto LABEL_30;
    }
    if ( *((_DWORD *)a1 + 613) >= 0x20u )
    {
LABEL_30:
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
