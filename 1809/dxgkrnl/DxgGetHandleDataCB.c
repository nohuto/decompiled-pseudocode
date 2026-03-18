/*
 * XREFs of DxgGetHandleDataCB @ 0x1C00F24C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C2C (--1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C80 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  struct DXGPROCESS *Current; // rax
  ULONG_PTR v3; // rbx
  struct DXGPROCESS *v4; // r15
  char *v5; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  int v11; // r9d
  unsigned int v12; // eax
  ULONG_PTR Count; // r14
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // ecx
  struct DXGALLOCATION *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _EX_RUNDOWN_REF *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  struct _KTHREAD *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  int CurrentProcessSessionId; // esi
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  struct _KTHREAD *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r9
  int v43; // ecx
  struct DXGRESOURCE *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  struct _EX_RUNDOWN_REF *v57; // [rsp+28h] [rbp-29h] BYREF
  __int64 v58; // [rsp+30h] [rbp-21h] BYREF
  char v59[8]; // [rsp+38h] [rbp-19h] BYREF
  char *v60; // [rsp+40h] [rbp-11h]
  int v61; // [rsp+48h] [rbp-9h]
  _BYTE v62[56]; // [rsp+50h] [rbp-1h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v62);
  Current = DXGPROCESS::GetCurrent();
  v3 = 0LL;
  v4 = Current;
  v5 = (char *)Current + 208;
  v60 = (char *)Current + 208;
  if ( Current != (struct DXGPROCESS *)-208LL )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)Current + 27) == CurrentThread )
    {
      v7 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v7 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v7);
    }
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v5, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v11 = *((_DWORD *)v5 + 4);
      if ( v11 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v9, &EventBlockThread, v10, v11);
    }
    ExAcquirePushLockSharedEx(v5, 0LL);
  }
  v12 = a1[1];
  Count = 0LL;
  v61 = 1;
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
    {
      v41 = (*a1 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v41 < *((_DWORD *)v4 + 62)
        && (v42 = *((_QWORD *)v4 + 29),
            v43 = *(_DWORD *)(v42 + 16 * v41 + 8),
            ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v42 + 16 * v41 + 8) & 0x60))
        && ((v43 & 0x2000) == 0 || (v43 & 0x4000) != 0)
        && (v43 & 0x1F) == 4 )
      {
        v44 = *(struct DXGRESOURCE **)(v42 + 16LL * (unsigned int)v41);
      }
      else
      {
        v44 = 0LL;
      }
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v58, v44);
      v47 = v58;
      if ( v58 )
      {
        if ( KeGetCurrentIrql() >= 2u )
        {
          v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 8) + 16LL) + 16LL) + 192LL)
                                      + 64LL)
                          + 40LL);
          if ( *(_DWORD *)(v48 + 28) >= 0x2003u )
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48);
            v49[3] = 275LL;
            v49[4] = 20LL;
            v49[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 8) + 16LL) + 16LL);
            v49[6] = 0LL;
            v49[7] = 0LL;
            WdLogEvent5_WdCriticalError(v49);
            v47 = v58;
          }
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v47 + 8) + 16LL) + 16LL)) )
        {
          if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v51) + 255) )
          {
            v53 = WdLogNewEntry5_WdAssertion(v52);
            *(_QWORD *)(v53 + 24) = 130LL;
            WdLogEvent5_WdAssertion(v53);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v58);
            goto LABEL_78;
          }
          v50 = v58;
        }
        if ( (*(_DWORD *)(v50 + 4) & 1) != 0 )
          Count = *(_QWORD *)(*(_QWORD *)(v50 + 56) + 16LL);
        else
          Count = *(_QWORD *)(v50 + 56);
      }
      else
      {
        v54 = WdLogNewEntry5_WdWarning(v45, 0LL, v46);
        *(_QWORD *)(v54 + 24) = *a1;
        WdLogEvent5_WdWarning(v54);
      }
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v58);
    }
    else
    {
      v55 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v55 + 24) = (int)a1[1];
      WdLogEvent5_WdWarning(v55);
    }
    goto LABEL_77;
  }
  v14 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 < *((_DWORD *)v4 + 62)
    && (v15 = *((_QWORD *)v4 + 29),
        v16 = *(_DWORD *)(v15 + 16 * v14 + 8),
        ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60))
    && ((v16 & 0x2000) == 0 || (v16 & 0x4000) != 0)
    && (v16 & 0x1F) == 5 )
  {
    v17 = *(struct DXGALLOCATION **)(v15 + 16LL * (unsigned int)v14);
  }
  else
  {
    v17 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v57, v17);
  v20 = v57;
  if ( !v57 )
  {
    v25 = WdLogNewEntry5_WdWarning(0LL, v18, v19);
    *(_QWORD *)(v25 + 24) = *a1;
    WdLogEvent5_WdWarning(v25);
    v20 = v57;
LABEL_31:
    if ( v20 )
      ExReleaseRundownProtection(v20 + 11);
    if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v20) + 255) )
      goto LABEL_77;
    v27 = KeGetCurrentThread();
    if ( !v27 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v28 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v28);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v26);
    if ( !CurrentProcessSessionId || (unsigned int)PsGetThreadSessionId(v27) != CurrentProcessSessionId )
    {
      v33 = 0LL;
LABEL_43:
      if ( v33 )
      {
        v34 = KeGetCurrentThread();
        if ( !v34 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v35 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v35);
        }
        v37 = PsGetCurrentProcessSessionId(v29);
        if ( v37
          && (unsigned int)PsGetThreadSessionId(v34) == v37
          && !IsThreadCrossSessionAttached()
          && (ThreadWin32Thread = PsGetThreadWin32Thread(v34)) != 0
          && *(_QWORD *)ThreadWin32Thread )
        {
          v39 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        }
        else
        {
          v39 = 0LL;
        }
        if ( *(_DWORD *)(v39 + 136) )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36);
          v40[3] = 275LL;
          v40[4] = 38LL;
          v40[5] = *(int *)(v39 + 136);
          v40[6] = 0LL;
          v40[7] = 0LL;
          WdLogEvent5_WdCriticalError(v40);
        }
      }
      goto LABEL_77;
    }
    if ( !IsThreadCrossSessionAttached() )
    {
      v31 = (__int64 *)PsGetThreadWin32Thread(v27);
      if ( v31 )
      {
        v32 = *v31;
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 80);
          goto LABEL_43;
        }
      }
    }
LABEL_77:
    v3 = Count;
    goto LABEL_78;
  }
  if ( KeGetCurrentIrql() >= 2u
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v57[1].Count + 16) + 16LL) + 192LL) + 64LL)
                             + 40LL)
                 + 28LL) >= 0x2003u )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v57);
    v21[3] = 275LL;
    v21[4] = 20LL;
    v21[5] = *(_QWORD *)(*(_QWORD *)(v57[1].Count + 16) + 16LL);
    v21[6] = 0LL;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
    v20 = v57;
  }
  v22 = *(_QWORD *)(*(_QWORD *)(v20[1].Count + 16) + 16LL);
  if ( *(int *)(v22 + 2160) < 0x2000 && !*(_BYTE *)(v22 + 2452) )
  {
LABEL_27:
    if ( (a1[2] & 1) != 0 )
      Count = v20[4].Count;
    else
      Count = *(_QWORD *)(v20[6].Count + 16);
    goto LABEL_31;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v20) + 255) )
  {
    v20 = v57;
    goto LABEL_27;
  }
  v24 = WdLogNewEntry5_WdAssertion(v23);
  *(_QWORD *)(v24 + 24) = 87LL;
  WdLogEvent5_WdAssertion(v24);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v57);
LABEL_78:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v59);
  DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v62);
  return v3;
}
