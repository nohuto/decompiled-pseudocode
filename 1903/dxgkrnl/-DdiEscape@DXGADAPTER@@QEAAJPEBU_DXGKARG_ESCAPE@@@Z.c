/*
 * XREFs of ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C00FF830
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C027BA68 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000C5F0 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiEscape(DXGADAPTER *this, const struct _DXGKARG_ESCAPE *a2, const GUID *a3)
{
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v14; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v16; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v34; // [rsp+20h] [rbp-88h] BYREF
  __int64 v35; // [rsp+28h] [rbp-80h]
  char v36; // [rsp+30h] [rbp-78h]
  _BYTE v37[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v4 = 0;
  v34 = -1;
  v35 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 5022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5022);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 5022LL);
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  if ( *((_BYTE *)Global + 1288)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1284), this) )
  {
    LODWORD(v10) = -1073741637;
    goto LABEL_37;
  }
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v14 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_19;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v16 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11);
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || IsThreadCrossSessionAttached()
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
    || !*(_QWORD *)ThreadWin32Thread )
  {
    v14 = 0LL;
    goto LABEL_19;
  }
  v14 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  if ( !v14 )
  {
LABEL_19:
    v19 = 0;
    goto LABEL_20;
  }
  v19 = *(_DWORD *)(v14 + 136);
LABEL_20:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v37, this);
  v10 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_ESCAPE *))this + 57))(*((_QWORD *)this + 31), a2);
  if ( v37[0] )
    KeUnstackDetachProcess(&ApcState);
  v21 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = this;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v14 && *(_DWORD *)(v14 + 136) != v19 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
    v24[3] = 275LL;
    v24[4] = 38LL;
    v24[5] = *(int *)(v14 + 136);
    v24[6] = v19;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1062);
  v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v21);
  v25[3] = v10;
  v25[4] = *((_QWORD *)this + 31);
  v25[5] = a2->hDevice;
  v25[6] = a2->PrivateDriverDataSize;
  if ( a2->PrivateDriverDataSize > 4 )
    v4 = *(_DWORD *)a2->pPrivateDriverData;
  v25[7] = v4;
  WdLogEvent5_WdEvent(v25);
  if ( (_DWORD)v10 )
  {
    if ( (_DWORD)v10 == -1073741823 )
    {
      v30 = WdLogNewEntry5_WdEvent(v27);
      *(_QWORD *)(v30 + 24) = -1073741823LL;
      WdLogEvent5_WdEvent(v30);
    }
    else if ( (unsigned int)(v10 + 1073741811) > 0x10 || (v27 = 66561LL, !_bittest((const int *)&v27, v10 + 1073741811)) )
    {
      if ( (_DWORD)v10 != -1073741674 )
      {
        v29 = WdLogNewEntry5_WdError(v27, v26, v28);
        *(_QWORD *)(v29 + 24) = v10;
        WdLogEvent5_WdError(v29);
      }
    }
  }
  DXGADAPTER::ReleaseDdiSync(this);
LABEL_37:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v9);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v34);
  return (unsigned int)v10;
}
