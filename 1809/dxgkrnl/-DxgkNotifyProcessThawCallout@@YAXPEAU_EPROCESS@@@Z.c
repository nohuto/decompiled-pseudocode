/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00F5E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00F45DC (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS, __int64 a2, const GUID *a3)
{
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  int v9; // edi
  __int64 v10; // rcx
  const GUID *v11; // r8
  struct DXGGLOBAL *Global; // rax
  DXG_VMBUS_CHANNEL_BASE *v13; // rcx
  struct _MDL *v14; // [rsp+28h] [rbp-41h]
  int v15; // [rsp+30h] [rbp-39h] BYREF
  __int64 v16; // [rsp+38h] [rbp-31h]
  char v17; // [rsp+40h] [rbp-29h]
  _BYTE v18[16]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v20; // [rsp+68h] [rbp-1h] BYREF
  int v21; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+74h] [rbp+Bh]
  int v23; // [rsp+78h] [rbp+Fh]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp+17h] BYREF

  v15 = -1;
  v16 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v17 = 1;
    v15 = 2096;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)PROCESS, &EventProfilerEnter, a3, 2096);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2096);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v18);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v5 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 323) & 0x20) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 112), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    KeStackAttachProcess(PROCESS, &ApcState);
    v9 = *((_DWORD *)v5 + 98);
    if ( v9 )
    {
      Global = DXGGLOBAL::GetGlobal(v7);
      v20 = 0LL;
      v21 = v9;
      v13 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)Global + 168);
      v22 = 1;
      v23 = 1008;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v13, (struct DXGKVMB_COMMAND_BASE *)&v20, 0x18u, 0LL, 0LL, v14);
    }
    DXGPROCESS::NotifyProcessThaw(v5, v6, v8);
    KeUnstackDetachProcess(&ApcState);
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v15);
  }
}
