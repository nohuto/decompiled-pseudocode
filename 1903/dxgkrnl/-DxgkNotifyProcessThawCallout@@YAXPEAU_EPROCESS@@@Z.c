/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C013BE10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018920 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C011DE84 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rdx
  DXGPROCESS *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  int v11; // edi
  __int64 v12; // rcx
  const GUID *v13; // r8
  struct DXGGLOBAL *Global; // rax
  DXG_VMBUS_CHANNEL_BASE *v15; // rcx
  struct _MDL *v16; // [rsp+28h] [rbp-41h]
  int v17; // [rsp+30h] [rbp-39h] BYREF
  __int64 v18; // [rsp+38h] [rbp-31h]
  char v19; // [rsp+40h] [rbp-29h]
  _BYTE v20[16]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v21[16]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v22; // [rsp+68h] [rbp-1h] BYREF
  int v23; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+74h] [rbp+Bh]
  int v25; // [rsp+78h] [rbp+Fh]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp+17h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v17 = -1;
  v18 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v19 = 1;
    v17 = 2096;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2096);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2096LL);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v20, v4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v7 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 299) & 0x20) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    KeStackAttachProcess(PROCESS, &ApcState);
    v11 = *((_DWORD *)v7 + 92);
    if ( v11 )
    {
      Global = DXGGLOBAL::GetGlobal(v9, v8);
      v22 = 0LL;
      v23 = v11;
      v15 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)Global + 164);
      v24 = 1;
      v25 = 1008;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v15, (struct DXGKVMB_COMMAND_BASE *)&v22, 0x18u, 0LL, 0LL, v16);
    }
    DXGPROCESS::NotifyProcessThaw(v7, v8, v10);
    KeUnstackDetachProcess(&ApcState);
    if ( v21[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  }
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, v6);
  if ( v19 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v17);
  }
}
