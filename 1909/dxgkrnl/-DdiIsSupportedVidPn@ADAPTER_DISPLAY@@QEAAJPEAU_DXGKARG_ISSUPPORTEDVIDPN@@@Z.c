/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00E4944
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00E484C (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00045D4 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(ADAPTER_DISPLAY *this, struct _DXGKARG_ISSUPPORTEDVIDPN *a2)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  D3DKMDT_HVIDPN hDesiredVidPn; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v24; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v26; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v29; // r14d
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rcx
  _QWORD *v33; // rax
  unsigned __int8 v34; // cl
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 IsVidPnSupported; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  const GUID *v43; // r8
  int v45; // [rsp+28h] [rbp-41h] BYREF
  __int64 v46; // [rsp+30h] [rbp-39h]
  char v47; // [rsp+38h] [rbp-31h]
  _BYTE v48[24]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v49[8]; // [rsp+58h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-9h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 8);
  v45 = -1;
  v46 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v47 = 1;
    v45 = 5025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v4, &EventProfilerEnter, v5, 5025);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 5025LL);
  hDesiredVidPn = a2->hDesiredVidPn;
  v7 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2->hDesiredVidPn);
  if ( !v7 )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v11 + 24) = hDesiredVidPn;
    WdLogEvent5_WdError(v11);
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v16 = -1071774973;
    v15[3] = -1071774973LL;
    v15[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 248LL);
    v15[5] = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v15);
    goto LABEL_31;
  }
  v18 = (_QWORD *)(v7 + 120);
  if ( (_QWORD *)*v18 == v18 )
  {
    v19 = WdLogNewEntry5_WdError(v18, v8, v10);
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 248LL);
    *(_QWORD *)(v19 + 32) = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v19);
    v16 = 0;
    a2->IsVidPnSupported = 1;
    goto LABEL_31;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v48, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v24 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_19;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v26 = WdLogNewEntry5_WdAssertion(v22, v21);
    *(_QWORD *)(v26 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22, v21);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v24 = 0LL;
      goto LABEL_19;
    }
    v24 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v24 = 0LL;
  }
  if ( v24 )
  {
    v29 = *(_DWORD *)(v24 + 136);
    goto LABEL_20;
  }
LABEL_19:
  v29 = 0;
LABEL_20:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v49,
    *((struct DXGADAPTER **)this + 2));
  v31 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 480LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v49[0] )
    KeUnstackDetachProcess(&ApcState);
  v32 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v32 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v30);
    v33[3] = 275LL;
    v33[4] = 16LL;
    v33[5] = this;
    v33[6] = CurrentIrql;
    v34 = KeGetCurrentIrql();
    v33[7] = v34;
    WdLogEvent5_WdCriticalError(v33);
  }
  if ( v24 && *(_DWORD *)(v24 + 136) != v29 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v30);
    v35[3] = 275LL;
    v35[4] = 38LL;
    v36 = *(int *)(v24 + 136);
    v35[7] = 0LL;
    v35[5] = v36;
    v35[6] = v29;
    WdLogEvent5_WdCriticalError(v35);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v30);
  v16 = v31;
  v37[3] = v31;
  v39 = *(_QWORD *)(*((_QWORD *)this + 2) + 248LL);
  v37[4] = v39;
  v37[5] = a2->hDesiredVidPn;
  IsVidPnSupported = a2->IsVidPnSupported;
  v37[6] = IsVidPnSupported;
  if ( (_DWORD)v31 != -1073741801 && (_DWORD)v31 )
  {
    v41 = WdLogNewEntry5_WdError(IsVidPnSupported, v39, v38);
    *(_QWORD *)(v41 + 24) = v31;
    WdLogEvent5_WdError(v41);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v17);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v42, &EventProfilerExit, v43, v45);
  return v16;
}
