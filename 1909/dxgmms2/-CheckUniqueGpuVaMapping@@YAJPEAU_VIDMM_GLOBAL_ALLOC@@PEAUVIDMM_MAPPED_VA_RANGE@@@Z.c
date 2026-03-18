/*
 * XREFs of ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C007FD80
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00744BC (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0085F80 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckUniqueGpuVaMapping(struct _VIDMM_GLOBAL_ALLOC *a1, struct VIDMM_MAPPED_VA_RANGE *a2)
{
  char *v4; // r14
  char *v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // rbp
  char *v9; // rbx
  unsigned __int64 v10; // r8
  unsigned int v11; // edi
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  char **v16; // rcx
  char **v17; // rax
  char **v18; // rcx
  char *v19; // rax

  KeEnterCriticalRegion();
  v4 = (char *)a1 + 352;
  ExAcquirePushLockExclusiveEx((char *)a1 + 352, 0LL);
  v5 = (char *)a1 + 192;
  v6 = *((_QWORD *)a2 + 10);
  v7 = *((_QWORD *)a2 + 9);
  v8 = v6 & 0x7FFFFFFFFFFFFFFFLL;
  v9 = (char *)*((_QWORD *)a1 + 24);
  v10 = v6 >> 63;
  v11 = 0;
  while ( v9 != v5 )
  {
    v13 = *((_QWORD *)v9 + 4);
    if ( v7 + *((_QWORD *)a2 + 13) - *((_QWORD *)a2 + 12) <= v13 )
    {
      if ( !(_BYTE)v10 )
        goto LABEL_4;
LABEL_13:
      v16 = (char **)*((_QWORD *)v9 + 1);
      v17 = (char **)((char *)a2 + 40);
      if ( *v16 == v9 )
      {
        *v17 = v9;
        *((_QWORD *)a2 + 6) = v16;
        *v16 = (char *)v17;
        *((_QWORD *)v9 + 1) = v17;
        goto LABEL_4;
      }
LABEL_17:
      __fastfail(3u);
    }
    v14 = v13 + *((_QWORD *)v9 + 8) - *((_QWORD *)v9 + 7);
    if ( v7 < v14 && v8 != (*((_QWORD *)v9 + 5) & 0x7FFFFFFFFFFFFFFFLL) )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v5);
      v15[3] = *((_QWORD *)v9 + 7);
      v15[4] = *((_QWORD *)v9 + 8);
      v15[5] = *((_QWORD *)v9 + 5);
      v15[6] = v8;
      WdLogEvent5_WdAssertion(v15);
      v11 = -1073741811;
      goto LABEL_4;
    }
    if ( (_BYTE)v10 && v7 < v13 )
      goto LABEL_13;
    v9 = *(char **)v9;
  }
  if ( (_BYTE)v10 )
  {
    v18 = (char **)*((_QWORD *)v5 + 1);
    v19 = (char *)a2 + 40;
    if ( *v18 == v5 )
    {
      *(_QWORD *)v19 = v5;
      *((_QWORD *)a2 + 6) = v18;
      *v18 = v19;
      *((_QWORD *)v5 + 1) = v19;
      goto LABEL_4;
    }
    goto LABEL_17;
  }
LABEL_4:
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
