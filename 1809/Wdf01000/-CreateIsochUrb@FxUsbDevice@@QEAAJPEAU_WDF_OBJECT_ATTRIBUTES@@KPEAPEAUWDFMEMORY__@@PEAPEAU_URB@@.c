/*
 * XREFs of ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C00721B8
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateIsochUrb @ 0x1C006CDD0 (imp_WdfUsbTargetDeviceCreateIsochUrb.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000E4E4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x1C007176C (--0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C0072BC4 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     USBD_IsochUrbAllocate @ 0x1C0091C80 (USBD_IsochUrbAllocate.c)
 *     USBD_UrbFree @ 0x1C0092360 (USBD_UrbFree.c)
 */

__int64 __fastcall FxUsbDevice::CreateIsochUrb(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned int NumberOfIsochPackets,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  __int64 v10; // rdi
  int v11; // eax
  int _a1; // ebx
  _FX_DRIVER_GLOBALS *v13; // r14
  FxUsbUrb *v14; // r10
  __int64 v15; // rax
  _URB **v16; // r14
  FxObject *pParent; // [rsp+40h] [rbp-10h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR retaddr; // [rsp+78h] [rbp+28h]
  _URB *urbLocal; // [rsp+80h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  urbLocal = 0LL;
  v10 = 0LL;
  v11 = FxValidateObjectAttributesForParentHandle(m_Globals, Attributes, 0);
  _a1 = v11;
  if ( v11 < 0 )
  {
    if ( v11 != -1071644142 )
      goto $Done_45;
    v13 = this->m_Globals;
    pParent = this;
  }
  else
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    v13 = pParent->m_Globals;
    if ( !FxUsbDevice::IsObjectDisposedOnRemove(this, pParent) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x23u, WPP_FxUsbDevice_cpp_Traceguids);
      _a1 = -1073741811;
      goto LABEL_21;
    }
  }
  _a1 = FxValidateObjectAttributes(v13, Attributes, 0);
  if ( _a1 >= 0 )
  {
    if ( !UrbMemory )
      FxVerifierNullBugCheck(v13, retaddr);
    *UrbMemory = 0LL;
    _a1 = USBD_IsochUrbAllocate(this->m_USBDHandle, NumberOfIsochPackets, &urbLocal);
    if ( _a1 < 0 )
    {
      urbLocal = 0LL;
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x24u, WPP_FxUsbDevice_cpp_Traceguids, _a1);
      goto $Done_45;
    }
    v14 = (FxUsbUrb *)FxObjectHandleAlloc(
                        v13,
                        ExDefaultNonPagedPoolType,
                        0x88uLL,
                        0,
                        Attributes,
                        0,
                        FxObjectTypeExternal);
    if ( v14 )
    {
      FxUsbUrb::FxUsbUrb(v14, v13, this->m_USBDHandle, urbLocal, 12 * NumberOfIsochPackets + 152);
      v10 = v15;
    }
    if ( v10 )
    {
      urbLocal = 0LL;
      _a1 = FxObject::Commit((FxObject *)v10, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&hMemory, pParent, 1u);
      if ( _a1 < 0 )
      {
LABEL_19:
        if ( v10 )
        {
          FxObject::ClearEvtCallbacks((FxObject *)v10);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
        }
        goto LABEL_21;
      }
      v16 = Urb;
      *UrbMemory = hMemory;
      if ( v16 )
        *v16 = (_URB *)(**(__int64 (__fastcall ***)(__int64))(v10 + 104))(v10 + 104);
$Done_45:
      if ( _a1 >= 0 )
        return (unsigned int)_a1;
      goto LABEL_19;
    }
    _a1 = -1073741670;
  }
LABEL_21:
  if ( urbLocal )
    USBD_UrbFree(this->m_USBDHandle, urbLocal);
  return (unsigned int)_a1;
}
