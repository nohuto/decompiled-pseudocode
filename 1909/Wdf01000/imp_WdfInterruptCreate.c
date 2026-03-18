/*
 * XREFs of imp_WdfInterruptCreate @ 0x1C007B2F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     WPP_IFR_SF_DD @ 0x1C0039070 (WPP_IFR_SF_DD.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C003A1F0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007F534 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C008DC98 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 */

int __fastcall imp_WdfInterruptCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_INTERRUPT_CONFIG *Configuration,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFINTERRUPT__ **Interrupt)
{
  unsigned int v9; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFINTERRUPT__ **v11; // r12
  unsigned int v12; // edx
  _FX_DRIVER_GLOBALS *v13; // rcx
  unsigned int v14; // ecx
  unsigned int Size; // edx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  int result; // eax
  unsigned __int8 v19; // r8
  void *ParentObject; // rdx
  FxDevice *v21; // r14
  unsigned __int8 m_CallbackFlags; // bl
  unsigned __int8 v23; // r8
  unsigned int _a2; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptRaw; // r10
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptTranslated; // r8
  unsigned __int16 v27; // r9
  unsigned __int8 CanWakeDevice; // r9
  unsigned __int64 v29; // rcx
  FxObject *pParent; // [rsp+40h] [rbp-61h] BYREF
  _WDF_INTERRUPT_CONFIG intConfig; // [rsp+50h] [rbp-51h] BYREF
  ULONG_PTR retaddr; // [rsp+F8h] [rbp+57h]
  FxInterrupt *pFxInterrupt; // [rsp+100h] [rbp+5Fh] BYREF
  FxDevice *pDevice; // [rsp+110h] [rbp+6Fh] BYREF

  memset(&intConfig, 0, sizeof(intConfig));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Configuration )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v11 = Interrupt;
  if ( !Interrupt )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v9, 0xDu) )
    v14 = 104;
  else
    v14 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v13, v12, 0xBu) ? 96 : 56;
  Size = Configuration->Size;
  v16 = Configuration->Size - 56;
  if ( (unsigned int)v16 <= 0x30 && (v17 = 0x1010000000001LL, _bittest64(&v17, v16)) )
  {
    if ( Size < 0x68 )
    {
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
        v21 = pDevice;
      }
      else
      {
        v21 = pDevice;
        pParent = pDevice;
      }
      if ( v21->m_CurrentPnpState == WdfDevStatePnpInit )
      {
        InterruptRaw = Configuration->InterruptRaw;
        if ( InterruptRaw || (InterruptTranslated = Configuration->InterruptTranslated) != 0LL )
        {
          v27 = 13;
          goto LABEL_62;
        }
        if ( Configuration->CanWakeDevice )
        {
          v27 = 14;
          goto LABEL_62;
        }
      }
      else
      {
        FxNonPagedObject::Lock(v21, (unsigned __int8 *)&pFxInterrupt, v19);
        m_CallbackFlags = v21->m_CallbackFlags;
        FxNonPagedObject::Unlock(v21, (unsigned __int8)pFxInterrupt, v23);
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
          v27 = 15;
          goto LABEL_63;
        }
        if ( Configuration->ShareVector != WdfUseDefault )
        {
          _a2 = -1073741436;
          v27 = 16;
LABEL_63:
          WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, v27, WPP_FxInterruptApi_cpp_Traceguids, Configuration, _a2);
          return _a2;
        }
        v21 = pDevice;
      }
      CanWakeDevice = Configuration->CanWakeDevice;
      if ( CanWakeDevice )
      {
        if ( (InterruptTranslated->Flags & 0x20) == 0 )
        {
          v27 = 17;
LABEL_62:
          _a2 = -1073741811;
          goto LABEL_63;
        }
        if ( !v21->m_PkgPnp->m_PowerPolicyMachine.m_Owner )
        {
          v27 = 18;
          goto LABEL_62;
        }
        if ( FxDevice::IsPdo(v21) )
        {
          v27 = 19;
          goto LABEL_62;
        }
      }
      if ( Configuration->EvtInterruptDpc && Configuration->EvtInterruptWorkItem )
      {
        v27 = 20;
        goto LABEL_62;
      }
      if ( Configuration->PassiveHandling )
      {
        if ( !unk_1C00AEEA8 )
        {
          _a2 = -1073741637;
          v27 = 23;
          goto LABEL_63;
        }
        if ( Configuration->SpinLock )
        {
          v27 = 24;
          goto LABEL_62;
        }
      }
      else
      {
        if ( Configuration->WaitLock )
        {
          v27 = 21;
          goto LABEL_62;
        }
        if ( CanWakeDevice )
        {
          v27 = 22;
          goto LABEL_62;
        }
      }
      if ( m_Globals->FxVerifierOn && InterruptRaw )
      {
        result = FxPkgPnp::ValidateInterruptResourceCm(v21->m_PkgPnp, InterruptRaw, InterruptTranslated, Configuration);
        if ( result < 0 )
          return result;
        v21 = pDevice;
      }
      result = FxInterrupt::_CreateAndInit(m_Globals, v21, pParent, Attributes, Configuration, &pFxInterrupt);
      if ( result >= 0 )
      {
        if ( pFxInterrupt->m_ObjectSize )
          v29 = (unsigned __int64)pFxInterrupt ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v29 = 0LL;
        *v11 = (WDFINTERRUPT__ *)v29;
      }
    }
  }
  else
  {
    WPP_IFR_SF_DD(m_Globals, Size, 0xCu, 0xAu, WPP_FxInterruptApi_cpp_Traceguids, Size, v14);
    return -1073741820;
  }
  return result;
}
