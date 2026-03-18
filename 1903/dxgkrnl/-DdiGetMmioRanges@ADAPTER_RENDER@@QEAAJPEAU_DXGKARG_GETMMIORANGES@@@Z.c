/*
 * XREFs of ?DdiGetMmioRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETMMIORANGES@@@Z @ 0x1C0211A68
 * Callers:
 *     ?GetMmioRanges@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETMMIORANGES@@@Z @ 0x1C0216B10 (-GetMmioRanges@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETMMIORANGES@@@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiGetMmioRanges(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETMMIORANGES *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // edi
  __int64 v14; // rdx
  unsigned int v15; // r15d
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  int v25; // [rsp+20h] [rbp-60h] BYREF
  __int64 v26; // [rsp+28h] [rbp-58h]
  char v27; // [rsp+30h] [rbp-50h]
  _BYTE v28[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 5139;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5139);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 5139LL);
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
    (DXGVALIDATIONPROCESSATTACH *)v28,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct _DXGKARG_GETMMIORANGES *))(*(_QWORD *)(*((_QWORD *)this + 2) + 936LL)
                                                                           + 48LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 928LL) + 8LL),
          a2);
  if ( v28[0] )
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
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v21);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v25);
  return v15;
}
