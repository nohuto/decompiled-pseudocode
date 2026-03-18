/*
 * XREFs of ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C005132C
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003C0F4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C0045478 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0057100 (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C0051484 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0051750 (-_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0064194 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall WDFDEVICE_INIT::~WDFDEVICE_INIT(WDFDEVICE_INIT *this)
{
  FxPnpStateCallback *PnpStateCallbacks; // rcx
  FxPowerStateCallback *PowerStateCallbacks; // rcx
  FxPowerPolicyStateCallback *PowerPolicyStateCallbacks; // rcx
  FxString *DeviceName; // rcx
  FxString *DeviceID; // rcx
  FxString *InstanceID; // rcx
  FxString *ContainerID; // rcx
  unsigned int v9; // edx
  FxString *Sddl; // rcx
  FxIrpPreprocessInfo *PreprocessInfo; // rcx
  _LIST_ENTRY *p_CxDeviceInitListHead; // rsi
  FX_POOL_TRACKER *Flink; // rdi
  _LIST_ENTRY *v14; // rax
  FxIrpPreprocessInfo *Size; // rcx

  PnpStateCallbacks = this->PnpPower.PnpStateCallbacks;
  if ( PnpStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)PnpStateCallbacks);
  PowerStateCallbacks = this->PnpPower.PowerStateCallbacks;
  if ( PowerStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)PowerStateCallbacks);
  PowerPolicyStateCallbacks = this->PnpPower.PowerPolicyStateCallbacks;
  if ( PowerPolicyStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)PowerPolicyStateCallbacks);
  DeviceName = this->DeviceName;
  if ( DeviceName )
    DeviceName->DeleteObject(DeviceName);
  DeviceID = this->Pdo.DeviceID;
  if ( DeviceID )
    DeviceID->DeleteObject(DeviceID);
  InstanceID = this->Pdo.InstanceID;
  if ( InstanceID )
    InstanceID->DeleteObject(InstanceID);
  ContainerID = this->Pdo.ContainerID;
  if ( ContainerID )
    ContainerID->DeleteObject(ContainerID);
  FxDeviceText::_CleanupList(&this->Pdo.DeviceText);
  Sddl = this->Security.Sddl;
  if ( Sddl )
    Sddl->DeleteObject(Sddl);
  PreprocessInfo = this->PreprocessInfo;
  if ( PreprocessInfo )
    FxIrpPreprocessInfo::`scalar deleting destructor'(PreprocessInfo, v9);
  p_CxDeviceInitListHead = &this->CxDeviceInitListHead;
  while ( 1 )
  {
    Flink = (FX_POOL_TRACKER *)p_CxDeviceInitListHead->Flink;
    if ( p_CxDeviceInitListHead->Flink == p_CxDeviceInitListHead )
      break;
    if ( Flink->Link.Blink != p_CxDeviceInitListHead
      || (v14 = Flink->Link.Flink, (FX_POOL_TRACKER *)Flink->Link.Flink->Blink != Flink) )
    {
      __fastfail(3u);
    }
    p_CxDeviceInitListHead->Flink = v14;
    v14->Blink = p_CxDeviceInitListHead;
    Flink->Link.Blink = &Flink->Link;
    Flink->Link.Flink = &Flink->Link;
    Size = (FxIrpPreprocessInfo *)Flink->Size;
    if ( Size )
      FxIrpPreprocessInfo::`scalar deleting destructor'(Size, v9);
    FxPoolFree(Flink);
  }
  FxCollectionInternal::Clear(&this->Pdo.CompatibleIDs);
  FxCollectionInternal::Clear(&this->Pdo.HardwareIDs);
}
