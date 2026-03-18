/*
 * XREFs of ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C02080F8
 * Callers:
 *     DxgkSetAllocationPriority @ 0x1C0209EE0 (DxgkSetAllocationPriority.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C3B0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023D5C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::SetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_SETALLOCATIONPRIORITY *a2)
{
  __int64 hResource; // r8
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned int *pPriorities; // rdx
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // r8
  ULONG_PTR i; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 j; // rsi
  const D3DKMT_HANDLE *v22; // rdx
  __int64 v23; // r14
  const UINT *v24; // rdx
  UINT v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  ULONG_PTR Count; // rdx
  __int64 v33; // rdx
  _BYTE v34[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v35; // [rsp+58h] [rbp+10h] BYREF

  hResource = a2->hResource;
  if ( (_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      v5 = WdLogNewEntry5_WdWarning(this, a2, hResource);
      *(_QWORD *)(v5 + 24) = this;
      *(_QWORD *)(v5 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v5);
    }
    else
    {
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v35, hResource);
      if ( v35 )
      {
        if ( (DXGDEVICE *)v35[1].Count == this )
        {
          pPriorities = (unsigned int *)a2->pPriorities;
          if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
            pPriorities = (unsigned int *)MmUserProbeAddress;
          v14 = *pPriorities;
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, (struct DXGFASTMUTEX *const)&v35[10], 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
          for ( i = v35[3].Count; ; i = *(_QWORD *)(i + 64) )
          {
            if ( !i )
            {
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v35, v19);
              return 0LL;
            }
            v18 = *(_QWORD *)(i + 24);
            if ( !v18 )
              break;
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                        + 8LL)
                                                            + 200LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
              v18,
              v14);
          }
          v20 = WdLogNewEntry5_WdError(v15, 0LL, v16);
          *(_QWORD *)(v20 + 24) = i;
          WdLogEvent5_WdError(v20);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
        }
        else
        {
          v12 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
          v12[3] = this;
          v12[4] = v35;
          v12[5] = -1073741811LL;
          WdLogEvent5_WdError(v12);
        }
      }
      else
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
        v10[3] = this;
        v10[4] = a2->hResource;
        v10[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v10);
      }
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v35, v11);
    }
    return 3221225485LL;
  }
  else
  {
    if ( a2->AllocationCount )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= a2->AllocationCount )
          return 0LL;
        v22 = &a2->phAllocationList[j];
        if ( (unsigned __int64)v22 >= MmUserProbeAddress )
          v22 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v23 = *v22;
        v24 = &a2->pPriorities[j];
        if ( (unsigned __int64)v24 >= MmUserProbeAddress )
          v24 = (const UINT *)MmUserProbeAddress;
        v25 = *v24;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v35, v23);
        if ( !v35 )
          break;
        if ( (DXGDEVICE *)v35[1].Count != this )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
          v31[3] = this;
          v31[4] = v35;
          v31[5] = -1073741811LL;
          goto LABEL_30;
        }
        Count = v35[3].Count;
        if ( !Count )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v27, 0LL, v28);
          v31[3] = v35;
LABEL_30:
          WdLogEvent5_WdError(v31);
LABEL_27:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35, v30);
          return 3221225485LL;
        }
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL)
                                                          + 200LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
          Count,
          v25);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35, v33);
      }
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v29[3] = this;
      v29[4] = v23;
      v29[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
      goto LABEL_27;
    }
    return 0LL;
  }
}
