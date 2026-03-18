/*
 * XREFs of ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C00736AC
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C006DDE0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0073DE0 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007612C (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007640C (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000A110 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C000D6C4 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C000DDFC (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C000E028 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0054F68 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_dqdd @ 0x1C0061614 (WPP_IFR_SF_dqdd.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0067D48 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C006EC64 (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00713C4 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C007217C (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1C0072FCC (-GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C007487C (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C0075088 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfig(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _FILE_OBJECT *Urb,
        _FX_URB_TYPE NumConfiguredInterfaces,
        unsigned __int8 *PipesAttributes_0)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  unsigned __int16 v8; // r15
  int v9; // ebx
  unsigned __int8 m_NumInterfaces; // si
  unsigned __int64 v11; // rbx
  FX_POOL_TRACKER *v12; // rax
  FX_POOL_TRACKER *v13; // r12
  __int64 m_ObjectSize; // rax
  const void *v15; // rdi
  unsigned __int8 v16; // dl
  _FILE_OBJECT *v17; // rbx
  void **p_SectionObjectPointer; // rsi
  void **v19; // r13
  unsigned int _a4; // eax
  unsigned __int8 v21; // dl
  unsigned __int16 v22; // dx
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // cx
  _QWORD *v25; // rax
  FxIoTarget **v26; // rbx
  __int64 v27; // rax
  FxUsbPipe *v28; // rax
  FxIoTarget *v29; // rax
  int v30; // eax
  size_t v31; // r15
  _URB *v32; // rax
  _URB *v33; // r13
  unsigned __int16 v34; // r9
  unsigned __int16 v35; // r9
  USBD_HANDLE__ *m_USBDHandle; // r9
  int v37; // eax
  FxUsbInterface *v38; // rax
  _LIST_ENTRY *v39; // r11
  unsigned __int8 v40; // al
  unsigned __int16 *v41; // r15
  unsigned __int16 *v42; // rsi
  FxUsbInterface *v43; // rax
  FxUsbInterface *v44; // r10
  __int64 v45; // rdx
  __int64 v46; // rcx
  FX_POOL_TRACKER *v47; // rdi
  __int64 v48; // r14
  FX_POOL_TRACKER *Flink; // rcx
  unsigned int i; // esi
  __int64 v51; // r9
  unsigned __int8 v53; // [rsp+58h] [rbp-B0h]
  unsigned int v54; // [rsp+5Ch] [rbp-ACh]
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+70h] [rbp-98h]
  _QWORD *v57; // [rsp+78h] [rbp-90h]
  _FX_DRIVER_GLOBALS *InterfaceFromNumber; // [rsp+80h] [rbp-88h]
  _URB *v59; // [rsp+88h] [rbp-80h]
  FxSyncRequest request; // [rsp+90h] [rbp-78h] BYREF
  void *Caller; // [rsp+210h] [rbp+108h]
  unsigned __int8 v62; // [rsp+218h] [rbp+110h]
  FxUsbInterface *v63; // [rsp+218h] [rbp+110h]
  unsigned __int8 v66; // [rsp+230h] [rbp+128h]
  unsigned __int8 v67; // [rsp+230h] [rbp+128h]

  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  request.__vftable = (FxSyncRequest_vtbl *)m_Globals;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, m_Globals, 0LL, 0LL);
  v59 = 0LL;
  v8 = 0;
  if ( PipesAttributes_0 )
    *PipesAttributes_0 = 0;
  v9 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, (unsigned __int64)this);
  if ( v9 >= 0 )
  {
    m_NumInterfaces = this->m_NumInterfaces;
    v53 = m_NumInterfaces;
    if ( m_NumInterfaces )
    {
      v11 = 16LL * m_NumInterfaces;
    }
    else
    {
      v53 = 1;
      v11 = 16LL;
    }
    v12 = (FX_POOL_TRACKER *)FxPoolAllocator(
                               m_Globals,
                               &m_Globals->FxPoolFrameworks,
                               ExDefaultNonPagedPoolType,
                               v11,
                               m_Globals->Tag,
                               Caller);
    v13 = v12;
    if ( !v12 )
    {
      v9 = -1073741670;
      m_ObjectSize = this->m_ObjectSize;
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qL(*p_m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbDevice_cpp_Traceguids, v15, 0xC000009A);
      goto LABEL_72;
    }
    memset(v12, 0, v11);
    v17 = Urb;
    v66 = 0;
    p_SectionObjectPointer = (void **)&Urb->SectionObjectPointer;
    v19 = (void **)&Urb->SectionObjectPointer;
    options.Timeout = (__int64)Urb + (unsigned __int16)Urb->Type;
    if ( (unsigned __int64)&Urb->SectionObjectPointer < options.Timeout )
    {
      while ( 1 )
      {
        _a4 = *((_DWORD *)v19 + 4);
        if ( _a4 > 0xFF )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dqdd(*p_m_Globals, v16, 0xEu, 0x16u, WPP_FxUsbDevice_cpp_Traceguids, 255, v19, _a4, -1073741808);
          goto LABEL_62;
        }
        InterfaceFromNumber = (_FX_DRIVER_GLOBALS *)FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v19 + 2));
        if ( !InterfaceFromNumber )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dd(*p_m_Globals, 2u, 0xEu, 0x17u, WPP_FxUsbDevice_cpp_Traceguids, v21, -1073741808);
          goto LABEL_62;
        }
        v22 = *((unsigned __int8 *)v19 + 16);
        v23 = v22;
        v62 = *((_BYTE *)v19 + 16);
        if ( v22 <= v8 )
          v23 = v8;
        v24 = 8 * v22;
        v8 = v23;
        if ( !(_BYTE)v22 )
          v24 = 8;
        *(_QWORD *)&options.Size = v24;
        v25 = FxPoolAllocator(
                (_FX_DRIVER_GLOBALS *)request.__vftable,
                (FX_POOL *)&request.__vftable[1].QueryInterface,
                ExDefaultNonPagedPoolType,
                v24,
                HIDWORD(request.__vftable[1].SelfDestruct),
                Caller);
        v57 = v25;
        v26 = (FxIoTarget **)v25;
        if ( !v25 )
        {
          v9 = -1073741670;
          WPP_IFR_SF_dd(
            *p_m_Globals,
            2u,
            0xEu,
            0x18u,
            WPP_FxUsbDevice_cpp_Traceguids,
            *((unsigned __int8 *)v19 + 2),
            -1073741670);
          goto LABEL_62;
        }
        memset(v25, 0, *(size_t *)&options.Size);
        v27 = 2LL * v66;
        v54 = 0;
        *((_QWORD *)&v13->Link.Flink + v27) = v26;
        *((_DWORD *)&v13->Link.Blink + 2 * v27) = v62;
        if ( v62 )
          break;
LABEL_27:
        if ( InterfaceFromNumber->FxPoolFrameworks.NonPagedHead.Blink )
          FxUsbDevice::CleanupInterfacePipesAndDelete(this, InterfaceFromNumber);
        ++v66;
        v19 = (void **)((char *)v19 + *(unsigned __int16 *)v19);
        if ( (unsigned __int64)v19 >= options.Timeout )
        {
          v17 = Urb;
          goto LABEL_31;
        }
      }
      while ( 1 )
      {
        v28 = (FxUsbPipe *)FxObjectHandleAlloc(
                             *p_m_Globals,
                             ExDefaultNonPagedPoolType,
                             0x1B0uLL,
                             0,
                             PipesAttributes,
                             0,
                             FxObjectTypeExternal);
        if ( v28 )
          FxUsbPipe::FxUsbPipe(v28, *p_m_Globals, this);
        else
          v29 = 0LL;
        *(_QWORD *)&options.Size = v29;
        *v26 = v29;
        if ( !v29 )
          break;
        v30 = FxIoTarget::Init(v29, this->m_DeviceBase);
        v9 = v30;
        if ( v30 < 0 )
        {
          v35 = 26;
          goto LABEL_37;
        }
        v30 = FxObject::Commit(
                *(FxObject **)&options.Size,
                (_FX_DRIVER_GLOBALS *)PipesAttributes,
                0LL,
                (FxObject *)InterfaceFromNumber,
                1u);
        v9 = v30;
        if ( v30 < 0 )
        {
          v35 = 27;
LABEL_37:
          WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, v35, WPP_FxUsbDevice_cpp_Traceguids, v30);
          goto LABEL_62;
        }
        v16 = v62;
        v26 = (FxIoTarget **)(v57 + 1);
        ++v54;
        ++v57;
        if ( v54 >= v62 )
          goto LABEL_27;
      }
      v9 = -1073741670;
      v34 = 25;
      goto LABEL_39;
    }
LABEL_31:
    if ( this->m_NumInterfaces > 1u && v8 )
    {
      v31 = (unsigned __int16)(24 * v8 + 56);
      v32 = (_URB *)FxPoolAllocator(
                      *p_m_Globals,
                      &(*p_m_Globals)->FxPoolFrameworks,
                      ExDefaultNonPagedPoolType,
                      (unsigned int)v31,
                      (*p_m_Globals)->Tag,
                      Caller);
      v33 = v32;
      if ( !v32 )
      {
        v9 = -1073741670;
        v34 = 28;
LABEL_39:
        WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, v34, WPP_FxUsbDevice_cpp_Traceguids, -1073741670);
LABEL_62:
        if ( v53 )
        {
          v47 = v13;
          v48 = v53;
          do
          {
            Flink = (FX_POOL_TRACKER *)v47->Link.Flink;
            if ( v47->Link.Flink )
            {
              for ( i = 0; i < LODWORD(v47->Link.Blink); ++i )
              {
                Flink = (FX_POOL_TRACKER *)v47->Link.Flink;
                if ( *((_QWORD *)&v47->Link.Flink->Flink + i) )
                {
                  FxObject::ClearEvtCallbacks(*((FxObject **)&v47->Link.Flink->Flink + i));
                  (*(void (**)(void))(*(_QWORD *)v51 + 48LL))();
                  *((_QWORD *)&v47->Link.Flink->Flink + i) = 0LL;
                  Flink = (FX_POOL_TRACKER *)v47->Link.Flink;
                }
              }
              FxPoolFree(Flink);
              v47->Link.Flink = 0LL;
              LODWORD(v47->Link.Blink) = 0;
            }
            v47 = (FX_POOL_TRACKER *)((char *)v47 + 16);
            --v48;
          }
          while ( v48 );
        }
        FxPoolFree(v13);
        goto LABEL_72;
      }
      memset(v32, 0, v31);
    }
    else
    {
      v33 = v59;
    }
    m_USBDHandle = this->m_USBDHandle;
    options.Timeout = 0x500000010LL;
    v56 = -20000000LL;
    FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v17, FxUrbTypeLegacy, m_USBDHandle);
    v37 = FxIoTarget::SubmitSync(
            this,
            *(FxRequestBase **)&request.m_ClearContextOnDestroy,
            (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
            0LL);
    v9 = v37;
    if ( v37 < 0 )
    {
      WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxUsbDevice_cpp_Traceguids, v37);
      goto $Done_48;
    }
    this->m_ConfigHandle = Urb->FsContext2;
    v38 = FxUsbDevice::GetInterfaceFromNumber(this, BYTE2(Urb->SectionObjectPointer));
    v38->m_NumberOfConfiguredPipes = Urb->FinalStatus;
    v38->m_ConfiguredPipes = (FxUsbPipe **)v13->Link.Flink;
    v13->Link.Flink = v39;
    LODWORD(v13->Link.Blink) = (_DWORD)v39;
    FxUsbInterface::SetInfo(v38, (_USBD_INTERFACE_INFORMATION *)p_SectionObjectPointer);
    v40 = 1;
    v67 = 1;
    if ( this->m_NumInterfaces > 1u )
    {
      v41 = (unsigned __int16 *)((char *)Urb + (unsigned __int16)Urb->Type);
      v42 = (unsigned __int16 *)((char *)p_SectionObjectPointer + *(unsigned __int16 *)p_SectionObjectPointer);
      if ( v42 < v41 )
      {
        while ( 1 )
        {
          v43 = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v42 + 2));
          v63 = v43;
          v44 = v43;
          if ( *((_DWORD *)v42 + 4) )
          {
            FxUsbInterface::FormatSelectSettingUrb(v43, v33, v42[8], *((_BYTE *)v42 + 3));
            IoReuseIrp(*(PIRP *)(*(_QWORD *)&request.m_ClearContextOnDestroy + 152LL), 0);
            FxRequestBase::ClearFieldsForReuse(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v45);
            FxFormatUsbRequest(
              *(FxRequestBase **)&request.m_ClearContextOnDestroy,
              (_FILE_OBJECT *)v33,
              FxUrbTypeLegacy,
              0LL);
            v9 = FxIoTarget::SubmitSync(
                   this,
                   *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                   (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                   0LL);
            if ( v9 < 0 )
            {
              WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Du, WPP_FxUsbDevice_cpp_Traceguids, v9);
              goto $Done_48;
            }
            memmove(
              v42,
              &v33->UrbGetIsochPipeTransferPathDelays.MaximumSendPathDelayInMilliSeconds,
              v33->UrbSelectInterface.Interface.Length);
            v44 = v63;
          }
          v46 = 2LL * v67;
          v44->m_NumberOfConfiguredPipes = *((_BYTE *)v42 + 16);
          v44->m_ConfiguredPipes = (FxUsbPipe **)*((_QWORD *)&v13->Link.Flink + 2 * v67);
          *((_QWORD *)&v13->Link.Flink + v46) = 0LL;
          *((_DWORD *)&v13->Link.Blink + 2 * v46) = 0;
          FxUsbInterface::SetInfo(v44, (_USBD_INTERFACE_INFORMATION *)v42);
          v42 = (unsigned __int16 *)((char *)v42 + *v42);
          v40 = ++v67;
          if ( v42 >= v41 )
            goto LABEL_57;
        }
      }
      v40 = 1;
    }
LABEL_57:
    if ( PipesAttributes_0 )
      *PipesAttributes_0 = v40;
$Done_48:
    if ( v33 )
      FxPoolFree((FX_POOL_TRACKER *)v33);
    goto LABEL_62;
  }
LABEL_72:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v9;
}
