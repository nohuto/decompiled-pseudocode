/*
 * XREFs of ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0003764
 * Callers:
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C00035F8 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C000F5A8 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000F694 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C003BB88 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003C0F4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C003CDAC (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C003CFA8 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C003D234 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x1C003D568 (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C003D640 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C003D728 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000D650 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_ql @ 0x1C0030CA4 (WPP_IFR_SF_ql.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003BE6C (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 */

void __fastcall FxChildList::ProcessModificationsLocked(FxChildList *this, _LIST_ENTRY *FreeListHead)
{
  FxChildListState _a2; // r8d
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *p_m_ModificationListHead; // rsi
  _LIST_ENTRY *Flink; // rax
  unsigned __int8 v8; // r15
  _LIST_ENTRY *v9; // rdi
  _FX_DRIVER_GLOBALS *v10; // rcx
  const void *_a1; // rdx
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY **p_Blink; // rdi
  _FX_DRIVER_GLOBALS *v15; // rcx
  _FX_DRIVER_GLOBALS *v16; // rcx
  _FX_DRIVER_GLOBALS *v17; // rcx
  _LIST_ENTRY *v18; // r8
  const void *v19; // rdx
  _FX_DRIVER_GLOBALS *v20; // rcx
  _LIST_ENTRY *v21; // rax
  _LIST_ENTRY *v22; // rcx
  _LIST_ENTRY *v23; // rax
  _FX_DRIVER_GLOBALS *v24; // rcx
  _LIST_ENTRY *Blink; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v28; // rbx
  _FX_DRIVER_GLOBALS *v29; // rcx
  const void *v30; // rdx

  _a2 = this->m_State;
  if ( _a2 == ListUnlocked && !this->m_ScanCount )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x19u, WPP_FxChildList_cpp_Traceguids, _a1);
    }
    p_m_ModificationListHead = &this->m_ModificationListHead;
    Flink = this->m_ModificationListHead.Flink;
    if ( Flink != &this->m_ModificationListHead )
    {
      do
      {
        v12 = Flink->Flink;
        if ( LODWORD(Flink[1].Flink) == 3 )
          LODWORD(Flink[1].Flink) = 2;
        Flink = v12;
      }
      while ( v12 != p_m_ModificationListHead );
    }
    v8 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = p_m_ModificationListHead->Flink;
        if ( p_m_ModificationListHead->Flink == p_m_ModificationListHead )
        {
          if ( v8 )
          {
            if ( this->m_ScanCount || (SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device)) == 0LL )
            {
              this->m_InvalidationNeeded = 1;
            }
            else
            {
              this->m_InvalidationNeeded = 0;
              IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
            }
          }
          v10 = this->m_Globals;
          if ( v10->FxVerboseOn )
          {
            m_ObjectSize = this->m_ObjectSize;
            v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_ObjectSize )
              v28 = 0LL;
            WPP_IFR_SF_q(v10, 5u, 0xCu, 0x1Fu, WPP_FxChildList_cpp_Traceguids, v28);
          }
          return;
        }
        if ( v9->Blink != p_m_ModificationListHead )
          goto LABEL_45;
        v13 = v9->Flink;
        if ( v9->Flink->Blink != v9 )
          goto LABEL_45;
        p_m_ModificationListHead->Flink = v13;
        v13->Blink = p_m_ModificationListHead;
        v9->Blink = v9;
        v9->Flink = v9;
        p_Blink = &v9[-3].Blink;
        v15 = this->m_Globals;
        if ( v15->FxVerboseOn )
          WPP_IFR_SF_ql(v15, 5u, 0xCu, 0x1Au, WPP_FxChildList_cpp_Traceguids, p_Blink, *((_DWORD *)p_Blink + 14));
        if ( *((_DWORD *)p_Blink + 14) != 1 )
          break;
        *((_DWORD *)p_Blink + 4) = 1;
        v24 = this->m_Globals;
        if ( v24->FxVerboseOn )
          WPP_IFR_SF_q(v24, 5u, 0xCu, 0x1Eu, WPP_FxChildList_cpp_Traceguids, p_Blink);
        Blink = this->m_DescriptionListHead.Blink;
        if ( Blink->Flink != &this->m_DescriptionListHead )
LABEL_45:
          __fastfail(3u);
        *p_Blink = &this->m_DescriptionListHead;
        p_Blink[1] = Blink;
        Blink->Flink = (_LIST_ENTRY *)p_Blink;
        this->m_DescriptionListHead.Blink = (_LIST_ENTRY *)p_Blink;
        *((_DWORD *)p_Blink + 14) = 0;
LABEL_44:
        v8 = 1;
      }
      if ( *((_DWORD *)p_Blink + 14) == 2 )
      {
        *((_DWORD *)p_Blink + 14) = 0;
        v16 = this->m_Globals;
        if ( v16->FxVerboseOn )
          WPP_IFR_SF_ql(v16, 5u, 0xCu, 0x1Bu, WPP_FxChildList_cpp_Traceguids, p_Blink, *((_DWORD *)p_Blink + 4));
        if ( *((_DWORD *)p_Blink + 4) == 1 )
        {
          v20 = this->m_Globals;
          if ( v20->FxVerboseOn )
            WPP_IFR_SF_q(v20, 5u, 0xCu, 0x1Cu, WPP_FxChildList_cpp_Traceguids, p_Blink);
          v21 = *p_Blink;
          if ( (_LIST_ENTRY **)(*p_Blink)->Blink != p_Blink )
            goto LABEL_45;
          v22 = p_Blink[1];
          if ( (_LIST_ENTRY **)v22->Flink != p_Blink )
            goto LABEL_45;
          v22->Flink = v21;
          v21->Blink = v22;
          v23 = FreeListHead->Blink;
          if ( v23->Flink != FreeListHead )
            goto LABEL_45;
          *p_Blink = FreeListHead;
          p_Blink[1] = v23;
          v23->Flink = (_LIST_ENTRY *)p_Blink;
          FreeListHead->Blink = (_LIST_ENTRY *)p_Blink;
        }
        else if ( *((_DWORD *)p_Blink + 4) == 2 )
        {
          v17 = this->m_Globals;
          if ( v17->FxVerboseOn )
          {
            v18 = p_Blink[8];
            v19 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v18->Blink) )
              v19 = 0LL;
            WPP_IFR_SF_qq(v17, 5u, 0xCu, 0x1Du, WPP_FxChildList_cpp_Traceguids, v19, v18[9].Flink);
          }
          *((_DWORD *)p_Blink + 4) = 4;
          goto LABEL_44;
        }
      }
      else if ( *((_DWORD *)p_Blink + 14) == 4 )
      {
        v8 = FxChildList::CloneEntryLocked(this, FreeListHead, (FxDeviceDescriptionEntry *)p_Blink, 0);
      }
    }
  }
  v29 = this->m_Globals;
  if ( v29->FxVerboseOn )
  {
    v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v30 = 0LL;
    WPP_IFR_SF_qdd(v29, 5u, 0xCu, 0x18u, WPP_FxChildList_cpp_Traceguids, v30, _a2, this->m_ScanCount);
  }
}
