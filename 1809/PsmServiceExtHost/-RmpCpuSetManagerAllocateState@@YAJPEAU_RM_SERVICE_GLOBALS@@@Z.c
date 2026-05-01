/*
 * XREFs of ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044C90
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800436F8 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempHeapFree @ 0x18003CBC0 (CempHeapFree.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180044DC0 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044EBC (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateState(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbp
  int State; // edi
  __int64 v3; // rbx
  struct _PEB *v4; // rcx
  char *Heap; // r8
  unsigned __int64 v6; // rcx
  unsigned int v7; // r9d
  __int64 v8; // r10
  void *v9; // rcx
  char v11; // cl
  __int64 v12; // r15
  _QWORD *v13; // r11
  unsigned __int64 v14; // rcx

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
            v11 = -1;
            do
            {
              ++v11;
              LODWORD(v3) = (unsigned int)v3 >> 1;
            }
            while ( (_DWORD)v3 );
            v3 = (unsigned int)(1 << v11);
          }
          if ( (unsigned int)v3 > 0x4000000 )
            v3 = 0x4000000LL;
          v6 = (unsigned int)v3;
          if ( Heap > &Heap[8 * v3] )
            v6 = 0LL;
          if ( v6 )
            memset64(Heap, (unsigned __int64)(v1 + 72) | 1, v6);
          v7 = 0;
          v8 = -1LL << (v1[76] & 0x1F);
          if ( (*((_DWORD *)v1 + 19) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v12 = *((_QWORD *)v1 + 10);
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
                           + 37 * ((unsigned __int8)(v8 & v13[1]) + 11623883)))))))) & (unsigned int)(v3 - 1);
                *v13 = *(_QWORD *)&Heap[8 * v14];
                *(_QWORD *)&Heap[8 * v14] = v13;
              }
              ++v7;
            }
            while ( v7 < *((_DWORD *)v1 + 19) >> 5 );
          }
          *((_DWORD *)v1 + 19) &= 0x1Fu;
          v9 = (void *)*((_QWORD *)v1 + 10);
          *((_DWORD *)v1 + 19) |= 32 * v3;
          *((_QWORD *)v1 + 10) = Heap;
          if ( v9 )
            CempHeapFree(v9);
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
