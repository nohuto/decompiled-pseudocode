/*
 * XREFs of ?DdiPostMultiPlaneOverlayPresent@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT@@@Z @ 0x1C0037FD8
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT@@@Z @ 0x1C003DDC0 (-ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_POSTMULTI.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiPostMultiPlaneOverlayPresent(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_POSTMULTIPLANEOVERLAYPRESENT *a2,
        const GUID *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v14; // rbx
  struct _KTHREAD *v15; // rbx
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rax
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned __int8 v25; // cl
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
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
    v33 = 5123;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5123);
  }
  else
  {
    v35 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v6 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v6);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v9 = 0LL;
    }
    v34 = v9;
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 140);
      if ( !v10 )
        *(_DWORD *)(v9 + 144) = 5123;
      *(_DWORD *)(v9 + 140) = v10 + 1;
    }
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v14 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  v15 = KeGetCurrentThread();
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v16 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = PsGetCurrentProcessSessionId(v12, v11);
  if ( v17 && (unsigned int)PsGetThreadSessionId(v15) == v17 )
  {
    if ( IsThreadCrossSessionAttached() || (v18 = PsGetThreadWin32Thread(v15)) == 0 || !*(_QWORD *)v18 )
    {
      v14 = 0LL;
LABEL_29:
      v19 = 0;
      goto LABEL_30;
    }
    v14 = *(_QWORD *)(*(_QWORD *)v18 + 80LL);
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
    goto LABEL_29;
  v19 = *(_DWORD *)(v14 + 136);
LABEL_30:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v36,
    *((struct DXGADAPTER **)this + 2));
  v21 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_POSTMULTIPLANEOVERLAYPRESENT *))(*((_QWORD *)this + 2)
                                                                                            + 904LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  v23 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v23 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v20);
    v24[3] = 275LL;
    v24[4] = 16LL;
    v24[5] = this;
    v24[6] = CurrentIrql;
    v25 = KeGetCurrentIrql();
    v24[7] = v25;
    WdLogEvent5_WdCriticalError(v24);
  }
  if ( v14 && *(_DWORD *)(v14 + 136) != v19 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v20);
    v26[3] = 275LL;
    v26[4] = 38LL;
    v27 = *(int *)(v14 + 136);
    v26[7] = 0LL;
    v26[5] = v27;
    v26[6] = v19;
    WdLogEvent5_WdCriticalError(v26);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  if ( (_DWORD)v21 )
  {
    v28 = WdLogNewEntry5_WdError(v23, v20, v22);
    *(_QWORD *)(v28 + 24) = v21;
    WdLogEvent5_WdError(v28);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v29);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v33);
  return (unsigned int)v21;
}
