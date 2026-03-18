/*
 * XREFs of ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C01051F0
 * Callers:
 *     ?ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000BA40 (-ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C01054E0 (-DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiBuildPagingBuffer(
        ADAPTER_RENDER *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rbx
  ADAPTER_RENDER *v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  int v28; // [rsp+20h] [rbp-88h] BYREF
  __int64 v29; // [rsp+28h] [rbp-80h]
  char v30; // [rsp+30h] [rbp-78h]
  _BYTE v31[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 5016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5016);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 5016LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v10 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v10);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v8 )
      {
        v13 = *(_DWORD *)(v8 + 136);
        goto LABEL_17;
      }
    }
    else
    {
      v8 = 0LL;
    }
  }
  v13 = 0;
LABEL_17:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v31,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_BUILDPAGINGBUFFER *))(*((_QWORD *)this + 2) + 408LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v31[0] )
    KeUnstackDetachProcess(&ApcState);
  v16 = (ADAPTER_RENDER *)KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v14);
    v17[3] = 275LL;
    v17[4] = 16LL;
    v17[5] = this;
    v17[6] = CurrentIrql;
    v18 = KeGetCurrentIrql();
    v17[7] = v18;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v13 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v14);
    v19[3] = 275LL;
    v19[4] = 38LL;
    v19[5] = *(int *)(v8 + 136);
    v19[6] = v13;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(v16, v15, a2);
  if ( (_DWORD)v15 && (_DWORD)v15 != -1071775743 && (_DWORD)v15 != -1071775486 )
  {
    v23 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v23 + 24) = v15;
    WdLogEvent5_WdError(v23);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v24);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v28);
  return (unsigned int)v15;
}
