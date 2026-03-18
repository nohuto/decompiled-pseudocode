/*
 * XREFs of ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C008CF90
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C007E92C (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C008D5F8 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ddLLdiDD @ 0x1C008DEB4 (WPP_IFR_SF_ddLLdiDD.c)
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
  $AF81E30AEA27D58C62DA291785702D23 *v12; // rdi
  __int64 v13; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  FxDeviceBase_vtbl *v15; // rax
  unsigned __int16 v16; // r9
  __int64 v17; // rdx
  void (__fastcall *SetDeviceTelemetryInfoFlags)(FxDeviceBase *, FxDeviceInfoFlags); // rax
  const _GUID *v19; // [rsp+20h] [rbp-58h]

  MessageCount = CmDescTrans->u.MessageInterrupt.Raw.MessageCount;
  if ( MessageCount && !unk_1C00AEE80 )
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
    v15 = m_DeviceBase->FxNonPagedObject::FxObject::__vftable;
LABEL_12:
    v15->SetDeviceTelemetryInfoFlags(m_DeviceBase, (FxDeviceInfoFlags)v13);
    goto LABEL_18;
  }
  v12 = &this->96;
  v7 = v10 == 0;
  this->m_InterruptInfo.Vector = CmDescTrans->u.Interrupt.Vector;
  m_DeviceBase = this->m_DeviceBase;
  v15 = m_DeviceBase->FxNonPagedObject::FxObject::__vftable;
  if ( !v7 )
  {
    v13 = 4LL;
    goto LABEL_12;
  }
  v17 = 1LL;
  SetDeviceTelemetryInfoFlags = v15->SetDeviceTelemetryInfoFlags;
  if ( (CmDescTrans->Flags & 1) != 0 )
    v17 = 2LL;
  SetDeviceTelemetryInfoFlags(m_DeviceBase, (FxDeviceInfoFlags)v17);
LABEL_18:
  if ( this->m_PassiveHandling )
    v12->m_DeviceBase->SetDeviceTelemetryInfoFlags(v12->m_DeviceBase, DeviceInfoPassiveLevelInterrupt);
  this->m_CmTranslatedResource = CmDescTrans;
  WPP_IFR_SF_ddLLdiDD(
    this->m_Globals,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.MessageSignaled,
    v16,
    v19,
    this->m_InterruptInfo.MessageSignaled,
    this->m_InterruptInfo.MessageNumber,
    this->m_Policy,
    this->m_Priority,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    this->m_InterruptInfo.Irql,
    this->m_InterruptInfo.Vector);
}
