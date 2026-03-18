/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00E4454
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00E4824 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000F75C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000F778 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(ADAPTER_DISPLAY *this, struct _DXGKARG_ISSUPPORTEDVIDPN *a2)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  D3DKMDT_HVIDPN hDesiredVidPn; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned int v12; // ebx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v18; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v20; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  _QWORD *v29; // rax
  unsigned __int8 v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 IsVidPnSupported; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  const GUID *v37; // r8
  int v39; // [rsp+28h] [rbp-41h] BYREF
  __int64 v40; // [rsp+30h] [rbp-39h]
  char v41; // [rsp+38h] [rbp-31h]
  _BYTE v42[24]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v43[8]; // [rsp+58h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-9h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 8);
  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 5025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v4, &EventProfilerEnter, v5, 5025);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 5025);
  hDesiredVidPn = a2->hDesiredVidPn;
  v7 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2->hDesiredVidPn);
  if ( !v7 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = hDesiredVidPn;
    WdLogEvent5_WdError(v9);
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v12 = -1071774973;
    v11[3] = -1071774973LL;
    v11[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 248LL);
    v11[5] = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v11);
    goto LABEL_31;
  }
  v13 = (_QWORD *)(v7 + 120);
  if ( (_QWORD *)*v13 == v13 )
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 248LL);
    *(_QWORD *)(v14 + 32) = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v14);
    v12 = 0;
    a2->IsVidPnSupported = 1;
    goto LABEL_31;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v42, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  CurrentIrql = KeGetCurrentIrql();
  v18 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_19;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v20 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v20);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v18 = 0LL;
      goto LABEL_19;
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
    goto LABEL_20;
  }
LABEL_19:
  v23 = 0;
LABEL_20:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v43,
    *((struct DXGADAPTER **)this + 2));
  v25 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 480LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v43[0] )
    KeUnstackDetachProcess(&ApcState);
  v28 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v28 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28);
    v29[3] = 275LL;
    v29[4] = 16LL;
    v29[5] = this;
    v29[6] = CurrentIrql;
    v30 = KeGetCurrentIrql();
    v29[7] = v30;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( v18 && *(_DWORD *)(v18 + 136) != v23 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28);
    v31[3] = 275LL;
    v31[4] = 38LL;
    v32 = *(int *)(v18 + 136);
    v31[7] = 0LL;
    v31[5] = v32;
    v31[6] = v23;
    WdLogEvent5_WdCriticalError(v31);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v24, v26, v27);
  v12 = v25;
  v33[3] = v25;
  v33[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 248LL);
  v33[5] = a2->hDesiredVidPn;
  IsVidPnSupported = a2->IsVidPnSupported;
  v33[6] = IsVidPnSupported;
  if ( (_DWORD)v25 != -1073741801 && (_DWORD)v25 )
  {
    v35 = WdLogNewEntry5_WdError(IsVidPnSupported);
    *(_QWORD *)(v35 + 24) = v25;
    WdLogEvent5_WdError(v35);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v39);
  return v12;
}
