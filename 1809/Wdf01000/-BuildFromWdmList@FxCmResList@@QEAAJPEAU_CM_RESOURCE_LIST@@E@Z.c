/*
 * XREFs of ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C00633FC
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C007DF74 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0086EF0 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0018BCC (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C005BF04 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C005E540 (--0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0063B4C (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

__int64 __fastcall FxCmResList::BuildFromWdmList(
        FxCmResList *this,
        _CM_RESOURCE_LIST *WdmResourceList,
        unsigned __int8 AccessFlags)
{
  FxCollectionInternal *v3; // r15
  unsigned int v7; // edi
  unsigned int Count; // r12d
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *PartialDescriptors; // r14
  unsigned int v10; // esi
  FxResourceCm *v11; // rax
  FxObject *v12; // rax
  FxObject *v13; // rbx

  v3 = &this->FxCollectionInternal;
  v7 = 0;
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  this->m_AccessFlags = AccessFlags;
  if ( WdmResourceList )
  {
    Count = WdmResourceList->List[0].PartialResourceList.Count;
    PartialDescriptors = WdmResourceList->List[0].PartialResourceList.PartialDescriptors;
    v10 = 0;
    if ( Count )
    {
      while ( 1 )
      {
        v11 = (FxResourceCm *)FxObjectHandleAlloc(
                                this->m_Globals,
                                ExDefaultNonPagedPoolType,
                                0x90uLL,
                                0,
                                0LL,
                                0,
                                FxObjectTypeInternal);
        if ( v11 )
        {
          FxResourceCm::FxResourceCm(v11, this->m_Globals, PartialDescriptors);
          v13 = v12;
        }
        else
        {
          v13 = 0LL;
        }
        if ( !v13 )
          break;
        FxObject::AssignParentObject(v13, this);
        if ( !(unsigned __int8)FxCollectionInternal::Add(v3, this->m_Globals, v13) )
          break;
        ++v10;
        ++PartialDescriptors;
        v7 = 0;
        if ( v10 >= Count )
          return v7;
      }
      FxCollectionInternal::Clear(v3);
      return (unsigned int)-1073741670;
    }
  }
  return v7;
}
