/*
 * XREFs of ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C007E92C
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C007EC04 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C0054008 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0063A5C (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C008CF90 (-AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpMatchResources(FxPkgPnp *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v3; // r13d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // rsi
  signed int _a2; // eax
  int v7; // edi
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // cx
  const void *_a1; // rdx
  FxDeviceBase *v11; // rcx
  unsigned __int16 v12; // ax
  const void *v13; // rcx
  _LIST_ENTRY *p_m_InterruptListHead; // r14
  _LIST_ENTRY *i; // rax
  FxCmResList *m_Resources; // rax
  _LIST_ENTRY *v17; // rsi
  _LIST_ENTRY **p_Blink; // r15
  _LIST_ENTRY **v19; // rbp
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v20; // rdx
  _LIST_ENTRY *v21; // rcx
  unsigned int Blink_high; // r12d
  FxDevice *m_Device; // rdx
  _FX_DRIVER_GLOBALS *v24; // rcx
  FxDeviceBase *v26; // rcx
  unsigned __int16 v27; // ax
  const void *v28; // rcx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v29; // [rsp+80h] [rbp+8h]
  _LIST_ENTRY *v30; // [rsp+88h] [rbp+10h]
  FxCollectionInternal *v31; // [rsp+90h] [rbp+18h]

  m_Globals = this->m_Globals;
  v3 = 0;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x1Du, WPP_PnpStateMachine_cpp_Traceguids);
  this->m_PnpState.Value = this->m_PnpState.Value & 0xFFFFF3CF | 0x820;
  CurrentStackLocation = this->m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  AllocatedResourcesTranslated = CurrentStackLocation->Parameters.StartDevice.AllocatedResourcesTranslated;
  _a2 = FxCmResList::BuildFromWdmList(
          this->m_ResourcesRaw,
          CurrentStackLocation->Parameters.StartDevice.AllocatedResources,
          0);
  v7 = _a2;
  if ( _a2 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x1Eu, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2);
    goto $Done_55;
  }
  v7 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 0);
  if ( v7 < 0 )
  {
    v11 = this->m_DeviceBase;
    v12 = v11->m_ObjectSize;
    v13 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v12 )
      v13 = 0LL;
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x1Fu, WPP_PnpStateMachine_cpp_Traceguids, v13, v7);
    goto $Done_55;
  }
  p_m_InterruptListHead = &this->m_InterruptListHead;
  for ( i = this->m_InterruptListHead.Flink; i != p_m_InterruptListHead; i = i->Flink )
  {
    i[-5].Blink = 0LL;
    LOWORD(i[-2].Flink) = 0;
    BYTE4(i[-4].Blink) = 0;
    BYTE1(i[-3].Blink) = 0;
    LODWORD(i[-3].Flink) = 0;
    LODWORD(i[-4].Blink) = 0;
    BYTE1(i[-19].Blink) = 0;
  }
  m_Resources = this->m_Resources;
  v17 = &this->m_InterruptListHead;
  p_Blink = &m_Resources->m_ListHead.Flink[-1].Blink;
  v31 = &m_Resources->FxCollectionInternal;
  v19 = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink;
  if ( p_Blink == (_LIST_ENTRY **)&m_Resources->FxCollectionInternal )
    goto LABEL_23;
  while ( 1 )
  {
    v20 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&(*v19)[6].Blink;
    v29 = v20;
    if ( v20->Type == 2 )
      break;
LABEL_22:
    p_Blink = &p_Blink[1][-1].Blink;
    v19 = &v19[1][-1].Blink;
    if ( p_Blink == (_LIST_ENTRY **)v31 )
      goto LABEL_23;
  }
  v17 = v17->Flink;
  if ( v17 != p_m_InterruptListHead )
  {
    v21 = *p_Blink;
    Blink_high = HIWORD((*v19)[6].Blink);
    v30 = *p_Blink;
    if ( (BYTE2((*p_Blink)[6].Blink) & 2) != 0 && Blink_high > 1 )
    {
      do
      {
        if ( v17 == p_m_InterruptListHead )
          break;
        FxInterrupt::AssignResources(
          (FxInterrupt *)&v17[-28].Blink,
          v20,
          (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v21[6].Blink);
        v17 = v17->Flink;
        ++v3;
        v20 = v29;
        v21 = v30;
      }
      while ( v3 < Blink_high );
      v3 = 0;
    }
    else
    {
      FxInterrupt::AssignResources(
        (FxInterrupt *)&v17[-28].Blink,
        v20,
        (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v21[6].Blink);
    }
    goto LABEL_22;
  }
  v26 = this->m_DeviceBase;
  v27 = v26->m_ObjectSize;
  v28 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v27 )
    v28 = 0LL;
  WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0x20u, WPP_PnpStateMachine_cpp_Traceguids, v28);
LABEL_23:
  m_Device = this->m_Device;
  if ( m_Device->m_Filter )
  {
    if ( (m_Device->m_AttachedDevice.FxDeviceBase::m_DeviceObject->Characteristics & 1) != 0 )
    {
      m_Device->m_DeviceObject.m_DeviceObject->Characteristics |= 1u;
      m_Device = this->m_Device;
    }
    FxDevice::SetFilterIoType(m_Device);
  }
$Done_55:
  v24 = this->m_Globals;
  if ( v24->FxVerboseOn )
    WPP_IFR_SF_d(v24, 5u, 0xCu, 0x21u, WPP_PnpStateMachine_cpp_Traceguids, v7);
  return (unsigned int)v7;
}
