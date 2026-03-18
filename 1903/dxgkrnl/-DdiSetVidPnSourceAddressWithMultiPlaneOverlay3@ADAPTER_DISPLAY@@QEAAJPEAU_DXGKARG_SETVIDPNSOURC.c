/*
 * XREFs of ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C003A0A0
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C003DCA0 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@@YAJPEAVADAPTER_DISPLAY@@PEAU_DX.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2,
        const GUID *a3)
{
  ADAPTER_DISPLAY *v4; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v9; // eax
  unsigned __int8 CurrentIrql; // r12
  unsigned __int8 v11; // r15
  __int64 v12; // rbx
  struct _KTHREAD *v13; // rbx
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v29; // [rsp+20h] [rbp-60h] BYREF
  ADAPTER_DISPLAY *v30; // [rsp+28h] [rbp-58h]
  char v31; // [rsp+30h] [rbp-50h]
  _BYTE v32[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v29 = -1;
  v30 = 0LL;
  v4 = this;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 5122;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5122);
  }
  else
  {
    v31 = 0;
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
    v30 = this;
    if ( this )
    {
      v9 = *((_DWORD *)this + 35);
      if ( !v9 )
        *((_DWORD *)this + 36) = 5122;
      *((_DWORD *)this + 35) = v9 + 1;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)v4 + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 2) + 4248LL));
  v11 = KeGetCurrentIrql();
  v12 = 0LL;
  if ( v11 >= 2u )
    goto LABEL_31;
  v13 = KeGetCurrentThread();
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = PsGetCurrentProcessSessionId(this, a2);
  if ( v15 && (unsigned int)PsGetThreadSessionId(v13) == v15 )
  {
    if ( IsThreadCrossSessionAttached() || (v16 = PsGetThreadWin32Thread(v13)) == 0 || !*(_QWORD *)v16 )
    {
      v12 = 0LL;
LABEL_31:
      v17 = 0;
      goto LABEL_32;
    }
    v12 = *(_QWORD *)(*(_QWORD *)v16 + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    goto LABEL_31;
  v17 = *(_DWORD *)(v12 + 136);
LABEL_32:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v32,
    *((struct DXGADAPTER **)v4 + 2));
  v19 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *))(*((_QWORD *)v4 + 2) + 896LL))(
          *(_QWORD *)(*((_QWORD *)v4 + 2) + 248LL),
          a2);
  if ( v32[0] )
    KeUnstackDetachProcess(&ApcState);
  v21 = KeGetCurrentIrql();
  if ( v11 != (_BYTE)v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v18);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = v4;
    v22[6] = v11;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v17 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v18);
    v24[3] = 275LL;
    v24[4] = 38LL;
    v24[5] = *(int *)(v12 + 136);
    v24[6] = v17;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v4 + 2) + 4248LL));
  if ( (_DWORD)v19 != -1073741267 && (_DWORD)v19 )
  {
    v25 = WdLogNewEntry5_WdError(v21, v18, v20);
    *(_QWORD *)(v25 + 24) = v19;
    WdLogEvent5_WdError(v25);
  }
  if ( !CurrentIrql )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)v4 + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v18);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v29);
  return (unsigned int)v19;
}
