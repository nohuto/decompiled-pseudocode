/*
 * XREFs of ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0085F80
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00744BC (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C000288C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C007FD80 (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVad(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct _LIST_ENTRY *a4,
        struct _LIST_ENTRY *a5)
{
  struct _VIDMM_GLOBAL_ALLOC ***VidMmAllocFromOwner; // rax
  struct _VIDMM_GLOBAL_ALLOC ***v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // esi
  struct _VIDMM_GLOBAL_ALLOC ****v13; // rcx
  struct _VIDMM_GLOBAL_ALLOC **v14; // rdx
  struct _VIDMM_GLOBAL_ALLOC ***v15; // rax
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rdx

  VidMmAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC ***)GetVidMmAllocFromOwner(
                                                          (int)(*((_DWORD *)a3 + 16) << 28) >> 28,
                                                          *((_QWORD *)a3 + 7));
  v9 = VidMmAllocFromOwner;
  if ( !VidMmAllocFromOwner )
    goto LABEL_5;
  v12 = CheckUniqueGpuVaMapping(**VidMmAllocFromOwner, a3);
  if ( v12 >= 0 )
  {
    v13 = (struct _VIDMM_GLOBAL_ALLOC ****)(v9 + 16);
    v14 = v9[16];
    v15 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)a3 + 24);
    if ( v14[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v9 + 16) )
      goto LABEL_8;
    *v15 = v14;
    *((_QWORD *)a3 + 4) = v13;
    v14[1] = (struct _VIDMM_GLOBAL_ALLOC *)v15;
    *v13 = v15;
LABEL_5:
    v16 = (struct _LIST_ENTRY *)((char *)a3 + 8);
    Blink = a5->Blink;
    if ( Blink->Flink == a5 )
    {
      v16->Flink = a5;
      *((_QWORD *)a3 + 2) = Blink;
      Blink->Flink = v16;
      a5->Blink = v16;
      ++*((_DWORD *)a2 + 19);
      if ( (*((_BYTE *)a3 + 88) & 4) == 0 )
        return 0LL;
      v20 = (_QWORD *)((char *)a2 + 56);
      if ( *((_QWORD *)a2 + 7) )
        return 0LL;
      v21 = (_QWORD *)((char *)this + 120);
      v22 = *((_QWORD *)this + 15);
      if ( *(CVirtualAddressAllocator **)(v22 + 8) == (CVirtualAddressAllocator *)((char *)this + 120) )
      {
        *v20 = v22;
        *((_QWORD *)a2 + 8) = v21;
        *(_QWORD *)(v22 + 8) = v20;
        *v21 = v20;
        return 0LL;
      }
    }
LABEL_8:
    __fastfail(3u);
  }
  v19 = WdLogNewEntry5_WdAssertion(v11, v10);
  *(_QWORD *)(v19 + 24) = 8921LL;
  WdLogEvent5_WdAssertion(v19);
  return (unsigned int)v12;
}
