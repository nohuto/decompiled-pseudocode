/*
 * XREFs of ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1C01FE68C
 * Callers:
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E17E8 (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
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
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetVirtualMachineData(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETVIRTUALMACHINEDATA *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v16; // r14d
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
  __int64 v29; // [rsp+28h] [rbp-58h]
  char v30; // [rsp+30h] [rbp-50h]
  _BYTE v31[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 5113;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5113);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 5113LL);
  v6 = *((_QWORD *)this + 2);
  LODWORD(v7) = 0;
  if ( *(_QWORD *)(v6 + 1200) )
  {
    DXGADAPTER::AcquireDdiSync(v6, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
    CurrentIrql = KeGetCurrentIrql();
    v11 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v13 = WdLogNewEntry5_WdAssertion(v9, v8);
        *(_QWORD *)(v13 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v13);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        if ( IsThreadCrossSessionAttached()
          || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
          || !*(_QWORD *)ThreadWin32Thread )
        {
          v11 = 0LL;
          goto LABEL_16;
        }
        v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      }
      else
      {
        v11 = 0LL;
      }
      if ( v11 )
      {
        v16 = *(_DWORD *)(v11 + 136);
        goto LABEL_17;
      }
    }
LABEL_16:
    v16 = 0;
LABEL_17:
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v31,
      *((struct DXGADAPTER **)this + 2));
    v7 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIRTUALMACHINEDATA *))(*((_QWORD *)this + 2) + 1200LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
           a2);
    if ( v31[0] )
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
    if ( v11 && *(_DWORD *)(v11 + 136) != v16 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
      v22[3] = 275LL;
      v22[4] = 38LL;
      v23 = *(int *)(v11 + 136);
      v22[7] = 0LL;
      v22[5] = v23;
      v22[6] = v16;
      WdLogEvent5_WdCriticalError(v22);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
    if ( (_DWORD)v7 )
    {
      v24 = WdLogNewEntry5_WdError(v19, v17, v18);
      *(_QWORD *)(v24 + 24) = v7;
      WdLogEvent5_WdError(v24);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v5);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v28);
  return (unsigned int)v7;
}
