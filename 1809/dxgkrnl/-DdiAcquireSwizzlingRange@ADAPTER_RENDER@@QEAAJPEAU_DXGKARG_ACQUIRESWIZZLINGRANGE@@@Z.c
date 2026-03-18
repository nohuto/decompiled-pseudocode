/*
 * XREFs of ?DdiAcquireSwizzlingRange@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x1C0131614
 * Callers:
 *     ?ADAPTER_RENDER_DdiAcquireSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x1C0018730 (-ADAPTER_RENDER_DdiAcquireSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_ACQUIRESWIZZLINGRA.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiAcquireSwizzlingRange(
        ADAPTER_RENDER *this,
        struct _DXGKARG_ACQUIRESWIZZLINGRANGE *a2,
        const GUID *a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 PrivateDriverData; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  LARGE_INTEGER CPUTranslatedAddress; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  int v33; // [rsp+20h] [rbp-60h] BYREF
  __int64 v34; // [rsp+28h] [rbp-58h]
  char v35; // [rsp+30h] [rbp-50h]
  _BYTE v36[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 5006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5006);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 5006);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_15:
      v12 = 0;
      goto LABEL_16;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_15;
  v12 = *(_DWORD *)(v7 + 136);
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v36,
    *((struct DXGADAPTER **)this + 2));
  v14 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ACQUIRESWIZZLINGRANGE *))(*((_QWORD *)this + 2) + 368LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v18[3] = 275LL;
    v18[4] = 16LL;
    v18[5] = this;
    v18[6] = CurrentIrql;
    v19 = KeGetCurrentIrql();
    v18[7] = v19;
    WdLogEvent5_WdCriticalError(v18);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v20[3] = 275LL;
    v20[4] = 38LL;
    v21 = *(int *)(v7 + 136);
    v20[7] = 0LL;
    v20[5] = v21;
    v20[6] = v12;
    WdLogEvent5_WdCriticalError(v20);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v13, v15, v16);
  v22[3] = v14;
  v22[4] = a2->hAllocation;
  v22[5] = a2->RangeId;
  PrivateDriverData = a2->PrivateDriverData;
  v22[6] = PrivateDriverData;
  v27 = WdLogNewEntry5_WdTrace(PrivateDriverData, v24, v25, v26);
  *(_QWORD *)(v27 + 24) = a2->SegmentId;
  CPUTranslatedAddress = a2->CPUTranslatedAddress;
  *(LARGE_INTEGER *)(v27 + 32) = CPUTranslatedAddress;
  if ( (unsigned int)(v14 + 1071775481) > 1 && (_DWORD)v14 )
  {
    v29 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdError)((LARGE_INTEGER)CPUTranslatedAddress.QuadPart);
    *(_QWORD *)(v29 + 24) = v14;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v33);
  return (unsigned int)v14;
}
