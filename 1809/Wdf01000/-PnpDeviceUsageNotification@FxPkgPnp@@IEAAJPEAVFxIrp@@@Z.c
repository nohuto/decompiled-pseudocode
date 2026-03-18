/*
 * XREFs of ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0083C64
 * Callers:
 *     ?_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0085BF0 (-_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C000C2E8 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000FFD0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0011C80 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0012670 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0013B08 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C003AE50 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00433A4 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C00562B8 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqddd @ 0x1C005B468 (WPP_IFR_SF_qqddd.c)
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C007BAC0 (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C0082A04 (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0082B00 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1C0085318 (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0085980 (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C0085F20 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     WPP_IFR_SF_DDDDDD @ 0x1C0086088 (WPP_IFR_SF_DDDDDD.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C008D454 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0093640 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpDeviceUsageNotification(FxPkgPnp *this, FxIrp *Irp)
{
  FxRelatedDevice *v2; // r13
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  int v6; // esi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 Lock; // bl
  _DEVICE_USAGE_NOTIFICATION_TYPE _a5; // r14d
  unsigned __int8 v10; // al
  _DEVICE_OBJECT **v11; // r8
  int v12; // eax
  FxDeviceBase *m_DeviceBase; // r10
  const void *v14; // rdx
  unsigned int v15; // r12d
  FxDevice *m_Device; // rcx
  __int64 v17; // r8
  _IRP *v18; // rax
  FxDeviceBase *v19; // rdx
  __int64 m_ObjectSize; // rax
  const void *v21; // rdx
  _FX_DRIVER_GLOBALS *v22; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rax
  CCHAR m_DeviceObject; // r12
  FxRelatedDeviceList *v25; // rcx
  FxRelatedDevice *NextEntry; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  char StackSize; // bl
  _IRP *v29; // rax
  FxDeviceBase *v30; // rdx
  __int64 v31; // rax
  const void *v32; // rdx
  FxRelatedDeviceList *v33; // r12
  FxRelatedDevice *v34; // rax
  FxRelatedDevice *v35; // rbx
  FxRelatedDevice *v36; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int64 v38; // r8
  _IO_STACK_LOCATION *v39; // rcx
  FxRelatedDevice *v40; // rax
  _WDF_SPECIAL_FILE_TYPE v41; // eax
  void (__fastcall *v42)(unsigned __int64, _QWORD, __int64); // r10
  __int64 v43; // r9
  unsigned __int64 v44; // r9
  bool v45; // zf
  __int64 v46; // r8
  _WDF_SPECIAL_FILE_TYPE v47; // eax
  __int64 (__fastcall *v48)(unsigned __int64, _QWORD, __int64); // r10
  __int64 v49; // r9
  unsigned __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // r8
  _IO_STACK_LOCATION *v53; // rcx
  unsigned int v54; // r9d
  FxRelatedDevice *v55; // rbx
  FxRelatedDevice *v56; // rax
  FxPowerPolicyOwnerSettings *v57; // rcx
  _FX_DRIVER_GLOBALS *v58; // rcx
  _FX_DRIVER_GLOBALS *v59; // rcx
  unsigned int v60; // ebx
  const _GUID *traceGuid; // [rsp+20h] [rbp-49h]
  MxAutoWorkItem workItem; // [rsp+60h] [rbp-9h] BYREF
  FxRelatedDeviceList *v64; // [rsp+68h] [rbp-1h]
  FxAutoIrp relatedIrp; // [rsp+70h] [rbp+7h] BYREF
  FxAutoIrp parentIrp; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 v67; // [rsp+D0h] [rbp+67h]
  char v68; // [rsp+D0h] [rbp+67h]
  MxDeviceObject dependentDevice; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int OldFlags; // [rsp+E0h] [rbp+77h]
  MxDeviceObject topOfParentStack; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  relatedIrp.m_Irp = 0LL;
  parentIrp.m_Irp = 0LL;
  topOfParentStack.m_DeviceObject = 0LL;
  workItem.m_WorkItem = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x3Du, WPP_FxPkgPnp_cpp_Traceguids);
    m_Globals = this->m_Globals;
  }
  v6 = 0;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  _a5 = CurrentStackLocation->Parameters.UsageNotification.Type;
  v67 = Lock;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_DDDDDD(
      m_Globals,
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[2],
      this->m_SpecialSupport[0],
      traceGuid,
      _a5,
      Lock,
      this->m_SpecialSupport[0],
      this->m_SpecialSupport[2],
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[3]);
  if ( (unsigned int)(_a5 - 1) <= 3 )
  {
    if ( Lock )
    {
      if ( BYTE1(this->m_DeviceBase[1].m_Globals) )
        goto LABEL_11;
      v10 = this->m_SpecialSupport[_a5 - 1];
    }
    else
    {
      v10 = 1;
    }
    if ( v10 )
    {
LABEL_11:
      if ( !Mx::MxHasEnoughRemainingThreadStack()
        && (FxDevice::IsPdo(this->m_Device) || this->m_UsageDependentDeviceList) )
      {
        v12 = MxWorkItem::Allocate(&workItem, v11[18], v11);
        v6 = v12;
        if ( v12 < 0 )
        {
          m_DeviceBase = this->m_DeviceBase;
          v14 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_DeviceBase->m_ObjectSize )
            v14 = 0LL;
          WPP_IFR_SF_qqddd(
            this->m_Globals,
            (unsigned __int8)v14,
            0xCu,
            0x40u,
            WPP_FxPkgPnp_cpp_Traceguids,
            v14,
            m_DeviceBase->m_DeviceObject.m_DeviceObject,
            _a5,
            Lock,
            v12);
          goto LABEL_103;
        }
      }
      v15 = FxPkgPnp::SetUsageNotificationFlags(this, _a5, Lock);
      m_Device = this->m_Device;
      OldFlags = v15;
      if ( FxDevice::IsPdo(m_Device) )
      {
        topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v17 + 224) + 144LL));
        v18 = IoAllocateIrp(topOfParentStack.m_DeviceObject->StackSize, 0);
        if ( v18 )
        {
          parentIrp.m_Irp = v18;
          v6 = SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 0);
        }
        else
        {
          v6 = -1073741670;
          v19 = this->m_DeviceBase;
          m_ObjectSize = v19->m_ObjectSize;
          v21 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !(_WORD)m_ObjectSize )
            v21 = 0LL;
          WPP_IFR_SF_qqddd(
            this->m_Globals,
            (unsigned __int8)v21,
            0xCu,
            0x41u,
            WPP_FxPkgPnp_cpp_Traceguids,
            v21,
            topOfParentStack.m_DeviceObject,
            _a5,
            Lock,
            -1073741670);
        }
        ObfDereferenceObject(topOfParentStack.m_DeviceObject);
        topOfParentStack.m_DeviceObject = 0LL;
        if ( v6 < 0 )
        {
          v22 = this->m_Globals;
          if ( v22->FxVerboseOn )
            WPP_IFR_SF_d(v22, 5u, 0xCu, 0x42u, WPP_FxPkgPnp_cpp_Traceguids, v6);
          FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, v15);
          goto LABEL_103;
        }
      }
      m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
      m_DeviceObject = 0;
      v64 = m_UsageDependentDeviceList;
      if ( m_UsageDependentDeviceList )
      {
        FxTransactionedList::LockForEnum(m_UsageDependentDeviceList, this->m_Globals);
        while ( 1 )
        {
          v25 = this->m_UsageDependentDeviceList;
          LOBYTE(dependentDevice.m_DeviceObject) = m_DeviceObject;
          NextEntry = FxRelatedDeviceList::GetNextEntry(v25, v2);
          v2 = NextEntry;
          if ( !NextEntry )
            break;
          AttachedDeviceReference = IoGetAttachedDeviceReference(NextEntry->m_DeviceObject);
          StackSize = AttachedDeviceReference->StackSize;
          ObfDereferenceObject(AttachedDeviceReference);
          m_DeviceObject = StackSize;
          if ( StackSize <= SLOBYTE(dependentDevice.m_DeviceObject) )
            m_DeviceObject = (CCHAR)dependentDevice.m_DeviceObject;
        }
        Lock = v67;
        v2 = 0LL;
      }
      else
      {
        v64 = 0LL;
      }
      if ( m_DeviceObject > 0 )
      {
        v29 = IoAllocateIrp(m_DeviceObject, 0);
        if ( !v29 )
        {
          v6 = -1073741670;
          v30 = this->m_DeviceBase;
          v31 = v30->m_ObjectSize;
          v32 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !(_WORD)v31 )
            v32 = 0LL;
          WPP_IFR_SF_qddd(
            this->m_Globals,
            (unsigned __int8)v32,
            0xCu,
            0x43u,
            WPP_FxPkgPnp_cpp_Traceguids,
            v32,
            _a5,
            Lock,
            -1073741670);
          v33 = v64;
          goto LABEL_97;
        }
        dependentDevice.m_DeviceObject = 0LL;
        relatedIrp.m_Irp = v29;
        while ( 1 )
        {
          v34 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v2);
          v2 = v34;
          if ( !v34 )
            break;
          dependentDevice.m_DeviceObject = v34->m_DeviceObject;
          v6 = SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 0);
          if ( v6 < 0 )
          {
            v35 = 0LL;
            while ( 1 )
            {
              v36 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v35);
              v35 = v36;
              if ( !v36 || v36 == v2 )
                break;
              dependentDevice.m_DeviceObject = v36->m_DeviceObject;
              SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u);
            }
            Lock = v67;
            break;
          }
        }
        v2 = 0LL;
      }
      if ( v6 < 0 )
      {
        v33 = v64;
LABEL_97:
        if ( v33 )
          FxTransactionedList::UnlockFromEnum(this->m_UsageDependentDeviceList, this->m_Globals);
        v58 = this->m_Globals;
        if ( v58->FxVerboseOn )
          WPP_IFR_SF_d(v58, 5u, 0xCu, 0x44u, WPP_FxPkgPnp_cpp_Traceguids, v6);
        goto LABEL_103;
      }
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      v68 = 0;
      if ( m_Owner )
      {
        v6 = FxPowerIdleMachine::PowerReferenceWorker(
               &m_Owner->m_PowerIdleMachine,
               1u,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL);
        if ( v6 < 0 )
        {
          Irp->m_Irp->IoStatus.Status = v6;
LABEL_55:
          if ( v6 < 0 )
            goto LABEL_66;
          if ( Lock && !this->m_HasPowerThread && _a5 != DeviceUsageTypeBoot )
          {
            v6 = this->QueryForPowerThread(this);
            if ( v6 >= 0 )
              goto LABEL_72;
            if ( FxDevice::IsPdo(this->m_Device) )
            {
              topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v38 + 224)
                                                                                               + 144LL));
              SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
              ObfDereferenceObject(topOfParentStack.m_DeviceObject);
            }
            else
            {
              v39 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v39[-1].MajorFunction = *(_OWORD *)&v39->MajorFunction;
              *(_OWORD *)&v39[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v39->Parameters.NotifyDirectoryEx.CompletionFilter;
              *(_OWORD *)(&v39[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v39->Parameters.SetQuota + 6);
              v39[-1].FileObject = v39->FileObject;
              v39[-1].Control = 0;
              Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
              Irp->m_Irp->IoStatus.Status = 0;
              FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
            }
            Irp->m_Irp->IoStatus.Status = v6;
          }
          if ( v6 < 0 )
          {
LABEL_66:
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, OldFlags);
            v33 = v64;
            if ( v64 )
            {
              for ( dependentDevice.m_DeviceObject = 0LL;
                    ;
                    SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u) )
              {
                v40 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v2);
                v2 = v40;
                if ( !v40 )
                  break;
                dependentDevice.m_DeviceObject = v40->m_DeviceObject;
              }
              v33 = v64;
            }
LABEL_94:
            if ( v68 )
              FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
            goto LABEL_97;
          }
LABEL_72:
          v33 = v64;
          if ( this->m_DeviceUsageNotification.m_Method )
          {
            v41 = FxPkgPnp::_UsageToSpecialType(_a5);
            v44 = v43 ^ 0xFFFFFFFFFFFFFFF8uLL;
            v45 = (_WORD)v46 == 0;
            LOBYTE(v46) = Lock;
            if ( v45 )
              v44 = 0LL;
            v42(v44, (unsigned int)v41, v46);
          }
          if ( this->m_DeviceUsageNotificationEx.m_Method )
          {
            v47 = FxPkgPnp::_UsageToSpecialType(_a5);
            v50 = v49 ^ 0xFFFFFFFFFFFFFFF8uLL;
            v45 = (_WORD)v51 == 0;
            LOBYTE(v51) = Lock;
            if ( v45 )
              v50 = 0LL;
            v6 = v48(v50, (unsigned int)v47, v51);
          }
          else
          {
            v6 = 0;
          }
          if ( v6 >= 0 )
          {
            FxPkgPnp::CommitUsageNotification(this, _a5, OldFlags);
            v57 = this->m_PowerPolicyMachine.m_Owner;
            if ( v57 && _a5 == DeviceUsageTypeDumpFile )
            {
              if ( Lock )
                FxPowerIdleMachine::PowerReferenceWorker(
                  &v57->m_PowerIdleMachine,
                  0,
                  FxPowerReferenceDefault,
                  0LL,
                  0,
                  0LL);
              else
                FxPowerIdleMachine::IoDecrement(&v57->m_PowerIdleMachine, 0LL, 0, 0LL);
            }
          }
          else
          {
            if ( FxDevice::IsPdo(this->m_Device) )
            {
              topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v52 + 224)
                                                                                               + 144LL));
              SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
              ObfDereferenceObject(topOfParentStack.m_DeviceObject);
            }
            else
            {
              v53 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v53[-1].MajorFunction = *(_OWORD *)&v53->MajorFunction;
              *(_OWORD *)&v53[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v53->Parameters.NotifyDirectoryEx.CompletionFilter;
              *(_OWORD *)(&v53[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v53->Parameters.SetQuota + 6);
              v53[-1].FileObject = v53->FileObject;
              v53[-1].Control = 0;
              Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
              Irp->m_Irp->IoStatus.Status = 0;
              FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
            }
            v54 = OldFlags;
            Irp->m_Irp->IoStatus.Status = v6;
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, v54);
            v55 = 0LL;
            if ( v33 )
            {
              for ( dependentDevice.m_DeviceObject = 0LL;
                    ;
                    SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u) )
              {
                v56 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v55);
                v55 = v56;
                if ( !v56 )
                  break;
                dependentDevice.m_DeviceObject = v56->m_DeviceObject;
              }
            }
          }
          goto LABEL_94;
        }
        v68 = 1;
      }
      Irp->m_Irp->IoStatus.Status = v6;
      v6 = this->SendIrpSynchronously(this, Irp);
      goto LABEL_55;
    }
  }
  v59 = this->m_Globals;
  v6 = -1073741822;
  if ( v59->FxVerboseOn )
    WPP_IFR_SF_dd(v59, 5u, 0xCu, 0x3Fu, WPP_FxPkgPnp_cpp_Traceguids, _a5, -1073741822);
LABEL_103:
  v60 = FxPkgPnp::CompletePnpRequest(this, Irp, v6);
  MxWorkItem::Free(&workItem);
  if ( parentIrp.m_Irp )
    IoFreeIrp(parentIrp.m_Irp);
  if ( relatedIrp.m_Irp )
    IoFreeIrp(relatedIrp.m_Irp);
  return v60;
}
