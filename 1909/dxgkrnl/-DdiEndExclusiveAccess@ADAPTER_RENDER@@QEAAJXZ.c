/*
 * XREFs of ?DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01FA0A4
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F57CC (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01F6870 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
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
 */

__int64 __fastcall ADAPTER_RENDER::DdiEndExclusiveAccess(ADAPTER_RENDER *this, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  int v28; // [rsp+20h] [rbp-60h] BYREF
  int v29; // [rsp+28h] [rbp-58h] BYREF
  __int64 v30; // [rsp+30h] [rbp-50h]
  char v31; // [rsp+38h] [rbp-48h]
  _BYTE v32[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 5131;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5131);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 5131LL);
  v5 = *((_QWORD *)this + 2);
  LODWORD(v6) = 0;
  if ( *(_QWORD *)(v5 + 1216) )
  {
    DXGADAPTER::AcquireDdiSync(v5, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
    CurrentIrql = KeGetCurrentIrql();
    v10 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v12 = WdLogNewEntry5_WdAssertion(v8, v7);
        *(_QWORD *)(v12 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v12);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        if ( IsThreadCrossSessionAttached()
          || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
          || !*(_QWORD *)ThreadWin32Thread )
        {
          v10 = 0LL;
          goto LABEL_16;
        }
        v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      }
      else
      {
        v10 = 0LL;
      }
      if ( v10 )
      {
        v15 = *(_DWORD *)(v10 + 136);
        goto LABEL_17;
      }
    }
LABEL_16:
    v15 = 0;
LABEL_17:
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v32,
      *((struct DXGADAPTER **)this + 2));
    v16 = *((_QWORD *)this + 2);
    v28 = 0;
    v6 = (*(int (__fastcall **)(_QWORD, int *))(v16 + 1216))(*(_QWORD *)(v16 + 248), &v28);
    if ( v32[0] )
      KeUnstackDetachProcess(&ApcState);
    v19 = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v19 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
      v20[3] = 275LL;
      v20[4] = 16LL;
      v20[5] = this;
      v20[6] = CurrentIrql;
      v21 = KeGetCurrentIrql();
      v20[7] = v21;
      WdLogEvent5_WdCriticalError(v20);
    }
    if ( v10 && *(_DWORD *)(v10 + 136) != v15 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
      v22[3] = 275LL;
      v22[4] = 38LL;
      v23 = *(int *)(v10 + 136);
      v22[7] = 0LL;
      v22[5] = v23;
      v22[6] = v15;
      WdLogEvent5_WdCriticalError(v22);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
    if ( (_DWORD)v6 )
    {
      v24 = WdLogNewEntry5_WdError(v19, v17, v18);
      *(_QWORD *)(v24 + 24) = v6;
      WdLogEvent5_WdError(v24);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v4);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v29);
  return (unsigned int)v6;
}
