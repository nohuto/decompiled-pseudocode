/*
 * XREFs of ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01FE368
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
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
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETTIMINGSFROMVIDPN *a2,
        const GUID *a3)
{
  int v3; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned __int8 CurrentIrql; // r12
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  struct _DXGK_SET_TIMING_RESULTS::$CBFC710AEA6A7A2FB98CBDA415B9FD4D::$DAC9E6F53CD5E53ADA33D5AFCB19DBC4 v22; // r8d
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  const GUID *v34; // r8
  int v36; // [rsp+20h] [rbp-99h] BYREF
  __int64 v37; // [rsp+28h] [rbp-91h]
  char v38; // [rsp+30h] [rbp-89h]
  __int64 v39; // [rsp+38h] [rbp-81h]
  __int64 v40; // [rsp+40h] [rbp-79h]
  _DWORD v41[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v42; // [rsp+58h] [rbp-61h]
  __int128 v43; // [rsp+60h] [rbp-59h]
  __int64 v44; // [rsp+70h] [rbp-49h]
  int v45; // [rsp+78h] [rbp-41h]
  int v46; // [rsp+7Ch] [rbp-3Dh]
  int v47; // [rsp+80h] [rbp-39h]
  UINT PathCount; // [rsp+84h] [rbp-35h]
  struct _DXGK_SET_TIMING_RESULTS::$CBFC710AEA6A7A2FB98CBDA415B9FD4D::$DAC9E6F53CD5E53ADA33D5AFCB19DBC4 v49; // [rsp+88h] [rbp-31h]
  int v50; // [rsp+8Ch] [rbp-2Dh]
  __int64 v51; // [rsp+90h] [rbp-29h]
  _BYTE v52[8]; // [rsp+A0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-11h] BYREF

  v36 = -1;
  v3 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v46 = 0;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 5076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5076);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 5076LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v39 = MEMORY[0xFFFFF78000000320];
  v8 = v39 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql < 2u )
  {
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
        goto LABEL_18;
      }
      v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
      v3 = *(_DWORD *)(v10 + 136);
  }
LABEL_18:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v52,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETTIMINGSFROMVIDPN *))(*((_QWORD *)this + 2) + 1048LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v52[0] )
    KeUnstackDetachProcess(&ApcState);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v15);
    v18[3] = 275LL;
    v18[4] = 16LL;
    v18[5] = this;
    v18[6] = CurrentIrql;
    v19 = KeGetCurrentIrql();
    v18[7] = v19;
    WdLogEvent5_WdCriticalError(v18);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v3 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v15);
    v20[3] = 275LL;
    v20[4] = 38LL;
    v20[5] = *(int *)(v10 + 136);
    v20[6] = v3;
    v20[7] = 0LL;
    WdLogEvent5_WdCriticalError(v20);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  v40 = MEMORY[0xFFFFF78000000320];
  v21 = v40 * KeQueryTimeIncrement();
  v22 = a2->pResultsFlags->0;
  v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 276LL);
  v42 = 0LL;
  v43 = 0uLL;
  PathCount = a2->PathCount;
  v41[0] = 30;
  v41[1] = 72;
  v45 = 0;
  v44 = 0LL;
  v49 = v22;
  v51 = v23;
  if ( (int)v16 < 0 )
  {
    v47 = 96;
    v50 = v16;
  }
  else
  {
    v47 = 87;
    v21 = (v21 - v8) / 0x2710;
    v50 = v21;
  }
  v24 = PsGetCurrentProcessSessionId(v23, v21);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v41, v24, v25);
  v27 = (_QWORD *)WdLogNewEntry5_WdEvent(v26);
  v27[3] = v16;
  v27[4] = a2->hFunctionalVidPn;
  v27[5] = a2->pResultsFlags->0;
  v27[6] = a2->PathCount;
  WdLogEvent5_WdEvent(v27);
  if ( (_DWORD)v16 != -1073741801 && (_DWORD)v16 )
  {
    v31 = WdLogNewEntry5_WdError(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = v16;
    WdLogEvent5_WdError(v31);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v32);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v33, &EventProfilerExit, v34, v36);
  return (unsigned int)v16;
}
