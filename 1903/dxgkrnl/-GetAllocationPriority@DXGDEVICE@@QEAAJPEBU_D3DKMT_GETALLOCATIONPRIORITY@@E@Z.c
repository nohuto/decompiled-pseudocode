/*
 * XREFs of ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C0206D74
 * Callers:
 *     DxgkGetAllocationPriority @ 0x1C0208820 (DxgkGetAllocationPriority.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C1C0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023D0C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::GetAllocationPriority(DXGDEVICE *this, const struct _D3DKMT_GETALLOCATIONPRIORITY *a2)
{
  __int64 hResource; // r8
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  UINT v11; // r14d
  ULONG_PTR j; // rsi
  __int64 v13; // rdx
  _DWORD *pPriorities; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 i; // rsi
  const D3DKMT_HANDLE *v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // r8
  _QWORD *v30; // rax
  ULONG_PTR Count; // rdx
  UINT *v32; // rdx
  _BYTE v33[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v34; // [rsp+68h] [rbp+10h] BYREF
  UINT v35; // [rsp+70h] [rbp+18h] BYREF

  v35 = 0;
  hResource = a2->hResource;
  if ( !(_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= a2->AllocationCount )
          return 0LL;
        v20 = &a2->phAllocationList[i];
        if ( (unsigned __int64)v20 >= MmUserProbeAddress )
          v20 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v21 = *v20;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v34, v21);
        if ( !v34 )
          break;
        v27 = *(_QWORD *)(v34[1].Count + 16);
        v28 = *(_QWORD *)(v27 + 16);
        v29 = (_QWORD *)*((_QWORD *)this + 2);
        if ( v28 != v29[2] )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
          v30[3] = this;
          v30[4] = v34;
          v30[5] = -1073741811LL;
          goto LABEL_30;
        }
        Count = v34[3].Count;
        if ( !Count )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v28, 0LL, v29);
          v30[3] = v34;
LABEL_30:
          WdLogEvent5_WdError(v30);
LABEL_27:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v34, v26);
          return 3221225485LL;
        }
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, UINT *))(*(_QWORD *)(v29[68] + 8LL) + 1144LL))(v29[69], Count, &v35);
        v32 = &a2->pPriorities[i];
        if ( (unsigned __int64)v32 >= MmUserProbeAddress )
          v32 = (UINT *)MmUserProbeAddress;
        *v32 = v35;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v34, (__int64)v32);
      }
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      v25[3] = this;
      v25[4] = v21;
      v25[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v25);
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
  DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v34, hResource);
  if ( !v34 || (v7 = *(unsigned int *)(v34[1].Count + 332), (_DWORD)v7 != a2->hDevice) )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v34, v8);
    v18[3] = this;
    v18[4] = a2->hResource;
    v18[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
LABEL_19:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v34, v17);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, (struct DXGFASTMUTEX *const)&v34[10], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  v11 = 0;
  for ( j = v34[3].Count; j; j = *(_QWORD *)(j + 64) )
  {
    v13 = *(_QWORD *)(j + 24);
    if ( !v13 )
    {
      v16 = WdLogNewEntry5_WdError(v9, 0LL, v10);
      *(_QWORD *)(v16 + 24) = j;
      WdLogEvent5_WdError(v16);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
      goto LABEL_19;
    }
    (*(void (__fastcall **)(_QWORD, __int64, UINT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL)
                                                    + 1144LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
      v13,
      &v35);
    if ( v11 <= v35 )
      v11 = v35;
  }
  pPriorities = a2->pPriorities;
  if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
    pPriorities = (_DWORD *)MmUserProbeAddress;
  *pPriorities = v11;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v34, v15);
  return 0LL;
}
