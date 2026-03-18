/*
 * XREFs of ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C007C220
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z @ 0x1C0064370 (-FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z.c)
 *     ?FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z @ 0x1C00643E0 (-FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0084710 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 */

int __fastcall FxPkgPdo::Initialize(FxPkgPdo *this, WDFDEVICE_INIT *DeviceInit)
{
  int result; // eax
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // dl
  unsigned __int8 *v7; // r8
  unsigned __int64 _a2; // rbx
  FxString *DeviceID; // rax
  FxString *InstanceID; // rax
  FxString *ContainerID; // rax
  wchar_t *v12; // rax
  wchar_t *v13; // rax
  wchar_t *v14; // rax
  FxString *v15; // rdx
  size_t Length; // rbx
  FxString *v17; // rdx
  size_t v18; // rbx
  FxString *v19; // rdx
  size_t v20; // rbx
  unsigned __int8 Static; // al
  int v22; // r8d
  FxChildList *m_DeviceList; // rcx
  FxDeviceDescriptionEntry *DescriptionEntry; // rax
  void *Caller; // [rsp+58h] [rbp+0h]

  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result >= 0 )
  {
    v5 = FxCalculateTotalStringSize(&DeviceInit->Pdo.HardwareIDs, 0, 0LL);
    _a2 = FxCalculateTotalStringSize(&DeviceInit->Pdo.CompatibleIDs, v6, v7) + v5;
    DeviceID = DeviceInit->Pdo.DeviceID;
    if ( DeviceID )
      _a2 += (unsigned __int16)(DeviceID->m_UnicodeString.Length + 2);
    InstanceID = DeviceInit->Pdo.InstanceID;
    if ( InstanceID )
      _a2 += (unsigned __int16)(InstanceID->m_UnicodeString.Length + 2);
    ContainerID = DeviceInit->Pdo.ContainerID;
    if ( ContainerID )
      _a2 += (unsigned __int16)(ContainerID->m_UnicodeString.Length + 2);
    v12 = (wchar_t *)FxPoolAllocator(
                       this->m_Globals,
                       &this->m_Globals->FxPoolFrameworks,
                       1u,
                       _a2,
                       this->m_Globals->Tag,
                       Caller);
    this->m_IDsAllocation = v12;
    if ( v12 )
    {
      this->m_HardwareIDs = v12;
      v13 = FxCopyMultiSz(v12, &DeviceInit->Pdo.HardwareIDs);
      this->m_CompatibleIDs = v13;
      v14 = FxCopyMultiSz(v13, &DeviceInit->Pdo.CompatibleIDs);
      if ( DeviceInit->Pdo.DeviceID )
      {
        this->m_DeviceID = v14;
        v15 = DeviceInit->Pdo.DeviceID;
        Length = v15->m_UnicodeString.Length;
        memmove(v14, v15->m_UnicodeString.Buffer, Length);
        this->m_DeviceID[(unsigned __int64)(unsigned int)Length >> 1] = 0;
        v14 = (wchar_t *)((char *)this->m_DeviceID + Length + 2);
      }
      if ( DeviceInit->Pdo.InstanceID )
      {
        this->m_InstanceID = v14;
        v17 = DeviceInit->Pdo.InstanceID;
        v18 = v17->m_UnicodeString.Length;
        memmove(v14, v17->m_UnicodeString.Buffer, v18);
        this->m_InstanceID[(unsigned __int64)(unsigned int)v18 >> 1] = 0;
        v14 = (wchar_t *)((char *)this->m_InstanceID + v18 + 2);
      }
      if ( DeviceInit->Pdo.ContainerID )
      {
        this->m_ContainerID = v14;
        v19 = DeviceInit->Pdo.ContainerID;
        v20 = v19->m_UnicodeString.Length;
        memmove(v14, v19->m_UnicodeString.Buffer, v20);
        this->m_ContainerID[v20 >> 1] = 0;
      }
      Static = DeviceInit->Pdo.Static;
      this->m_Static = Static;
      if ( Static )
      {
        v22 = 332;
        m_DeviceList = *(FxChildList **)(*(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL) + 1616LL);
      }
      else
      {
        DescriptionEntry = DeviceInit->Pdo.DescriptionEntry;
        v22 = 338;
        this->m_Description = DescriptionEntry;
        m_DeviceList = DescriptionEntry->m_DeviceList;
      }
      this->m_OwningChildList = m_DeviceList;
      FxObject::AddRef(m_DeviceList, this, v22, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpdo.cpp");
      return 0;
    }
    else
    {
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxPkgPdo_cpp_Traceguids, DeviceInit, _a2, -1073741670);
      return -1073741670;
    }
  }
  return result;
}
