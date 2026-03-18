/*
 * XREFs of ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ED780
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000E448 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00104E0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?AcquireProcessCalloutMutex@DXGGLOBAL@@QEAAXXZ @ 0x1C00362B4 (-AcquireProcessCalloutMutex@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReleaseProcessCalloutMutex@DXGGLOBAL@@QEAAXXZ @ 0x1C003639C (-ReleaseProcessCalloutMutex@DXGGLOBAL@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00365BC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1C02299A8 (-IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ.c)
 *     ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1C022AA70 (-SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // r14d
  PRKPROCESS *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  DXGGLOBAL *Global; // rbx
  DXGPROCESSVM *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  char v20; // al
  int v21; // eax
  __int64 v22; // rcx
  DXGGLOBAL *v23; // rbx
  __int64 v24; // rax
  struct VMBPACKETCOMPLETION__ *v25; // rcx
  int v27; // [rsp+30h] [rbp-68h] BYREF
  DXGPROCESSVM *v28; // [rsp+38h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>((__int64)a1);
  v4 = v2;
  if ( !v2 )
    return 0;
  LOBYTE(v3) = *(_BYTE *)(v2 + 562);
  v5 = 0;
  v28 = 0LL;
  if ( (v3 & 3) == 3 || v3 & 1 | ((v3 & 2) != 0) && (v3 & 4) != 0 )
  {
    v8 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v8 + 24) = 4842LL;
    goto LABEL_27;
  }
  v6 = (PRKPROCESS *)*((_QWORD *)a1 + 7);
  if ( (int)DXGVIRTUALMACHINE::IncrementNumVmProcesses(v6[57]) < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 4850LL;
LABEL_27:
    WdLogEvent5_WdError(v8);
    return 0;
  }
  KeStackAttachProcess(v6[7], &ApcState);
  v9 = DXGPROCESS::CreateDxgProcess(
         &v28,
         (struct DXGPROCESS *)v6,
         *(struct DXGPROCESS **)(v4 + 24),
         0,
         0LL,
         *(void **)(v4 + 32));
  v11 = v9;
  if ( v9 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v24 + 24) = v11;
    WdLogEvent5_WdError(v24);
  }
  else
  {
    LOBYTE(v12) = EvaluateCurrentState((int **)&g_Feature_463433019_59226520_FeatureDescriptorDetails);
    if ( v12 )
    {
      Global = DXGGLOBAL::GetGlobal(v13);
      DXGGLOBAL::AcquireProcessCalloutMutex(Global);
      DXGPROCESS::AcquireReference((DXGPROCESS *)v6);
      DXGGLOBAL::ReleaseProcessCalloutMutex((struct _KTHREAD **)Global);
    }
    v15 = v28;
    v16 = DXGPROCESS::AllocHandleSafe((__int64)v6, (__int64)v28, 0xCu);
    v5 = v16;
    if ( !v16 )
    {
      v18 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v18 + 24) = 4877LL;
      WdLogEvent5_WdError(v18);
      DXGPROCESS::DestroyDxgProcess(v15);
      LOBYTE(v19) = EvaluateCurrentState((int **)&g_Feature_463433019_59226520_FeatureDescriptorDetails);
      if ( !v19 )
        _InterlockedDecrement((volatile signed __int32 *)v6[57]);
      KeUnstackDetachProcess(&ApcState);
      return 0;
    }
    *((_DWORD *)v15 + 125) = v16;
    DXGPROCESSVM::SetVmProcessName(v15, (unsigned __int16 *)(v4 + 40));
    v20 = *(_BYTE *)(v4 + 562);
    if ( (v20 & 2) != 0 )
    {
      *((_BYTE *)v15 + 322) = 1;
    }
    else if ( (v20 & 1) != 0 )
    {
      *((_BYTE *)v15 + 320) = 1;
    }
    else if ( (v20 & 4) != 0 )
    {
      *((_BYTE *)v15 + 323) |= 1u;
    }
    LOBYTE(v21) = EvaluateCurrentState((int **)&g_Feature_463433019_59226520_FeatureDescriptorDetails);
    if ( !v21 )
    {
      v23 = DXGGLOBAL::GetGlobal(v22);
      DXGGLOBAL::AcquireProcessCalloutMutex(v23);
      DXGPROCESS::AcquireReference((DXGPROCESS *)v6);
      DXGGLOBAL::ReleaseProcessCalloutMutex((struct _KTHREAD **)v23);
    }
  }
  KeUnstackDetachProcess(&ApcState);
  if ( (int)v11 >= 0 )
  {
    v25 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v27 = v5;
    VmBusCompletePacket(v25, &v27, 4u);
    return 1;
  }
  _InterlockedDecrement((volatile signed __int32 *)v6[57]);
  return 0;
}
