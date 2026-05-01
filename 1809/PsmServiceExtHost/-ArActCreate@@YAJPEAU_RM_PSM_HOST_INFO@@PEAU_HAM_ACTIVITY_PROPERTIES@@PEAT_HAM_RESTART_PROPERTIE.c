/*
 * XREFs of ?ArActCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY@@@Z @ 0x18006FD3C
 * Callers:
 *     ?ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006FF10 (-ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180035C60 (CemRcTableFindOrInsertEx.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     ?ArActAllocateState@@YAJPEAU_AR_ACTIVITY@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006FB98 (-ArActAllocateState@@YAJPEAU_AR_ACTIVITY@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@.c)
 */

__int64 __fastcall ArActCreate(
        struct _RM_PSM_HOST_INFO *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2,
        union _HAM_RESTART_PROPERTIES *a3,
        struct _ACTIVITY_RESTARTER *a4,
        struct _AR_ACTIVITY **a5)
{
  PVOID Heap; // rax
  unsigned __int64 v10; // rbx
  int State; // edi
  __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x38uLL);
  v10 = (unsigned __int64)Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x38uLL);
    *(_QWORD *)(v10 + 24) = 1LL;
    *(_QWORD *)(v10 + 16) = -1LL;
    *(_QWORD *)(v10 + 32) = a4;
    *(_QWORD *)(v10 + 40) = -1LL;
    *(_DWORD *)(v10 + 48) = *(_DWORD *)a3;
    State = ArActAllocateState((struct _AR_ACTIVITY *)v10, a1, a2);
    if ( State >= 0 )
    {
      CemRcTableFindOrInsertEx(
        (__int64)a4,
        v10 + 40,
        (__int64 (__fastcall *)(__int64, unsigned __int64))ArActCompareByHandle,
        v10,
        v13,
        v14);
      *a5 = (struct _AR_ACTIVITY *)v10;
      v10 = 0LL;
      State = 0;
    }
    if ( v10 )
      CemRcObjectDereference((_QWORD *)v10);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
