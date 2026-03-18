/*
 * XREFs of ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007F534
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1C007B2F0 (imp_WdfInterruptCreate.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C0033E3C (WPP_IFR_SF_qqq.c)
 *     ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C007F334 (-ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 */

__int64 __fastcall FxPkgPnp::ValidateInterruptResourceCm(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResource,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v8; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v9; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v12; // r8
  unsigned __int16 v13; // r9
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v14; // r13
  FxDeviceBase *v15; // rcx
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rcx
  int v18; // r15d
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY **p_Blink; // rdx
  FxDeviceBase *v21; // rcx
  unsigned __int16 v22; // ax
  const void *v23; // rcx
  FxDeviceBase *v24; // rcx
  unsigned __int16 v25; // ax
  const void *_a3; // rcx
  bool v27; // zf
  __int16 v28; // ax
  const void *v29; // rdx
  FxDeviceBase *v31; // rcx
  unsigned __int16 v32; // ax
  const void *v33; // rcx
  __int16 v34; // ax
  const void *v35; // rdx
  unsigned __int16 v36; // r9
  FxDeviceBase *v37; // rcx
  unsigned __int16 v38; // ax
  __int16 v39; // ax
  FxDeviceBase *v40; // rcx
  unsigned __int16 v41; // ax
  unsigned __int64 v42; // rcx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *_a1; // [rsp+28h] [rbp-60h]
  __int64 _a2; // [rsp+30h] [rbp-58h]
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v45; // [rsp+90h] [rbp+8h] BYREF
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v46; // [rsp+98h] [rbp+10h] BYREF
  void *v47; // [rsp+A0h] [rbp+18h]
  _WDF_INTERRUPT_CONFIG *v48; // [rsp+A8h] [rbp+20h]

  v48 = Configuration;
  v47 = CmIntResource;
  m_Globals = this->m_Globals;
  v45 = CmIntResourceRaw;
  v46 = CmIntResource;
  v8 = FxPkgPnp::ValidateCmResource(this, &v45, &v46);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = v45;
  if ( v45->Type != 2 )
  {
    v8 = -1073741811;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v12 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v12 = 0LL;
    v13 = 38;
    _a2 = v12;
    _a1 = CmIntResourceRaw;
LABEL_6:
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, v13, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2, -1073741811);
    goto LABEL_7;
  }
  v14 = v46;
  if ( v46->Type != 2 )
  {
    v8 = -1073741811;
    v15 = this->m_DeviceBase;
    v16 = v15->m_ObjectSize;
    v17 = (unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v16 )
      v17 = 0LL;
    v13 = 39;
    _a2 = v17;
    _a1 = CmIntResource;
    goto LABEL_6;
  }
  v18 = 0;
  Flink = this->m_InterruptListHead.Flink;
  if ( Flink == &this->m_InterruptListHead )
    return 0;
  while ( 1 )
  {
    p_Blink = &Flink[-28].Blink;
    if ( v14 != (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)Flink[-2].Blink )
    {
      if ( v18 )
      {
        v8 = -1073741811;
        v21 = this->m_DeviceBase;
        v22 = v21->m_ObjectSize;
        v23 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v22 )
          v23 = 0LL;
        WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, 0x28u, WPP_PnpStateMachine_cpp_Traceguids, v23, 0xC000000D);
        goto LABEL_7;
      }
      goto LABEL_29;
    }
    if ( p_Blink[34] && v48->PassiveHandling )
    {
      v31 = this->m_DeviceBase;
      v32 = v31->m_ObjectSize;
      v33 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v27 = v32 == 0;
      v34 = *((_WORD *)p_Blink + 5);
      if ( v27 )
        v33 = 0LL;
      v35 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v34 )
        v35 = 0LL;
      v36 = 41;
      goto LABEL_37;
    }
    if ( *((_BYTE *)p_Blink + 258) && v48->CanWakeDevice )
    {
      v37 = this->m_DeviceBase;
      v38 = v37->m_ObjectSize;
      v33 = (const void *)((unsigned __int64)v37 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v27 = v38 == 0;
      v39 = *((_WORD *)p_Blink + 5);
      if ( v27 )
        v33 = 0LL;
      v35 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v39 )
        v35 = 0LL;
      v36 = 42;
LABEL_37:
      WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, v36, WPP_PnpStateMachine_cpp_Traceguids, v47, v35, v33);
      return (unsigned int)-1073741811;
    }
    if ( (v14->Flags & 2) == 0 )
    {
      v24 = this->m_DeviceBase;
      v25 = v24->m_ObjectSize;
      _a3 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v27 = v25 == 0;
      v28 = *((_WORD *)p_Blink + 5);
      if ( v27 )
        _a3 = 0LL;
      v29 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v28 )
        v29 = 0LL;
      WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_PnpStateMachine_cpp_Traceguids, v47, v29, _a3);
      v9 = v45;
      goto LABEL_29;
    }
    if ( ++v18 > (unsigned int)v9->u.MessageInterrupt.Raw.MessageCount )
      break;
LABEL_29:
    Flink = Flink->Flink;
    if ( Flink == &this->m_InterruptListHead )
      return 0;
  }
  v8 = -1073741811;
  v40 = this->m_DeviceBase;
  v41 = v40->m_ObjectSize;
  v42 = (unsigned __int64)v40 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v41 )
    v42 = 0LL;
  WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x2Cu, WPP_PnpStateMachine_cpp_Traceguids, v47, v42, -1073741811);
LABEL_7:
  FxVerifierDbgBreakPoint(m_Globals);
  return (unsigned int)v8;
}
