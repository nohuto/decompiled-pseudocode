/*
 * XREFs of ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C006D160
 * Callers:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C000FFBC (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0010058 (--_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012BB8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C006CFA0 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C006D40C (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C006E25C (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::~VIDMM_DEVICE(VIDMM_DEVICE *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  VIDMM_GLOBAL *v7; // rcx
  __int64 *v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  VIDMM_DEVICE *v14; // rbx
  VIDMM_DEVICE **v15; // rdx
  VIDMM_DEVICE **v16; // rcx
  char *v17; // rdx
  unsigned int v18; // edi
  char *v19; // rcx
  __int64 v20; // rbx
  unsigned int j; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  VIDMM_DEVICE_PAGING_QUEUE *v26; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v27; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v28; // rcx
  bool v29; // zf
  __int64 v30; // rbx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _BYTE v36[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v37[24]; // [rsp+38h] [rbp-30h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 15); ++i )
  {
    v3 = *((_QWORD *)this + 9);
    if ( v3 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v3 + 176LL * i));
    v4 = *((_QWORD *)this + 10);
    v5 = 176LL * i;
    if ( v4 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v4 + v5));
    v6 = *((_QWORD *)this + 11);
    if ( v6 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v6 + v5));
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v36,
    (struct _KTHREAD **)(*(_QWORD *)this + 41240LL));
  if ( *((_QWORD *)this + 22) )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v7, (struct _LIST_ENTRY *)this + 11);
  v8 = *(__int64 **)this;
  v9 = (_QWORD *)(*(_QWORD *)this + 41280LL);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 != v9 )
  {
    do
    {
      if ( this == (VIDMM_DEVICE *)v10[7] )
        v10[7] = 0LL;
      v10 = (_QWORD *)*v10;
    }
    while ( v10 != v9 );
    v8 = *(__int64 **)this;
  }
  KeSetEvent(*(PRKEVENT *)(*v8 + 152), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  v11 = **(_QWORD **)this;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 8) )
  {
    v12 = v11 + 128;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11 + 128, 0LL);
    *(_QWORD *)(v11 + 136) = KeGetCurrentThread();
    v13 = v11 + 128;
    v14 = *(VIDMM_DEVICE **)(v11 + 16);
    *(_QWORD *)(v12 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    if ( this == v14 )
    {
      v30 = **(_QWORD **)this;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v30 + 48, 0LL);
      *(_QWORD *)(v30 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v30 + 48, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v37,
    (struct _KTHREAD **)(*(_QWORD *)this + 41240LL));
  v15 = (VIDMM_DEVICE **)*((_QWORD *)this + 24);
  if ( v15[1] != (VIDMM_DEVICE *)((char *)this + 192)
    || (v16 = (VIDMM_DEVICE **)*((_QWORD *)this + 25), *v16 != (VIDMM_DEVICE *)((char *)this + 192)) )
  {
    __fastfail(3u);
  }
  *v16 = (VIDMM_DEVICE *)v15;
  v15[1] = (VIDMM_DEVICE *)v16;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
  v17 = (char *)*((_QWORD *)this + 5);
  if ( v17 )
  {
    v18 = 0;
    if ( *((_DWORD *)this + 14) )
    {
      do
      {
        v19 = v17;
        v20 = 56LL * v18;
        if ( *(char **)&v17[v20 + 32] != &v17[v20 + 32] && g_IsInternalRelease )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v17);
          v31[3] = 270LL;
          v31[4] = 9LL;
          v31[5] = 0LL;
          v31[6] = 0LL;
          v31[7] = 0LL;
          WdLogEvent5_WdCriticalError(v31);
          v17 = (char *)*((_QWORD *)this + 5);
          v19 = v17;
        }
        if ( *(_DWORD *)&v19[56 * v18] && g_IsInternalRelease )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
          v32[3] = 270LL;
          v32[4] = 9LL;
          v32[5] = 0LL;
          v32[6] = 0LL;
          v32[7] = 0LL;
          WdLogEvent5_WdCriticalError(v32);
          v17 = (char *)*((_QWORD *)this + 5);
          v19 = v17;
        }
        if ( *(_QWORD *)&v19[v20 + 8] && g_IsInternalRelease )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
          v33[3] = 270LL;
          v33[4] = 9LL;
          v33[5] = 0LL;
          v33[6] = 0LL;
          v33[7] = 0LL;
          WdLogEvent5_WdCriticalError(v33);
          v17 = (char *)*((_QWORD *)this + 5);
          v19 = v17;
        }
        if ( *(_QWORD *)&v19[v20 + 16] && g_IsInternalRelease )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
          v34[3] = 270LL;
          v34[4] = 9LL;
          v34[5] = 0LL;
          v34[6] = 0LL;
          v34[7] = 0LL;
          WdLogEvent5_WdCriticalError(v34);
          v17 = (char *)*((_QWORD *)this + 5);
          v19 = v17;
        }
        if ( *(_QWORD *)&v19[v20 + 24] )
        {
          v19 = v17;
          if ( g_IsInternalRelease )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v17);
            v35[3] = 270LL;
            v35[4] = 9LL;
            v35[5] = 0LL;
            v35[6] = 0LL;
            v35[7] = 0LL;
            WdLogEvent5_WdCriticalError(v35);
            v17 = (char *)*((_QWORD *)this + 5);
            v19 = v17;
          }
        }
        ++v18;
      }
      while ( v18 < *((_DWORD *)this + 14) );
      v17 = v19;
    }
    operator delete(v17);
  }
  for ( j = 0; j < *((_DWORD *)this + 15); ++j )
  {
    v22 = *((_QWORD *)this + 9);
    if ( v22 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v22 + 176LL * j));
    v23 = *((_QWORD *)this + 10);
    v24 = 176LL * j;
    if ( v23 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v23 + v24));
    v25 = *((_QWORD *)this + 11);
    if ( v25 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v25 + v24));
  }
  v26 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 9);
  if ( v26 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v26);
  v27 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 9) = 0LL;
  if ( v27 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v27);
  v28 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = 0LL;
  if ( v28 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v28);
  v29 = (*((_BYTE *)this + 50) & 1) == 0;
  *((_QWORD *)this + 11) = 0LL;
  if ( !v29 )
    VIDMM_PROCESS::CloseAdapter(*((struct _KTHREAD ***)this + 1), *(struct VIDMM_GLOBAL **)this);
}
