/*
 * XREFs of ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C012D3A4
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C012D254 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCommitVidPn(ADAPTER_DISPLAY *this, const struct _DXGKARG_COMMITVIDPN *a2)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned __int8 CurrentIrql; // r12
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  ULONG TimeIncrement; // eax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  const GUID *v35; // r8
  int v37; // [rsp+20h] [rbp-99h] BYREF
  __int64 v38; // [rsp+28h] [rbp-91h]
  char v39; // [rsp+30h] [rbp-89h]
  __int64 v40; // [rsp+38h] [rbp-81h]
  __int64 v41; // [rsp+40h] [rbp-79h]
  _QWORD v42[10]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v43[8]; // [rsp+A0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-11h] BYREF

  memset(v42, 0, 0x48uLL);
  v37 = -1;
  v38 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v39 = 1;
    v37 = 5009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v4, &EventProfilerEnter, v5, 5009);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 5009LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v40 = MEMORY[0xFFFFF78000000320];
  v8 = v40 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v12 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
LABEL_15:
      v15 = 0;
      goto LABEL_16;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    goto LABEL_15;
  v15 = *(_DWORD *)(v10 + 136);
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v43,
    *((struct DXGADAPTER **)this + 2));
  v17 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_COMMITVIDPN *))(*((_QWORD *)this + 2) + 520LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v43[0] )
    KeUnstackDetachProcess(&ApcState);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v16);
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = this;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v15 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v16);
    v21[3] = 275LL;
    v21[4] = 38LL;
    v21[5] = *(int *)(v10 + 136);
    v21[6] = v15;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  v41 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  if ( (int)v17 < 0 )
    v23 = (unsigned int)v17;
  else
    v23 = (v41 * (unsigned __int64)TimeIncrement - v8) / 0x2710;
  v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 276LL);
  memset(&v42[1], 0, 36);
  HIDWORD(v42[6]) = a2->Flags;
  LODWORD(v42[7]) = a2->AffectedVidPnSourceId;
  v42[0] = 0x480000001ELL;
  LODWORD(v42[6]) = 86;
  HIDWORD(v42[7]) = v23;
  v42[8] = v24;
  v25 = PsGetCurrentProcessSessionId(LODWORD(v42[7]), v23);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v42, v25, v26);
  v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v27);
  v28[3] = v17;
  v28[4] = a2->hFunctionalVidPn;
  v28[5] = a2->AffectedVidPnSourceId;
  v28[6] = a2->MonitorConnectivityChecks;
  v28[7] = a2->hPrimaryAllocation;
  WdLogEvent5_WdEvent(v28);
  if ( (_DWORD)v17 != -1073741801 && (_DWORD)v17 != -1071774920 && (_DWORD)v17 )
  {
    v32 = WdLogNewEntry5_WdError(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = v17;
    WdLogEvent5_WdError(v32);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v33);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v37);
  return (unsigned int)v17;
}
