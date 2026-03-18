/*
 * XREFs of ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C005F630
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C005FB98 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C005F96C (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C005F9A0 (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005FAA4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005FB34 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferenceAllocationList(
        VIDMM_DEVICE *this,
        struct VIDMM_ALLOC **a2,
        __int64 a3,
        bool a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  bool v7; // zf
  struct _KTHREAD **v8; // rbx
  struct VIDMM_ALLOC **v9; // rsi
  struct VIDMM_GLOBAL **v11; // r14
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  struct VIDMM_ALLOC **v16; // r15
  struct VIDMM_ALLOC **v17; // r10
  __int64 **v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned __int64 *v23; // r12
  unsigned int v24; // r13d
  unsigned __int64 v25; // rcx
  struct VIDMM_GLOBAL *v26; // rdx
  bool v27; // bp
  struct VIDMM_ALLOC **v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // r8
  struct VIDMM_ALLOC *v31; // rax
  struct VIDMM_ALLOC *v32; // r9
  VIDMM_DEVICE *v33; // rax
  struct VIDMM_ALLOC **v34; // rdx
  VIDMM_DEVICE **v35; // rcx
  VIDMM_DEVICE **v36; // rdx
  __int64 v37; // r10
  __int64 v38; // r11
  __int64 v39; // rcx
  _QWORD *v40; // r9
  unsigned int i; // r8d
  __int64 v42; // rax
  _QWORD *v43; // rdx
  __int64 v44; // rcx
  __int64 v46; // rax
  char v47[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KTHREAD **v48; // [rsp+38h] [rbp-50h]
  int v49; // [rsp+40h] [rbp-48h]
  unsigned __int64 v50; // [rsp+90h] [rbp+8h] BYREF
  __int64 v51; // [rsp+A0h] [rbp+18h]
  bool v52; // [rsp+A8h] [rbp+20h]

  v52 = a4;
  v51 = a3;
  v5 = *((_QWORD *)this + 2);
  v6 = a3;
  v7 = v5 == -360;
  v8 = (struct _KTHREAD **)(v5 + 360);
  v9 = a2;
  v48 = v8;
  if ( !v7 && v8[1] == KeGetCurrentThread() )
  {
    v46 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v46 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v46);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v8);
  v11 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  v12 = 0;
  v49 = 2;
  v13 = 0LL;
  if ( *((_DWORD *)*v11 + 1748) )
  {
    do
    {
      v14 = (unsigned int)v13;
      v13 = (unsigned int)(v13 + 1);
      v15 = (_QWORD *)((char *)v11[6] + 296 * v14);
      v15[13] = v15[9];
      v15[14] = v15[10];
      v15[15] = v15[11];
      v15[16] = v15[12];
    }
    while ( (unsigned int)v13 < *((_DWORD *)*v11 + 1748) );
    v11 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  }
  v16 = &v9[v6];
  v17 = v9;
  if ( v9 != v16 )
  {
    do
    {
      if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(*v17, v13)
        && !(*((_BYTE *)v18 + 25) & 1 | *((_DWORD *)v18 + 38))
        && !*((_BYTE *)v18 + 27) )
      {
        v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 296LL * (*(_DWORD *)(v20 + 76) & 0x3F);
        v21 = **v18;
        if ( (*((_BYTE *)v18 + 36) & 1) != 0 && (*(_DWORD *)(v21 + 76) & 0xF0000) == 0x20000 )
          v22 = 0;
        else
          v22 = *(_WORD *)(v21 + 78) & 0xF;
        *(_QWORD *)(v13 + 8LL * v22 + 104) += *(_QWORD *)(v20 + 16);
        *((_BYTE *)v18 + 27) = 1;
      }
      v17 = (struct VIDMM_ALLOC **)(v19 + 8);
    }
    while ( v17 != v16 );
    v11 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  }
  v23 = a5;
  v24 = 0;
  v25 = 0LL;
  *a5 = 0LL;
  v26 = *v11;
  if ( *((_DWORD *)*v11 + 1748) )
  {
    v27 = v52;
    do
    {
      VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
        (struct VIDMM_GLOBAL *)((char *)v11[6] + 296 * v24),
        &v50,
        v27,
        0,
        v26,
        v24);
      v25 = v50;
      if ( *v23 > v50 )
        v25 = *v23;
      ++v24;
      *v23 = v25;
      v26 = *v11;
    }
    while ( v24 < *((_DWORD *)*v11 + 1748) );
    v6 = v51;
  }
  v28 = v9;
  v29 = v6 & 0x1FFFFFFFFFFFFFFFLL;
  v30 = 0LL;
  if ( v9 > v16 )
    v29 = 0LL;
  if ( v29 )
  {
    do
    {
      v31 = *v28;
      ++v30;
      ++v28;
      *((_BYTE *)v31 + 27) = 0;
    }
    while ( v30 != v29 );
    v25 = *v23;
  }
  if ( v25 )
  {
    v12 = -1073741801;
  }
  else
  {
    VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
    while ( v9 != v16 )
    {
      v32 = *v9;
      if ( !(*((_BYTE *)*v9 + 25) & 1 | *((_DWORD *)*v9 + 38)) )
      {
        v33 = (struct VIDMM_ALLOC *)((char *)v32 + 112);
        v34 = (struct VIDMM_ALLOC **)*((_QWORD *)v32 + 14);
        if ( v34[1] != (struct VIDMM_ALLOC *)((char *)v32 + 112)
          || (v35 = (VIDMM_DEVICE **)*((_QWORD *)v32 + 15), *v35 != v33)
          || (*v35 = (VIDMM_DEVICE *)v34,
              v34[1] = (struct VIDMM_ALLOC *)v35,
              v36 = (VIDMM_DEVICE **)*((_QWORD *)this + 19),
              *v36 != (VIDMM_DEVICE *)((char *)this + 144)) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v33 = (char *)this + 144;
        *((_QWORD *)v32 + 15) = v36;
        *v36 = v33;
        *((_QWORD *)this + 19) = v33;
        if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(v32, v36) )
        {
          v39 = (unsigned __int8)HIBYTE(*(_WORD *)(v38 + 76)) >> 4;
          *(_QWORD *)(v37 + 8 * v39 + 136) += *(_QWORD *)(v38 + 16);
        }
      }
      ++*((_DWORD *)v32 + 38);
      ++v9;
    }
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
    v40 = (_QWORD *)*((_QWORD *)this + 2);
    for ( i = 0; i < *(_DWORD *)(*v40 + 6992LL); v43[12] = v44 )
    {
      v42 = i++;
      v43 = (_QWORD *)(v40[6] + 296 * v42);
      v44 = v43[16];
      v43[9] = v43[13];
      v43[10] = v43[14];
      v43[11] = v43[15];
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
  return v12;
}
