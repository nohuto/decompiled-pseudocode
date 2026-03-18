/*
 * XREFs of ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00F1470
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00E4D14 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C00F1254 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0206F98 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyAllocation(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_DESTROYALLOCATION *a2,
        const GUID *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rdi
  char *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  const GUID *v13; // r8
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v18; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v20; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  const HANDLE *pAllocationList; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  const GUID *v38; // r8
  int v39; // [rsp+20h] [rbp-39h] BYREF
  __int64 v40; // [rsp+28h] [rbp-31h]
  char v41; // [rsp+30h] [rbp-29h]
  char v42[8]; // [rsp+38h] [rbp-21h] BYREF
  char *v43; // [rsp+40h] [rbp-19h]
  int v44; // [rsp+48h] [rbp-11h]
  char v45[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 185LL) )
    return 0LL;
  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 5005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5005);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 5005LL);
  Current = DXGPROCESS::GetCurrent();
  v9 = Current;
  if ( Current )
    v10 = (char *)Current + 112;
  else
    v10 = 0LL;
  v44 = 0;
  v43 = v10;
  if ( v10 && *((struct _KTHREAD **)v10 + 1) == KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v11 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( v9 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v10, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v14 = *((_DWORD *)v10 + 4);
        if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v12, &EventBlockThread, v13, v14);
      }
      ExAcquirePushLockExclusiveEx(v10, 0LL);
    }
    *((_QWORD *)v10 + 1) = KeGetCurrentThread();
    v44 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v18 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_31;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v20 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v20);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v18 = 0LL;
      goto LABEL_31;
    }
    v18 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    v23 = *(_DWORD *)(v18 + 136);
    goto LABEL_32;
  }
LABEL_31:
  v23 = 0;
LABEL_32:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v45,
    *((struct DXGADAPTER **)this + 2));
  v25 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_DESTROYALLOCATION *))(*((_QWORD *)this + 2) + 344LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v45[0] )
    KeUnstackDetachProcess(&ApcState);
  v26 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v26 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v24);
    v27[3] = 275LL;
    v27[4] = 16LL;
    v27[5] = this;
    v27[6] = CurrentIrql;
    v28 = KeGetCurrentIrql();
    v27[7] = v28;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( v18 && *(_DWORD *)(v18 + 136) != v23 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v24);
    v29[3] = 275LL;
    v29[4] = 38LL;
    v30 = *(int *)(v18 + 136);
    v29[7] = 0LL;
    v29[5] = v30;
    v29[6] = v23;
    WdLogEvent5_WdCriticalError(v29);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v24);
  v31[3] = v25;
  v31[4] = a2->Flags.Value;
  v31[5] = a2->hResource;
  v31[6] = a2->NumAllocations;
  pAllocationList = a2->pAllocationList;
  if ( pAllocationList )
    pAllocationList = (const HANDLE *)*pAllocationList;
  v31[7] = pAllocationList;
  if ( (_DWORD)v25 )
  {
    v35 = WdLogNewEntry5_WdError(pAllocationList, v32, v33);
    *(_QWORD *)(v35 + 24) = v25;
    WdLogEvent5_WdError(v35);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v36);
  if ( v41 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v37, &EventProfilerExit, v38, v39);
  }
  return (unsigned int)v25;
}
