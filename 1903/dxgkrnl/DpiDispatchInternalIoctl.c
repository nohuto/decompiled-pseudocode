/*
 * XREFs of DpiDispatchInternalIoctl @ 0x1C00E8950
 * Callers:
 *     <none>
 * Callees:
 *     LoadEtwStackLocation @ 0x1C0006350 (LoadEtwStackLocation.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C003566C (McTemplateK0xq.c)
 *     McTemplateK0phbr1q @ 0x1C004B50C (McTemplateK0phbr1q.c)
 */

__int64 __fastcall DpiDispatchInternalIoctl(__int64 a1, IRP *a2, const GUID *a3)
{
  char v3; // r15
  _BYTE *EtwStackLocation; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, IRP *); // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v22; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-A9h]
  int v24; // [rsp+40h] [rbp-89h] BYREF
  __int64 v25; // [rsp+48h] [rbp-81h]
  char v26; // [rsp+50h] [rbp-79h]
  _BYTE v27[72]; // [rsp+58h] [rbp-71h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-29h]
  __int128 v29; // [rsp+B0h] [rbp-19h]
  __int128 v30; // [rsp+C0h] [rbp-9h]
  __int128 v31; // [rsp+D0h] [rbp+7h]
  __int64 v32; // [rsp+E0h] [rbp+17h]

  v24 = -1;
  v3 = 0;
  v25 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    v24 = 1003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 1003);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 1003LL);
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v27, (__int64)a2);
    v28 = *(_OWORD *)EtwStackLocation;
    v29 = *((_OWORD *)EtwStackLocation + 1);
    v30 = *((_OWORD *)EtwStackLocation + 2);
    v31 = *((_OWORD *)EtwStackLocation + 3);
    v32 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0phbr1q(v7, &EventEnterDpiDispatchInternalIoctl, v8, a1);
  }
  v9 = *(_QWORD *)(a1 + 64);
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), a2, File, 1u, 0x20u);
  v14 = v10;
  if ( v10 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v22 + 24) = v14;
    WdLogEvent5_WdWarning(v22);
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
    McTemplateK0xq(v17, &EventExitDpiDispatchInternalIoctl, v18, a1, RemlockSize);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v16);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v24);
  return (unsigned int)v14;
}
