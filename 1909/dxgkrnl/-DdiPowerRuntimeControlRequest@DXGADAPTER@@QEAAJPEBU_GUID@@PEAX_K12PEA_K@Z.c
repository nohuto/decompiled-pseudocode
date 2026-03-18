/*
 * XREFs of ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C003832C
 * Callers:
 *     ?DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C003B140 (-DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C01EE3CC (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C01EF4D0 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EF618 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiPowerRuntimeControlRequest(
        DXGADAPTER *this,
        const struct _GUID *a2,
        const GUID *a3,
        __int64 a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  DXGADAPTER *v9; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v14; // eax
  unsigned __int8 CurrentIrql; // r15
  __int64 v16; // rbx
  struct _KTHREAD *v17; // rbx
  __int64 v18; // rax
  int v19; // edi
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // rcx
  _QWORD *v26; // rax
  unsigned __int8 v27; // cl
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  int v33; // [rsp+40h] [rbp-71h] BYREF
  DXGADAPTER *v34; // [rsp+48h] [rbp-69h]
  char v35; // [rsp+50h] [rbp-61h]
  unsigned __int64 *v36; // [rsp+58h] [rbp-59h]
  void *v37; // [rsp+60h] [rbp-51h]
  __int64 v38; // [rsp+68h] [rbp-49h]
  _BYTE v39[8]; // [rsp+70h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-39h] BYREF

  v33 = -1;
  v34 = 0LL;
  v9 = this;
  v37 = a5;
  v36 = a7;
  v38 = a4;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 5126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5126);
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
      v11 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v11 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v11);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      this = *(DXGADAPTER **)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      this = 0LL;
    }
    v34 = this;
    if ( this )
    {
      v14 = *((_DWORD *)this + 35);
      if ( !v14 )
        *((_DWORD *)this + 36) = 5126;
      *((_DWORD *)this + 35) = v14 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)v9 + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v16 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  v17 = KeGetCurrentThread();
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v18 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = PsGetCurrentProcessSessionId(this, a2);
  if ( v19 && (unsigned int)PsGetThreadSessionId(v17) == v19 )
  {
    if ( IsThreadCrossSessionAttached() || (v20 = PsGetThreadWin32Thread(v17)) == 0 || !*(_QWORD *)v20 )
    {
      v16 = 0LL;
LABEL_29:
      v21 = 0;
      goto LABEL_30;
    }
    v16 = *(_QWORD *)(*(_QWORD *)v20 + 80LL);
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
    goto LABEL_29;
  v21 = *(_DWORD *)(v16 + 136);
LABEL_30:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v39, v9);
  v23 = (*((int (__fastcall **)(_QWORD, const struct _GUID *, const GUID *, __int64, void *, unsigned __int64, unsigned __int64 *))v9
         + 89))(
          *((_QWORD *)v9 + 31),
          a2,
          a3,
          v38,
          v37,
          a6,
          v36);
  if ( v39[0] )
    KeUnstackDetachProcess(&ApcState);
  v25 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v25 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v22);
    v26[3] = 275LL;
    v26[4] = 16LL;
    v26[5] = v9;
    v26[6] = CurrentIrql;
    v27 = KeGetCurrentIrql();
    v26[7] = v27;
    WdLogEvent5_WdCriticalError(v26);
  }
  if ( v16 && *(_DWORD *)(v16 + 136) != v21 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v22);
    v28[3] = 275LL;
    v28[4] = 38LL;
    v28[5] = *(int *)(v16 + 136);
    v28[6] = v21;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
  _InterlockedDecrement((volatile signed __int32 *)v9 + 1062);
  if ( (_DWORD)v23 != -1073741811 && (_DWORD)v23 )
  {
    v29 = WdLogNewEntry5_WdError(v25, v22, v24);
    *(_QWORD *)(v29 + 24) = v23;
    WdLogEvent5_WdError(v29);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v22);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v33);
  return (unsigned int)v23;
}
