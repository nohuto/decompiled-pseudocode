/*
 * XREFs of ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C00744F0
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C006C4D0 (imp_WdfUsbInterfaceSelectSetting.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C007486C (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C00749A0 (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000AA20 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C000CA14 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C000CE0C (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C000D038 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     WPP_IFR_SF_DDd @ 0x1C0030484 (WPP_IFR_SF_DDd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C00676B8 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C006E664 (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0070DE4 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C0071B9C (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C0074AA4 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 */

__int64 __fastcall FxUsbInterface::SelectSetting(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _URB *Urb)
{
  _URB *v3; // r12
  unsigned __int8 v5; // dl
  unsigned int v6; // edi
  int v7; // esi
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  FxUsbPipe **v10; // rax
  FxUsbPipe **v11; // r15
  unsigned __int8 v12; // r13
  FxUsbPipe *v13; // rax
  FxIoTarget *v14; // rax
  FxIoTarget *v15; // r12
  int v16; // eax
  FxObject **v17; // rbx
  __int64 v18; // rcx
  unsigned __int16 v20; // r9
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+40h] [rbp-C8h] BYREF
  _LIST_ENTRY pendHead; // [rsp+50h] [rbp-B8h] BYREF
  FxSyncRequest request; // [rsp+60h] [rbp-A8h] BYREF
  void *retaddr; // [rsp+1D0h] [rbp+C8h]

  v3 = Urb;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, this->m_Globals, 0LL, 0LL);
  v6 = 0;
  if ( !this->m_ConfiguredPipes || this->m_CurAlternateSetting != v3->UrbSelectInterface.Interface.AlternateSetting )
  {
    request.__vftable = (FxSyncRequest_vtbl *)&pendHead.Blink;
    pendHead.Blink = (_LIST_ENTRY *)&pendHead.Blink;
    if ( v3->UrbHeader.Length < 0x18u )
    {
      v6 = -1073741811;
      WPP_IFR_SF_DDd(
        this->m_Globals,
        v5,
        0xEu,
        0x10u,
        WPP_FxUsbInterface_cpp_Traceguids,
        v3->UrbHeader.Length,
        24,
        -1073741811);
      goto LABEL_32;
    }
    v7 = FxRequestBase::ValidateTarget(
           *(FxRequestBase **)&request.m_ClearContextOnDestroy,
           (unsigned __int64)this->m_UsbDevice);
    if ( v7 >= 0 )
    {
      LODWORD(v8) = ((unsigned int)v3->UrbSelectInterface.Interface.Length - 24) / 0x18;
      if ( (_BYTE)v8 )
        v9 = 8LL * (unsigned __int8)v8;
      else
        v9 = 8LL;
      v10 = (FxUsbPipe **)FxPoolAllocator(
                            this->m_Globals,
                            &this->m_Globals->FxPoolFrameworks,
                            ExDefaultNonPagedPoolType,
                            v9,
                            this->m_Globals->Tag,
                            retaddr);
      v11 = v10;
      if ( v10 )
      {
        memset(v10, 0, v9);
        v12 = 0;
        if ( (_BYTE)v8 )
        {
          while ( 1 )
          {
            v13 = (FxUsbPipe *)FxObjectHandleAlloc(
                                 this->m_Globals,
                                 ExDefaultNonPagedPoolType,
                                 0x1B0uLL,
                                 0,
                                 PipesAttributes,
                                 0,
                                 FxObjectTypeExternal);
            if ( v13 )
            {
              FxUsbPipe::FxUsbPipe(v13, this->m_Globals, this->m_UsbDevice);
              v15 = v14;
            }
            else
            {
              v15 = 0LL;
            }
            v11[v12] = (FxUsbPipe *)v15;
            if ( !v15 )
              break;
            v16 = FxIoTarget::Init(v15, this->m_UsbDevice->m_DeviceBase);
            v7 = v16;
            if ( v16 < 0 )
            {
              v20 = 19;
              goto LABEL_35;
            }
            v16 = FxObject::Commit(v15, (_FX_DRIVER_GLOBALS *)PipesAttributes, 0LL, this, 1u);
            v7 = v16;
            if ( v16 < 0 )
            {
              v20 = 20;
LABEL_35:
              WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v20, WPP_FxUsbInterface_cpp_Traceguids, v16);
              goto $Done_48;
            }
            if ( ++v12 >= (unsigned __int8)v8 )
            {
              v3 = Urb;
              goto LABEL_20;
            }
          }
          v7 = -1073741670;
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x12u, WPP_FxUsbInterface_cpp_Traceguids, -1073741670);
        }
        else
        {
LABEL_20:
          if ( this->m_ConfiguredPipes )
            FxUsbDevice::CleanupInterfacePipesAndDelete(this->m_UsbDevice, (_FX_DRIVER_GLOBALS *)this);
          options.Timeout = 0x500000010LL;
          pendHead.Flink = (_LIST_ENTRY *)-20000000LL;
          FxFormatUsbRequest(
            *(FxRequestBase **)&request.m_ClearContextOnDestroy,
            (_FILE_OBJECT *)v3,
            FxUrbTypeLegacy,
            0LL);
          v7 = FxIoTarget::SubmitSync(
                 this->m_UsbDevice,
                 *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                 (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                 0LL);
          if ( v7 >= 0 )
          {
            this->m_NumberOfConfiguredPipes = v8;
            this->m_ConfiguredPipes = v11;
            FxUsbInterface::SetInfo(this, &v3->UrbSelectInterface.Interface);
$Done_48:
            if ( v7 >= 0 )
              goto LABEL_31;
          }
        }
        if ( (_BYTE)v8 )
        {
          v17 = v11;
          v8 = (unsigned __int8)v8;
          do
          {
            if ( *v17 )
            {
              FxObject::ClearEvtCallbacks(*v17);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18);
            }
            ++v17;
            --v8;
          }
          while ( v8 );
        }
        FxPoolFree((FX_POOL_TRACKER *)v11);
      }
      else
      {
        v7 = -1073741670;
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxUsbInterface_cpp_Traceguids, -1073741670);
      }
    }
LABEL_31:
    v6 = v7;
  }
LABEL_32:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return v6;
}
