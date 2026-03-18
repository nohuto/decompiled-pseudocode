/*
 * XREFs of ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1C01FFE2C
 * Callers:
 *     ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C0254360 (-UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiUpdateOverlay(ADAPTER_RENDER *this, void *a2, const GUID *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  int v31; // [rsp+20h] [rbp-60h] BYREF
  __int64 v32; // [rsp+28h] [rbp-58h]
  char v33; // [rsp+30h] [rbp-50h]
  _BYTE v34[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 5033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5033);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 5033LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
LABEL_15:
      v14 = 0;
      goto LABEL_16;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_15;
  v14 = *(_DWORD *)(v9 + 136);
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v34,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(void *, const GUID *))(*((_QWORD *)this + 2) + 616LL))(a2, a3);
  if ( v34[0] )
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
  if ( v9 && *(_DWORD *)(v9 + 136) != v14 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v15);
    v20[3] = 275LL;
    v20[4] = 38LL;
    v21 = *(int *)(v9 + 136);
    v20[7] = 0LL;
    v20[5] = v21;
    v20[6] = v14;
    WdLogEvent5_WdCriticalError(v20);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v17);
  v22[3] = v16;
  v22[4] = *(_QWORD *)&a3->Data1;
  v22[5] = a2;
  WdLogEvent5_WdEvent(v22);
  if ( (_DWORD)v16 != -1073741811 && (_DWORD)v16 != -1073741801 && (_DWORD)v16 != -1073741670 && (_DWORD)v16 )
  {
    v26 = WdLogNewEntry5_WdError(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = v16;
    WdLogEvent5_WdError(v26);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v27);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v31);
  return (unsigned int)v16;
}
