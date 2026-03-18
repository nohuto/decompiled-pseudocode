/*
 * XREFs of ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00552E8
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C004D2A0 (imp_WdfDriverCreate.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000E938 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004E708 (--0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDriver::FxDriver(
        FxDriver *this,
        _DRIVER_OBJECT *ArgDriverObject,
        _WDF_DRIVER_CONFIG *DriverConfig,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  size_t Size; // rbx

  FxNonPagedObject::FxNonPagedObject(this, 0x1001u, 0x168u, FxDriverGlobals);
  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)FxDriver::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDriver::`vftable'{for `IFxHasCallbacks'};
  this->m_DriverObject.m_DriverObject = ArgDriverObject;
  this->m_DriverDeviceAdd.m_CallbackLock = 0LL;
  this->m_DriverDeviceAdd.Method = 0LL;
  FxCallbackMutexLock::FxCallbackMutexLock(&this->m_CallbackMutexLock, FxDriverGlobals);
  this->m_DriverUnload.Method = 0LL;
  RtlInitUnicodeString(&this->m_RegistryPath, 0LL);
  this->m_CallbackLockPtr = 0LL;
  this->m_CallbackLockObjectPtr = 0LL;
  Size = 32LL;
  this->m_DisposeList = 0LL;
  this->m_ExecutionLevel = WdfExecutionLevelDispatch;
  this->m_SynchronizationScope = WdfSynchronizationScopeNone;
  memset(&this->m_Config, 0, sizeof(this->m_Config));
  this->m_Config.EvtDriverDeviceAdd = 0LL;
  this->m_Config.Size = 32;
  if ( DriverConfig->Size <= 0x20 )
    Size = DriverConfig->Size;
  memmove(&this->m_Config, DriverConfig, Size);
  this->m_DebuggerConnected = 0;
}
