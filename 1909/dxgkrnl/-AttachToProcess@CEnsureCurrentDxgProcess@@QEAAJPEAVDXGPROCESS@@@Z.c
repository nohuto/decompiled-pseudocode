/*
 * XREFs of ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0036FAC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0102B40 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021EE10 (-VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C021F344 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C025F2E0 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0264610 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0291690 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ @ 0x1C0037090 (-Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ.c)
 */

__int64 __fastcall CEnsureCurrentDxgProcess::AttachToProcess(CEnsureCurrentDxgProcess *this, struct DXGPROCESS *a2)
{
  int Object; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax

  Object = ObCreateObject(0LL, g_pDxgkCurrentDxgProcessObjectType, 0LL, 0LL, 0LL, 8, 0, 0, this);
  v8 = Object;
  if ( Object >= 0 )
  {
    **(_QWORD **)this = a2;
    v10 = PsSetThreadProperty(KeGetCurrentThread(), 1917876292LL, *(_QWORD *)this);
    v8 = v10;
    if ( v10 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v14 + 24) = v8;
      *(_QWORD *)(v14 + 32) = 96LL;
      WdLogEvent5_WdError(v14);
      CEnsureCurrentDxgProcess::Destroy(this);
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v8;
}
