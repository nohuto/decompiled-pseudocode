/*
 * XREFs of DpiDispatchInternalIoctl @ 0x1C00C2D40
 * Callers:
 *     <none>
 * Callees:
 *     LoadEtwStackLocation @ 0x1C0004DD8 (LoadEtwStackLocation.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C002FE6C (McTemplateK0xq.c)
 *     McTemplateK0phbr1q @ 0x1C004A0AC (McTemplateK0phbr1q.c)
 */

__int64 __fastcall DpiDispatchInternalIoctl(__int64 a1, IRP *a2, const GUID *a3)
{
  char v3; // r15
  __int64 EtwStackLocation; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, IRP *); // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v21; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-A9h]
  int v23; // [rsp+40h] [rbp-89h] BYREF
  __int64 v24; // [rsp+48h] [rbp-81h]
  char v25; // [rsp+50h] [rbp-79h]
  _BYTE v26[72]; // [rsp+58h] [rbp-71h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-29h]
  __int128 v28; // [rsp+B0h] [rbp-19h]
  __int128 v29; // [rsp+C0h] [rbp-9h]
  __int128 v30; // [rsp+D0h] [rbp+7h]
  __int64 v31; // [rsp+E0h] [rbp+17h]

  v23 = -1;
  v3 = 0;
  v24 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v25 = 1;
    v23 = 1003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 1003);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 1003);
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation((__int64)v26, (__int64)a2);
    v27 = *(_OWORD *)EtwStackLocation;
    v28 = *(_OWORD *)(EtwStackLocation + 16);
    v29 = *(_OWORD *)(EtwStackLocation + 32);
    v30 = *(_OWORD *)(EtwStackLocation + 48);
    v31 = *(_QWORD *)(EtwStackLocation + 64);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0phbr1q(v7, &EventEnterDpiDispatchInternalIoctl, v8, a1);
  }
  v9 = *(_QWORD *)(a1 + 64);
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), a2, File, 1u, 0x20u);
  v14 = v10;
  if ( v10 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v21 + 24) = v14;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_22;
  }
  v15 = *(__int64 (__fastcall **)(__int64, IRP *))(v9 + 112);
  v3 = 1;
  if ( !v15 )
  {
    if ( *(_BYTE *)(v9 + 56) == 1 && *(_QWORD *)(v9 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      LODWORD(v14) = IofCallDriver(*(PDEVICE_OBJECT *)(v9 + 160), a2);
      goto LABEL_9;
    }
    LODWORD(v14) = -1073741637;
LABEL_22:
    a2->IoStatus.Status = v14;
    IofCompleteRequest(a2, 0);
    if ( v3 != 1 )
      goto LABEL_10;
    goto LABEL_9;
  }
  LODWORD(v14) = v15(a1, a2);
  if ( (_DWORD)v14 != -1073741738 )
LABEL_9:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), a2, 0x20u);
LABEL_10:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v14;
    McTemplateK0xq(v16, &EventExitDpiDispatchInternalIoctl, v17, a1, RemlockSize);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v23);
  return (unsigned int)v14;
}
