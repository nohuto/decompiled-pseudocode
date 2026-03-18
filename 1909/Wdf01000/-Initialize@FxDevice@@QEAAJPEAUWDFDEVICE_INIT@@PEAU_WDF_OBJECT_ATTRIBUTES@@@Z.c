/*
 * XREFs of ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00538E8
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0054614 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C000A040 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0017AA0 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ??0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0040AA0 (--0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C004EC70 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C00530A0 (-ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x1C00537AC (-FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C0053D20 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ??0FxPkgIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0076FE8 (--0FxPkgIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ??0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C007B2AC (--0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C0089BAC (-_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVF.c)
 *     ??0FxPkgGeneral@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C00919B8 (--0FxPkgGeneral@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 */

int __fastcall FxDevice::Initialize(
        FxDevice *this,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  char v6; // r15
  int result; // eax
  FxPackage *v8; // rax
  FxDefaultIrpHandler *v9; // rdi
  _WDF_OBJECT_ATTRIBUTES *p_m_RequestAttributes; // rcx
  unsigned __int64 ContextSize; // r13
  _LIST_ENTRY *i; // r14
  _LIST_ENTRY **v13; // rax
  _LIST_ENTRY **v14; // rdi
  _LIST_ENTRY *Blink; // rdx
  _WDF_OBJECT_ATTRIBUTES *v16; // rcx
  unsigned int v17; // r15d
  unsigned __int64 *p_m_RequestLookasideListElementSize; // rdi
  FxPkgGeneral *v19; // rax
  FxPkgGeneral *v20; // rax
  FxWmiIrpHandler *v21; // rax
  unsigned __int16 v22; // r9
  FxWmiIrpHandler *v23; // rax
  FxPkgIo *v24; // rax
  FxPkgIo *v25; // rax
  void *retaddr; // [rsp+68h] [rbp+0h]
  char v27; // [rsp+70h] [rbp+8h]

  m_Globals = this->m_Globals;
  this->m_Exclusive = DeviceInit->Exclusive;
  this->m_ObjectFlags |= 0x800u;
  v6 = 0;
  result = FxDeviceBase::ConfigureConstraints(this, DeviceAttributes);
  if ( result >= 0 )
  {
    v8 = (FxPackage *)FxObjectHandleAlloc(
                        m_Globals,
                        ExDefaultNonPagedPoolType,
                        0x78uLL,
                        0,
                        0LL,
                        0,
                        FxObjectTypeInternal);
    v9 = (FxDefaultIrpHandler *)v8;
    if ( v8 )
    {
      FxPackage::FxPackage(v8, m_Globals, this, 0x1105u);
      v9->__vftable = (FxDefaultIrpHandler_vtbl *)FxDefaultIrpHandler::`vftable';
    }
    else
    {
      v9 = 0LL;
    }
    this->m_PkgDefault = v9;
    if ( v9 )
    {
      FxDevice::InstallPackage(this, v9);
      if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
        this->m_Legacy = 1;
      p_m_RequestAttributes = &this->m_RequestAttributes;
      if ( DeviceInit->RequestAttributes.Size )
      {
        *(_OWORD *)&p_m_RequestAttributes->Size = *(_OWORD *)&DeviceInit->RequestAttributes.Size;
        *(_OWORD *)&this->m_RequestAttributes.EvtDestroyCallback = *(_OWORD *)&DeviceInit->RequestAttributes.EvtDestroyCallback;
        *(_OWORD *)&this->m_RequestAttributes.ParentObject = *(_OWORD *)&DeviceInit->RequestAttributes.ParentObject;
        this->m_RequestAttributes.ContextTypeInfo = DeviceInit->RequestAttributes.ContextTypeInfo;
      }
      ContextSize = FxGetContextSize(p_m_RequestAttributes);
      for ( i = DeviceInit->CxDeviceInitListHead.Flink; i != &DeviceInit->CxDeviceInitListHead; i = i->Flink )
      {
        v13 = (_LIST_ENTRY **)FxPoolAllocator(
                                m_Globals,
                                &m_Globals->FxPoolFrameworks,
                                ExDefaultNonPagedPoolType,
                                0xB0uLL,
                                m_Globals->Tag,
                                retaddr);
        v14 = v13;
        if ( v13 )
        {
          v13[2] = 0LL;
          v13[3] = 0LL;
          *((_BYTE *)v13 + 88) = 0;
          v13[1] = (_LIST_ENTRY *)v13;
          *v13 = (_LIST_ENTRY *)v13;
          memset(v13 + 4, 0, 0x38uLL);
          memset(v14 + 12, 0, 0x50uLL);
        }
        else
        {
          v14 = 0LL;
        }
        if ( !v14 )
          return -1073741670;
        *((_BYTE *)v14 + 88) = ++v6;
        v27 = v6;
        v14[2] = i[1].Blink[4].Blink;
        v14[3] = i[2].Blink;
        *((_LIST_ENTRY *)v14 + 2) = i[3];
        *((_LIST_ENTRY *)v14 + 3) = i[4];
        *((_LIST_ENTRY *)v14 + 4) = i[5];
        v14[10] = i[6].Flink;
        Blink = this->m_CxDeviceInfoListHead.Blink;
        if ( Blink->Flink != &this->m_CxDeviceInfoListHead )
          __fastfail(3u);
        *v14 = &this->m_CxDeviceInfoListHead;
        v14[1] = Blink;
        Blink->Flink = (_LIST_ENTRY *)v14;
        this->m_CxDeviceInfoListHead.Blink = (_LIST_ENTRY *)v14;
        i[26].Blink = (_LIST_ENTRY *)v14;
        if ( FxGetContextSize((_WDF_OBJECT_ATTRIBUTES *)&i[3]) > ContextSize )
          ContextSize = FxGetContextSize(v16);
        if ( LOBYTE(i[26].Flink) == 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            result = FxPrePostCallback::_InitializeContext(
                       this->m_Globals,
                       (WDFCXDEVICE_INIT *)i,
                       (FxCxPnpPowerCallbackContext **)&v14[v17 + 12],
                       (FxCxCallbackType)v17);
            if ( result < 0 )
              return result;
            if ( ++v17 >= 0xA )
            {
              v6 = v27;
              break;
            }
          }
        }
      }
      p_m_RequestLookasideListElementSize = &this->m_RequestLookasideListElementSize;
      result = FxCalculateObjectTotalSize2(
                 m_Globals,
                 0x168u,
                 0LL,
                 ContextSize,
                 &this->m_RequestLookasideListElementSize);
      if ( result < 0 )
        return result;
      result = FxPoolAddHeaderSize(
                 m_Globals,
                 *p_m_RequestLookasideListElementSize,
                 &this->m_RequestLookasideListElementSize);
      if ( result < 0 )
        return result;
      ExInitializeNPagedLookasideList(
        &this->m_RequestLookasideList,
        0LL,
        0LL,
        ExDefaultNonPagedPoolType,
        *p_m_RequestLookasideListElementSize,
        m_Globals->Tag,
        0);
      FxDevice::ConfigureAutoForwardCleanupClose(this, DeviceInit);
      v19 = (FxPkgGeneral *)FxObjectHandleAlloc(
                              m_Globals,
                              ExDefaultNonPagedPoolType,
                              0xC8uLL,
                              0,
                              0LL,
                              0,
                              FxObjectTypeInternal);
      if ( v19 )
        FxPkgGeneral::FxPkgGeneral(v19, m_Globals, this);
      else
        v20 = 0LL;
      this->m_PkgGeneral = v20;
      if ( v20 )
      {
        FxDevice::InstallPackage(this, v20);
        v21 = (FxWmiIrpHandler *)FxObjectHandleAlloc(
                                   m_Globals,
                                   ExDefaultNonPagedPoolType,
                                   0xD0uLL,
                                   0,
                                   0LL,
                                   0,
                                   FxObjectTypeInternal);
        if ( v21 )
          FxWmiIrpHandler::FxWmiIrpHandler(v21, m_Globals, this, v22);
        else
          v23 = 0LL;
        this->m_PkgWmi = v23;
        if ( v23 )
        {
          FxDevice::InstallPackage(this, v23);
          v24 = (FxPkgIo *)FxObjectHandleAlloc(
                             m_Globals,
                             ExDefaultNonPagedPoolType,
                             0x190uLL,
                             0,
                             0LL,
                             0,
                             FxObjectTypeInternal);
          if ( v24 )
            FxPkgIo::FxPkgIo(v24, m_Globals, this);
          else
            v25 = 0LL;
          this->m_PkgIo = v25;
          if ( v25 )
          {
            FxDevice::InstallPackage(this, v25);
            this->m_PkgIo->m_InCallerContextCallback.m_Method = DeviceInit->IoInCallerContextCallback;
            if ( DeviceInit->RequiresSelfIoTarget )
              this->m_SelfIoTargetNeeded = 1;
            return 0;
          }
        }
      }
    }
    return -1073741670;
  }
  return result;
}
