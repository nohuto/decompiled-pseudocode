/*
 * XREFs of ?DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTION@@@Z @ 0x1C01FDAB4
 * Callers:
 *     ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C02BF1A0 (-SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
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

__int64 __fastcall ADAPTER_DISPLAY::DdiSetTargetAnalogCopyProtection(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETTARGETANALOGCOPYPROTECTION *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const GUID *v28; // r8
  int v30; // [rsp+20h] [rbp-60h] BYREF
  __int64 v31; // [rsp+28h] [rbp-58h]
  char v32; // [rsp+30h] [rbp-50h]
  _BYTE v33[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 5079;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5079);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 5079LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v10 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v10);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v8 = 0LL;
LABEL_15:
      v13 = 0;
      goto LABEL_16;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_15;
  v13 = *(_DWORD *)(v8 + 136);
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v33,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETTARGETANALOGCOPYPROTECTION *))(*((_QWORD *)this + 2)
                                                                                             + 1072LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  v16 = KeGetCurrentIrql();
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
    v20 = *(int *)(v8 + 136);
    v19[7] = 0LL;
    v19[5] = v20;
    v19[6] = v13;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  v21 = WdLogNewEntry5_WdEvent(v16);
  *(_QWORD *)(v21 + 24) = v15;
  *(_QWORD *)(v21 + 32) = a2->TargetId;
  WdLogEvent5_WdEvent(v21);
  if ( (_DWORD)v15 != -1073741801 && (_DWORD)v15 )
  {
    v25 = WdLogNewEntry5_WdError(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = v15;
    WdLogEvent5_WdError(v25);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v26);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v30);
  return (unsigned int)v15;
}
