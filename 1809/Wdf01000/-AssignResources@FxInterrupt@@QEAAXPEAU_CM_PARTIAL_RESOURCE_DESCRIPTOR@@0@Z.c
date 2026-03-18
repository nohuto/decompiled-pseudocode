/*
 * XREFs of ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C008B960
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C007DF74 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C008BFB8 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ddLLdiDD @ 0x1C008C824 (WPP_IFR_SF_ddLLdiDD.c)
 */

void __fastcall FxInterrupt::AssignResources(
        FxInterrupt *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescTrans)
{
  unsigned __int16 MessageCount; // ax
  bool v7; // zf
  _KINTERRUPT_MODE v8; // edx
  unsigned __int8 Class; // cl
  __int16 v10; // cx
  unsigned __int8 v11; // al
  $03900C7506FEFAEFC20952C14859B630 *v12; // rdi
  __int64 v13; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 v15; // r9
  const _GUID *v16; // [rsp+20h] [rbp-58h]

  MessageCount = CmDescTrans->u.MessageInterrupt.Raw.MessageCount;
  if ( MessageCount && !unk_1C00ABE50 )
  {
    FxVerifierDbgBreakPoint(this->m_Globals);
    MessageCount = CmDescTrans->u.MessageInterrupt.Raw.MessageCount;
  }
  this->m_InterruptInfo.Group = MessageCount;
  this->m_InterruptInfo.TargetProcessorSet = CmDescTrans->u.Interrupt.Affinity;
  this->m_InterruptInfo.ShareDisposition = CmDescTrans->ShareDisposition;
  v7 = this->m_PassiveHandling == 0;
  v8 = CmDescTrans->Flags & 1;
  this->m_InterruptInfo.Mode = v8;
  Class = CmDescTrans->u.Connection.Class;
  if ( !v7 )
    Class = 0;
  this->m_InterruptInfo.Irql = Class;
  v10 = CmDescTrans->Flags & 2;
  this->m_InterruptInfo.MessageSignaled = v10 != 0;
  if ( (_WORD)v8 != Latched || (v11 = 1, v10) )
    v11 = 0;
  this->m_IsEdgeTriggeredNonMsiInterrupt = v11;
  if ( v10 && CmDescRaw->u.MessageInterrupt.Raw.MessageCount > 1u )
  {
    v12 = &this->96;
    v13 = 8LL;
    m_DeviceBase = this->m_DeviceBase;
    this->m_InterruptInfo.Vector = CmDescTrans->u.Generic.Start.HighPart + this->m_InterruptInfo.MessageNumber;
  }
  else
  {
    v12 = &this->96;
    v7 = v10 == 0;
    this->m_InterruptInfo.Vector = CmDescTrans->u.Interrupt.Vector;
    m_DeviceBase = this->m_DeviceBase;
    if ( v7 )
    {
      v13 = 1LL;
      if ( (CmDescTrans->Flags & 1) != 0 )
        v13 = 2LL;
    }
    else
    {
      v13 = 4LL;
    }
  }
  m_DeviceBase->SetDeviceTelemetryInfoFlags(m_DeviceBase, (FxDeviceInfoFlags)v13);
  if ( this->m_PassiveHandling )
    v12->m_DeviceBase->SetDeviceTelemetryInfoFlags(v12->m_DeviceBase, DeviceInfoPassiveLevelInterrupt);
  this->m_CmTranslatedResource = CmDescTrans;
  WPP_IFR_SF_ddLLdiDD(
    this->m_Globals,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.MessageSignaled,
    v15,
    v16,
    this->m_InterruptInfo.MessageSignaled,
    this->m_InterruptInfo.MessageNumber,
    this->m_Policy,
    this->m_Priority,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    this->m_InterruptInfo.Irql,
    this->m_InterruptInfo.Vector);
}
