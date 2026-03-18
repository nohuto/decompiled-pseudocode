/*
 * XREFs of ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C00730CC
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C006D7E0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0073800 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0075B48 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0075E28 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000AA20 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C000CA14 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C000CE0C (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C000D038 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0055548 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_dqdd @ 0x1C0061404 (WPP_IFR_SF_dqdd.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C00676B8 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C006E664 (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0070DE4 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C0071B9C (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1C00729EC (-GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C007429C (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C0074AA4 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
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
  _FILE_OBJECT *v16; // rbx
  void **p_SectionObjectPointer; // rsi
  void **v18; // r13
  unsigned int _a4; // r11d
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // r11
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // cx
  _QWORD *v24; // rax
  FxIoTarget **v25; // rbx
  __int64 v26; // rax
  FxUsbPipe *v27; // rax
  FxIoTarget *v28; // rax
  int v29; // eax
  size_t v30; // r15
  _URB *v31; // rax
  _URB *v32; // r13
  unsigned __int16 v33; // r9
  unsigned __int16 v34; // r9
  USBD_HANDLE__ *m_USBDHandle; // r9
  int v36; // eax
  FxUsbInterface *InterfaceFromNumber; // rax
  _LIST_ENTRY *v38; // r11
  unsigned __int8 v39; // al
  _USBD_INTERFACE_INFORMATION *v40; // r15
  _USBD_INTERFACE_INFORMATION *v41; // rsi
  FxUsbInterface *v42; // rax
  unsigned int NumberOfPipes; // ecx
  FxUsbInterface *v44; // r10
  __int64 v45; // rdx
  __int64 v46; // rcx
  FX_POOL_TRACKER *v47; // rdi
  __int64 v48; // r14
  FX_POOL_TRACKER *Flink; // rcx
  unsigned int i; // esi
  __int64 v51; // r9
  unsigned int v53; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v54; // [rsp+5Ch] [rbp-ACh]
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+70h] [rbp-98h]
  FxUsbInterface *v57; // [rsp+78h] [rbp-90h]
  _QWORD *v58; // [rsp+80h] [rbp-88h]
  FxObject *Parent; // [rsp+88h] [rbp-80h]
  FxSyncRequest request; // [rsp+90h] [rbp-78h] BYREF
  void *Caller; // [rsp+210h] [rbp+108h]
  unsigned __int8 v62; // [rsp+218h] [rbp+110h]
  unsigned __int8 v65; // [rsp+230h] [rbp+128h]
  unsigned __int8 v66; // [rsp+230h] [rbp+128h]

  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  options.Timeout = (__int64)m_Globals;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, m_Globals, 0LL, 0LL);
  request.__vftable = 0LL;
  v8 = 0;
  if ( PipesAttributes_0 )
    *PipesAttributes_0 = 0;
  v9 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, (unsigned __int64)this);
  if ( v9 >= 0 )
  {
    m_NumInterfaces = this->m_NumInterfaces;
    v62 = m_NumInterfaces;
    if ( m_NumInterfaces )
    {
      v11 = 16LL * m_NumInterfaces;
    }
    else
    {
      v62 = 1;
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
    v16 = Urb;
    v65 = 0;
    p_SectionObjectPointer = (void **)&Urb->SectionObjectPointer;
    v18 = (void **)&Urb->SectionObjectPointer;
    v57 = (FxUsbInterface *)((char *)Urb + (unsigned __int16)Urb->Type);
    if ( &Urb->SectionObjectPointer < (_SECTION_OBJECT_POINTERS **)v57 )
    {
      while ( 1 )
      {
        _a4 = *((_DWORD *)v18 + 4);
        v54 = _a4;
        if ( _a4 > 0xFF )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dqdd(*p_m_Globals, 0, 0xEu, 0x16u, WPP_FxUsbDevice_cpp_Traceguids, 255, v18, _a4, -1073741808);
          goto LABEL_62;
        }
        Parent = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v18 + 2));
        if ( !Parent )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dd(*p_m_Globals, 2u, 0xEu, 0x17u, WPP_FxUsbDevice_cpp_Traceguids, v20, -1073741808);
          goto LABEL_62;
        }
        v22 = v21;
        if ( v21 <= v8 )
          v22 = v8;
        v23 = 8 * v21;
        v8 = v22;
        if ( !v21 )
          v23 = 8;
        *(_QWORD *)&options.Size = v23;
        v24 = FxPoolAllocator(
                (_FX_DRIVER_GLOBALS *)options.Timeout,
                (FX_POOL *)(options.Timeout + 104),
                ExDefaultNonPagedPoolType,
                v23,
                *(_DWORD *)(options.Timeout + 68),
                Caller);
        v58 = v24;
        v25 = (FxIoTarget **)v24;
        if ( !v24 )
        {
          v9 = -1073741670;
          WPP_IFR_SF_dd(
            *p_m_Globals,
            2u,
            0xEu,
            0x18u,
            WPP_FxUsbDevice_cpp_Traceguids,
            *((unsigned __int8 *)v18 + 2),
            -1073741670);
          goto LABEL_62;
        }
        memset(v24, 0, *(size_t *)&options.Size);
        v26 = 2LL * v65;
        v53 = 0;
        *((_QWORD *)&v13->Link.Flink + v26) = v25;
        *((_DWORD *)&v13->Link.Blink + 2 * v26) = v54;
        if ( v54 )
          break;
LABEL_27:
        if ( *(_QWORD *)&Parent[1].m_ObjectFlags )
          FxUsbDevice::CleanupInterfacePipesAndDelete(this, (_FX_DRIVER_GLOBALS *)Parent);
        ++v65;
        v18 = (void **)((char *)v18 + *(unsigned __int16 *)v18);
        if ( v18 >= (void **)v57 )
        {
          v16 = Urb;
          goto LABEL_31;
        }
      }
      while ( 1 )
      {
        v27 = (FxUsbPipe *)FxObjectHandleAlloc(
                             *p_m_Globals,
                             ExDefaultNonPagedPoolType,
                             0x1B0uLL,
                             0,
                             PipesAttributes,
                             0,
                             FxObjectTypeExternal);
        if ( v27 )
          FxUsbPipe::FxUsbPipe(v27, *p_m_Globals, this);
        else
          v28 = 0LL;
        *(_QWORD *)&options.Size = v28;
        *v25 = v28;
        if ( !v28 )
          break;
        v29 = FxIoTarget::Init(v28, this->m_DeviceBase);
        v9 = v29;
        if ( v29 < 0 )
        {
          v34 = 26;
          goto LABEL_37;
        }
        v29 = FxObject::Commit(*(FxObject **)&options.Size, (_FX_DRIVER_GLOBALS *)PipesAttributes, 0LL, Parent, 1u);
        v9 = v29;
        if ( v29 < 0 )
        {
          v34 = 27;
LABEL_37:
          WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, v34, WPP_FxUsbDevice_cpp_Traceguids, v29);
          goto LABEL_62;
        }
        v25 = (FxIoTarget **)(v58 + 1);
        ++v53;
        ++v58;
        if ( v53 >= v54 )
          goto LABEL_27;
      }
      v9 = -1073741670;
      v33 = 25;
      goto LABEL_39;
    }
LABEL_31:
    if ( this->m_NumInterfaces > 1u && v8 )
    {
      v30 = (unsigned __int16)(24 * v8 + 56);
      v31 = (_URB *)FxPoolAllocator(
                      *p_m_Globals,
                      &(*p_m_Globals)->FxPoolFrameworks,
                      ExDefaultNonPagedPoolType,
                      (unsigned int)v30,
                      (*p_m_Globals)->Tag,
                      Caller);
      v32 = v31;
      if ( !v31 )
      {
        v9 = -1073741670;
        v33 = 28;
LABEL_39:
        WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, v33, WPP_FxUsbDevice_cpp_Traceguids, -1073741670);
LABEL_62:
        if ( v62 )
        {
          v47 = v13;
          v48 = v62;
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
      memset(v31, 0, v30);
    }
    else
    {
      v32 = (_URB *)request.__vftable;
    }
    m_USBDHandle = this->m_USBDHandle;
    options.Timeout = 0x500000010LL;
    v56 = -20000000LL;
    FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v16, FxUrbTypeLegacy, m_USBDHandle);
    v36 = FxIoTarget::SubmitSync(
            this,
            *(FxRequestBase **)&request.m_ClearContextOnDestroy,
            (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
            0LL);
    v9 = v36;
    if ( v36 < 0 )
    {
      WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxUsbDevice_cpp_Traceguids, v36);
      goto $Done_47;
    }
    this->m_ConfigHandle = Urb->FsContext2;
    InterfaceFromNumber = FxUsbDevice::GetInterfaceFromNumber(this, BYTE2(Urb->SectionObjectPointer));
    InterfaceFromNumber->m_NumberOfConfiguredPipes = Urb->FinalStatus;
    InterfaceFromNumber->m_ConfiguredPipes = (FxUsbPipe **)v13->Link.Flink;
    v13->Link.Flink = v38;
    LODWORD(v13->Link.Blink) = (_DWORD)v38;
    FxUsbInterface::SetInfo(InterfaceFromNumber, (_USBD_INTERFACE_INFORMATION *)p_SectionObjectPointer);
    v39 = 1;
    v66 = 1;
    if ( this->m_NumInterfaces > 1u )
    {
      v40 = (_USBD_INTERFACE_INFORMATION *)((char *)Urb + (unsigned __int16)Urb->Type);
      v41 = (_USBD_INTERFACE_INFORMATION *)((char *)p_SectionObjectPointer + *(unsigned __int16 *)p_SectionObjectPointer);
      if ( v41 < v40 )
      {
        while ( 1 )
        {
          v42 = FxUsbDevice::GetInterfaceFromNumber(this, v41->InterfaceNumber);
          NumberOfPipes = v41->NumberOfPipes;
          v44 = v42;
          v57 = v42;
          if ( NumberOfPipes )
          {
            FxUsbInterface::FormatSelectSettingUrb(v42, v32, NumberOfPipes, v41->AlternateSetting);
            IoReuseIrp(*(PIRP *)(*(_QWORD *)&request.m_ClearContextOnDestroy + 152LL), 0);
            FxRequestBase::ClearFieldsForReuse(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v45);
            FxFormatUsbRequest(
              *(FxRequestBase **)&request.m_ClearContextOnDestroy,
              (_FILE_OBJECT *)v32,
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
              goto $Done_47;
            }
            memmove(
              v41,
              &v32->UrbGetIsochPipeTransferPathDelays.MaximumSendPathDelayInMilliSeconds,
              v32->UrbSelectInterface.Interface.Length);
            LOBYTE(NumberOfPipes) = v41->NumberOfPipes;
            v44 = v57;
          }
          v44->m_NumberOfConfiguredPipes = NumberOfPipes;
          v46 = 2LL * v66;
          v44->m_ConfiguredPipes = (FxUsbPipe **)*((_QWORD *)&v13->Link.Flink + 2 * v66);
          *((_QWORD *)&v13->Link.Flink + v46) = 0LL;
          *((_DWORD *)&v13->Link.Blink + 2 * v46) = 0;
          FxUsbInterface::SetInfo(v44, v41);
          v41 = (_USBD_INTERFACE_INFORMATION *)((char *)v41 + v41->Length);
          v39 = ++v66;
          if ( v41 >= v40 )
            goto LABEL_57;
        }
      }
      v39 = 1;
    }
LABEL_57:
    if ( PipesAttributes_0 )
      *PipesAttributes_0 = v39;
$Done_47:
    if ( v32 )
      FxPoolFree((FX_POOL_TRACKER *)v32);
    goto LABEL_62;
  }
LABEL_72:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v9;
}
