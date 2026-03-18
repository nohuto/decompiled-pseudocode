/*
 * XREFs of ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2@@@Z @ 0x1C0039E64
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2@@@Z @ 0x1C003DDE0 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@@YAJPEAVADAPTER_DISPLAY@@PEBU_DX.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay2(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2 *a2,
        const GUID *a3)
{
  ADAPTER_DISPLAY *v4; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int8 CurrentIrql; // r14
  __int64 v13; // rbx
  struct _KTHREAD *v14; // rbx
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  const GUID *v29; // r8
  int v31; // [rsp+20h] [rbp-60h] BYREF
  ADAPTER_DISPLAY *v32; // [rsp+28h] [rbp-58h]
  char v33; // [rsp+30h] [rbp-50h]
  _BYTE v34[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v31 = -1;
  v32 = 0LL;
  v4 = this;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 5121;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5121);
  }
  else
  {
    v33 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v6 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v6);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      this = *(ADAPTER_DISPLAY **)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      this = 0LL;
    }
    v32 = this;
    if ( this )
    {
      v9 = *((_DWORD *)this + 35);
      if ( !v9 )
        *((_DWORD *)this + 36) = 5121;
      *((_DWORD *)this + 35) = v9 + 1;
    }
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 988LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( KeGetCurrentIrql() >= 0xFu )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 989LL;
    WdLogEvent5_WdAssertion(v11);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_33;
  v14 = KeGetCurrentThread();
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = PsGetCurrentProcessSessionId(this, a2);
  if ( v16 && (unsigned int)PsGetThreadSessionId(v14) == v16 )
  {
    if ( IsThreadCrossSessionAttached() || (v17 = PsGetThreadWin32Thread(v14)) == 0 || !*(_QWORD *)v17 )
    {
      v13 = 0LL;
LABEL_33:
      v18 = 0;
      goto LABEL_34;
    }
    v13 = *(_QWORD *)(*(_QWORD *)v17 + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
    goto LABEL_33;
  v18 = *(_DWORD *)(v13 + 136);
LABEL_34:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v34,
    *((struct DXGADAPTER **)v4 + 2));
  v20 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2 *))(*((_QWORD *)v4 + 2) + 864LL))(
          *(_QWORD *)(*((_QWORD *)v4 + 2) + 248LL),
          a2);
  if ( v34[0] )
    KeUnstackDetachProcess(&ApcState);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v19);
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = v4;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v18 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v19);
    v25[3] = 275LL;
    v25[4] = 38LL;
    v26 = *(int *)(v13 + 136);
    v25[7] = 0LL;
    v25[5] = v26;
    v25[6] = v18;
    WdLogEvent5_WdCriticalError(v25);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v4 + 2) + 4248LL));
  if ( (_DWORD)v20 )
  {
    v27 = WdLogNewEntry5_WdError(v22, v19, v21);
    *(_QWORD *)(v27 + 24) = v20;
    WdLogEvent5_WdError(v27);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v19);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v31);
  return (unsigned int)v20;
}
