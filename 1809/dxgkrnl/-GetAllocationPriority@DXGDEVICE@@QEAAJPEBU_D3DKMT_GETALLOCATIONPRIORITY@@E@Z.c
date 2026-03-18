/*
 * XREFs of ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C01D8920
 * Callers:
 *     DxgkGetAllocationPriority @ 0x1C01DA300 (DxgkGetAllocationPriority.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00212B0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::GetAllocationPriority(DXGDEVICE *this, const struct _D3DKMT_GETALLOCATIONPRIORITY *a2)
{
  __int64 hResource; // r8
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  UINT v10; // r14d
  ULONG_PTR j; // rsi
  __int64 v12; // rdx
  _DWORD *pPriorities; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 i; // rsi
  const D3DKMT_HANDLE *v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  _QWORD *v23; // r8
  __int64 v24; // rcx
  _QWORD *v25; // rax
  ULONG_PTR Count; // rdx
  UINT *v27; // rdx
  _BYTE v28[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+68h] [rbp+10h] BYREF
  UINT v30; // [rsp+70h] [rbp+18h] BYREF

  v30 = 0;
  hResource = a2->hResource;
  if ( !(_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= a2->AllocationCount )
          return 0LL;
        v17 = &a2->phAllocationList[i];
        if ( (unsigned __int64)v17 >= MmUserProbeAddress )
          v17 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v18 = *v17;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v29, v18);
        if ( !v29 )
          break;
        v23 = (_QWORD *)*((_QWORD *)this + 2);
        v24 = v23[2];
        if ( *(_QWORD *)(*(_QWORD *)(v29[1].Count + 16) + 16LL) != v24 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v25[3] = this;
          v25[4] = v29;
          v25[5] = -1073741811LL;
          goto LABEL_30;
        }
        Count = v29[3].Count;
        if ( !Count )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v25[3] = v29;
LABEL_30:
          WdLogEvent5_WdError(v25);
LABEL_27:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
          return 3221225485LL;
        }
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, UINT *))(*(_QWORD *)(v23[68] + 8LL) + 1144LL))(v23[69], Count, &v30);
        v27 = &a2->pPriorities[i];
        if ( (unsigned __int64)v27 >= MmUserProbeAddress )
          v27 = (UINT *)MmUserProbeAddress;
        *v27 = v30;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
      }
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
      v22[3] = this;
      v22[4] = v18;
      v22[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v22);
      goto LABEL_27;
    }
    return 0LL;
  }
  if ( a2->AllocationCount || a2->phAllocationList )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, hResource);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v29, hResource);
  if ( !v29 || (v7 = *(unsigned int *)(v29[1].Count + 332), (_DWORD)v7 != a2->hDevice) )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v29, v8);
    v15[3] = this;
    v15[4] = a2->hResource;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
LABEL_19:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v29);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)&v29[10], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  v10 = 0;
  for ( j = v29[3].Count; j; j = *(_QWORD *)(j + 64) )
  {
    v12 = *(_QWORD *)(j + 24);
    if ( !v12 )
    {
      v14 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v14 + 24) = j;
      WdLogEvent5_WdError(v14);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v28);
      goto LABEL_19;
    }
    (*(void (__fastcall **)(_QWORD, __int64, UINT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL)
                                                    + 1144LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
      v12,
      &v30);
    if ( v10 <= v30 )
      v10 = v30;
  }
  pPriorities = a2->pPriorities;
  if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
    pPriorities = (_DWORD *)MmUserProbeAddress;
  *pPriorities = v10;
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v28);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v29);
  return 0LL;
}
