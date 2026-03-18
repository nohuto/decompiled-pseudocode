/*
 * XREFs of ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0084CF4
 * Callers:
 *     ?_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0086CB0 (-_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C000CA78 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000CE54 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C000E908 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00105C0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0012130 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0012C80 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0018120 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0030A24 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C003A1F0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0042574 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     WPP_IFR_SF_qqddd @ 0x1C005B89C (WPP_IFR_SF_qqddd.c)
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C007C4A0 (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C00837C0 (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1C00863B4 (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0086A08 (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C0086FE0 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     WPP_IFR_SF_DDDDDDD @ 0x1C0087178 (WPP_IFR_SF_DDDDDDD.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C008EBF4 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0095950 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpDeviceUsageNotification(FxPkgPnp *this, FxIrp *Irp)
{
  CCHAR m_DeviceObject; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v6; // esi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 Lock; // r13
  _DEVICE_USAGE_NOTIFICATION_TYPE _a5; // r14d
  unsigned __int8 v10; // al
  _DEVICE_OBJECT **v11; // r8
  int v12; // eax
  FxDeviceBase *m_DeviceBase; // r10
  const void *v14; // rdx
  unsigned int v15; // ebx
  FxDevice *m_Device; // rcx
  __int64 v17; // r8
  _IRP *v18; // rax
  FxDeviceBase *v19; // rdx
  __int64 m_ObjectSize; // rax
  const void *v21; // rdx
  _FX_DRIVER_GLOBALS *v22; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rax
  FxRelatedDevice *v24; // rbx
  FxRelatedDeviceList *v25; // rcx
  FxRelatedDevice *NextEntry; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  CCHAR StackSize; // bl
  bool v29; // cc
  _IRP *v30; // rax
  FxDeviceBase *v31; // rdx
  __int64 v32; // rax
  const void *v33; // rdx
  FxRelatedDeviceList *v34; // r12
  FxRelatedDevice *v35; // r13
  FxRelatedDevice *v36; // rax
  FxRelatedDevice *v37; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int32 v39; // eax
  __int64 v40; // r8
  _IO_STACK_LOCATION *v41; // rcx
  FxRelatedDevice *v42; // rax
  _WDF_SPECIAL_FILE_TYPE v43; // eax
  void (__fastcall *v44)(unsigned __int64, _QWORD, __int64); // r10
  __int64 v45; // r9
  unsigned __int64 v46; // r9
  bool v47; // zf
  __int64 v48; // r8
  _WDF_SPECIAL_FILE_TYPE v49; // eax
  __int64 (__fastcall *v50)(unsigned __int64, _QWORD, __int64); // r10
  __int64 v51; // r9
  unsigned __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // r8
  _IO_STACK_LOCATION *v55; // rcx
  unsigned int v56; // r9d
  FxRelatedDevice *v57; // rax
  FxPowerPolicyOwnerSettings *v58; // rcx
  _FX_DRIVER_GLOBALS *v59; // rcx
  _FX_DRIVER_GLOBALS *v60; // rcx
  unsigned int v61; // ebx
  const _GUID *traceGuid; // [rsp+20h] [rbp-59h]
  MxAutoWorkItem workItem; // [rsp+60h] [rbp-19h] BYREF
  FxRelatedDeviceList *v65; // [rsp+68h] [rbp-11h]
  FxAutoIrp relatedIrp; // [rsp+70h] [rbp-9h] BYREF
  FxAutoIrp parentIrp; // [rsp+78h] [rbp-1h] BYREF
  FxRelatedDevice *v68; // [rsp+80h] [rbp+7h]
  unsigned __int8 v69; // [rsp+E0h] [rbp+67h]
  char v70; // [rsp+E0h] [rbp+67h]
  MxDeviceObject dependentDevice; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int OldFlags; // [rsp+F0h] [rbp+77h]
  MxDeviceObject topOfParentStack; // [rsp+F8h] [rbp+7Fh] BYREF

  m_DeviceObject = 0;
  relatedIrp.m_Irp = 0LL;
  parentIrp.m_Irp = 0LL;
  topOfParentStack.m_DeviceObject = 0LL;
  workItem.m_WorkItem = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x3Eu, WPP_FxPkgPnp_cpp_Traceguids);
    m_Globals = this->m_Globals;
  }
  v6 = 0;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  _a5 = CurrentStackLocation->Parameters.UsageNotification.Type;
  v69 = Lock;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_DDDDDDD(
      m_Globals,
      this->m_SpecialSupport[3],
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[2],
      traceGuid,
      _a5,
      Lock,
      this->m_SpecialSupport[0],
      this->m_SpecialSupport[2],
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[3],
      this->m_SpecialSupport[5]);
  if ( (unsigned int)(_a5 - 1) <= 5 )
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
            0x41u,
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
            0x42u,
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
            WPP_IFR_SF_d(v22, 5u, 0xCu, 0x43u, WPP_FxPkgPnp_cpp_Traceguids, v6);
          FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, v15);
          goto LABEL_103;
        }
      }
      m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
      v65 = m_UsageDependentDeviceList;
      v24 = 0LL;
      if ( m_UsageDependentDeviceList )
      {
        FxTransactionedList::LockForEnum(m_UsageDependentDeviceList, this->m_Globals);
        while ( 1 )
        {
          v25 = this->m_UsageDependentDeviceList;
          LOBYTE(dependentDevice.m_DeviceObject) = m_DeviceObject;
          NextEntry = FxRelatedDeviceList::GetNextEntry(v25, v24);
          v24 = 0LL;
          v68 = NextEntry;
          if ( !NextEntry )
            break;
          AttachedDeviceReference = IoGetAttachedDeviceReference(NextEntry->m_DeviceObject);
          StackSize = AttachedDeviceReference->StackSize;
          ObfDereferenceObject(AttachedDeviceReference);
          m_DeviceObject = StackSize;
          v29 = StackSize <= SLOBYTE(dependentDevice.m_DeviceObject);
          v24 = v68;
          if ( v29 )
            m_DeviceObject = (CCHAR)dependentDevice.m_DeviceObject;
        }
      }
      else
      {
        v65 = 0LL;
      }
      if ( m_DeviceObject > 0 )
      {
        v30 = IoAllocateIrp(m_DeviceObject, 0);
        if ( !v30 )
        {
          v6 = -1073741670;
          v31 = this->m_DeviceBase;
          v32 = v31->m_ObjectSize;
          v33 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !(_WORD)v32 )
            v33 = 0LL;
          WPP_IFR_SF_qddd(
            this->m_Globals,
            (unsigned __int8)v33,
            0xCu,
            0x44u,
            WPP_FxPkgPnp_cpp_Traceguids,
            v33,
            _a5,
            Lock,
            -1073741670);
          v34 = v65;
          goto LABEL_97;
        }
        dependentDevice.m_DeviceObject = 0LL;
        v35 = 0LL;
        relatedIrp.m_Irp = v30;
        while ( 1 )
        {
          v36 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v35);
          v35 = v36;
          if ( !v36 )
            break;
          dependentDevice.m_DeviceObject = v36->m_DeviceObject;
          v6 = SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 0);
          if ( v6 < 0 )
          {
            while ( 1 )
            {
              v37 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v24);
              v24 = v37;
              if ( !v37 || v37 == v35 )
                break;
              dependentDevice.m_DeviceObject = v37->m_DeviceObject;
              SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u);
            }
            v24 = 0LL;
            break;
          }
        }
        Lock = v69;
      }
      if ( v6 < 0 )
      {
        v34 = v65;
LABEL_97:
        if ( v34 )
          FxTransactionedList::UnlockFromEnum(this->m_UsageDependentDeviceList, this->m_Globals);
        v59 = this->m_Globals;
        if ( v59->FxVerboseOn )
          WPP_IFR_SF_d(v59, 5u, 0xCu, 0x45u, WPP_FxPkgPnp_cpp_Traceguids, v6);
        goto LABEL_103;
      }
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      v70 = 0;
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
LABEL_53:
          if ( v6 < 0 )
            goto LABEL_66;
          if ( Lock )
          {
            if ( !this->m_HasPowerThread )
            {
              v39 = FxPkgPnp::_UsageToSpecialType(_a5) - 1;
              if ( !v39 || (unsigned int)(v39 - 1) < 2 )
              {
                v6 = this->QueryForPowerThread(this);
                if ( v6 >= 0 )
                  goto LABEL_72;
                if ( FxDevice::IsPdo(this->m_Device) )
                {
                  topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v40 + 224) + 144LL));
                  SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
                  ObfDereferenceObject(topOfParentStack.m_DeviceObject);
                }
                else
                {
                  v41 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
                  *(_OWORD *)&v41[-1].MajorFunction = *(_OWORD *)&v41->MajorFunction;
                  *(_OWORD *)&v41[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v41->Parameters.NotifyDirectoryEx.CompletionFilter;
                  *(_OWORD *)(&v41[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v41->Parameters.SetQuota + 6);
                  v41[-1].FileObject = v41->FileObject;
                  v41[-1].Control = 0;
                  Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
                  Irp->m_Irp->IoStatus.Status = 0;
                  FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
                }
                Irp->m_Irp->IoStatus.Status = v6;
              }
            }
          }
          if ( v6 < 0 )
          {
LABEL_66:
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, OldFlags);
            v34 = v65;
            if ( v65 )
            {
              for ( dependentDevice.m_DeviceObject = 0LL;
                    ;
                    SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u) )
              {
                v42 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v24);
                v24 = v42;
                if ( !v42 )
                  break;
                dependentDevice.m_DeviceObject = v42->m_DeviceObject;
              }
              v34 = v65;
            }
LABEL_94:
            if ( v70 )
              FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
            goto LABEL_97;
          }
LABEL_72:
          v34 = v65;
          if ( this->m_DeviceUsageNotification.m_Method )
          {
            v43 = FxPkgPnp::_UsageToSpecialType(_a5);
            v46 = v45 ^ 0xFFFFFFFFFFFFFFF8uLL;
            v47 = (_WORD)v48 == 0;
            LOBYTE(v48) = Lock;
            if ( v47 )
              v46 = 0LL;
            v44(v46, (unsigned int)v43, v48);
          }
          if ( this->m_DeviceUsageNotificationEx.m_Method )
          {
            v49 = FxPkgPnp::_UsageToSpecialType(_a5);
            v52 = v51 ^ 0xFFFFFFFFFFFFFFF8uLL;
            v47 = (_WORD)v53 == 0;
            LOBYTE(v53) = Lock;
            if ( v47 )
              v52 = 0LL;
            v6 = v50(v52, (unsigned int)v49, v53);
          }
          else
          {
            v6 = 0;
          }
          if ( v6 >= 0 )
          {
            FxPkgPnp::CommitUsageNotification(this, _a5, OldFlags);
            v58 = this->m_PowerPolicyMachine.m_Owner;
            if ( v58 && _a5 == DeviceUsageTypeDumpFile )
            {
              if ( Lock )
                FxPowerIdleMachine::PowerReferenceWorker(
                  &v58->m_PowerIdleMachine,
                  0,
                  FxPowerReferenceDefault,
                  0LL,
                  0,
                  0LL);
              else
                FxPowerIdleMachine::IoDecrement(&v58->m_PowerIdleMachine, 0LL, 0, 0LL);
            }
          }
          else
          {
            if ( FxDevice::IsPdo(this->m_Device) )
            {
              topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v54 + 224)
                                                                                               + 144LL));
              SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
              ObfDereferenceObject(topOfParentStack.m_DeviceObject);
            }
            else
            {
              v55 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v55[-1].MajorFunction = *(_OWORD *)&v55->MajorFunction;
              *(_OWORD *)&v55[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v55->Parameters.NotifyDirectoryEx.CompletionFilter;
              *(_OWORD *)(&v55[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v55->Parameters.SetQuota + 6);
              v55[-1].FileObject = v55->FileObject;
              v55[-1].Control = 0;
              Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
              Irp->m_Irp->IoStatus.Status = 0;
              FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
            }
            v56 = OldFlags;
            Irp->m_Irp->IoStatus.Status = v6;
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, v56);
            if ( v34 )
            {
              for ( dependentDevice.m_DeviceObject = 0LL;
                    ;
                    SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u) )
              {
                v57 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v24);
                v24 = v57;
                if ( !v57 )
                  break;
                dependentDevice.m_DeviceObject = v57->m_DeviceObject;
              }
            }
          }
          goto LABEL_94;
        }
        v70 = 1;
      }
      Irp->m_Irp->IoStatus.Status = v6;
      v6 = this->SendIrpSynchronously(this, Irp);
      goto LABEL_53;
    }
  }
  v60 = this->m_Globals;
  v6 = -1073741822;
  if ( v60->FxVerboseOn )
    WPP_IFR_SF_dd(v60, 5u, 0xCu, 0x40u, WPP_FxPkgPnp_cpp_Traceguids, _a5, -1073741822);
LABEL_103:
  v61 = FxPkgPnp::CompletePnpRequest(this, Irp, v6);
  MxWorkItem::Free(&workItem);
  if ( parentIrp.m_Irp )
    IoFreeIrp(parentIrp.m_Irp);
  if ( relatedIrp.m_Irp )
    IoFreeIrp(relatedIrp.m_Irp);
  return v61;
}
