/*
 * XREFs of ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0063700
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0063528 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0063AA4 (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C0063AD8 (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0063BD4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0063C64 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferenceAllocationList(
        VIDMM_DEVICE *this,
        struct VIDMM_ALLOC **a2,
        __int64 a3,
        bool a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  bool v7; // zf
  __int64 v8; // rsi
  struct VIDMM_ALLOC **v9; // rdi
  __int64 v11; // rcx
  const GUID *v12; // r8
  unsigned int v13; // ebp
  unsigned int v14; // edx
  struct VIDMM_GLOBAL **v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rcx
  struct VIDMM_ALLOC **v18; // r12
  struct VIDMM_ALLOC **v19; // r10
  __int64 **v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 *v26; // r15
  unsigned __int64 v27; // rax
  unsigned int v28; // r14d
  struct VIDMM_GLOBAL *v29; // rdx
  bool v30; // r13
  struct VIDMM_ALLOC **v31; // rcx
  __int64 v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rax
  struct VIDMM_ALLOC *v35; // r9
  struct VIDMM_ALLOC **v36; // rcx
  VIDMM_DEVICE *v37; // rax
  VIDMM_DEVICE **v38; // rdx
  VIDMM_DEVICE **v39; // rdx
  __int64 v40; // r10
  __int64 v41; // r11
  __int64 v42; // rcx
  _QWORD *v43; // r9
  unsigned int i; // r8d
  __int64 v45; // rax
  _QWORD *v46; // rdx
  int v48; // r9d
  __int64 v49; // rax
  char v50[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v51; // [rsp+38h] [rbp-50h]
  int v52; // [rsp+40h] [rbp-48h]
  unsigned __int64 v53; // [rsp+90h] [rbp+8h] BYREF
  __int64 v54; // [rsp+A0h] [rbp+18h]
  bool v55; // [rsp+A8h] [rbp+20h]

  v55 = a4;
  v54 = a3;
  v5 = *((_QWORD *)this + 2);
  v6 = a3;
  v7 = v5 == -360;
  v8 = v5 + 360;
  v9 = a2;
  v51 = v8;
  if ( !v7 && *(struct _KTHREAD **)(v8 + 8) == KeGetCurrentThread() )
  {
    v49 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v49 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v49);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v48 = *(_DWORD *)(v8 + 16);
      if ( v48 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v11, (const EVENT_DESCRIPTOR *)"g", v12, v48);
    }
    ExAcquirePushLockExclusiveEx(v8, 0LL);
  }
  v13 = 0;
  *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
  v14 = 0;
  v15 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  v52 = 2;
  if ( *((_DWORD *)*v15 + 1748) )
  {
    do
    {
      v16 = v14++;
      v17 = (_QWORD *)((char *)v15[6] + 296 * v16);
      v17[13] = v17[9];
      v17[14] = v17[10];
      v17[15] = v17[11];
      v17[16] = v17[12];
    }
    while ( v14 < *((_DWORD *)*v15 + 1748) );
    v15 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  }
  v18 = &v9[v6];
  v19 = v9;
  if ( v9 != v18 )
  {
    do
    {
      if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(*v19)
        && !(*((_BYTE *)v20 + 25) & 1 | *((_DWORD *)v20 + 38))
        && !*((_BYTE *)v20 + 27) )
      {
        v23 = **v20;
        if ( (*((_BYTE *)v20 + 36) & 1) != 0 && (*(_DWORD *)(v23 + 76) & 0xF0000) == 0x20000 )
          v24 = 0LL;
        else
          v24 = *(_WORD *)(v23 + 78) & 0xF;
        v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 296LL * (*(_DWORD *)(v22 + 76) & 0x3F) + 8 * v24;
        *(_QWORD *)(v25 + 104) += *(_QWORD *)(v22 + 16);
        *((_BYTE *)v20 + 27) = 1;
      }
      v19 = (struct VIDMM_ALLOC **)(v21 + 8);
    }
    while ( v19 != v18 );
    v15 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  }
  v26 = a5;
  v27 = 0LL;
  v28 = 0;
  *a5 = 0LL;
  v29 = *v15;
  if ( *((_DWORD *)*v15 + 1748) )
  {
    v30 = v55;
    do
    {
      VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
        (struct VIDMM_GLOBAL *)((char *)v15[6] + 296 * v28),
        &v53,
        v30,
        0,
        v29,
        v28);
      v27 = *v26;
      if ( *v26 <= v53 )
        v27 = v53;
      *v26 = v27;
      ++v28;
      v29 = *v15;
    }
    while ( v28 < *((_DWORD *)*v15 + 1748) );
    v6 = v54;
  }
  v31 = v9;
  v32 = v6 & 0x1FFFFFFFFFFFFFFFLL;
  v33 = 0LL;
  if ( v9 > v18 )
    v32 = 0LL;
  if ( v32 )
  {
    do
    {
      v34 = (__int64)*v31++;
      ++v33;
      *(_BYTE *)(v34 + 27) = 0;
    }
    while ( v33 != v32 );
    v27 = *v26;
  }
  if ( v27 )
  {
    v13 = -1073741801;
  }
  else
  {
    VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
    for ( ; v9 != v18; ++*((_DWORD *)v35 + 38) )
    {
      v35 = *v9;
      if ( !(*((_BYTE *)*v9 + 25) & 1 | *((_DWORD *)*v9 + 38)) )
      {
        v36 = (struct VIDMM_ALLOC **)*((_QWORD *)v35 + 14);
        v37 = (struct VIDMM_ALLOC *)((char *)v35 + 112);
        if ( v36[1] != (struct VIDMM_ALLOC *)((char *)v35 + 112)
          || (v38 = (VIDMM_DEVICE **)*((_QWORD *)v35 + 15), *v38 != v37)
          || (*v38 = (VIDMM_DEVICE *)v36,
              v36[1] = (struct VIDMM_ALLOC *)v38,
              v39 = (VIDMM_DEVICE **)*((_QWORD *)this + 19),
              *v39 != (VIDMM_DEVICE *)((char *)this + 144)) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v37 = (char *)this + 144;
        *((_QWORD *)v35 + 15) = v39;
        *v39 = v37;
        *((_QWORD *)this + 19) = v37;
        if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(v35) )
        {
          v42 = (unsigned __int8)HIBYTE(*(_WORD *)(v40 + 76)) >> 4;
          *(_QWORD *)(v41 + 8 * v42 + 136) += *(_QWORD *)(v40 + 16);
        }
      }
      ++v9;
    }
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
    v43 = (_QWORD *)*((_QWORD *)this + 2);
    for ( i = 0; i < *(_DWORD *)(*v43 + 6992LL); v46[12] = v46[16] )
    {
      v45 = i++;
      v46 = (_QWORD *)(v43[6] + 296 * v45);
      v46[9] = v46[13];
      v46[10] = v46[14];
      v46[11] = v46[15];
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
  return v13;
}
