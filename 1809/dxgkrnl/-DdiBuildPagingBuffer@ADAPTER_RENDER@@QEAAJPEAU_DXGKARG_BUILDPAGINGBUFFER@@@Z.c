/*
 * XREFs of ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C010F710
 * Callers:
 *     ?ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0011F70 (-ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
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
 *     ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C010FA00 (-DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiBuildPagingBuffer(
        ADAPTER_RENDER *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        const GUID *a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // ebp
  __int64 v13; // rbx
  ADAPTER_RENDER *v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v23; // [rsp+20h] [rbp-88h] BYREF
  __int64 v24; // [rsp+28h] [rbp-80h]
  char v25; // [rsp+30h] [rbp-78h]
  _BYTE v26[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v25 = 1;
    v23 = 5016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5016);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 5016);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v9 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v9 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v9);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v7 )
      {
        v12 = *(_DWORD *)(v7 + 136);
        goto LABEL_17;
      }
    }
    else
    {
      v7 = 0LL;
    }
  }
  v12 = 0;
LABEL_17:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v26,
    *((struct DXGADAPTER **)this + 2));
  v13 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_BUILDPAGINGBUFFER *))(*((_QWORD *)this + 2) + 408LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v26[0] )
    KeUnstackDetachProcess(&ApcState);
  v14 = (ADAPTER_RENDER *)KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v14 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14);
    v15[3] = 275LL;
    v15[4] = 16LL;
    v15[5] = this;
    v15[6] = CurrentIrql;
    v16 = KeGetCurrentIrql();
    v15[7] = v16;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14);
    v17[3] = 275LL;
    v17[4] = 38LL;
    v17[5] = *(int *)(v7 + 136);
    v17[6] = v12;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(v14, v13, a2);
  if ( (_DWORD)v13 && (_DWORD)v13 != -1071775743 && (_DWORD)v13 != -1071775486 )
  {
    v19 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v19 + 24) = v13;
    WdLogEvent5_WdError(v19);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return (unsigned int)v13;
}
