/*
 * XREFs of ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003CE84
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000F704 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049A8 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049F8 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003D9AC (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C005190C (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0051A94 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C00523D8 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C00538C4 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 */

char __fastcall FxChildList::CreateDevice(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 *InvalidateRelations)
{
  char v6; // r14
  char v7; // al
  unsigned __int64 CreatedDevice; // rbx
  WDFCHILDLIST__ *v9; // rcx
  int _a1; // r15d
  unsigned __int64 *p_m_ListLock; // rcx
  KIRQL v12; // al
  _LIST_ENTRY *p_m_ModificationLink; // rdi
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  const void *v16; // r10
  KIRQL v17; // bl
  unsigned __int8 v18; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-C0h] BYREF
  WDFDEVICE_INIT init; // [rsp+50h] [rbp-B0h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this->m_DeviceBase->m_Driver);
  init.Characteristics |= 0x80u;
  v6 = 1;
  init.Pdo.Parent = this->m_Device;
  init.CreatedOnStack = 1;
  init.InitType = FxDeviceInitTypePdo;
  v7 = -init.Pdo.Parent->m_PowerPageableCapable;
  init.Pdo.DescriptionEntry = Entry;
  init.PowerPageable &= -(v7 != 0);
  if ( !this->m_StaticList )
  {
    v9 = (WDFCHILDLIST__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v9 = 0LL;
    _a1 = this->m_EvtCreateDevice.m_Method(v9, Entry->m_IdentificationDescription, &init);
    if ( _a1 == -1073741267 )
    {
      if ( init.CreatedDevice )
        FxDevice::Destroy((FxDevice *)init.CreatedDevice);
      *InvalidateRelations = 1;
    }
    else
    {
      CreatedDevice = (unsigned __int64)init.CreatedDevice;
      if ( _a1 >= 0 )
      {
        if ( !init.CreatedDevice )
        {
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x20u, WPP_FxChildList_cpp_Traceguids, _a1);
          FxVerifierDbgBreakPoint(this->m_Globals);
          CreatedDevice = (unsigned __int64)init.CreatedDevice;
          _a1 = -1073740951;
        }
        if ( _a1 >= 0 )
          goto LABEL_13;
      }
      p_m_ListLock = &this->m_ListLock;
      if ( CreatedDevice )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
        Entry->m_DescriptionState = DescriptionReportedMissing;
        if ( Entry->m_ModificationState )
        {
          p_m_ModificationLink = &Entry->m_ModificationLink;
          Flink = p_m_ModificationLink->Flink;
          if ( p_m_ModificationLink->Flink->Blink != p_m_ModificationLink
            || (Blink = p_m_ModificationLink->Blink, Blink->Flink != p_m_ModificationLink) )
          {
            __fastfail(3u);
          }
          Blink->Flink = Flink;
          Flink->Blink = Blink;
        }
        KeReleaseSpinLock(&this->m_ListLock, v12);
        v16 = (const void *)(CreatedDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*(_WORD *)(CreatedDevice + 10) )
          v16 = 0LL;
        WPP_IFR_SF_qid(
          this->m_Globals,
          2u,
          0xCu,
          0x21u,
          WPP_FxChildList_cpp_Traceguids,
          v16,
          *(_QWORD *)(CreatedDevice + 144),
          _a1);
        FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)CreatedDevice, _a1, 1u);
        init.CreatedDevice = 0LL;
      }
      else
      {
        freeHead.Blink = &freeHead;
        freeHead.Flink = &freeHead;
        v17 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
        FxChildList::MarkDescriptionNotPresentWorker(this, Entry, 1u);
        FxChildList::ProcessModificationsLocked(this, &freeHead);
        KeReleaseSpinLock(&this->m_ListLock, v17);
        FxChildList::DrainFreeListHead(this, &freeHead, v18);
      }
    }
    v6 = 0;
    goto LABEL_25;
  }
  CreatedDevice = *(_QWORD *)&Entry->m_IdentificationDescription[2].IdentificationDescriptionSize;
  init.CreatedDevice = (void *)CreatedDevice;
LABEL_13:
  Entry->m_Pdo = (FxDevice *)CreatedDevice;
  Entry->m_DescriptionState = DescriptionInstantiatedHasObject;
LABEL_25:
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
  return v6;
}
