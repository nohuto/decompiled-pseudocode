/*
 * XREFs of ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0014BF0
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0014A00 (-_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxPkgFdo::HandleQueryCapabilitiesCompletion(FxPkgFdo *this, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v8; // al
  unsigned __int8 v9; // r8
  FxPnpStateAndCaps v10; // edi
  int v11; // edi
  unsigned int States; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned __int8 SystemWake; // al
  unsigned __int8 DeviceWake; // al
  unsigned int D1Latency; // eax
  unsigned int D2Latency; // eax
  unsigned int D3Latency; // eax
  unsigned int m_PnpCapsAddress; // eax
  unsigned int m_PnpCapsUINumber; // eax
  _FX_DRIVER_GLOBALS *v26; // rcx
  void (__fastcall *SurpriseRemoveAndReenumerateSelf)(void *); // rcx
  void (__fastcall *v28)(void *); // rcx
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x11u, WPP_fxpkgfdo_cpp_Traceguids);
  SecurityContext = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (SurpriseRemoveAndReenumerateSelf = this[-1].m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)SurpriseRemoveAndReenumerateSelf, &PreviousIrql, a3);
    v8 = PreviousIrql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v10.ByEnum = (FxPnpStateAndCaps::<unnamed_type_ByEnum>)this->m_PnpStateAndCaps;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v28 = this[-1].m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf) != 0LL )
  {
    FxVerifierLock::Unlock((FxVerifierLock *)v28, v8, v9);
  }
  else
  {
    KeReleaseSpinLock(p_m_Lock, v8);
  }
  if ( LOWORD(SecurityContext->SecurityQos) >= 0x40u && WORD1(SecurityContext->SecurityQos) == 1 )
  {
    if ( (*(_WORD *)&v10.ByEnum & 0x3000) == 0 )
      HIDWORD(SecurityContext->SecurityQos) &= ~4u;
    if ( (*(_WORD *)&v10.ByEnum & 0xC000) == 0 )
      HIDWORD(SecurityContext->SecurityQos) &= ~8u;
    if ( (v10.Value & 0xC0000) == 0 )
      HIDWORD(SecurityContext->SecurityQos) &= ~0x20u;
    if ( (v10.Value & 0x30000) != 0 )
    {
      if ( (v10.Value & 0x30000) == 0x10000 )
        HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
    }
    else
    {
      HIDWORD(SecurityContext->SecurityQos) &= ~0x10u;
    }
    v11 = v10.Value & 0x3000000;
    if ( v11 )
    {
      if ( v11 == 0x1000000 )
        HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
    }
    else
    {
      HIDWORD(SecurityContext->SecurityQos) &= ~0x200u;
    }
    States = this->m_PowerCaps.States;
    v13 = (unsigned __int8)States >> 4;
    if ( v13 != 5 && v13 > (signed int)SecurityContext->FullCreateOptions )
      SecurityContext->FullCreateOptions = v13;
    v14 = (States >> 8) & 0xF;
    if ( v14 != 5 && v14 > SLODWORD(SecurityContext[1].SecurityQos) )
      LODWORD(SecurityContext[1].SecurityQos) = v14;
    v15 = (unsigned __int16)States >> 12;
    if ( v15 != 5 && v15 > SHIDWORD(SecurityContext[1].SecurityQos) )
      HIDWORD(SecurityContext[1].SecurityQos) = v15;
    v16 = HIWORD(States) & 0xF;
    if ( v16 != 5 && v16 > SLODWORD(SecurityContext[1].AccessState) )
      LODWORD(SecurityContext[1].AccessState) = v16;
    v17 = (States >> 20) & 0xF;
    if ( v17 != 5 && v17 > SHIDWORD(SecurityContext[1].AccessState) )
      HIDWORD(SecurityContext[1].AccessState) = v17;
    v18 = HIBYTE(States) & 0xF;
    if ( v18 != 5 && v18 > (signed int)SecurityContext[1].DesiredAccess )
      SecurityContext[1].DesiredAccess = v18;
    SystemWake = this->m_PowerCaps.SystemWake;
    if ( SystemWake != 7 && SystemWake < (int)SecurityContext[1].FullCreateOptions )
      SecurityContext[1].FullCreateOptions = SystemWake;
    DeviceWake = this->m_PowerCaps.DeviceWake;
    if ( DeviceWake != 5 && DeviceWake < SLODWORD(SecurityContext[2].SecurityQos) )
      LODWORD(SecurityContext[2].SecurityQos) = DeviceWake;
    D1Latency = this->m_PowerCaps.D1Latency;
    if ( D1Latency != -1 && D1Latency > HIDWORD(SecurityContext[2].SecurityQos) )
      HIDWORD(SecurityContext[2].SecurityQos) = D1Latency;
    D2Latency = this->m_PowerCaps.D2Latency;
    if ( D2Latency != -1 && D2Latency > LODWORD(SecurityContext[2].AccessState) )
      LODWORD(SecurityContext[2].AccessState) = D2Latency;
    D3Latency = this->m_PowerCaps.D3Latency;
    if ( D3Latency != -1 && D3Latency > HIDWORD(SecurityContext[2].AccessState) )
      HIDWORD(SecurityContext[2].AccessState) = D3Latency;
    m_PnpCapsAddress = this->m_PnpCapsAddress;
    if ( m_PnpCapsAddress != -1 )
      LODWORD(SecurityContext->AccessState) = m_PnpCapsAddress;
    m_PnpCapsUINumber = this->m_PnpCapsUINumber;
    if ( m_PnpCapsUINumber != -1 )
      HIDWORD(SecurityContext->AccessState) = m_PnpCapsUINumber;
  }
  v26 = this->m_Globals;
  if ( v26->FxVerboseOn )
    WPP_IFR_SF_(v26, 5u, 0xCu, 0x12u, WPP_fxpkgfdo_cpp_Traceguids);
}
