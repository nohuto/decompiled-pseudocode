/*
 * XREFs of ??0FxFileObjectInfo@@QEAA@XZ @ 0x1C008FEBC
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0090654 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 */

void __fastcall FxFileObjectInfo::FxFileObjectInfo(FxFileObjectInfo *this)
{
  this->EvtFileCreate.m_CallbackLock = 0LL;
  this->EvtFileCreate.Method = 0LL;
  this->EvtCxFileCreate.m_CallbackLock = 0LL;
  this->EvtCxFileCreate.Method = 0LL;
  this->EvtFileCleanup.m_CallbackLock = 0LL;
  this->EvtFileCleanup.Method = 0LL;
  this->EvtFileClose.m_CallbackLock = 0LL;
  this->EvtFileClose.Method = 0LL;
  this->FileObjectClass = WdfFileObjectInvalid;
  this->AutoForwardCleanupClose = WdfUseDefault;
  this->ClassExtension = 0;
  this->CxDeviceInfo = 0LL;
  this->ListEntry.Blink = (_LIST_ENTRY *)this;
  this->ListEntry.Flink = (_LIST_ENTRY *)this;
  memset(&this->Attributes, 0, sizeof(this->Attributes));
}
