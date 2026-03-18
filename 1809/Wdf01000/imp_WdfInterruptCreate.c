/*
 * XREFs of imp_WdfInterruptCreate @ 0x1C007A910
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     WPP_IFR_SF_DD @ 0x1C0039CC0 (WPP_IFR_SF_DD.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C003AE50 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007EB90 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C008C614 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 */

int __fastcall imp_WdfInterruptCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_INTERRUPT_CONFIG *Configuration,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFINTERRUPT__ **Interrupt)
{
  unsigned int v8; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFINTERRUPT__ **v10; // r13
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // ecx
  unsigned int Size; // ebx
  unsigned __int64 v15; // rax
  int result; // eax
  unsigned __int8 v17; // r8
  void *ParentObject; // rdx
  FxDevice *v19; // r14
  unsigned __int8 m_CallbackFlags; // bl
  unsigned __int8 v21; // r8
  unsigned int _a2; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptRaw; // r10
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptTranslated; // r8
  unsigned __int16 v25; // r9
  unsigned __int8 CanWakeDevice; // r9
  unsigned __int64 v27; // rcx
  FxObject *pParent; // [rsp+40h] [rbp-61h] BYREF
  _WDF_INTERRUPT_CONFIG intConfig; // [rsp+50h] [rbp-51h] BYREF
  ULONG_PTR retaddr; // [rsp+F8h] [rbp+57h]
  FxInterrupt *pFxInterrupt; // [rsp+100h] [rbp+5Fh] BYREF
  FxDevice *pDevice; // [rsp+110h] [rbp+6Fh] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Configuration )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v10 = Interrupt;
  if ( !Interrupt )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 0xDu) )
    v13 = v12 + 91;
  else
    v13 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v11, 0xBu) ? 96 : 56;
  Size = Configuration->Size;
  v15 = Configuration->Size - 56;
  if ( (unsigned int)v15 <= 0x30 && (v11 = 0x1010000000001LL, _bittest64(&v11, v15)) )
  {
    if ( Size < 0x68 )
    {
      memset(&intConfig, 0, sizeof(intConfig));
      intConfig.EvtInterruptIsr = Configuration->EvtInterruptIsr;
      intConfig.EvtInterruptDpc = Configuration->EvtInterruptDpc;
      intConfig.ShareVector = WdfUseDefault;
      intConfig.ReportInactiveOnPowerDown = WdfUseDefault;
      memmove(&intConfig, Configuration, Size);
      intConfig.Size = 104;
      Configuration = &intConfig;
    }
    if ( !Configuration->EvtInterruptIsr )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xBu, WPP_FxInterruptApi_cpp_Traceguids, Configuration);
      return -1073741811;
    }
    result = FxValidateObjectAttributes(m_Globals, Attributes, Configuration->AutomaticSerialization == 0);
    if ( result >= 0 )
    {
      if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
      {
        FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
        v19 = pDevice;
      }
      else
      {
        v19 = pDevice;
        pParent = pDevice;
      }
      if ( v19->m_CurrentPnpState == WdfDevStatePnpInit )
      {
        InterruptRaw = Configuration->InterruptRaw;
        if ( InterruptRaw || (InterruptTranslated = Configuration->InterruptTranslated) != 0LL )
        {
          v25 = 13;
          goto LABEL_62;
        }
        if ( Configuration->CanWakeDevice )
        {
          v25 = 14;
          goto LABEL_62;
        }
      }
      else
      {
        FxNonPagedObject::Lock(v19, (unsigned __int8 *)&pFxInterrupt, v17);
        m_CallbackFlags = v19->m_CallbackFlags;
        FxNonPagedObject::Unlock(v19, (unsigned __int8)pFxInterrupt, v21);
        if ( (m_CallbackFlags & 1) == 0 )
        {
          _a2 = -1073741436;
          WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, 0xCu, WPP_FxInterruptApi_cpp_Traceguids, Device, 0xC0000184);
          return _a2;
        }
        InterruptRaw = Configuration->InterruptRaw;
        if ( !InterruptRaw || (InterruptTranslated = Configuration->InterruptTranslated) == 0LL )
        {
          _a2 = -1073741436;
          v25 = 15;
          goto LABEL_63;
        }
        if ( Configuration->ShareVector != WdfUseDefault )
        {
          _a2 = -1073741436;
          v25 = 16;
LABEL_63:
          WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, v25, WPP_FxInterruptApi_cpp_Traceguids, Configuration, _a2);
          return _a2;
        }
        v19 = pDevice;
      }
      CanWakeDevice = Configuration->CanWakeDevice;
      if ( CanWakeDevice )
      {
        if ( (InterruptTranslated->Flags & 0x20) == 0 )
        {
          v25 = 17;
LABEL_62:
          _a2 = -1073741811;
          goto LABEL_63;
        }
        if ( !v19->m_PkgPnp->m_PowerPolicyMachine.m_Owner )
        {
          v25 = 18;
          goto LABEL_62;
        }
        if ( FxDevice::IsPdo(v19) )
        {
          v25 = 19;
          goto LABEL_62;
        }
      }
      if ( Configuration->EvtInterruptDpc && Configuration->EvtInterruptWorkItem )
      {
        v25 = 20;
        goto LABEL_62;
      }
      if ( Configuration->PassiveHandling )
      {
        if ( !unk_1C00ABE78 )
        {
          _a2 = -1073741637;
          v25 = 23;
          goto LABEL_63;
        }
        if ( Configuration->SpinLock )
        {
          v25 = 24;
          goto LABEL_62;
        }
      }
      else
      {
        if ( Configuration->WaitLock )
        {
          v25 = 21;
          goto LABEL_62;
        }
        if ( CanWakeDevice )
        {
          v25 = 22;
          goto LABEL_62;
        }
      }
      if ( m_Globals->FxVerifierOn && InterruptRaw )
      {
        result = FxPkgPnp::ValidateInterruptResourceCm(v19->m_PkgPnp, InterruptRaw, InterruptTranslated, Configuration);
        if ( result < 0 )
          return result;
        v19 = pDevice;
      }
      result = FxInterrupt::_CreateAndInit(m_Globals, v19, pParent, Attributes, Configuration, &pFxInterrupt);
      if ( result >= 0 )
      {
        if ( pFxInterrupt->m_ObjectSize )
          v27 = (unsigned __int64)pFxInterrupt ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v27 = 0LL;
        *v10 = (WDFINTERRUPT__ *)v27;
      }
    }
  }
  else
  {
    WPP_IFR_SF_DD(m_Globals, v11, 0xCu, 0xAu, WPP_FxInterruptApi_cpp_Traceguids, Size, v13);
    return -1073741820;
  }
  return result;
}
