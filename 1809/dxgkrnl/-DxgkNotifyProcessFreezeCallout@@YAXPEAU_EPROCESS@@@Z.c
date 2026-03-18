/*
 * XREFs of ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00F55C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00F472C (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

void __fastcall DxgkNotifyProcessFreezeCallout(PRKPROCESS PROCESS)
{
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  const GUID *v6; // r8
  int v7; // edi
  struct DXGGLOBAL *Global; // rax
  DXG_VMBUS_CHANNEL_BASE *v9; // rcx
  struct _MDL *v10; // [rsp+28h] [rbp-21h]
  _BYTE v11[16]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v13; // [rsp+50h] [rbp+7h] BYREF
  int v14; // [rsp+58h] [rbp+Fh]
  int v15; // [rsp+5Ch] [rbp+13h]
  int v16; // [rsp+60h] [rbp+17h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp+1Fh] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v11);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v3 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 323) & 0x20) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 112), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
    KeStackAttachProcess(PROCESS, &ApcState);
    v7 = *((_DWORD *)v3 + 98);
    if ( v7 )
    {
      Global = DXGGLOBAL::GetGlobal(v5);
      v13 = 0LL;
      v14 = v7;
      v9 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)Global + 168);
      v15 = 1;
      v16 = 1007;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v9, (struct DXGKVMB_COMMAND_BASE *)&v13, 0x18u, 0LL, 0LL, v10);
    }
    DXGPROCESS::NotifyProcessFreeze(v3, v4, v6);
    KeUnstackDetachProcess(&ApcState);
    if ( v12[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
}
