/*
 * XREFs of ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0063B64
 * Callers:
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0063FC4 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0018C1C (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C005C364 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ??0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C005E79C (--0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall FxIoResList::BuildFromWdmList(FxIoResList *this, _IO_RESOURCE_DESCRIPTOR **WdmResourceList)
{
  unsigned int v2; // ebx
  int v5; // ebp
  unsigned int v6; // r12d
  _IO_RESOURCE_DESCRIPTOR *p_u; // rdi
  FxResourceIo *v8; // rax
  FxObject *v9; // rax
  FxObject *v10; // r14

  v2 = 0;
  v5 = 0;
  v6 = *(_DWORD *)&(*WdmResourceList)->Flags;
  p_u = (_IO_RESOURCE_DESCRIPTOR *)&(*WdmResourceList)->u;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = (FxResourceIo *)FxObjectHandleAlloc(
                             this->m_Globals,
                             ExDefaultNonPagedPoolType,
                             0xA8uLL,
                             0,
                             0LL,
                             0,
                             FxObjectTypeInternal);
      if ( v8 )
      {
        FxResourceIo::FxResourceIo(v8, this->m_Globals, p_u);
        v10 = v9;
      }
      else
      {
        v10 = 0LL;
      }
      if ( !v10 )
        break;
      FxObject::AssignParentObject(v10, this);
      if ( !(unsigned __int8)FxCollectionInternal::Add(&this->FxCollectionInternal, this->m_Globals, v10) )
        break;
      ++p_u;
      if ( ++v5 >= v6 )
        goto LABEL_8;
    }
    return (unsigned int)-1073741670;
  }
LABEL_8:
  if ( !(unsigned __int8)FxCollectionInternal::Add(
                           &this->m_OwningList->FxCollectionInternal,
                           this->m_OwningList->m_Globals,
                           this) )
    return (unsigned int)-1073741670;
  *WdmResourceList = p_u;
  return v2;
}
