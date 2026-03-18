/*
 * XREFs of ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C0064AC8
 * Callers:
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C0064B04 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ??0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0071B8C (--0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00823CC (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C0082FC8 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ??0FxEventQueue@@QEAA@E@Z @ 0x1C008EDF4 (--0FxEventQueue@@QEAA@E@Z.c)
 *     ??0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C008F384 (--0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWaitLockInternal::FxWaitLockInternal(FxWaitLockInternal *this)
{
  this->m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_Event.m_DbgFlagIsInitialized = 1;
  this->m_OwningThread = 0LL;
}
