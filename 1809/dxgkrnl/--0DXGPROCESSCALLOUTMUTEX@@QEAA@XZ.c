/*
 * XREFs of ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0010400 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00F55C0 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00F5E00 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C012FD90 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C015BF20 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C020FD68 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C020FFD8 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     DxgkGetProcessInterferenceCount @ 0x1C0212990 (DxgkGetProcessInterferenceCount.c)
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C022F970 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN@@PEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN@@@Z @ 0x1C02313EC (-EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_E.c)
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02320B0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0232F5C (-UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025AFA0 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C025DA00 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     <none>
 */

DXGPROCESSCALLOUTMUTEX *__fastcall DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX(DXGPROCESSCALLOUTMUTEX *this)
{
  bool v2; // zf
  struct _KTHREAD **v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( !DXGGLOBAL::m_pGlobal )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 2100LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v2 = (char *)DXGGLOBAL::m_pGlobal + 208 == 0LL;
  v3 = (struct _KTHREAD **)((char *)DXGGLOBAL::m_pGlobal + 208);
  *((_BYTE *)this + 8) = 0;
  *(_QWORD *)this = v3;
  if ( v2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v6 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v6);
    v3 = *(struct _KTHREAD ***)this;
  }
  if ( v3[1] == KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v7 + 24) = 518LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return this;
}
