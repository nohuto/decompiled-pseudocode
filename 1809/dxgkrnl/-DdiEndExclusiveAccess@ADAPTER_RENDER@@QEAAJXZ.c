/*
 * XREFs of ?DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01CB208
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01C646C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01C7638 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiEndExclusiveAccess(ADAPTER_RENDER *this, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  int v24; // [rsp+20h] [rbp-60h] BYREF
  int v25; // [rsp+28h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-50h]
  char v27; // [rsp+38h] [rbp-48h]
  _BYTE v28[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 5131;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5131);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 5131);
  v4 = *((_QWORD *)this + 2);
  LODWORD(v5) = 0;
  if ( *(_QWORD *)(v4 + 1232) )
  {
    DXGADAPTER::AcquireDdiSync(v4, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
    CurrentIrql = KeGetCurrentIrql();
    v8 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v10 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v10 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v10);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        if ( IsThreadCrossSessionAttached()
          || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
          || !*(_QWORD *)ThreadWin32Thread )
        {
          v8 = 0LL;
          goto LABEL_16;
        }
        v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v13 = *(_DWORD *)(v8 + 136);
        goto LABEL_17;
      }
    }
LABEL_16:
    v13 = 0;
LABEL_17:
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v28,
      *((struct DXGADAPTER **)this + 2));
    v14 = *((_QWORD *)this + 2);
    v24 = 0;
    v5 = (*(int (__fastcall **)(_QWORD, int *))(v14 + 1232))(*(_QWORD *)(v14 + 248), &v24);
    if ( v28[0] )
      KeUnstackDetachProcess(&ApcState);
    v15 = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v15 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
      v16[3] = 275LL;
      v16[4] = 16LL;
      v16[5] = this;
      v16[6] = CurrentIrql;
      v17 = KeGetCurrentIrql();
      v16[7] = v17;
      WdLogEvent5_WdCriticalError(v16);
    }
    if ( v8 && *(_DWORD *)(v8 + 136) != v13 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
      v18[3] = 275LL;
      v18[4] = 38LL;
      v19 = *(int *)(v8 + 136);
      v18[7] = 0LL;
      v18[5] = v19;
      v18[6] = v13;
      WdLogEvent5_WdCriticalError(v18);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
    if ( (_DWORD)v5 )
    {
      v20 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v20 + 24) = v5;
      WdLogEvent5_WdError(v20);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v25);
  return (unsigned int)v5;
}
