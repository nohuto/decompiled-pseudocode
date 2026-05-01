/*
 * XREFs of ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800445EC
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180043494 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempHeapFreeForHashTable @ 0x18003E460 (CempHeapFreeForHashTable.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180044640 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044690 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateState(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbp
  int State; // edi
  __int64 v3; // rbx
  struct _PEB *v4; // rcx
  char *Heap; // r8
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // r14
  _QWORD *v11; // r10
  __int64 v12; // rdx
  void *v13; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h]

  v1 = (char *)a1 + 680;
  State = RmpObjectTableAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 704));
  if ( State >= 0 )
  {
    State = RmpObjectTableAllocateState((struct _RM_OBJECT_TABLE *)(v1 + 48));
    if ( State >= 0 )
    {
      v3 = (unsigned int)(2 * (*((_DWORD *)v1 + 19) >> 5));
      if ( *((_DWORD *)v1 + 18) >= (unsigned int)v3 )
      {
        v4 = NtCurrentPeb();
        if ( (unsigned int)v3 < 4 )
          v3 = 4LL;
        Heap = (char *)RtlAllocateHeap(v4->ProcessHeap, 0, 8LL * (unsigned int)v3);
        if ( Heap )
        {
          if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
          {
            v6 = -1;
            do
            {
              ++v6;
              LODWORD(v3) = (unsigned int)v3 >> 1;
            }
            while ( (_DWORD)v3 );
            v3 = (unsigned int)(1 << v6);
          }
          if ( (unsigned int)v3 > 0x4000000 )
            v3 = 0x4000000LL;
          v7 = (unsigned int)v3;
          if ( Heap > &Heap[8 * v3] )
            v7 = 0LL;
          if ( v7 )
            memset64(Heap, (unsigned __int64)(v1 + 72) | 1, v7);
          v8 = 0;
          v9 = -1LL << (v1[76] & 0x1F);
          if ( (*((_DWORD *)v1 + 19) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v10 = *((_QWORD *)v1 + 10);
              while ( 1 )
              {
                v11 = *(_QWORD **)(v10 + 8LL * v8);
                if ( ((unsigned __int8)v11 & 1) != 0 )
                  break;
                *(_QWORD *)(v10 + 8LL * v8) = *v11;
                v15 = v9 & v11[1];
                v12 = (37
                     * (BYTE6(v15)
                      + 37
                      * (BYTE5(v15)
                       + 37
                       * (BYTE4(v15)
                        + 37
                        * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
                     + HIBYTE(v15)) & (unsigned int)(v3 - 1);
                *v11 = *(_QWORD *)&Heap[8 * v12];
                *(_QWORD *)&Heap[8 * v12] = v11;
              }
              ++v8;
            }
            while ( v8 < *((_DWORD *)v1 + 19) >> 5 );
          }
          *((_DWORD *)v1 + 19) &= 0x1Fu;
          v13 = (void *)*((_QWORD *)v1 + 10);
          *((_DWORD *)v1 + 19) |= 32 * v3;
          *((_QWORD *)v1 + 10) = Heap;
          if ( v13 )
            CempHeapFreeForHashTable(v13);
        }
        else if ( *((_DWORD *)v1 + 19) < 0x20u )
        {
          return (unsigned int)-1073741801;
        }
      }
      RmpAcquireGlobalLock();
      State = RmpCpuSetManagerResetValidMask((struct _RM_CPU_SET_MANAGER *)v1);
      RmpReleaseGlobalLock();
      if ( State >= 0 )
        return 0;
    }
  }
  return (unsigned int)State;
}
